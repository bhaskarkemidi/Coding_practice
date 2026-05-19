#include<stdio.h>

#include<string.h>

int main()

{

    char s1[]="how are you";

    char s2[]="owo";

    int len1=strlen(s1);
    int len2=strlen(s2);

    printf("len1=%d\n",len1);

    printf("len2=%d\n",len2);

    int i=0,j=0,count=0,index=0,sum=0;
    
    while(s1[i]!='\0')
    {
        if(s1[i]==s2[j])
        {
            index=index+i;
            i++;
            j++;
            count++;
        }
        i++;
    }
    if(count==len2)
    {
        printf("index=%d\n",index);
    }
    else
    {
        j=0;
        while(s2[j]!='\0')
        {
            sum=sum+s2[j];
            j++;
        }
        printf("sum=%d\n",sum);
    }
    return 0;
}
