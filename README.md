# CLox

An interpreter of the [Lox](https://github.com/munificent/craftinginterpreters) scripting language, implemented in C.

Lox is a tiny scripting language described in [Bob Nystrom](https://stuffwithstuff.com/)'s book [Crafting Interpreters](https://craftinginterpreters.com/). I've already written an tree-walk interpreter using TypeScript, called [TSLox](https://github.com/zlliang/tslox). This C version is a bytecode virtual machine, developed along with reading [Part III](https://craftinginterpreters.com/a-bytecode-virtual-machine.html) of the book.

## Usage

First build this project. Here we use CMake:

```bash
$ mkdir build && cd build  # Create a CMake workspace
$ cmake .. && make
$ ./clox  # Start CLox
```

Invoking `clox` without parameter starts the REPL. To run Lox source files, please specify the file path. Feel free to run examples in the `examples` directory:

```
$ ./clox ../examples/hello-world.lox
Hello, world!
```

## What's Next

By the end of 2021, I complete reading [Crafting Interpreters](https://craftinginterpreters.com/) and implement two interpreters of the Lox scripting language, in TypeScript and C respectively. I get some knowledge about creating programming languages, and it feels great! Next I may play with some toy languages, learn more optimization tricks and investigate different language features. Hope I can make some "real" production one day. ;)

## Resources

- Book: [Crafting Interpreters](https://craftinginterpreters.com/)
- Blog post: [Crafting "Crafting Interpreters"](http://journal.stuffwithstuff.com/2020/04/05/crafting-crafting-interpreters/)
- Wiki: [Lox implementations](https://github.com/munificent/craftinginterpreters/wiki/Lox-implementations)
