#include <stdio.h>
#include <assert.h>

// [1] 0, 1, 2, 3, 4, 5, 6,
// [2] 0, 1, 2, 3, 4, 5, 6,
// [3] 0, 1, 2, 3, 4, 5, 6,
// [4] 0, 1, 2, 3, 4, 5, 6,
// [5] 0, 1, 2, 3, 4, 5, 6,
// [6] 0, 1, 2, 3, 4, 5, 6,
// [7] 0, 1, 2, 3, 4, 5, 6,
void bubble_sort_1 (int vetor[], int n) {
   int k, j, aux;
   for (k = 1; k < n; k++) {
      printf("\n[%d] ", k);
      for (j = 0; j < n - 1; j++) {
         printf("%d, ", j);
         if (vetor[j] > vetor[j + 1]) {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}

// [1] 0, 1, 2, 3, 4, 5, 6,
// [2] 0, 1, 2, 3, 4, 5,
// [3] 0, 1, 2, 3, 4,
// [4] 0, 1, 2, 3,
// [5] 0, 1, 2,
// [6] 0, 1,
// [7] 0,
void bubble_sort_2 (int vetor[], int n) {
   int k, j, aux;
   for (k = 1; k < n; k++) {
      printf("\n[%d] ", k);
      for (j = 0; j < n - k; j++) {
         printf("%d, ", j);
         if (vetor[j] > vetor[j + 1]) {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}

// [0] 0, 1, 2, 3, 4, 5, 6,
// [1] 0, 1, 2, 3, 4, 5,
// [2] 0, 1, 2, 3, 4,
// [3] 0, 1, 2, 3,
// [4] 0, 1, 2,
// [5] 0, 1,
// [6] 0,
void bubble_sort_3 (int vetor[], int n) {
   int k, j, aux;
   for (k = 0; k < n - 1; k++) {
      printf("\n[%d] ", k);
      for (j = 0; j < n - k - 1; j++) {
         printf("%d, ", j);
         if (vetor[j] > vetor[j + 1]) {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}

// [7] 0, 1, 2, 3, 4, 5, 6,
// [6] 0, 1, 2, 3, 4, 5,
// [5] 0, 1, 2, 3, 4,
// [4] 0, 1, 2, 3,
// [3] 0, 1, 2,
// [2] 0, 1,
// [1] 0,
void bubble_sort_4 (int vetor[], int n) {
   int k, j, aux;
   for (k = n - 1; k > 0; k--) {
      printf("\n[%d] ", k);
      for (j = 0; j < k; j++) {
         printf("%d, ", j);
         if (vetor[j] > vetor[j + 1]) {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }
}

//
// Main
//
int main() {
   int vetor[8] = {5, 3, 2, 4, 7, 1, 0, 6};
   bubble_sort_3(vetor, 8);

   //
   // Mostrar o vetor
   //
   int i;
   printf("\n{");
   for (i = 0; i < 8; i++) {
      printf("%d, ", vetor[i]);
   }
   printf("}\n");
   return 0;
}