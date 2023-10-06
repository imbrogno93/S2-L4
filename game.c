/* 1) Se l'utente inserisce una lettera diversa da 'A' o 'B' in fase di scelta iniziale, il programma termina.
      Questo perché la funzione 'scanf()' presuppone che l'utente inserisca un carattere valido, che in questo caso può essere solo 'A' o 'B'.

   2) Se l'utente inserisce un nome che ha più caratteri della dimensione dell'array "nome" che è stato dichiarato inizialmente nella fase di avvio nuova partita, il programma causa un overflow di memoria.
      Questo perché la funzione 'scanf()' presuppone che l'utente inserisca un nome di lunghezza massima 20 caratteri. Se l'utente inserisce un nome più lungo, i caratteri in eccesso vengono memorizzati nella
      memoria oltre la fine dell'array. Questo genera un errore.
    
   3) Se l'utente inserisce la lettera D o un carattere numerico per la risposta alle domande durante una partita, il programma non è in grado di valutare correttamente la risposta. Questo perché la funzione 'if()'
      presuppone che la risposta sia una lettera tra 'A' e 'C'. In questo caso, il programma continua a funzionare normalmente, ma la valutazione della risposta è errata. Ad esempio, se l'utente inserisce la lettera 'D'
      come risposta alla prima domanda, il programma la considera come una risposta corretta, anche se la risposta corretta è 'B'.
*/
#include <stdio.h>
int gioca_partita();
int main() {
    char scelta = {'\0'}
    print_menu();
    scanf("%c", &scelta);
    if(scelta == 'B') {
        printf("Grazie per aver giocato, alla prossima\n");
        return 0;
    }
    while(scelta == 'A') {
        gioca_partita();
        print_menu();
        scanf("%c", &scelta);
    }
    return 0;
}
void print_menu() {
    printf("Start menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci la lettera corrispondente alla tua scelta:");
}
int gioca_partita() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2;
    printf("Inserisci il tuo nome:\n");
    scanf("%s", &nome);
}
void print_menu() {
    printf("Start menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci la lettera corrispondente alla tua scelta:");
}
int gioca_partita() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2;
    printf("Inserisci il tuo nome:\n");
    scanf("%s", &nome);
    printf("Domanda numero 1:\n");
    printf("Inserire quì la domanda\n");
    printf("A >>> risposta 1/nB >>> risposta 2/nC >>> risposta 3/n");
    printf("Inserire la risposta:");
    scanf("%c", &risposta1);
    if(risposta1 == 'B') {
        punteggio++;
    }
    printf("Domanda numero 2:\n");
    printf("Inserire qui la domanda\n");
    printf("A >>> risposta 1\nB >>> risposta 2\nC >>> risposta 3\n");
    printf("Inserire la risposta:");
    scanf("%c", &risposta2);
    if(risposta2 == 'A') {
        punteggio++;
    }
    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);
    return 0;
}


// Il presente codice può essere migliorato nel seguente modo
#include <stdio.h>
int gioca_partita();
int main() {
    char scelta = {'\0'}
    print_menu();
    scanf("%c", &scelta);
    if(scelta == 'B') {
        printf("Grazie per aver giocato, alla prossima\n");
        return 0;
    }
    while(scelta == 'A') {
        gioca_partita();
        print_menu();
        scanf("%c", &scelta);
    }
    return 0;
}
void print_menu() {
    printf("Start menu:\n");
    printf("A >> Iniziare una nuova partita\nB >> Uscire dal gioco\n");
    printf("Inserisci la lettera corrispondente alla tua scelta:");
}
int gioca_partita() {
    int punteggio = 0;
    char nome[20] = {'\0'};
    char risposta1, risposta2;
    printf("Inserisci il tuo nome:\n");
    scanf("%s", &nome);
    printf("Domanda numero 1:\n");
    printf("Inserire quì la domanda\n");
    printf("A >>> risposta 1/nB >>> risposta 2/nC >>> risposta 3/n");
    printf("Inserire la risposta:");
    scanf("%c", &risposta1);
    if(risposta1 >= 'A' && risposta1 <= 'C') {
        if(risposta1 == 'B') {
            punteggio++;
        }
    }
    printf("Domanda numero 2:\n");
    printf("Inserire quì la domanda\n");
    printf("A >>> risposta 1\nB >>> risposta 2\nC >>> risposta 3\n");
    printf("Inserire la risposta:");
    scanf("%c", &risposta2);
    if(risposta2 >= 'A' && risposta2 <= 'C') {
        if(risposta2 == 'A') {
            punteggio++;
        }
    }
    printf("Partita conclusa, punteggio totalizzato da %s:%d\n", nome, punteggio);
    return 0;
}