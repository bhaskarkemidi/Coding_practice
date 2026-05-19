/* Time complexity of an algorithm
1. Introduction
2. Types of Time complexity.
3. How to evaluate time complexity.
4. Time complexity of algorithm.
5. conclusion.

//
1. Introduction:
The time complexity of an algorithmis the amount uof time it takes to run as a function
of the length of the input. The length of the input determines how many operations the algorithm will do.
It will provide information about the variance (increase or decrease ) in execution time 
as the number of operations in an algorithm increases or decreases.

//
2. Types of time complexity
Constant time
Linear time
Logarthmic time
Quadratic time

Constant Time:
when an algorithm is not reliant on the input size n, it is said to have constant time with order O (1).
The runtime will always be the same, regardless of the input size n.
ex:
main()
{
    int a;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("a=%d",a);
}

Linear Time O(n):
When the running time of an algorithm rises linearly with the length of the input, it is said to have linear time
complexity.
When a function checks all the values in an input data set, it is said to have Time complexity of order O(n).

Ex:
main()
{
    int a[5]={2,3,5,7,9};
    printf("ELements of a=\n");
    for(int i=0;i<5;i++)
      printf("a=%d",a);
}

Logarthmic Time O(log n):
When an algorithm lowers the amount of the input data in each step, it is said to have a algorithmic Time complexity.
Binary trees and binary search functions are some of the algorithms with Logarthmic time complexity.

Ex:
int bainrySearch(int a[],int l,int r, int x)
{
    if (r >= 1)
    int mid = l+(r - l) / 2;
    if(a[mid] == x)
    return mid;
    if(a[mid] > x)
    return bainrySearch(arr, l, mid - 1, x);
    return bainrySearch(arr, mid + 1, r, x);
}}

Quadratic Time O(n**2):
When the execution time of an algorithm rises non-lineraly (n**2) n square with the length of the input, it is said to 
have a quadratic time complexity.
In general nested loops fall into the quadratic time complexity order, where one loop takes O(n) and if the function 
contains loops inside loops, it takes O(n)*O(n) = O(n**2)
Ex:
for(int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        printf("%d",a[i][j]);
    }
}

//
2. How to evaluate time complexity:

int fib(int n)
{
    int f[n+2];  //+1
    int i;       //+1
    f[0]=0;      //+1
    f[1]=1;      //+1
    //Total time taken = n+5
    for(i =2; i<= n; i++)
    {
        f[i] = f[i -1] + f[i - 2]; //+n
    }
    //Time complexity = O(n+5)=O(n)
    return f[n];          //+1
}
};

//Time complexity of an algorithms

Insertion sort 
Merge sort
Quick sort
Bubble sort
Linear search
Binary search

Insertion sort:
best case : O(n) ->means if the element found in starting iteration.
worst case : O(n**2) ->means if the element found at the end;

Merge sort:
best case and worst case : O(nlogn)

Quick sort:
best case: O(nlogn)
worst case: O(n**2)

Bubble sort:
best case : O(n) ->means if the element found in starting iteration.
worst case : O(n**2) ->means if the element found at the end;

Linear search:
best case : O(1)
worst case : O(n)

Binary search:
Best case: O(1)
worst case: O(logn)

