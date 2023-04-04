#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);
void ft_ultimate_ft(int *********nbr);
void ft_ft(int *nbr);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

void main() {

}

void ft_sort_int_tab(int *tab, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-1-i; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

}

void ft_rev_int_tab(int *tab, int size){
    int i;
    int temp;
    i = -1;
    while(++i < --size){
        temp = tab[i];
        tab[i] = tab[size];
        tab[size] = temp;
    }
}

int ft_strlen(char *str){
    int length = 0;
    while(*str) {
        str++;
        length++;
    }
    return length;
}

void ft_putstr(char *str){
    while(*str)
        write(1, str++, 1);
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

