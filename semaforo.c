#include <stdio.h>
#include <unistd.h>

int main() {
  int rosso, arancione, verde;                   // creazione variabili rosso, arancione e verde
  int setSemV(verde), setSemP(rosso);            // creazione funzione semaforo veicoli e semaforo pedoni

  printf("Per attraversare la strada digita \"p\" e premi \"invio\".\n");
  
  do {                                           // ciclo infinito
    if (getchar() == 'p') {                      // se ricevo "p" eseguo
      
      setSemV(arancione);                        // semaforo veicoli arancione
      sleep(5);                                  // aspetta 5 secondi
      
      setSemV(rosso);                            // semaforo veicoli rosso
      setSemP(verde);                            // semaforo pedoni verde
      
      sleep(30);                                 // aspetta 30 secondi

      setSemV(verde);                            // semaforo veicoli verde
      setSemP(rosso);                            // semaforo pedoni rosso
    }
  } while(1);
   
 return 0;                                       // termina
}