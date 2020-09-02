cmake_minimum_required (VERSION 2.8)

include_directories(/usr/local/Cellar/libsndfile/1.0.29pre2_1/include)
# include_directories(/Users/apple/Documents/Learning/研一课程/RIOS_Capstone/riscv-gnu-toolchain/riscv-gcc/libstdc++-v3/include/c)
project (demo)

add_executable(main main.c)
