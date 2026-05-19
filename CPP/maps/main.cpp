#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{
    map<string,list<string>> india;
    list<string> st1 {"mumbai","nagpur","pune"};
    list<string> st2 {"hyd","warangal","jangaon","gadjel"};
    list<string> st3 {"banglore","madival","ksr","mysore"};
    
    india.insert(pair<string,list<string>>("mumbai",st1));
    india.insert(pair<string,list<string>>("telangana",st2));
    india.insert(pair<string,list<string>>("karnataka",st3));
    
    for (auto pair: india){
       cout <<pair.first<<" -- ";
       
       for(auto areas : pair.second)
          cout<<areas<<",";
        cout<<endl;
    }
}