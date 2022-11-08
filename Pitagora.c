/* Le righe contrassegbate da un commento vuoto sono le cose che ho dovuto cercare visto che il rpof non me le ha dette il day 0 di programmazione, ma ci sta, è il mio day 0... */
#include <stdio.h>
#include <math.h> /**/

int main() {
/* titolo */
   printf("Calcolatore di teorema di Pitagora");
   printf("\n");
   printf("\n");

/*variabili*/
   int C1;
   int C2;
   printf("Dimensioni cateto 1=");
   scanf("%d",&C1);
   printf("Dimensioni cateto 2=");
   scanf("%d",&C2);

/*quadrati*/
   int sqC1;
   int sqC2;
   sqC1=C1*C1;
   sqC2=C2*C2;

/*ipotenusa*/
   int sqI;
   sqI=sqC1+sqC2;
   int i;
   i=sqrt(sqI); /**/
   printf("L'ipotenusa risulta %d\n",i);
	return 0; 
}