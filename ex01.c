#include <stdio.h>
#include <stdlib.h>

void    ft_ultimate_ft(int nbr){

    nbr = nbr + 5 ;
    printf(" %d",nbr);


}

    int main(void){
        int a = 17;
        int* nbr1 = &a;
        int** nbr2 = &nbr1;

    ft_ultimate_ft(nbr2);

    return 0;
}

