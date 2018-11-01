#include <iostream>
#include <valarray>
#include "stackval.h"
using namespace std;

int main () {

	stackval stack1;
	char stackelement;
	cout<<"Enter the stack element: ";
    cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
    cout<<"Enter the stack element: ";
    cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
    cout<<"Enter the stack element: ";
	cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
	cout<<"Enter the stack element: ";
	cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
    cout<<"size of the stack now = "<<stack1.getsize()<<endl;
    stack1.clear();//clear the stack
    cout<<"Is stack empty: "<<stack1.isEmpty()<<endl;//make the stack empty
    cout<<"Enter the stack element: ";
    cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
	cout<<"Enter the stack element: ";
    cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
	cout<<"Enter the stack element: ";
    cin>>stackelement;//enter the element of the stack
	stack1.push (stackelement);//put the element in the stack
    cout<<"size of the stack now = "<<stack1.getsize()<<endl;//print the size of the stack


    cout<<"\nNow the second stack:\n\n";


    stackval s1;
    s1.push ('a');//enter the element of the stack
	s1.push ('b');//enter the element of the stack
	s1.push ('c');//enter the element of the stack
	s1.push ('c');//enter the element of the stack
    cout<<"size of the stack now = "<<s1.getsize()<<endl;//print the size of the stack
    s1.clear();//clear the stack
    cout<<"Is stack empty: "<<s1.isEmpty()<<endl;//make the stack empty
	s1.push ('b');//enter the element of the stack
	s1.push ('b');//enter the element of the stack
	s1.push ('b');//enter the element of the stack
	s1.pop();//delete the last element
    cout<<"size of the stack now = "<<s1.getsize()<<endl;//print the size of the stack

    }
