#include<stdio.h>
#include<conio.h>
int main()
{int sum,diff,mul,div,choice;
 int a,b;
 char c= 'y';

    while(c=='y')
    {
         printf("\n1.Addition \n2.Subtraction\n3.Multiplication\n4.Division\n");
         printf("\aEnter your choice -: \n");
         scanf("%d",& choice);
         printf("\a\nEnter two number :- \n");
         scanf("%d%d",&a,&b);
         switch(choice)
         {

              case 1: sum = a + b;
              printf("\a\n Sum = %d", sum);
              break;

              case 2: sub = a - b;
              printf("\a\n Difference = %d", sub);
              break;

              case 3: mul = a * b;
              printf("\a\n Multiplication = %d", mul);
              break;

              case 4: div = a / b;
              printf("\a\n Division = %d", div);
              break;

              default : printf("\aWRONG CHOICE");
        }
        printf("\nDo you want to continue? [y /n]");
        c=getch();
    }
    getch();
}
