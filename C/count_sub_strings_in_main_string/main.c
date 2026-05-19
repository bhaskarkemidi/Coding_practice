//Count no.of occurances in a mainstring

#include <stdio.h>
#include<string.h>
int main()
{
    char *mainstring ="helloworldhellowellohello";
    char *substring = "hello";
    char *found = strstr(mainstring,substring);
    int repeat = 0;
    while(found)
    {
        repeat++;
        found=found+1;
        found=strstr(found,substring);
    }
    printf("%d",repeat);
    return 0;
}
