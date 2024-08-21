clang_flag += -std=gnu17
clang_flag += -lreadline

default: simple-readline

simple-readline: main.c GNUmakefile
	clang main.c \
		--output simple-readline \
		${clang_flag}
