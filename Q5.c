//* To count the number of words in a string*//
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],l,res=0,i;
    printf("Input a string\n");
    fgets(s,20,stdin);
    l=strlen(s);
    for(i=0;i<l-1-1;i++)
    {
        if(s[i]==' ')
        {
            res++;
        }
    }
    printf("%d are the number of words in the string",res+1);
    return 0;
}
