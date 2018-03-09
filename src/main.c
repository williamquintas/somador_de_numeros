/* Somador de numeros
 * Nome: William Quintas de Melo - RA: 188684
 * EA876 - Introdução a Software de Sistema - Turma A
 * Professor Tiago Tavares
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int fat (n) {
  if ((n==1) || (n==0))
    return 1;
  else
    return fat(n-1)*n;
}

int main() {
  char number[MAX], c, position = 0, firstchar = 1, lastchar, letterDetected = 0;
  float sum = 0.0;
  int fatorial = 0;
  while ((c = getchar()) != EOF){
    if (firstchar || lastchar == ' ') {
      if (c>='0' && c<='9') {
        number[position] = c;
        position++;
        while (((c = getchar()) != EOF) && c>='0' && c<='9') {
          number[position] = c;
          position++;
        }
        if (c == '!') {
          c = getchar();
          if (c == ' ' || c == '\n' || c == EOF) {
            number[position] = 0;
            position = 0;
            fatorial = fat(atoi(number));
            sum += (float) fatorial;
          }
        }
        else if (c == ' ' || c == '\n' || c == EOF) {
          number[position] = 0;
          position = 0;
          sum += atof(number);
        }
        else if (c == '.') {
          number[position] = c;
          position++;
          while (((c = getchar()) != EOF) && c>='0' && c<='9') {
            number[position] = c;
            position++;
          }
          if (c == ' ' || c == '\n' || c == EOF) {
            number[position] = 0;
            position = 0;
            sum += atof(number);
          }
          else {
            number[position] = 0;
            position = 0;
          }
        }
        else {
          number[position] = 0;
          position = 0;
        }
      }
      else if (c=='.') {
        number[position] = c;
        position++;
        while (((c = getchar()) != EOF) && c>='0' && c<='9') {
          number[position] = c;
          position++;
        }
        if (c == ' ' || c == '\n' || c == EOF) {
          number[position] = 0;
          position = 0;
          sum += atof(number);
        }
      }
      firstchar = 0;
    }
    lastchar = c;
  }
  printf("%.2f\n", sum);
  return 0;
}
