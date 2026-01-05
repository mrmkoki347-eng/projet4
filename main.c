#include <stdio.h>
#include <stdlib.h>


int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}


int main() {
    FILE *file = fopen("dataset.txt", "r");
    if (file == NULL) {
        printf("ERREUR: Impossible de lire dataset.txt\n");
        return 1; 
    }

    int size, expected;
    int testCount = 0;
    int failCount = 0;

    
    while (fscanf(file, "%d %d", &size, &expected) != EOF) {
        testCount++;
        
        
        int *prices = (int *)malloc(size * sizeof(int));
        for (int i = 0; i < size; i++) {
            fscanf(file, "%d", &prices[i]);
        }

        int actual = maxProfit(prices, size);

        
        if (actual == expected) {
            printf("[OK] Test %d : Succes (Resultat: %d)\n", testCount, actual);
        } else {
            printf("[X]  Test %d : ECHEC (Attendu: %d, Recu: %d)\n", testCount, expected, actual);
            failCount++;
        }

        free(prices);
    }

    fclose(file);

    if (failCount == 0) {
        printf("\nTOUS LES TESTS ONT REUSSI !\n");
        return 0; 
    } else {
        printf("\nIL Y A %d ERREURS.\n", failCount);
        return 1; 
    }
}