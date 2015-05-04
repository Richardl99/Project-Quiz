#include <stdio.h>
#include <time.h>
#include <math.h>
//#include <stdlib.h>

int main()
{

    int score=0;
    int A,B,operator,result,i;
    char Name[20];
    char continuee;
    srand(time(NULL));

    printf("Enter your name\n");
    scanf("%s",Name);
    printf("Your name is %s\n",Name);
    printf("Do you want to do continue %s?\n",Name);
    scanf("%c",&continuee);
    scanf("%c",&continuee);

    if(continuee=='y')
    {
        printf("Ok\n");
        for(i=0;i<10;i++)
        {

            A=rand()%100;
            B=rand()%100;
            operator=rand()%3;

            if(operator==0)
            {
                printf("%d + %d\n",A,B);
                scanf("%d",&result);
                if(result==A+B)
                {
                    printf("That is correct\n");
                    score=score+1;
                }
                else
                {
                    printf("That is wrong\n");
                }

            }
            else if(operator==1)
            {
                printf("%d - %d\n",A,B);
                scanf("%d",&result );
                if(result==A-B)
                {
                    printf("That is correct\n");
                    score=score+1;
                }
                else
                {
                    printf("That is wrong\n");
                }
            }
            else  if(operator==2)
            {
                printf("%d * %d\n",A,B);
                scanf("%d",&result);
                if(result==A * B)
                {
                    printf("That is correct\n");
                    score=score+1;
                }
                else
                {
                    printf("That is wrong\n");
                }
            }
            else if(operator==3)
            {
                printf("%d / %d\n",A,B);
                scanf("%d",&result);
                if(result==A / B)
                {
                    printf("That is correct/n");
                    score=score+1;
                }
                else
                {
                    printf("That is wrong\n");
                }
            }

        }
        printf("----------------------------------------\n");
        printf("Your score is %d \n",score);
        printf("----------------------------------------\n");

    }
    else
    {
        printf("-----Something went wrong-----\n");
        return 0;
    }

}
