#include <stdio.h>
#include <stdint.h>

#define MAX_v(10)

int main(void)
{
int a,b,c,d,e,f,g,h,i,l; 
float somma;
float media;

printf("Calcolo della media aritmetica\n\n");

printf("inserisci il primo numero: ");
scanf("%d" &a);

printf("Inserisci il secondo numero: ");
scanf("%d" &b);

printf("Inserisci il terzo numero: ");
scanf("%d" &c);

printf("Inserisci il quarto numero: ");
scanf("%d" &d);

printf("Inserisci il quinto numero: ");
scanf("%e" &e);

printf("Inserisci il sesto valore: ");
scanf("%f" &f);

printf("Inserisci il settimo valore: ");
scanf("%g" &g);

printf("Inserisci l'ottavo valore: ");
scanf("%h" &h);

printf("Inserisci il nono valore: ");
scanf("%i" &i);

printf("Inserisci il decimo valore: ");
scanf("%l" &l);

somma= a+b+c+d+e+f+g+h+i+l;

media= somma / 10 ;

printf("\n");

printf("La media aritmetica e'",a,b,c,d,e,f,g,h,i,l.media);

return 0;

}
