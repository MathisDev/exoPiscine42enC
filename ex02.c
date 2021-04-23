#include <stdio.h>
#include <stdlib.h>


void     ft_div_mod(int a,int b,int c,int d,int *div,int *mode){

    printf("Le premier :");
    scanf("%d",&a);
    printf("Le dexieme :");
    scanf("%d",&b);

    if (b ==00)
    {
        ft_div_mod(a,b,c,d,div,mode);
    }    

    else{

    }

    c = a / b ;

    div = &c ;

    printf("le resultat est %d:\n",*div);

    d = a - (c * b);

    mode = &c;

    printf("le reste est %d:",*mode);
    
}

int main(void){

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int *div = 0;
    int *mode = 0;

    ft_div_mod(a,b,c,d,div,mode);

    return 0;
}