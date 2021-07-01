#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0;
	int matriz[3][3]={{100, 74, 99}, {11, 36, 68}, {23, 9, 81}};
	
	for (i=0; i<=3; i++)
		for(j=0; j<=3; j++){
		printf("%3i", matriz[i][j]);
		}
	

	
	
	return 0;
}
