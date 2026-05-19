#include<stdio.h>

#include<string.h>

#include<stdlib.h>

 

int main()

{

    char s[]="111110111011011111111";

    char str[1024]={0};

    int i=0,j=0;

    int len=strlen(s);

    int index=len-1;

    int count=0;

    int len2=0,index2=0;

    char *revstr=(char*)malloc(1024);

    while(index>=0)

    {

        if(s[index]=='1' && count==3)

        {

            count=0;

            str[i++]=s[index--];

            str[i++]='0';

        }

 

        else if(s[index]=='1')

        {

            str[i++]=s[index--];

            count++;

        }

        else if(s[index]=='0')

        {

            str[i++]=s[index--];

            count=0;

        }

    }

 

    len2=strlen(str);

    index2=len2-1;

 

    while(index2 >= 0)

    {

        revstr[j++]=str[index2--];

 

    }

    revstr[j] = '\0';

   

   

    printf("revstr=%s\n",revstr);

   

    return 0;

}
