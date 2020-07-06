#include <iostream>
#include <cstdlib>
#include <string>
#include "Stack.h"
#include "Deque.h"
using namespace std;



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
       cout<<" 4. Pop front()  "<<endl;
       cout<<" 5. Pop back() "<<endl;
       cout<<" 6. Front of the Queue  "<<endl;
	   cout<<" 7. Last of the Queue  "<<endl;
       cout<<" 8. Go to Stack Program"<<endl;
	   cout<<" 9. Exit  "<<endl;
	   cout<<"\nEnter your choice : \n";
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
	        cout<<" 4. Pop front  "<<endl;
	        cout<<" 5. Pop front  "<<endl;
	        cout<<" 6. Front of the Queue  "<<endl;
	        cout<<" 7. Last of the Queue  "<<endl;
	        cout<<" 8. Go to Stack Program"<<endl;
	        cout<<" 9. Exit  "<<endl;
		    cout<<"\nEnter your choice : \n";
		    cin>>ch;
		}
       
       cout<<"\n";
       
       switch(ch)
       {
          case 1:   cout<<" Enter String to be inserted in the front of the queue : ";
                	cin>>temp;
                  	d1.push_front(temp);
                 	break; 
                  
          case 2:   cout<<" Enter String to be inserted at the end of the queue: ";
                    cin>>temp;
                    d1.push_back(temp);
                    break;
          
          case 3:   cout<<"--------------------------------"<<endl;
          		    cout<<"=T H E  L I S T  C O N T A I N S="<<endl;
				    cout<<"--------------------------------"<<endl;
                    cout<<"-----> "<<d1;
                    break;
                  
          case 4:   cout<<"Pop Front is Activated!!\n\n";
                    d1.pop_front();
                    break;
                    
          case 5:   cout<<"Pop Back is Activated!!\n\n";
                    d1.pop_back();
                    break;
                    
          case 6:   cout<<"Front of the Queue:\n\n";
                    d1.front();
                    cout<<"\n";
                    break;
                    
          case 7:   cout<<"Last of the Queue:\n\n";
                    d1.back();
                    cout<<"\n";
                    break;
                    
          case 8: 	cout<<"--------------------------------"<<endl;
					cout<<"   S T A C K   F U N C T I O N"<<endl;
					cout<<"--------------------------------\n"<<endl;
					//Insert elements for stacks
					cout<<"Element inserted: (a)\n";
					st.push("a");
					cout<<"Element inserted: (b)\n";
					st.push("b");
					cout<<"Element inserted: (c)\n";
					st.push("c");
					cout<<"Element inserted: (d)\n";
					st.push("d");
					cout<<"\n";
					st.top();
					
					//Removes elements
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.top();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.top();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.top();
					cout<<"\n\nPop function is executed. \n";
					st.pop();
					st.top(); 
					cout<<"\n\n";
					break; 
					
		  case 9:   system("pause");
                 	return 0;
                 	break;	
			
		 default:   cout<<"Wrong Input!!!!!\n\n";
					break;
						     
				     

       }
    }
}
