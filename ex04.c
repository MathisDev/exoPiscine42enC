#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    ft_putstr(char *str){

    int longeur = 0;

    while (str[longeur]!='\0'){
    
        ++longeur;
    }
    printf("%d",longeur);

}


int main(void){
    char mot;
    printf("ecrire un mot ");
    scanf("%s",&mot);

    ft_putstr(&mot);

    return 0;
}