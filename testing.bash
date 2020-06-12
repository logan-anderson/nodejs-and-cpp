# /bin/bash
printf "Running isPrime in CPP with nodejs runtime\n"
time node isPrime-cpp
printf "Running isPrime in JS\n"
time node isPrime-js

c++ src/isPrime/isPrime.cpp
printf "Running isPrime in CPP\n"
time ./a.out


