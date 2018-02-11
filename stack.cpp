//=========================================================
//Your name: Alejandro Monje
//Complier:  g++ compiler
//File type: stack implementation file
//=========================================================

using namespace std;  
#include <iostream>
#include <cstdlib>
#include <string>
#include "stack.h"

//PURPOSE:  Constructor must initialize top to be -1 to begin with.
stack::stack()
{
 top = -1; // indicate an empty stack 
}  
//PURPOSE:  Destructor does not have to do anything since this is a static array.
stack::~stack()
{ // nothing to do 

}  
//PURPOSE:  checks top and returns true if empty, false otherwise.
// the stack is empty when the top is == -1
// The stack is empty when there are no operators or operands in it.
bool stack::isEmpty()
{ 
 if (top == -1)
   return true; // returns true if it is empty
 else 
   return false;  // returns false when not empty
}   
//PURPOSE: checks top and returns true if full, false otherwise.
// If the top is == to the MAX - 1 then it is full since the top is = -1
//The stack is full when the amount of operators and operands is at the Max.
bool stack::isFull()
{
 if (top == MAX-1 )
   return true; // returns true if full
 else 
   return false; // returns false if there is still room left  
}
  
//PURPOSE: calls isFull and if true, throws an exception (Overflow)
//   Otherwise, adds an element to el after incrementing top.
//PARAMETER: pass the element (elem) to be pushed 
void stack::push(el_t elem)
{
 if (isFull()) 
   throw Overflow(); // throws Overflow if it is full and there is no space left
 else 
{
 top++; 
 el[top] = elem; 
}
}
 
 //PURPOSE: calls isEmpty and if true, throws an exception (Underflow)
 //  Otherwise, removes an element from el and gives it back.
 //PARAMETER: provide a holder (elem) for the element popped (pass by ref)
void stack::pop(el_t& elem)
{
 if (isEmpty()) 
   throw Underflow();//throw underflow when empty because there is nothing to pop
 else 
{ 
  elem = el[top];
  top--;
}
}
 
// PURPOSE: calls isEmpty and if true, throws an exception (underflow)
//    Otherwise, gives back the top element from el.
//PARAMETER: provide a holder (elem) for the element (pass by ref)
void stack::topElem(el_t& elem)
{ 
if (isEmpty()) 
  throw Underflow();
else 
{
 elem = el[top]; 
} 
}
 
//PURPOSE: dislayAll calls isEmpty and if true, displays [ empty ].
//          Otherwise, diplays the elements vertically.
//Algorithm: Starts at the top and the decrements down until it is less than 0.
 void stack::displayAll()
 { 
   if (isEmpty()) cout << "[ empty ]" << endl;
   else for (int i=top; i>=0; i--)
     { 
      cout << el[i] << endl; 
      cout << "--------------" << endl;
     }
 }
 
 
//PURPOSE: pops all elements from the stack to make it empty if it is not empty yet.
//Algortithm: While it isn't empty it will keep popping.
void stack::clearIt()
{
  int a = top; // created an int variable named a and set it = to top
               // so that I don't change the top.
    while(!isEmpty())
    pop(a);
}
 

