#include <stdio.h>

char colors[][8] = {"\033[0;30m","\033[0;31m","\033[0;32m","\033[0;33m","\033[0;34m","\033[0;35m","\033[0;36m","\033[0;37m","\033[1;30m","\033[1;31m","\033[1;32m","\033[1;33m","\033[1;34m","\033[1;35m","\033[1;36m","\033[1;37m","\033[4;30m","\033[4;31m","\033[4;32m","\033[4;33m","\033[4;34m","\033[4;35m","\033[4;36m","\033[4;37m","\033[7;30m","\033[7;31m","\033[7;32m","\033[7;33m","\033[7;34m","\033[7;35m","\033[7;36m","\033[7;37m"};

void colorPrint(char text[], int mode) {
    printf("%s%s\033[0m", colors[mode], text); 
}