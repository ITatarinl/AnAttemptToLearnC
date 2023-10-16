#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main() {
    printf("Hello");
    // Массив источник данных
    // char src[1024]="firstlength\0  second";

    // Массив приемник данных
    // char dst[1024]="";

    // Копируем строку из массива src в массив dst. Обратите внимание,
    //что скопируется только строка «первая строка\0».
    // ft_strcpy(dst, src);

    // Вывод массива src на консоль
//    printf ("src: %s %s\n",src, &src[14]);
//
//    // Вывод массива dst на консоль
//    printf ("dst: %s %s\n", dst, &dst[14]);

    return 0;
}
char *ft_strcpy(char *dest, char *src){
    int i = 0;

    while(src[i] != "\0"){
        dest[i] = src[i];
        i++;
    }

    // Вывод массива src на консоль
    printf ("src: %s %s\n",src, &src[14]);

    // Вывод массива dst на консоль
    printf ("dst: %s %s\n", dest, &dest[14]);
    return strcpy(dest, src);
}
