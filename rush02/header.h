#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 
#define BUFFER_SIZE 2048

char	*ft_strstr(char *str, char *to_find);
char *cut_str(char *str);
int		gestion_rutas(int argc, char **argv, char **num, char **ruta);