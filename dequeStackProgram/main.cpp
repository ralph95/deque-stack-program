#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Deque
{
   private:
       struct Node
       {
          string name;
          Node* next;
          Node* prev;
          string value;
		  Node *link;
       };
       Node* head;
       Node* last;
   public:
       Deque()
       {
         head = NULL;
         last = NULL;
       }
       bool empty() const { return head==NULL; }
       friend ostream& operator<<(ostream& ,const Deque& );
       void push_front(const string& );
       void push_back(const string& );
       void Remove(const string& );
};

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
       while( s>curr->name && curr->next != last->next) curr = curr->next;

       if(curr == head)
       {
         Node* temp = new Node;
         temp->name = s;
         temp->prev = curr;
         temp->next = NULL;
         head->next = temp;
         last = temp;
    
       }
       else
       {
       if(curr == last && s>last->name)
       {
         last->next = new Node;
         (last->next)->prev = last;
         last = last->next;
         last->next = NULL;
         last->name = s;
      
       }
       else
       {
         Node* temp = new Node;
         temp->name = s;
         temp->next = curr;
         (curr->prev)->next = temp;
         temp->prev = curr->prev;
         curr->prev = temp;
      
       }
      }
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
    if(dl.empty()) ostr<<" The list is empty. "<<endl;
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

void Deque::Remove(const string& s)
{
    bool found = false;
    if(empty())
    {
      cout<<" This is an empty Queue! "<<endl;
      return;
    }
    else
    {
      Node* curr;
      for(curr = head; curr != last->next; curr = curr->next)
      {
          if(curr->name == s)
          {
             found = true;
             break;
          }
      }
      if(found == false)
      {
       cout<<" The list does not contain specified Node"<<endl;
       return;
      }
      else
      {
         
         if (curr == head && found)
         {
           if(curr->next != NULL)
           {
            head = curr->next;
            delete curr;
            return;
           }
           else
           {
            delete curr;
            head = NULL;
            last = NULL;
            return;
           }
         }
        if (curr == last && found)
        {
         last = curr->prev;
         delete curr;
         return;
        }
       (curr->prev)->next = curr->next;
       (curr->next)->prev = curr->prev;
        delete curr;
     }
  }
}

struct StackNode{
	StackNode *prev, *next;
	string value;
	StackNode *link;
	

};

//Stack Class
class Stack{
	StackNode *first = NULL;
	
	public:
		
		void push(string value); //insert 1 element in the stack
		void pop(); //removes 1 element in the stack
		void printTop(); //print the top value of the stack
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
  cout<<"Stack is Empty";
 else
 {
  StackNode *ptr = first;
  first = first -> link;
  delete(ptr);
 }
}

/*Function to print the element at the top*/

void Stack::printTop()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top in stack is : "<< first->value;
}


int main()
{
    Deque d1;
    int ch;
    string temp;
    Stack st;
    while(1)
    {
      
       cout<<" ------------------------------"<<endl;
       cout<<" Doubly Linked List Program "<<endl;
       cout<<" ------------------------------"<<endl;
       cout<<" 1. Insert at BEGINNING of the Queue"<<endl;
       cout<<" 2. Insert at END of the Queue "<<endl;
       cout<<" 3. Display the Queue "<<endl;
       cout<<" 4. Delete specific string in part of the Queue  "<<endl;
       cout<<" 5. Go to Stack Program"<<endl;
       cout<<" 6. Exit  "<<endl;
       
       cout<<" Enter your choice : ";
       cin>>ch;
       
       
 
		while(cin.fail())
		{
		    cin.clear();
		    cin.ignore();
		    cout << "\nERROR: Not an Integer!!\n\n";
		    cout<<" ------------------------------"<<endl;
       cout<<" Doubly Linked List Program "<<endl;
       cout<<" ------------------------------"<<endl;
       cout<<" 1. Insert at BEGINNING of the Queue"<<endl;
       cout<<" 2. Insert at END of the Queue "<<endl;
       cout<<" 3. Display the Queue "<<endl;
       cout<<" 4. Delete specific string in part of the Queue  "<<endl;
       cout<<" 5. Go to Stack Program"<<endl;
       cout<<" 6. Exit  "<<endl;
		    cout<<"\nEnter your choice : \n";
		    cin>>ch;
		    
		}
       
       cout<<"\n";
       switch(ch)
       {
          case 1: cout<<" Enter String to be inserted in the front of the queue : ";
                  
                  cin>>temp;
                  d1.push_front(temp);
                  break; 
                  
          case 2: cout<<" Enter String to be inserted at the end of the queue: ";
                  cin>>temp;
                  d1.push_back(temp);
                  break;
          
          case 3: cout<<"--------------------------------"<<endl;
          		  cout<<"=T H E  L I S T  C O N T A I N S="<<endl;
				  cout<<"--------------------------------"<<endl;
                  cout<<"-----> "<<d1;
                  break;
                       
                  
                  
          case 4: cout<<" Enter String to be deleted in the queue: ";
                  cin>>temp;
                  d1.Remove(temp);
                  break;
                  
                  
          case 5: 	cout<<"--------------------------------"<<endl;
					cout<<"   S T A C K   F U N C T I O N"<<endl;
					cout<<"--------------------------------\n"<<endl;
					
					 
					
					//Insert elements 
					cout<<"Element inserted: (a)\n";
					st.push("a");
					cout<<"Element inserted: (b)\n";
					st.push("b");
					cout<<"Element inserted: (c)\n";
					st.push("c");
					cout<<"Element inserted: (d)\n";
					st.push("d");
					cout<<"\n";
					st.printTop();
					
					//Removes elements
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.printTop();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.printTop();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.printTop();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.printTop(); 
					cout<<"\n\n";
					break; 
					
			case 6: system("pause");
                 	return 0;
                 	break;	
			
			default: cout<<"Wrong Input!!!!!\n\n";
					 break;
						     
				     

       }
    }
}
