
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int score=0;
    char score_str[50];
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

    /*
    Declaration of the file
    */

    char buffer[255];
    FILE*fp1;
    fp1=fopen("/Users/Richard2/Desktop/Project-Quiz/Task2/task22.txt","a");

    int Class=0;
    char class_number[3];
    printf("in what class are you?\n");
    scanf("%d", &Class);

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

        sprintf(score_str, "%d %s %d\n", Class, Name, score);
        fputs(score_str,fp1);

        printf("----------------------------------------\n");
        printf("Your score is %d \n",score);
        printf("----------------------------------------\n");



    }
    else
    {
        fclose(fp1);
        return 0;
    }

}
