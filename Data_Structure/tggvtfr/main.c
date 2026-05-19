/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *create(int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr != NULL)
    {
        ptr->data =data;
        ptr->link =NULL;
        
    }
    return ptr;
}
void display(struct node* start)
{
    printf("List: ");
    while(start)
    {
        printf("%d\t",start->data);
        start=start->link;
    }
}
int main()
{
    //struct node *ptr = (struct node*)malloc(sizeof(struct node));
    int n;
    int node_data;
    struct node *start=NULL;
    struct node *head = NULL, *last = NULL;
    printf("Howmany nodes you want:");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("data you want to enter for the %d node: ",i);
        scanf("%d",&node_data);
        start = create(node_data);
        if (start == NULL)
        {
             head = start;
        }
        else
        {
            start->link = last;
        }
        last = start;
    }
    display(start);
    return 0;
}
