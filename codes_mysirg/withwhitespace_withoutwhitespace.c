#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    /* taking characters
    char s[30]={'s','u','v','o','\0'};
    printf("%s",s);*/

    /* not taking the white space
    char s[30];
    scanf("%s",&s);
    printf("%s",s);*/

/* not taking the white spaces after 2 strings
    char s[30],s2[30];
    scanf("%s %s",&s,&s2);
    printf("%s %s",s,s2);*/

    /*taking white spaces also
    char s[30];
    gets(s);
    printf("%s",s);*/

        //another method: taking white spaces also
    char s[30];
    scanf("%[^\n]%*c",&s); //stop taking inputs when enter is pressed

    /*scanf("%[^.]",&s); stop taking inputs when . is pressed -> input : i am. subho -> output: i am 
    would not stop if . is not pressed*/

    printf("%s",s);



    return 0;
}