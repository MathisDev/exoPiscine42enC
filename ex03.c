#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_div_mode(int *a,int *b){

    *a = *a / *b ;

    *b = *b % *a ;

    printf("%d\n",*a);
    printf("%d",*b);
    
}

int main(void){
    int a;
    int b;

    printf("premiere valeur ");
    scanf("%d",&a);
    printf("dexiieme valeur ");
    scanf("%d",&b);

    ft_ultimate_div_mode(&a,&b);

    return 0;
}