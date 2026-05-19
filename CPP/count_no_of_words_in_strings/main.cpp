
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "AA BBB  CCCC     DDDDD";
    int len = s.size();
    int word = 1;
    for ( int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            if(s[i+1] == ' ' )
            continue;
            word++;
        }
    
    }
    cout<<word<<endl;
    
    return 0;
}