# 42cursus' Libft

This project consists of implementing functions from the C standard library, including a set of additional functions made for the 42 school curriculum.

## Usage

Clone this repository and run `make` in the root directory. This will compile the library and create a static library file called `libft.a`.

```sh
git clone https://github.com/martins-yuu/libft.git
cd libft
make
```

To use the library in a C project, include the header file `libft.h` in your source files and link the library file `libft.a` when compiling. For example:

```sh
cc -I./libft/include -L./libft main.c -lft -o main
```
