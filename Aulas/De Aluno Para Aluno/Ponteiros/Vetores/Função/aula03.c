#include <stdio.h>
#define M 4

float media(int n, int *vetor) {
  
  int s = 0.0;

  for (int i = 0; i < n; i++) {
    s += vetor[i];
  }

  return (s / n);
}


int main(void) {
  
  int t[M];
  float med;

  for(int i = 0; i < M; i++) {
    scanf("%i", &t[i]);
  }

  med = media(M, t); //Passando o Define e vetor para a função

  printf("\n%.2f", med);

}