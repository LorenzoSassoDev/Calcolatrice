#include <stdio.h>
#include <stdlib.h>

// Creazione base di una Calcolatrice in C

int main() {
    int PrimoNumero;   // Primo numero inserito dall'utente
    int SecondoNumero; // Secondo numero inserito dall'utente
    int Risultato=0;     // Risultato dell'operazione
    int Operazione;    // Operazione richiesta 

    printf("1 - Addizione");
    printf("\n2 - Sottrazione");
    printf("\n3 - Moltiplicazione");
    printf("\n4 - Divisione");

    printf("\nInserisci il numero dell' operazione che desideri eseguire: ");
    scanf("%d",&Operazione);

    printf("\nInserisci il primo numero: ");
    scanf("%d",&PrimoNumero);
    printf("\nInserisci il secondo numero: ");
    scanf("%d",&SecondoNumero);

    if(Operazione==1) {
    Risultato=PrimoNumero+SecondoNumero;
    }
 
    if(Operazione==2) {
    Risultato=PrimoNumero-SecondoNumero;
    }

    if(Operazione==3) {
    Risultato=PrimoNumero*SecondoNumero;
    }

    if(Operazione==4) {
    Risultato=PrimoNumero/SecondoNumero;
    }

    printf("\nIl risultato dell'operazione e': %d\n\n",Risultato);

    system("pause");

    return 0;

}