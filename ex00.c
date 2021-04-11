#include <stdio.h>
#include <stdlib.h>

void ft_print_alphabet(char* palpabet);

int main(int argc,char *argv[])
{
char alphabet[] = "";

ft_print_alphabet(alphabet);

printf("%s",alphabet);

return 0;
}

void ft_print_alphabet (char* palphabet)
{
    palphabet = "abcdefghijklmnopqrstuvwxyz";
    printf("%s",palphabet);
}