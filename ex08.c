#include <stdio.h>
#include <stdlib.h>

void    ft_atoi(char *str){
    int valu = 0;

    valu ++ ;  valu -- ;
    printf("%d\n",valu);

}


int main(void){

char mot;

printf("veulez ecire un mot a passer dans la fonction  -atoi- ");
scanf("%s",&mot);
ft_atoi(&mot);

return EXIT_SUCCESS;

}