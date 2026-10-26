#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double liczba1;
	double liczba2;
	double wynik;
	char znak;
	
	printf("Podaj pierwsza liczbe: ");
	scanf("%lf", &liczba1);
	
	printf("Podaj operator dzialania (+ - * /): ");
	scanf(" %c", &znak);
	
	printf("Podaj druga liczbe: ");
	scanf("%lf", &liczba2);
	
	switch(znak) {
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            if (liczba2 != 0) { 
                wynik = liczba1 / liczba2;  
            } else {
                printf("Blad: Dzielenie przez zero!\n");
                return 1;
            }
            break;  
        default:
            printf("Nieznany operator!\n");
            return 1;
    }
	
	printf("Wynik dzialania: %.2f", wynik);
	return 0;
}