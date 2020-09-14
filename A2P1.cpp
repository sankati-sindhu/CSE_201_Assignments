/*==============================|-problem statement-|==============================*/
/*
    Implement a STACK data structure in C++ using array.
*/

/*===================================|-solution-|===================================*/

#include <iostream>
#include <stdio.h>
using namespace std;

//template for stack
//type is the type of stack(int, chr, float, double, or any other user defined class)
//max is the maximum size of the array which stack is intialized
template<class type, int max>

class Stack{
    int top;
    type array[max];
    public:
    Stack(){
        //when initalized top is default to -1
        top = -1;
    }
    //function to add elements into stack
    void push(type num){
        
        //if the stack is filled
        // does not add the element
         if(top == max - 1){
            cout<<"stack overflow";
            return;
        }
        //stack is not filled
        //element gets added to the top of stack
        cout<<num<<"pushed\n";
        array[++top] = num;
    }

    //function to remve the top element from stack
    type pop(){
        //if stack is empty
        //nothing is there to pop
        if(top == - 1){
            cout<<"stackunderflow\n";
            return -1;
        }
        //removes the top element by  deincrementing top  by 1 
        //stack return the previous top element
        return array[top--];
    }

    //function returns 1, if it is empty else returns 0
    bool isEmpty(){
        return top==-1;
    }

    //function displays the elements in stack
    void display(){
        if(top == -1) {cout<<"empty\n";return;}
        cout<<"stack is\n";
        for(int i=top;i>=0;i--){ 
            cout<<array[i]<<"\n";
        }
    }

    //return the top element if stack not empty
    type peek(){
        return top!=-1?array[top]:-1;
    }

};

int main(){

    //driver code to demonstrate the Stack class defined above
    Stack<int, 10> s;
    int choice;
    int num;

    do{
        cout<<"1. push\n"
            <<"2. pop\n"
            <<"3. display\n"
            <<"4. peek\n"
            <<"5. quit\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"push>>";
            cin>>num;
            s.push(num);
            break;
         case 2:
            if(!s.isEmpty())
                cout<<s.pop()<<" popped\n";
            else
                cout<<"empty\n";
            break;
         case 3:
            s.display();
            break;
         case 4:
            cout<<s.peek()<<"\n";
            break;
        default:
            break;
        }

    }while(choice != 5);
   
    return 0;
}

/*==================================|-sample output-|=================================*/
/*
1. push
2. pop
3. display
4. peek
5. quit
1
push>>23
23pushed
1. push
2. pop
3. display
4. peek
5. quit
1
push>>24
24pushed
1. push
2. pop
3. display
4. peek
5. quit
2
24 popped
1. push
2. pop
3. display
4. peek
5. quit
3
stack is
23
1. push
2. pop
3. display
4. peek
5. quit
4
231. push
2. pop
3. display
4. peek
5. quit
5
*/
