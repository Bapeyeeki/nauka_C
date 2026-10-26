#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double celciusze, kilometry;
	double fahrenheity = 0.0, mile = 0.0;
	int znak;
	printf("Przeliczanie celciuszy na Fahrenheity, Kilometry na mile\n");
	
	do{
		fflush(stdin);
		printf("Wybierz co chcesz policzy: 1 dla Stopnie Celsjusz na Fahrenheity, 2 dla Kilometry na mile\n");
		scanf("%d", &znak);
	}while((znak != 1) && (znak != 2));
	
	if(znak == 1){
		printf("Podaj wartosc celciuszy: \n");
		scanf("%lf", &celciusze);
		fahrenheity = celciusze * 1.8 + 32;
		printf("%lf", fahrenheity);
	}else{
		printf("Podaj wartosc kilometrow: \n");
		scanf("%lf", &celciusze);
		mile = kilometry/1.609;
		printf("%lf", mile);
	}
	return 0;
}