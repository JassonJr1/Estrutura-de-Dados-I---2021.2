#include <stdio.h>
#include <stdlib.h>

void troca(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a = 20, b = 25, c = 30, d = 40;
    int *pa = &a;
    int *pb = &b;
    int *pc = &c;
    int *pd = &d;


    
    troca(pa,pb); 
    printf("valor A: %d\nvalor B: %d\n",a,b);

    printf("\n");
    
    troca(pa,pc);
    printf("valor A: %d\nvalor C: %d\n",a,c);

    printf("\n");

    troca(pa,pd);
    printf("valor A: %d\nvalor D: %d\n",a,d);


    printf("\n");

    troca(pb,pa);
    printf("valor B: %d\nvalor A: %d\n",b,a);

    printf("\n");

    troca(pb,pc);
    printf("valor B: %d\nvalor C: %d\n",b,c);

    printf("\n");

    troca(pb,pd);
    printf("valor B: %d\nvalor D: %d\n",b,d);


    printf("\n");

    troca(pc,pa);
    printf("valor C: %d\nvalor A: %d\n",c,a);
    
    printf("\n");

    troca(pc,pb);
    printf("valor C: %d\nvalor B: %d\n",c,b);

    printf("\n");

    troca(pc,pd);
    printf("valor C: %d\nvalor D: %d\n",c,d);


    printf("\n");

    troca(pd,pa);
    printf("valor D: %d\nvalor A: %d\n",d,a);

    printf("\n");

    troca(pd,pb);
    printf("valor D: %d\nvalor B: %d\n",d,b);

    printf("\n");

    troca(pd,pc);
    printf("valor D: %d\nvalor C: %d\n",d,c);

    return 0;
}