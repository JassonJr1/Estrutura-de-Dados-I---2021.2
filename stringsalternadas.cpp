#include <stdio.h>
#include <stdlib.h>
int main( )
{
char nomes[5][21];
int i;
for (i = 0; i < 5; i++)
{
printf("Digite o nome %d: ", i+1);
scanf(" %s", nomes[i]);
}
printf("\n");
for (i = 0; i < 5; i++)
{
printf("%d. %s\n", i+1, nomes[i]);
}
return 0;
}
