#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start, int data);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
struct node *addatpos(struct node *start, int data, int item);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);

int main()
{
    struct node *start=NULL;
    int choice,data,item,pos;
    while(1)
    {
        printf("1.Create List\n ");
        printf("2.Display\n");
        printf("3.Count\n");
        printf("4.Search\n");
        printf("5.Add to empty list / Add at beginning\n");
        printf("6.Add at end\n");
        printf("7.Add after node\n");
        printf("8.Add beofore node\n");
        printf("9.Add at pos\n");
        printf("10.Delete\n");
        printf("11.Reverse\n");
        printf("12.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                start = create_list(start);
                break;
            case 2:
                display(start);
                break;
            case 3:
                count(start);
                break;
            case 4:
                printf("Enter the element to be searched: ");
                scanf("%d",&data);
                search(start, data);
                break;
            case 5:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                start=addatbeg(start,data);
                break;
            case 6:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                start=addatend(start,data);
                break;
            case 7:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element after which to insert: ");
                scanf("%d",&item);
                start=addafter(start,data,item);
                break;
            case 8:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element before which to insert: ");
                scanf("%d",&item);
                start=addatpos(start,data,item);
                break;
            case 9:
                printf("Enter the element to be inserted: ");
                scanf("%d",&data);
                printf("Enter the element pos at which to insert: ");
                scanf("%d",&pos);
                start=addatpos(start,data,pos);
                break;
            case 10:
                printf("Enter the element to be deleted: ");
                scanf("%d",&data);
                start=del(start,data);
                break;
            case 11:
                start=reverse(start);
                break;
            case 12:
                exit(1);
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}

////////DISPLAY///////////
void display(struct node *start)
{
    struct node *p;
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    p=start;
    printf("List is :\n");
    while(p != NULL)
    {
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n\n");
}

////////COUNT////////
void count(struct node *start)
{
    struct node *p;
    int cnt = 0;
    p = start;
    while ( p != NULL)
    {
        p=p->link;
        cnt++;
    }
    printf("Number of elements are %d\n",cnt);
}

/////////SEARCHING ELEMENT//////////
void search(struct node *start, int item)
{
    struct node *p=start;
    int pos=1;
    while(p != NULL)
    {
        if(p->info == item)
        {
            printf("Item %d found at pos %d\n",item,pos);
            return;
        }
        p=p->link;
        pos++;
    }
}

//////////INSERTION AT BEG/////////
struct node *addatbeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link=start;
    start=tmp;
    return start;
}

/////////INSERION AT THE END///////////
struct node *addatend(struct node *start, int data)
{
    struct node *p,*tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->info=data;
    p=start;
    while(p->link != NULL)
    p=p->link;
    p->link=tmp;
    tmp->link=NULL;
    return start;
}

/////////ADD AFTER A NODE////////
struct node *addafter(struct node *start, int data, int item)
{
    struct node *tmp, *p;
    p=start;
    while(p!=NULL)
    {
        if(p->info == item)
        {
            tmp = (struct node *)malloc(sizeof(struct node));
            tmp->info = data;
            tmp->link=p->link;
            //start=tmp->link;
            return start;
        }
        p = p->link;
    }
    printf("%d not present in the list\n",item);
    return start;
}

///////////INSERTION BEFORE A NODE///////////
struct node *addbefore(struct node *start, int data, int item)
{
    struct node *tmp, *p;
    if(start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    if(item == start->info)
    {
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info = data;
        tmp->link=start;
        start=tmp;
        return start;
    }
    p=start;
    while(p->link!=NULL)
    {
        if(p->link->info == item)
        {
            tmp =(struct node *)malloc(sizeof(struct node));
            tmp->info=data;
            tmp->link=p->link;
            p->link=tmp;
            return start;
        }
        p=p->link;
    }
    printf("%d not present in the list\n",item);
    return start;
}
struct node *addatpos(struct node *start, int data, int pos)
{
    struct node *tmp,*p;
    int i;
    p=start;
    for(i=1; i<pos-1 && p!=NULL; i++)
    p=p->link;
    if(p==NULL)
        printf("There are less than %d elements\n",pos);
    else
    {
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        if(pos==1)
        {
            tmp->link=start;
            start=tmp;
        }
        else
        {
            tmp->link=p->link;
            p->link=tmp;
            
        }
    }
   return start;
}

//////CREASTING A LIST//////////
struct node *create_list(struct node *start)
{
    int i, n, data;
    printf("Enter the number od nodes: ");
    scanf("%d",&n);
    start=NULL;
    if(n==0)
        return start;
    printf("Enter the element to be inserted: ");
    scanf("%d",&data);
    start=addatbeg(start,data);
    for(i=2; i<=n; i++)
    {
        printf("Enter the element to be inserted: ");
        scanf("%d",&data);
        start=addatend(start,data);
    }
    return start;
}

// ////////////DELETION OF NODE/////////////
// struct node *del(struct node *start, int data)
// {
//     struct node *p;
//     p=start;
//     while(p->link != NULL)
//     {
//         if(p->link->info == data)
//         {
//             tmp=p->link;
//             p->link=tmp->link;
//             free(tmp);
//             return start;
//         }
//         p=p->link;
//     }
// }

struct node *del(struct node *start, int data)
{
    struct node *tmp, *p;
    if(start == NULL)
    {
        printf("List is empty:");
        return start;
    }
    if(start->info == data)
    {
        tmp=start;
        start=start->link;
        free(tmp);
        return start;
    }
    p=start;
    while(p->link != NULL)
    {
        if(p->link->info == data)
        {
            tmp=p->link;
            p->link=tmp->link;
            free(tmp);
            return start;
        }
        p=p->link;
    }
    printf("element %d not found \n", data);
    return start;
}

/////////REVERSE LINKED LIST///////////

struct node *reverse(struct node *start)
{
    struct node *prev, *ptr, *next;
    prev=NULL;
    ptr=start;
    while(ptr!=NULL)
    {
        next=ptr->link;
        ptr->link=prev;
        prev=ptr;
        ptr=next;
    }
    start=prev;
    return start;
}
