#include "color.h"
#include <stdio.h>

int main(){
	printf("Normal Colors: \n\n");
	colorPrint("NORMAL\n", RED);
	colorPrint("NORMAL\n", GREEN);
	colorPrint("NORMAL\n", BLUE);
	colorPrint("NORMAL\n", YELLOW);
	colorPrint("NORMAL\n", MAGENTA);
	colorPrint("NORMAL\n", CYAN);
	colorPrint("NORMAL\n", WHITE);
	colorPrint("NORMAL\n", BLACK);

	printf("\n\nBold Colors: \n\n");
	colorPrint("BOLD\n", RED + BOLD);
	colorPrint("BOLD\n", GREEN + BOLD);
	colorPrint("BOLD\n", BLUE + BOLD);
	colorPrint("BOLD\n", YELLOW + BOLD);
	colorPrint("BOLD\n", MAGENTA + BOLD);
	colorPrint("BOLD\n", CYAN + BOLD);
	colorPrint("BOLD\n", WHITE + BOLD);
	colorPrint("BOLD\n", BLACK + BOLD);

	printf("\n\nUnderline Colors: \n\n");
	colorPrint("UNDERLINE\n", RED + UNDERLINE);
	colorPrint("UNDERLINE\n", GREEN + UNDERLINE);
	colorPrint("UNDERLINE\n", BLUE + UNDERLINE);
	colorPrint("UNDERLINE\n", YELLOW + UNDERLINE);
	colorPrint("UNDERLINE\n", MAGENTA + UNDERLINE);
	colorPrint("UNDERLINE\n", CYAN + UNDERLINE);
	colorPrint("UNDERLINE\n", WHITE + UNDERLINE);
	colorPrint("UNDERLINE\n", BLACK + UNDERLINE);

	printf("\n\nInverse Colors: \n\n");
	colorPrint("INVERSE\n", RED + INVERSE);
	colorPrint("INVERSE\n", GREEN + INVERSE);
	colorPrint("INVERSE\n", BLUE + INVERSE);
	colorPrint("INVERSE\n", YELLOW + INVERSE);
	colorPrint("INVERSE\n", MAGENTA + INVERSE);
	colorPrint("INVERSE\n", CYAN + INVERSE);
	colorPrint("INVERSE\n", WHITE + INVERSE);
	colorPrint("INVERSE\n", BLACK + INVERSE);
	return 0;
}
