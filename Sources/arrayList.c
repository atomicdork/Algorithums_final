#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Must match the DYNAMIC_RESIZE #define in main.c
#define DYNAMIC_RESIZE 0

struct List
{
    int capacity;
    int numEntities;
    int* entities;
};

// #define Tells the compiler to substitute the first term with everything to the right of it
#define ARRAY_LIST_CAPACITY 50

// Reserves and initialises memory for a new list
struct List* listConstructor()
{
    // The value we will return. This is a pointer to a List structure.
    struct List* arrayList;

    // Reserve memory for the list structure and for the elements we want to store
    arrayList = malloc(sizeof(struct List));
    arrayList->entities = malloc(ARRAY_LIST_CAPACITY * sizeof(int));

    // Set sensible default values
    arrayList->capacity = ARRAY_LIST_CAPACITY;
    arrayList->numEntities = 0;

    // And return the created list
    return arrayList;
}

// Releases memory associated with the given list
void listDestructor(struct List* list)
{
    // Free the memory where entities are stored
    // This must happen before we release the list structure memory
    free(list->entities);

    // Now we can free the list itself
    free(list);
}

void listResize(struct List* list, int newSize)
{
    // The list is already big enough to store the number of elements requested
    if(newSize <= list->capacity)
    {
        // In this case do nothing
        return;
    }

    // Otherwise reallocate the entities array
    list->entities = realloc(list->entities, newSize * sizeof(int));

    // And update our capacity
    list->capacity = newSize;
}

// Add a new element to our list
int listAdd(struct List* list, int entity)
{
    // If our list is already full then we cannot add a new item
    if(list->numEntities >= list->capacity)
    {
        if(DYNAMIC_RESIZE == 0)
        {
            // In this case we should simply tell the user this by returning 0
            // Once a return statement is reached in a function no other code is
            // executed so we do not need to worry about anything below here.
            return 0;
        }
        else
        {
            // Call our list resize function so that we now have room for more elements
            // Once this has been done, since we have not executed a return statement,
            // we will continue to the code below which adds a new element
            listResize(list, list->capacity * 2);
        }
    }

    // Set the slot of the next free entity to the value we are given
    // If we current have 0 elements stored then we save in slot 0 and so on
    list->entities[list->numEntities] = entity;

    // Update our entity count
    list->numEntities++;

    // And return 1 to indicate success
    return 1;
}

void listDisplay(struct List* list)
{
    // Start by printing an opening square bracket to denote the start of our list
    printf("[");

    // We know that our list is filled from element 0 to element list->numEntities
    // so we can simply iterate over those values and print them
    for(int i = 0; i < list->numEntities; i++)
    {
        // Print a comma before the value after element 0
        if(i > 0)
        {
            printf(",");
        }

        // Print the current value
        printf(" %d", list->entities[i]);
    }

    // Finally print a closing square bracket
    printf(" ]");
}

int listRead(struct List* list, int index, int* entity)
{
    // If the requested index is invalid then return 0 to indicate failure
    if(index < 0 || index >= list->numEntities)
    {
        return 0;
    }

    // Otherwise set entity to the requested element
    *entity = list->entities[index];

    // And return 1 to indicate success
    return 1;
}

int listSearch(struct List* list, int entity)
{
    // Check each occupied element in the list in turn
    for(int i = 0; i < list->numEntities; i++)
    {
        // If the current element matches the requested one
        if(list->entities[i] == entity)
        {
            // Return its index
            return i;
        }
    }

    // If we didn't execute the return in the loop above then the
    // entity was not found. In this case we return -1.
    return -1;
}

void listRemove(struct List* list, int index)
{
    // If the index is invalid then do nothing
    if(index < 0 || index >= list->numEntities)
    {
        return;
    }

    // memmove takes the address to move data to, the address to take data from
    // and the number of bytes to move. The number of bytes is given by
    // (number of elements)*sizeof(element type)
    int elementCount = list->numEntities - index;
    memmove(&list->entities[index], &list->entities[index+1], elementCount * sizeof(int));

    // Now update the number of elements in our list
    list->numEntities--;
}

int listSize(struct List* list)
{
    return list->numEntities;
}

int listIsEmpty(struct List* list)
{
    // Use our size function rather than accessing the variable directly.
    // If we change the way the size is stored this will minimise the number of changes
    // we need to make.
    if(listSize(list) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// pointer a switiches position with pointer b
void swap(int* a, int* b)
{
    int hold;

    hold = *a;
    *a = *b;
    *b = hold;
}

void listBubbleSort(struct List* list)
{
    int count = 0;
    while(count < (listSize(list)*listSize(list)))
    {
        for(int i = 0; i < listSize(list); i++)
        {
            if(list->entities[i] >  list->entities[i+1])
            {
                swap(&list->entities[i],  &list->entities[i+1]);
            }
            else
            {
                count++;
            }
        }
    }
}
