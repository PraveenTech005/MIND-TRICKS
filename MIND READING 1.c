#include <stdio.h>

int main()
{
    int a, ans, num, num1, chr, alpha;
    printf("I AM GONNA READ YOUR MIND\n");
    printf("PRESS ENTER FOR EVERY LINE\n");
    getc(stdin);
    printf("   TAKE YOUR CALCULATOR   \n");
    getc(stdin);
    printf("       LETS BEGIN !      \n");
    getc(stdin);
    printf("Think Any Number Between 0-9\n");                           //5
    getc(stdin);
    printf("Multiply It By 4\n");                                       //5 * 4 = 20
    getc(stdin);
    printf("Add It With 2\n");                                          //20 + 2 = 22
    getc(stdin);
    printf("Multiply It By 50\n");                                      //22 * 50 = 1100
    getc(stdin);
    for(a = 65;a<=90;a++)
    {
        printf("%c - %d\n",a,a - 64);
    }
    printf("Pick Any Character And Add The Number With It Twice\n");    //1100 + 16 = 1116
    printf("(ex: If You Pick A - 1 : 1 + 1 = 2 Then Add 2)\n");         //1116 + 16 = 1132
    getc(stdin);
    printf("Add It With 8\n");                                          //1132 + 8 = 1140
    getc(stdin);
    printf("Now Divide It By 2\n");                                     //1140 / 2 = 570
    getc(stdin);
    printf("Hmmm🤭 Hmmm🤭 ALMOST DONE !\n");
    getc(stdin);
    printf("Now Type The Answer Below : ");
    scanf("%d",&ans);

    num  = ans / 100;
    alpha = ans % 100;
// num1 = num * 100;
// chr  = ans - num1;
// alpha = chr + 10;
    
    printf("HAHA Got It\n"); 
    printf("The Number That You Pick  : %d\n",num);                     //First Digit Is The Number That You Picked
    printf("Alphabet That You Choose  : %c\n",alpha+10);                //Next Two Digit Is The Number For The Character That You Picked
/*
A - 55          N - 68
B - 56          O - 69
C - 57          P - 70
D - 58          Q - 71
E - 59          R - 72
F - 60          S - 73
G - 61          T - 74
H - 62          U - 75
I - 63          V - 76
J - 64          W - 77
K - 65          X - 78
L - 66          Y - 79
M - 67          Z - 80
*/
}
