#include <stdio.h>
 main(){
    int a,b;
    printf("ANTECESSOR E SUCESSOR\n");
    printf("Digite um numero inteiro.: ");
    scanf("%d", &a);
	  printf("Digite outro numero inteiro.: ");
    scanf("%d", &b);
    if(a<=b){
    printf(" %d %d %d %d %d %d",(a-1),a,(a+1),(a+2),(a+3),(a+4));
  }else{
    printf(" %d %d %d %d %d %d",(b-1),b,(b+1),(b+2),(b+3),(b+4));
  }
    return(0);
}