#include <stdio.h>

int main()
{
    int a;
    printf("I AM GONNA READ YOUR MIND\n");
    getc(stdin);
    printf("DON'T TAKE YOUR CALCULATOR ITS SIMPLE THAN B4\n");
    getc(stdin);
    printf("       LETS BEGIN !      \n");
    getc(stdin);
    printf("Think Any Number Between 0-9\n");                       //5
    getc(stdin);
    printf("Multiply It By 5\n");                                   //5 * 5 = 25
    getc(stdin);
    printf("Multiply It By 2\n");                                   //25 * 2 = 50
    getc(stdin);
    printf("ADD It With 5\n");                                      //50 + 5 = 55
    getc(stdin);
    printf("ADD It With 3\n");                                      //55 + 3 = 58
    getc(stdin);
    printf("Hmmm🤭 Hmmm🤭 ALMOST DONE !\n");
    getc(stdin);
    printf("Now Type The Answer Below : ");                         //First Digit Of The Answer Is Your Picked Number
    scanf("%d",&a);

    a = a/10;                                                       //58 / 10 = 5.8
    printf("HAHA Got It\n"); 
    printf("The Number That You Pick  : %d\n",a);                   //It Prints 5 Due To Integer Declaration





}
