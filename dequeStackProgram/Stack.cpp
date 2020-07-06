#include "Stack.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


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
