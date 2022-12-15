#include <stdio.h>
#include <math.h>

int main() {
/*Titolo*/
printf("Calcolatore inverso del teorema di Pitagora");
printf("\n");
printf("\n");
/*Lettura variabili*/
int I;
int c;
printf("Scrivi il valore dell'ipotenusa:");
scanf("%d",&I);
printf("Scrivi il valore del cateto:");
scanf("%d",&c);
/*Elevamento al quadrato*/
int sqI;
int sqc;
sqI=I*I;
sqc=c*c;
/*Calcolo cateto*/
int sqc2;
int c2;
sqc2=sqI-sqc;
c2=sqrt(sqc2);
/*Output*/
printf("Il cateto risulta %d\n", c2);
return 0;
}
