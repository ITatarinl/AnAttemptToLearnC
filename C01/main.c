#include <stdio.h>
void ft_swap(int *a, int *b);
void ft_ultimate_ft(int *********nbr);
void ft_ft(int *nbr);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);

void main() {

}

void ft_ultimate_div_mod(int *a, int *b){ft_div_mod(*(int *)a, *(int *)b, a, b);}

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b;
    *mod = a % b;
}

void ft_swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}

void ft_ft(int *nbr){
    *nbr = 42;
}

