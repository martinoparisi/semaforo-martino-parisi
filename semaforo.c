#include <stdio.h>
#include <unistd.h>

int main() {
    char premuto[7] = "p";
    char semaforoAuto[12], semaforoPedoni[14];

    system("clear");
    printf("Auto   🟢⚪⚪\n");
    printf("Pedoni ⚪⚪🔴\n");
    printf("Per attraversare la strada digita \"p\" e premi \"invio\".\n");
    
    do {
        if (getchar() == 'p') {
          sleep(5);
          system("clear");
          
          printf("Auto   ⚪🟠⚪\n");
          printf("Pedoni ⚪⚪🔴\n");
          
          sleep(3);
          system("clear");

          printf("Auto   ⚪⚪🔴\n");
          printf("Pedoni ⚪⚪🔴\n");
          
          sleep(5);
          system("clear");
          
          printf("Auto   ⚪⚪🔴\n");
          printf("Pedoni 🟢⚪⚪\n");
          
          sleep(17);
          system("clear");
          
          printf("Auto   ⚪⚪🔴\n");
          printf("Pedoni ⚪🟠⚪\n");
          
          sleep(3);
          system("clear");
          
          printf("Auto   ⚪⚪🔴\n");
          printf("Pedoni ⚪⚪🔴\n");
          
          sleep(5);
          system("clear");
          
          printf("Auto   🟢⚪⚪\n");
          printf("Pedoni ⚪⚪🔴\n");
        }
    } while (getchar() == 'p');
    
    return 0;
}