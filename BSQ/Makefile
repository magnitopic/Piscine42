all: program

program: bsq.o check_map.o find_max.o ft_malloc.o functions.o
	gcc -Wall -Wextra -Werror *.c -o bsq bsq.o check_map.o find_max.o ft_malloc.o functions.o

bsq.c: bsq.c 
	gcc -c bsq.c

check_map.c: 
	gcc -c check_map.c

find_max.c: 
	gcc -c find_max.c

ft_malloc.c: 
	gcc -oc ft_malloc.c

functions.c: 
	gcc -c functions.c