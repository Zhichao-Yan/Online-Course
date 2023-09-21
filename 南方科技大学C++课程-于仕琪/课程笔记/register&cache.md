1. register
2. cache
3. memory/RAM
4. disk

* how to measure
    * latency:how much time it takes to transfer data
    * bandwidth:how many bytes per second transfered

* huge gap between cache and memory
    * Latency
        * L1 cache 0.8ns
        * L2 cache 2.4ns
        * L3 cache 11ns
        * Memory-above 80ns or even higher
    * bandwidth
        * L1 cache 2.3TB/s
        * L3 cache 370GB/s
        * Memory 40GB/s


* Multi-cores CPU: like Intel® Core™ 17-3960X Processor Die Detail
    * Every core has private L1: Data L1D,Instruction L1l
    * Every core has private L2: Unified- Instuction cache and Data cache combined 
    * Shared L3 in CPU
* GPU(Navida A-100)
    * Register 
    * Readonly
    * L2 cache
    * Global memory

