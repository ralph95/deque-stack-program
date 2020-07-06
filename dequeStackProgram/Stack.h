
#ifndef Stack_H
#define Stack_H


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;



class Stack{
	
	struct StackNode
	{
		StackNode *prev, *next;
		string value;
		StackNode *link;
	
	};
	
	StackNode *first = NULL;
	
	
	public:
		
		void push(string value); //insert 1 element in the stack
		void pop(); //removes 1 element in the stack
		void top(); //print the top value of the stack
		bool isempty();
		
};

/*If the stack is empty return true*/
bool Stack::isempty()
{
 	if(first == NULL)
 		return true; 
 	else
 		return false;
}

/*Function to insert one element at the stack*/

void Stack::push (string value)
{
    StackNode *ptr = new StackNode();
    ptr->value = value;
    ptr->link = first;
    first = ptr;
}

/*Function to removes one element at the stack*/

void Stack::pop ( )
{
    if ( isempty() )
    {
    	cout<<"Stack is Empty";
	}
    
 	else
	{
 	    StackNode *ptr = first;
 		first = first -> link;
  		delete(ptr);
    }
}

/*Function to print the element at the top*/

void Stack::top()
{
	if ( isempty() )
	{
		cout<<"Stack is Empty";
	}
 	 
    else
        cout<<"Element at top in stack is : "<< first->value;
}
#endif // _STACK_H_
