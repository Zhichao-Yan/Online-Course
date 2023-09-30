Shell程序
: 特殊的交互式工具,核心是命令行提示符。它允许你输入文本命令，然后解释命令，并在内核中执行。

Shell脚本
: 多个shell命令放入文件中作为程序执行,这些文件被称作shell脚本

* Shell的发展渊源
    * Bourne shell：标准Unix shell
        * 自第七版以来UNIX的标配shell
        * 含了在其他shell中常见的许多特性：文件/管道/IO重定向/环境变量
    * C Shell(csh)
        * Bill Joy在伯克利开发的
        * 命名C shell原因：流控制语法和C语言相似
        * 提供了若干极为实用的交互式特性：命令历史记录/命令行编辑（不为Bourne shell所支持）
        * 所有BSD版本都提供这种shell
    * Korn Shell(ksh)
        * AT&T 贝尔实验室的David Korn编写
        * Bourne shell的“继任者”，与Bourne shell保持兼容
        * 吸收了C shell相似的交互特性
    * Bourne Again Shell(bash)
        * 提供了C shell和 Korn shel所类似的交互式特性
        * 由GNU项目开发，是对Bourne shell的重新实现，目标是替代Bourne shell
        * 目前是Linux发行版的默认shell

* Linux发行版shell
    * 一个Linux发行版往往包含了多个shell，但是使用一个默认的shell
    * 用户登录时会自动运行默认的用户shell程序（在/etc/passwd文件中）

* Shell类型
    * 系统按用途分类
        * 默认交互shell：用于交互命令 e.g. /bin/bash
        * 默认系统shell：启动时使用的系统shell脚本 /bin/sh
    * 按继承关系
        * 父shell进程
        * 子shell进程
            * 后台模式运行子shell `(sleep 2 ; echo $BASH_SUBSHELL ; sleep 2)&`
            * 协程：后台生成一个子shell，并在这个子shell中执行命令 `coproc sleep 10`
    * 按交互式
        * 登录shell：检查系统的/etc/environment、/etc/profile 检查用户目录的 ～/.profile文件
        * 交互式shell：命令行提示符下敲入bash时启动，只会检查读取用户HOME目录中的.bashrc文件
        * 非交互式shell：系统执行shell脚本时用的就是这种shell
            * Bash shell提供了BASH_ENV环境变量。当shell启动一个非交互式shell进程时，它会检查这个环境变量来查看要执行的启动文件
            * 如果BASH_ENV变量没有设置
                * 如果shell脚本是通过启动一个子shell，子shell可以继承父shell导出过的变量
                * 不启动子shell的脚本，变量已经存在于当前shell中，就算没有设置BASH_ENV，也可以使用当前shell的局部变量和全局变量
* Shell能解释命令
    * 外部命令：外部命令会衍生创建子进程，父进程为bash所在进程 e.g. ps
    `type ps`
    * 内建命令：不需要创建子进程，和shell一体,执行效率更高 e.g. cd/cp/rm
        * 内建的`history`
            * bash shell会跟踪你用过的命令,使用history可以追逐
            * !!可以执行上一条命令
            * 命令历史记录被保存在隐藏文件.bash_history中，先存放在内存中，当shell退出时才被写入到历史文件

* Shell环境变量
    * 用户定义环境变量：习惯使用小写，和系统默认环境变量的大写区分，避免覆盖
        * 局部环境变量：当前shell进程可用
            Shell命令执行 `my_variable=hello`
            * 只相当于给当前进程定义了一个变量，没有导入到进程的内存块中，无法被创建的子进程继承
        * 全局环境变量：父进程子进程都可以用，只限本次登录会话,窗口关闭（Shell进程退出）后无效
            Shell命令行执行`export mysql=/home/uusama/mysql/bin`立即生效
            * 子进程也可以访问，子进程修改该变量不影响父进程的读取，因为环境变量保存在进程的内存段argv-environment段中，创建子进程时会继承父进程，但是子进程修改的是自己的内存空间，父进程该段内存空间不受影响。
    * Shell自带的默认系统环境变量
        * 临时修改系统默认的环境变量：变量临时的修改只能持续到退出或重启系统，无法持续
            * `PATH=$PATH:/home/christine/Scripts`
        * 永久修改系统默认的环境变量：修改启动文件或环境文件，每次登录shell该环境变量都存在。不同发行版位置不同。当前为`ubuntu环境`
            * 修改系统基本环境变量文件
                * `/etc/environment` 属于可拆卸式认证模，bash shell启动之前处理
                * `/etc/profile` bash shell默认的的主启动文件，无论你使用啥shell登录系统，login shell都会执行此启动文件
                    * `/etc/profile`中默认会执行 交互式shell的环境变量文件`/etc/bash.bashrc`  
                    System-wide .bashrc file for interactive bash(1) shells
                    * `/etc/profile`中默认会执行`/etc/profile.d`目录的起点脚本
                * `/etc/bash.bashrc`交互式shell程序使用，如果login shell想要使用，必须被source到`/etc/profile`
            * 修改用户环境变量文件
                * `~/.bash_profile`
                * ` ~/.bash_login`
                * `~/.profile` 用户登录时执行，如果~`/.bash_profile or ~/.bash_login` 存在，那么就优先读取它们，忽略.profile文件
                * `~/.bashrc` 交互式shell环境变量，通常时被上面三个文件之一被执行后，在其中调用。
        * 环境变量加载顺序
        `$ENV_ORDER:/etc/environment:/etc/profile:/etc/bash.bashrc:/etc/profile.d/order.sh:~/.profile:~/.bashrc`
    * Best pracice：持久化修改环境变量的最佳实践
        * 系统级别: 在/etc/profile.d目录中创建一个以.sh结尾的文件。把所有新的或修改过的全局环境变量设置放在这个文件中。所有用户都可以使用
        * 用户级别：修改个人用户永久性bash shell变量的地方是$HOME/.bashrc文件
    * 常见的环境变量
        * $HOME
        明确定义了用户登录目录的路径名
        * $PATH
        指明了用户输入命令后，shell查找与之相应程序时所搜索的目录列表