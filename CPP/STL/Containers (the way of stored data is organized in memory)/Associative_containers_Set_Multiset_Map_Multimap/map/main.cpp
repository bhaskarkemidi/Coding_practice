/******************************************************************************
///////MAP///////////
//map is an assocoative container that store elements in key, value combination.
//where key should be unique, otherwise it overrides the previous value.
//it is implements using self-balance binary search tree (AVL/Red Black tree)
// it stores key, value pair in sorted order on the basis of key (ascending/descending order)
//map is generally used in Dictionary type problems.

*******************************************************************************/
#include <iostream>
#include<map>
using namespace std;

int main()
{
   map<string,int> Map;     //default ascending order
   //map<string, int,greater<>> Map;  //descending order
   //we can also have vector inside Map
   map<string, vector<int>> Map;
   Map ["abc"].push_back(123456);
   Map ["def"].push_back(67890);
   Map ["ghi"].push_back(874286);
   Map ["ghi"].push_back(326645);
   for(auto &el2o: Map)
   
//   Map["bhaskar"]=8987669;
//   Map["raju"]=876456;
//   Map["mahesh"]=673027;
//   Map["reyansh"]=9876327;
//   Map.insert(make_pair("mummy",87462562));
//   for(auto &el1: Map)
//   cout<<el1.first<<" "<<el1.second<<endl;
   //Access first member
   cout<<Map["reyansh"]<<endl;
    return 0;
}