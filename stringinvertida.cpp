#include <stdio.h> 
#include <string.h> 

int main()
{
char strings[200];
int i, tamanho; 
printf("Digite uma string: "); 
fgets(strings,200,stdin);
tamanho = strlen(strings); 
printf("A string invertida : "); 
  for(i=tamanho; i>=0; i--) 
     {
       printf("%c" ,strings[i]);
     } 
return 0;
}