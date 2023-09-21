cmake_minimum_required(VERSION 3.23.2)

project(main)
aux_source_directory(. DIR_SRCS)
add_executable(fly ${DIR_SRCS})
