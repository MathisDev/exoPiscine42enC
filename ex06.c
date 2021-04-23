#include <stdio.h>
#include <stdlib.h>

void    ft_swap(int *a,int *b){
int i = *a;
int t = *b;

*a = t;
*b = i;

printf("%d\n",*a);
printf("%d\n",*b);

}

int main(void){
    int a;
    int b;
    printf("donné A :");
    scanf("%d",&a);
    printf("donné B :");
    scanf("%d",&b);
    ft_swap(&a,&b);

    return 0;


}