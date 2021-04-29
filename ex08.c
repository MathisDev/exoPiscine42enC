#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void    ft_atoi(char *str){

    int valu = 0;

    valu = strlen(str);

    int element;

    int nombre = 0;

    printf("Il y a %d elements dans la variable -str- \n",valu);

    valu --;

    element = str[valu];

    printf("------%d\n",element);


    if (element == 49)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }

if (element == 50)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }

    if (element == 51)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }


    if (element == 52)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }


    if (element == 53)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }



    if (element == 54)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }


    if (element == 55)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }


    if (element == 56)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }


if (element == 57)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;


        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }

    if (element == 48)
    {
     
        printf("Il y a des chiffre dans la variable STR\n");

        nombre ++;

        printf("NOMBRE %d\n",nombre);
        printf("ELEMENTS %c\n",element);    
        printf("VALU %d\n",valu);    
    }

        valu --;

    while (nombre == valu)
    {
        ft_atoi(str);
    }
    


}




int main(void){

char mot;

printf("veulez ecire un mot a passer dans la fonction  -atoi- ");
scanf("%s",&mot);
ft_atoi(&mot);

return EXIT_SUCCESS;

}