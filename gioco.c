#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* domande[] = {
    "Qual'è la capitale degli USA?",
    "Qual'è la capitale dell'Italia?",
    "Qual'è la capitale della Svizzera?"
};
char* risposte[][3] = {
    {"Washington", "New York", "Miami"},
    {"Roma", "Milano", "Napoli"},
    {"Berna", "Zurigo", "Ginevra"}
};
int valuta_risposta(int domanda, char* risposta_utente) {
  int i;
  for (i = 0; i < 3; i++) {
    if (strcmp(risposte[domanda][i], risposta_utente) == 0) {
      return 1;
    }
  }
  return 0;
}
int main() {
  printf("Benvenuta/o! Questo è il gioco delle capitali :) \n");
  printf("In questo gioco dovrai indovinare le capitali \n");
  int scelta;
  do {
    printf("Vuoi iniziare una nuova partita? (1) Sì (0) No \n");
    scanf("%d", &scelta);
  } while (scelta < 0 || scelta > 1);
  if (scelta == 1) {
    char nome[20];
    printf("Inserisci il tuo nome da battaglia: \n");
    scanf("%s", nome);
    int punteggio = 0;
    for (int i = 0; i < 3; i++) {
      printf("%s \n", domande[i]);
      for (int j = 0; j < 3; j++) {
        printf("%d) %s \n", j + 1, risposte[i][j]);
      }
      char risposta_utente[20];
      printf("Inserisci la tua risposta: \n");
      scanf("%s", risposta_utente);
      int risposta_corretta = valuta_risposta(i, risposta_utente);
      if (risposta_corretta) {
        printf("Corretto! \n");
        punteggio++;
      } else {
        printf("Sbagliato :( \n");
      }
    }
    printf("Il tuo punteggio è %d. \n", punteggio);
  }
  do {
    printf("Vuoi metterti alla prova nuovamente? (1) Sì (0) No \n");
    scanf("%d", &scelta);
  } while (scelta < 0 || scelta > 1);
  return 0;
}
