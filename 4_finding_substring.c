#include<stdio.h>
#include<string.h>
void find_substring(char st[],char sub[])
{
    if(strstr(st,sub))
        printf("Given substring is there in the original string");
    else
        printf("Given substring is not there in the original string");
}

void main()
{
    char st[30],sub[30];
    printf("Enter the string value\n");
    scanf("%[^\n]", st);

    getchar(); //consumes the new line left

    printf("Enter the substring to be checked\n");
    scanf("%[^\n]", sub);
    find_substring(st,sub);
}
