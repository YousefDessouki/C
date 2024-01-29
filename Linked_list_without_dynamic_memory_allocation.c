#include>stdio.h>

///define the total number of nodes allowed
#define TOTAL_NODES 25


//Create the node structure for each element in the linked list
struct Node
{
    uint8_t locationIsAvailable;
    uint32_t __attribute__((packed))val;
    struct __attribute__((packed))Node *nextPtr;
};

//reserve memory for 25 nodes.  This array is only used for memory allocation.
struct Node listReservedMemory[TOTAL_NODES];

//Create two pointers that will be used to search the linked list and add or delete nodes
struct Node *currentPointer;
struct Node *previousPointer;

//create the newNode that will be used to place data within the list
struct Node *newNode;

//create node designation for the first node in the list
struct Node *headNode;

//create a variable that will be used as a flag to denote that the search found a node that 
// we were looking for
uint8_t nodeFound;


int main()
{
    //make the currentpointers points to the first elment in the array
    currentPointer=&listReservedMemory[0];
    uint8_t i;
    

    //initialize all list locations
    for(i = 0; i < TOTAL_NODES; i++)
    {
        currentPointer->locationIsAvailable = 1;///set the location to make all nodes aviable to us
        currentPointer->val = 0; ///clearing the value
        currentPointer->nextPtr = NULL;
        currentPointer++;
    }


    //initialize some nodes to demonstrate the search
    currentPointer = &listReservedMemory[0]; 
    headNode = &listReservedMemory[0];    
    
    headNode -> val = 2;
    headNode -> locationIsAvailable = 0;
    headNode -> nextPtr = ++currentPointer;
    
    currentPointer -> val = 3;
    currentPointer -> locationIsAvailable = 0;
    currentPointer -> nextPtr = ++currentPointer;
    
    currentPointer -> val = 5;
    currentPointer -> locationIsAvailable = 0;
    currentPointer -> nextPtr = NULL;
    
    newNode = NULL;

    //find the first elment that is free
    currentPointer = &listReservedMemory[0];   
    
    for(i = 0; i < TOTAL_NODES; i++)
    {
        if(currentPointer ->locationIsAvailable)
        {
            newNode = currentPointer;
            newNode -> locationIsAvailable = 0;
            break;
        }

        currentPointer++;            
    } 
///to add an elment

    if(newNode!=NULL)
    {
        newNode->val=4;
        ///
        currentPointer = headNode;
        previousPointer = headNode;
        nodeFound = 0;


        while(previousPointer -> nextPtr != NULL)
        {
            if((currentPointer -> val) > (newNode -> val))
            {
                nodeFound = 1;
                newNode -> nextPtr = currentPointer;
            
                if(currentPointer != headNode)
                    previousPointer -> nextPtr = newNode;
            
                else
                    headNode = newNode;

                break;
            }

            previousPointer = currentPointer;        
            currentPointer = currentPointer -> nextPtr;
        } 

//Check if a node was found.  If not, put the value at the end of the list    
        if(!nodeFound)
        {
            previousPointer -> nextPtr = newNode;
            newNode -> nextPtr = NULL;        
            nodeFound = 0;
        }
    
        nodeFound = 0;
    }   

    ///to delete 
     currentPointer = headNode;
    previousPointer = headNode;
    
    while(previousPointer -> nextPtr != NULL)
    {
        if((currentPointer -> val) == 3)
        {
            if(currentPointer == headNode)
            {
                headNode = currentPointer -> nextPtr;
            }
            
            else if(currentPointer -> nextPtr == NULL)
            {
                previousPointer -> nextPtr = NULL;
            }
            
            else
            {
                previousPointer -> nextPtr = currentPointer -> nextPtr;
            }
            
            currentPointer -> locationIsAvailable = 1;
            currentPointer -> nextPtr = NULL;
            break;            
        }

        previousPointer = currentPointer;        
        currentPointer = currentPointer -> nextPtr;
    }   

}