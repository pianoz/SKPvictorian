
#include<stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int start, int finish,)
{
    printf("running");
    struct Stack* stack = createStack(20);
    //array, first is hit y/n, second value is path to it.
    int Hit [20];
    int Path[2];
    for (start != finish){
      start = pickNext(Hit, Path, start, Stack)
    }

    return 0;
}
int pickNext(int[] Hit, int[] Path, int start, Stack* stack ){
  //read through the adjaceny list until an edge is found, test edge weight and
  //use a for loop to select min of them all, and then take that one. once that
  int ew= -1;
  int j=0;
  int indx = start;
  for(j < 19){
    //loop through line reader selecting smallest EW.
    indx = linereader(j,indx);
    j++;
  }
}

int linereader(int j int indx)
{
  int c = 0;
  FILE *fopen( const char * graph.txt, const char * r );
  for(filetext == )
  fclose()
  return c
}




// STACK IMPLEMENTATION BY http://www.geeksforgeeks.org/stack-data-structure-introduction-program/
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{   return stack->top == stack->capacity - 1; }

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{   return stack->top == -1;  }

// Function to add an item to stack.  It increases top by 1
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack.  It decreases top by 1
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
// Driver program to test above functions
int main()
{
    struct Stack* stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    return 0;
}
