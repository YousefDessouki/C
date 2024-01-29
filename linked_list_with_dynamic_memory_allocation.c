#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

//create a node
struct Node
{
    int val;    
    struct Node *nextPtr;//make a pointer that points to type node structure
}

///create 2 pointers that points to node strcuture
struct Node *currentPointer;
struct Node *previousPointer;

//create a char flag
uint8_t nodeFound;

int main()
{
    //create 4 pointers pointing towards node structure and initalizing them to NULL
    struct Node* headNode=NULL;
    struct Node* secondNode=NULL;///are just for demonstration
    struct Node* thirdNode=NULL;//are just for demonstartion
    struct Node* newNode=NULL;


    //allocate memory in the heap memory for the first 3 nodes;
    headNode=(struct Node*)malloc(sizeof(struct Node));
    secondNode=(struct Node*)malloc(sizeof(struct Node));
    thirdNode=(struct Node*)malloc(sizeof(struct Node));

    ///initlaize all nodes
    headNode -> val = 2;  //arbitary value
    headNode -> nextPtr = secondNode;

    secondNode -> val = 3;
    secondNode -> nextPtr = thirdNode;

    thirdNode -> val = 5;
    thirdNode -> nextPtr = NULL;


///create a new node with the dynamic memory allocation
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newnode->val=4;


    ///assign current,previouspointer to tthe headnode
    currentPointer=headNode;
    previousPointer=headNode;
    nodeFound=0;

//search thorugh the linkedlist
    while(previousPointer->nextPtr!=NULL)
    {
        //if the current pointer value is greater than the newnode value
        if((currentPointer->val)>(newNode->val))
        {
            nodeFound=1;
            newNode->nextPtr=currentPointer;

            if(currentPointer!=headNode)
             previousPointer->nextPtr=newNode;

            else
            headNode=newNode;
        break;
        }
        previousPointer=currentPointer;
        currentPointer=currentPointer->nextPtr;
    }

    if(!nodeFound)
    {
        previousPointer->next=newNode;
        newNode->nextPtr=NULL;
        nodeFound=0;
    }


///delete an elment
currentPointer=headNode;
previousPointer=headNode;
while((previousPointer->nextPtr)!=NULL)
{
    if((currentPointer->val)==(3))
    {
        if(currentPointer==headNode)
        {
            headNode=currentPointer->nextPtr;
        }
        else if(currentPointer->nextPtr==NULL)
        {
            previousPointer->nextPtr=NULL;
        }
        else
        {
            previousPointer->nextPtr=currentPointer->nextPtr;
        }
        free(currentPointer);
        break;
    }
    previousPointer=currentPointer;
    currentPointer=currentPointer->nextPtr;
}

while(1);

}