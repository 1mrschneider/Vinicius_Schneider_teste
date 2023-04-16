//Vinícius Schneider J. Viana
//Código feito para um teste de vaga
#include <stdio.h>

int fibonacciSequence(int n, int seq[]) {
  if (n == 0) {
    seq[0] = 0;
    return 1;
  } else if (n == 1) {
    seq[0] = 0;
    seq[1] = 1;
    return 2;
  } else {
    seq[0] = 0;
    seq[1] = 1;
    int i = 1;
    while (seq[i] < n) {
      i++;
      seq[i] = seq[i-1] + seq[i-2];
    }
    return i+1;
  }
}

void checkIfInFibonacciSequence(int n, int seq[], int length) {
  int isInSequence = 0;
  for (int i = 0; i < length; i++) {
    if (seq[i] == n) {
      isInSequence = 1;
      break;
    }
  }
  if (isInSequence) {
    printf("%d pertence à sequência de Fibonacci.\n", n);
  } else {
    printf("%d não pertence à sequência de Fibonacci.\n", n);
  }
}

int main() {
  int numero;
  printf("Digite um número para verificar: ");
  scanf("%d", &numero); // lê um número do usuário via linha de comando
  int seq[100];
  int length = fibonacciSequence(numero, seq);
  checkIfInFibonacciSequence(numero, seq, length);
  return 0;
}
