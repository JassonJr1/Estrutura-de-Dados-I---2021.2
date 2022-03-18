#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ornd(int *vector[]){
    int i, j, *aux;

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            int x, y;
            x = *(*(vector + i));
            y = *(*(vector + j));
            if (x>y){
                aux = *(vector + i);
                *(vector + i) = *(vector + j);
                *(vector + j) = aux;
            }
        }
        
    } 
    for(i = 0; i < 10; i++){
        printf("%d (%d)\n",*(*(vector + i)),*(vector + i));
    }
    

}

int main() {
    
    srand(time(NULL));

    int i, x;
    int vet[10];
    int *pvet[10];


    for(i = 0; i < 10; i++){
        vet[i] = (rand() % 50);
        pvet[i] = &vet[i];
    }
    
    ornd(pvet);
}