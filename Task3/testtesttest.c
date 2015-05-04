#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int cl;
    char* name;
    int score;

}
entry;

void str_to_entry(char* str,entry* e)
{
   const char s[2] = "|";
   char *token;
   int cnt=0;

   token = strtok(str, s);
   while( token != NULL )
   {

       printf( "%d %s\n", cnt, token);
       if(cnt==0){
         (*e).cl=atoi(token);
       }else if(cnt==1){
         (*e).name=(char*)malloc(strlen(token)+1);
         strcpy((*e).name, token);
       }else if(cnt==2){
         (*e).score=atoi(token);
       }

       token = strtok(NULL, s);
       cnt++;
   }
}



int main()
{
    char str[80] = "2|Richard|0";
    entry students[256];
    char line[256];
    int count=0;
    //FILE* fp;

    //while(fscanf(fp, "%s", line)>0){

    str_to_entry(str, &students[count]);
    count++;
        //return 0;
}


    //if(students[0].cl==1)
        //printf("%s is in class 1", students[0].name);



