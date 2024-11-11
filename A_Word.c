#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[101];
    scanf("%s",s);
    int cntU=0,cntL=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            cntL++;
        }
        else
        {
            cntU++;
        }
    }
        if(cntL>=cntU)
        {
           for(int i=0;i<strlen(s);i++)
           {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
           } 
        }
        else
        {
            for(int i=0;i<strlen(s);i++)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                s[i]=s[i]-32;
                }
            }
        }
        printf("%s",s);

    return 0;
}
