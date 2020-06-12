# simple example on how one can use c++ in a nodejs runtime

used node-adon-api and bindings

## cool findings

I wrote a simple isPrime function in javascript and in cpp. I then ran it in a loop 10 times. here is what I found. Run testing.bash to see the output on your computer
| usage      | time to complete (sec) |
| ---------- | ---------------------- |
| c++ and js | 16.11                  |
| js         | 26.1                   |
| only c++   | 19.25                  |