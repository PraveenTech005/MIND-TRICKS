#include <stdio.h>

int main()
{
    int a, ans, num, num1, chr, alpha;
    printf("I AM GONNA READ YOUR MIND\n");
    getc(stdin);
    printf("TAKE YOUR CALCULATOR THEN\n");
    getc(stdin);
    printf("       LETS BEGIN !      \n");
    getc(stdin);
    printf("Think Any Number Between 0-9\n");
    getc(stdin);
    printf("Multiply It By 4\n");
    getc(stdin);
    printf("Add It With 2\n");
    getc(stdin);
    printf("Multiply It By 50\n");
    getc(stdin);
    for(a = 65;a<=90;a++)
    {
        printf("%c - %d\n",a,a - 64);
    }
    printf("Pick Any Character And Add The Number With It Twice\n");
    printf("(ex: If You Pick A - 1 : 1 + 1 = 2 Then Add 2)\n");
    getc(stdin);
    printf("Add It With 8\n");
    getc(stdin);
    printf("Now Divide It By 2\n");
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
    printf("The Number That You Pick  : %d\n",num); 
    printf("Alphabet That You Choose  : %c\n",alpha+10); 
}
