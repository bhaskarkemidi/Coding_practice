/* 
Files and Streams, 
Files are used to store data perminantly
A stream is an abstraction that represents a device on which input and output operations are performed.
A stream can basically be represented as a source or destination of characters of indefinite length.
Till now we used only standard i/o operations, these are temperory, 
To store data the perminantly we use files
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100];
    cout<<"Enter your name and age:";
    cin.getline(arr,100);
    //ofstream myfile("xyz.txt"); //creating file for writing data
   // fstream myfile("xyz.txt",ios::out); //the above and this line both are same
    fstream myfile("xyz.txt",ios::out|ios::app);//output mode and as well as append mode
   // ofstream myfile("xyz.txt",ios::app); //same as above
    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed successfully"<<endl<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");  
    obj.getline(arr1,100);
    cout<<"array content is: "<<arr1<<endl;
    obj.close();
}