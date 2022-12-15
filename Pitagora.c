#include <stdio.h>
#include <math.h>
#include <string.h>

/*MI RACCOMANDO SCRIVI IL PROTOTIPO(la parte subito prima dell'apertura della graffa) PRIMA DI DICHIARARE LA FUNZIONE O ALTRIMENTI SEI MARSO CHE VUOI SOTTERRARE L'INT MAIN DATO CHE TUTTE LE FUNZIONI (o prototipi) VANNO SCRITTI SOPRA L'INT MAIN O GCC VA IN CRISI*/
int Diretto(); /*É il teorema di Pitagora così come da definizione*/
int Inverso();/*É la formula inversa del teorema di Pitagora*/
void Error();/*Serve a notificare l'utente che ha inserito una cosa che il programma non accetta. É per evitare che il programma "hangs"*/
int Input();/*determina cosa è stato inserito coime input, legge la lunghezza della stringa e la usa per determinare qual funzione l'utente ha deciso di chiamare*/
float sq(float a);/*calcola il qudrato dell'input a. L'ho implementata più che altro per fare il gigachad e far vedere che mi piacciono le funzioni*/
int main(){
    printf("Pythagora's theorem calculator");
    printf("\n");
    printf("\n");
	Input();
}
int Input(){
    char Input[7];
	int g;
    printf("Direct or Inverse? ");
    scanf("%s", Input);
	g=strlen(Input);/*calcola la dimensione dell'array (sì, le stringhe sono un array - insieme - di caratteri) e la scrive in g. Questo era l'unico metodo che mi veniva in mente per creare un menu basato su stringhe dato che online trovo solo esempi con menu ad opzioni numeriche e se oso solo usare uno strcmp il programma va in crisi leggendo indirizzi di memoria a caso lagnandosi che sono read-only o pure "it hangs" come al solito. Per questo esatto motivo ho dovuto scriverlo tutto in inglese dato che diretto e inverso hanno lo stesso numero di lettere (7). Ah, strlen fa parte di string.h*/ 
	if(g==6){
		Diretto();
	}
	else if(g==7){
		Inverso();
	}
	else{
		Error();
	}
}
int Diretto() {
	/* titolo */
	printf("Hypotenuse calculator");
	printf("\n");
	printf("\n");

	/*variabili*/
	float C1;
	float C2;
	printf("Cathetus 1=");
	scanf("%f",&C1);	
	printf("Cathetus 2=");
	scanf("%f",&C2);

	/*quadrati*/
	float sqC1;
	float sqC2;
	sqC1=sq(C1);
	sqC2=sq(C2);

	/*ipotenusa*/
	float sqI;
	float i;
	sqI=sqC1+sqC2;
	i=sqrt(sqI);/*Radice quadrata. Fa parte di math.h*/
	printf("Hypotenuse is equal to %f\n",i);
	return 0; 
}
int Inverso(){
	/*Titolo*/
	printf("Cathetus calculator");
	printf("\n");
	printf("\n");
	/*Lettura variabili*/
	float I;
	float c;
	printf("Hypotenuse:");
	scanf("%f",&I);
	printf("Cathetus:");
	scanf("%f",&c);
	/*Elevamento al quadrato*/
	float sqI;
	float sqc;
	sqI=sq(I);
	sqc=sq(c);
	/*Calcolo cateto*/
	float sqc2;
	float c2;
	sqc2=sqI-sqc;
	c2=sqrt(sqc2);/*Radice quadrata. Fa parte di math.h*/
	/*Output*/
	printf("Cathetus is equal to %f\n", c2);
	return 0;
}
void Error(){
	printf("Insert Direct to find the hypotenuse, Inverse to find the cathetus.\n");
	main();
}
float sq(float a){
	return a*a;
}