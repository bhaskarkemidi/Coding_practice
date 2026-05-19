//Ways yo create threads in c++11
/*
using :
1. Function pointer
2. Lambda functions
3. functors
4. member functions
5. static member functions

Note::: If we create multiple threads at same time it doesnot guarrantee which one will start first.
*/

/***************************************/
//1.Function pointer
 #include <iostream>
 #include <thread>
 using namespace std;
// void fun(int x)
// {
//     while (x-- > 0){
//     cout << x << endl;
//     }
// }
// int main()
// {
//     std::thread t(fun,10);
//     t.join();
//     //output: 9 8 7 6 5 4 3 2 1 0
//     return 0;
// }

/***************************************/
// 2. Lambda functions


// int main()
// {
//     //we can directly inject lambda at thread creation time.
    
//     // auto fun = [](int x){
//     //     while (x-- > 0){
//     //         cout<<x<<endl;
//     //     }
//     // };
//     std::thread t([](int x){
//         while (x-- > 0){
//             cout<<x<<endl;
//         }
//     },10);
//     t.join();
//     return 0;
// }

/***************************************/
//3. Function (function objects)

// class Base{
//     public:
//     void operator ()(int x){
//         while(x-- > 0){
//             cout<<x<<endl;
//         }
//     }
// };

// int main()
// {
//     std::thread t((Base()),10);
//     t.join();
//     return 0;
// }

/***************************************/
//4. Member functions


// class Base {
//     public:
//     void run(int x){
//         while(x-- > 0){
//         cout<<x<<endl;
//         }
//     }
// };

// int main()
// {
//     Base b;
//     std::thread t(&Base::run, &b, 10);
//     t.join();
//     return 0;
// }

/***************************************/
//5. Static member functions
// Note:: For static member function we can call using class name without using objects.


class Base {
    public:
    static void run(int x)
    {
        while (x-- > 0)
        {
            cout<<x<<endl;
        }
    }
};

int main()
{
    std::thread t(&Base::run,10);
    t.join();
    return 0;
}

