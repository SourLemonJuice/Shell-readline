# Simple-Readline

Use GNU readline to get user input than output them to `stderr`.\
Try to replace the bash `read`, because that's too basic and also has problems when inputting wide characters.

## Build

Goto `source/` directory and run `make`, `clang` will help everyone equally

## Usage

Run `./simple-readline help` to get help

```text
Note: This program doesn't have any flags(for now)
Usage: simple-readline

The final user input will be printed to stderr, the readline interface will displayed on stdout.
In bash, use "simple-readline 2> >(cat -)" to provide stdin to another command.
Also can use "input=$(./simple-readline 1> $(tty))" to write input to a variable.

If any arguments are entered, this help message will be displayed.
```

## See also

- [source/test.sh](source/test.sh) in this repository
- [Bash manual: 3.5.6 Process Substitution](https://www.gnu.org/software/bash/manual/html_node/Process-Substitution.html)
- [StackOverflow: How to store standard error in a variable](https://stackoverflow.com/questions/962255/how-to-store-standard-error-in-a-variable)(Not very useful)
