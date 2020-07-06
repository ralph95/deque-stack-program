#include "Deque.h"

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void Deque::pop_front(){
	    if(empty())
    	{
           	cout<<"List is Empty\n"<<endl;
    	}
	
		else
		{
			Node* temp = head;
			head = head->next;
			
			if (head == NULL)
				last = NULL;
			else
				head->prev = NULL;
			free(temp);
		}
			
		
	
}

void Deque::pop_back(){
		if(empty())
    	{
           	cout<<"List is Empty\n"<<endl;
    	}
	
		else
		{
			Node* temp = last;
			last = last ->prev;
			
			if (last == NULL)
				head = NULL;
			else
				last->next = NULL;
			free(temp);
		}
			
		

}



void Deque::push_back(const string& s)
{
    // Insertion into an Empty List.
    if(empty())
    {
       Node* temp = new Node;
       head = temp;
       last = temp;
       temp->prev = NULL;
       temp->next = NULL;
       temp->name = s;
    }
    else
    {
       Node* curr;
       curr = head;
       
         last->next = new Node;
         (last->next)->prev = last;
         last = last->next;
         last->next = NULL;
         last->name = s;
      
    }
}


void Deque::push_front(const string& s)
{
    // Insertion into an Empty List.
    if(empty())
    {
       Node* temp = new Node;
       head = temp;
       last = temp;
       temp->prev = NULL;
       temp->next = NULL;
       temp->name = s;
    }
    else
    {
    	Node* temp = new Node;
    	temp->name = s;
    	temp->prev=NULL;
    	temp->next=head;
        head=temp;
       
    }
}




ostream& operator<<(ostream& ostr, const Deque& dl )
{
    if(dl.empty()) ostr<<" The list is empty. \n"<<endl;
    else
    {
        Deque::Node* curr;
        for(curr = dl.head; curr != dl.last->next; curr=curr->next)
          ostr<<curr->name<<" ";
        ostr<<endl;
        ostr<<endl;
        return ostr;
    }
}


void Deque::front()
{
	if(empty())
    	{
           	cout<<"List is Empty\n"<<endl;
           	
    	}
    else	
		cout<<head->name<<endl;
	
}

void Deque::back()
{
	if(empty())
    	{
           	cout<<"List is Empty\n"<<endl;
           	
    	}
    else	
		cout<<last->name<<endl;
	
}


