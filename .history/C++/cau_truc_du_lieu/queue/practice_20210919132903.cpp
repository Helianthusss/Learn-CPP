#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

	const int Max = 50;                 // Size of the array            
    int Front;
	int Rear;    
	int Queue[Max];            

void Initialize()
{
	Front = 0; 	// Queue rong
  	Rear = -1;
 }


bool IsEmpty(int Queue[]) 
{
    return (Front > Rear);     	
}


bool IsFull(int Queue[]) 
{
    //return (Rear == Max-1 && Front == 0);
    
    if  (Rear == Max-1 && Front == 0)
    	return true;
    else
    	return false;
}

void EnQueue(int Queue[], int Value)
{
if (IsFull(Queue))            // Queue is full
{
        printf("OverFlow\n");
 }
else
{
	++Rear;
	Queue[Rear] = Value;    // Add the element to the back
}
 }


int  DeQueue(int Queue[]){
	int Item;
	if (IsEmpty(Queue))		        // Queue is empty
			printf("\nUnderFlow");
	else{
			Item = Queue[Front];	// Post the Front element
			++Front;
	    	return Item; 
	}
}
int main()    // Nhap vao Num so nguyen va In cac so chan ra man hinh
{
    int i, Num, Data,sum=0;

    Initialize();

    printf("\nHow many elements for the queue? : ");   scanf("%d", &Num); 
   
    // pushing Number elementas in the stack.
     printf("\nPushing %d elementas in the Queue: \n", Num);     
    for (i=0; i<Num; i++)
    {
        scanf("%d",&Data);
        EnQueue(Queue, Data);
    }
    printf("\nCurrent size of Queue is Front = %d and Rear = %d \n", Front, Rear);
    for(int i=0;i<Num;i++){
        if(%2 != 0 && Data % 3 ==0) sum += Data;
    }
    printf("\nSum = %d",sum);
	getch();
/*	
//List all the elements from the Queue
    printf("\nList all the elements from the Queue:  ");
    for(i=0; i<Num; i++)
    {
    	  	Data = DeQueue(Queue);	
			printf("  %d  ", Data);                
     }

    printf("\nCurrent size of Queue is Front = %d and Rear = %d", Front, Rear);*/

    return 0;
}