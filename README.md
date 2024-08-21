# Simple-Readline

Use GNU readline to get user input than output them to `stdout`.\
Try to replace the bash `read`, because that's too basic and also has problems when inputting wide characters.

## Build

Goto `source/` directory and run `make`, `clang` will help everyone equally

## Usage

Run `./simple-readline help` to get help

```text
Note: This program doesn't have any flags(for now)
Usage: simple-readline

The final user input will be printed to stdout, the readline interface will displayed on stderr.
In bash, use "simple-readline | cat -" to provide stdin to another command.
Also can use "input=$(simple-readline)" to write input to a variable.
Bash's Command Substitution and Pipe only use stdout stream, remember this when writing script.

If any arguments are entered, this help message will be displayed.
```

## See also

- [An answer of StackOverflow: How to store standard error in a variable](https://stackoverflow.com/a/963857/25416550)
- [source/test.sh](source/test.sh) in this repository
- <https://www.gnu.org/software/bash/manual/html_node/Command-Substitution.html>
