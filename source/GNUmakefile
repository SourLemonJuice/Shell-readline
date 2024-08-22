clang_flag += -std=gnu17
clang_flag += -lreadline

exec_name := shell-readline

default: ${exec_name}

${exec_name}: main.c GNUmakefile
	clang main.c \
		--output ${exec_name} \
		${clang_flag}

clean:
	rm -i ./${exec_name}*
