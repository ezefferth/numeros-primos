#include <stdio.h>
int main()
{
  int i, j=2, n, achou=0,soma=0;
  printf("Informe o valor de do intervalo:");
  scanf("%d",&n);
  

  for (i=2; i<n; i++){
    while(j < i && achou == 0){
      if(i % j == 0){
        achou = 1;
      }
      j++;
    }
    if(achou == 0){
      soma++;
      printf("%d eh primo\n", i);
    }
    j=2; 
    
    achou = 0;
  }
  printf("exite %d numeros primos\n", soma);
  return 0;
}