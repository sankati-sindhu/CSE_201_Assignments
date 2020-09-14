/*==============================|-problem statement-|==============================*/
/*
    Implement a queue data structure in C++ using array.
*/

/*===================================|-solution-|===================================*/

#include <iostream>
#include <stdio.h>
using namespace std;

template<class type, int max>

class Queue{
    int front;
    int rear;
    type array[max];
    public:
    Queue(){
        //when initalized froint and rear are default to -1
        front = -1;
        rear = -1;
    }
    //function to add elements into queue
    void enQueue(type num){
        
        //if the queue is full
        //does not add the element
         if(front == max - 1){
            cout<<"queue full";
            return;
        }
        //if this is the frist element to be added 
        //then rear is updated to point at first element
        (rear == -1)?rear=0:rear;

        //queue is not full
        //element gets added to the front of the que
        cout<<num<<"addedd\n";
        array[++front] = num;
    }

    //function to remove the rear element from queue
    type dequeue(){
        //if queue is empty
        //nothing is there to remove
        if(rear == -1){
            cout<<"empty queue\n";
            return -1;
        }
        //stores previous rear to store the index for returning it later
        int temp = rear;

        //if the rear is deleted upto front, we reintialize rear and front to -1(defaults)
        if(rear == front){
            rear = -1;
            front = -1;
        }
        else{
            //removes the rear element by making rear point to the next element in que
            rear++;
        }

        //return the previous rear element
        return array[temp];
    }

    //function returns 1, if it is empty else returns 0
    bool isEmpty(){
        return rear==-1;
    }

    //function displays the elements in stack
    void display(){
        if(rear == -1) {cout<<"empty\n";return;}
        cout<<"queue is\n";
        for(int i=rear;i<front;i++){ 
            cout<<array[i]<<"->";
        }
        cout<<array[front]<<"(front)\n";
    }

};

int main(){

    //driver code to demonstrate the Queue class defined above
    Queue<int, 10> q;
    int choice;
    int num;

    do{
        cout<<"1. enqueue\n"
            <<"2. deque\n"
            <<"3. display\n"
            <<"4. quit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"add>>";
            cin>>num;
            q.enQueue(num);
            break;
         case 2:
            if(!q.isEmpty())
                cout<<q.dequeue()<<" removed\n";
            else
                cout<<"empty\n";
            break;
         case 3:
            q.display();
            break;
        default:
            break;
        }

    }while(choice != 4);
   
    return 0;
}

/*==================================|-sample output-|=================================*/
/*
1. enqueue
2. deque
3. display
4. quit
1
add>>23
23pushed
1. enqueue
2. deque
3. display
4. quit
1
add>>24
24pushed
1. enqueue
2. deque
3. display
4. quit
3
queue is
23->24(front)
1. enqueue
2. deque
3. display
4. quit
2
23 removed
1. enqueue
2. deque
3. display
4. quit
2
24 removed
1. enqueue
2. deque
3. display
4. quit
3
empty
1. enqueue
2. deque
3. display
4. quit
4
*/
