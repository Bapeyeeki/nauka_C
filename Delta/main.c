#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c,x1,x2 = 0.0;
	double delta = 0.0;
	
	printf("Podaj wspolczynnik a: \n");
	if(scanf("%lf", &a) != 1){
		printf("Blad: Wprowadzenie niepoprawne dane. \n");
		return 1;
	}
	
	printf("Podaj wspolczynnik b: \n");
	if(scanf("%lf", &b) != 1){
		printf("Blad: Wprowadzenie niepoprawne dane. \n");
		return 1;
	}
	
	printf("Podaj wspolczynnik c: \n");
	if(scanf("%lf", &c) !=1){
		printf("Blad: Wprowadzenie niepoprawne dane. \n");
		return 1;
	}
	
	if(a != 0){
		delta = (b*b) - (4*a*c);
		if(delta > 0){
			x1 = (-b - sqrt(delta)) / (2*a);
			x2 = (-b + sqrt(delta)) / (2*a);
			printf("Dwa rozwiazania:\n");
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
		}else if(delta == 0){
            x1 = -b / (2 * a);
            printf("Jedno rozwiazanie:\n");
            printf("x1 = x2 = %lf\n", x1);
        }
        else {
            printf("Delta jest ujemna (%.lf). Brak rozwiazan w zbiorze liczb rzeczywistych.\n", delta);
        }
	}else{
		printf("To nie jest funkcja kwadratowa.");
	}
	

	
	return 0;
}