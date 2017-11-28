Test for [test-mruby-wasm](https://github.com/noontage/test-mruby-wasm)

# How to use

1. Compile `./htdocs/hello.c` by `emcc` (ex. emcc hello.c -I path/to/mruby/include path/to/mruby/build/wasm/lib/libmruby.bc -s WASM=1 -o hello.html)
1. Install docker-compose
1. execute `docker-compose up -d --build`
1. Access `http://localhost:8080/hello.html` your browzer