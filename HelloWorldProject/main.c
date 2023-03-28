#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_preventoverflow(void);
void ft_putnbr(int nb);

void main() {;
//    ft_putchar('c');
//    ft_print_alphabet();
//    ft_print_reverse_alphabet();
//    ft_print_numbers();
//    ft_is_negative(0);
//    ft_print_comb();
//    ft_print_comb2();
//    ft_putnbr(42);
//    ft_putnbr(-2147483648);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_preventoverflow();
        return;
    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb = nb - 2 * nb;
    }

    int number = nb;
    int memory = 1;

    while(number > 10)
    {
        memory++;
        number = number / 10;
    }

    char chars[memory];

    for(int i = 0; i < memory; i++)
    {
        int remainder = nb % 10;
        chars[memory - i - 1] =  '0' + remainder;
        nb = nb / 10;
    }

    for(int i = 0; i < memory; i++)
    {
        ft_putchar(chars[i]);
    }

}

void	ft_preventoverflow(void)
{
    ft_putchar('-');
    ft_putchar('2');
    ft_putchar('1');
    ft_putchar('4');
    ft_putchar('7');
    ft_putchar('4');
    ft_putchar('8');
    ft_putchar('3');
    ft_putchar('6');
    ft_putchar('4');
    ft_putchar('8');
}

void ft_print_comb2()
{
    char numbersArray[4];

    numbersArray[0] = '0';
    numbersArray[1] = '0';
    numbersArray[2] = '0';
    numbersArray[3] = '1';

    while(1)
    {
        write(1, &numbersArray[0], 1);
        write(1, &numbersArray[1], 1);
        write(1, " ", 1);
        write(1, &numbersArray[2], 1);
        write(1, &numbersArray[3], 1);

        if((numbersArray[0] == '9' && numbersArray[2] == '9'
            && numbersArray[3] == '9' && numbersArray[1] == '8'))
            break;

        write(1, ",", 1);
        write(1, " ", 1);
        if(numbersArray[3] == '9' && numbersArray[2] != '9')
        {
            numbersArray[2]++;
            numbersArray[3] = '0';
            continue;
        }

        if(numbersArray[2] == '9' && numbersArray[3] == '9')
        {
            numbersArray[1]++;
            numbersArray[2] = numbersArray[0];
            numbersArray[3] = numbersArray[1] + 1;
            continue;
        }
        if(numbersArray[1] == '9')
        {
            numbersArray[0]++;
            numbersArray[1] = '0';
            numbersArray[2] = numbersArray[0];
            numbersArray[3] = numbersArray[1] + 1;
            continue;
        }

        numbersArray[3]++;
    }
}

void ft_print_comb(){
    char zeroChar = '0';
    for(char i = '0'; i < zeroChar + 10; i++)
    {
        for(char j = i + 1; j < zeroChar + 10; j++)
        {
            for(char k = j + 1; k < zeroChar + 10; k++)
            {
                if(i < j && i < k && j < k)
                {
                    write(1,&i,1);
                    write(1,&j,1);
                    write(1,&k,1);
                    if(!(i == '7' && j == '8' && k == '9'))
                    {
                        write(1, ",", 1);
                        write(1, " ", 1);
                    }
                }
            }
        }
    }
}

void ft_is_negative(int n){
    char c;
    if(n>=0)
        c = 'P';
    else
        c = 'N';

    write(1, &c, 1);
}

void  ft_print_numbers(){
    for(char i = '0'; i < '0' + 10 ; i++){
        write(1, &i,1);
    }
}

void ft_print_reverse_alphabet(){
    char c = 'z';
    for(int i = 26; i > 0; i--){
        write(1, &c, 1);
        c--;
    }
}

void ft_print_alphabet(){
    char c = 'a';
    for(int i = 0; i < 26; i++){
        write(1, &c, 1);
        c++;
    }
}

void ft_putchar(char c){
    write(1, &c, 1);
}