// =======================================================
// Your name: Alejandro Monje
// Compiler:  g++ compiler 
// File type: headher file stack.h
//=======================================================


const int MAX = 10;   // The MAX number of elements for the stack
                      // MAX is unknown to the client

typedef int el_t;      // the el_t type is int for now
// el_t is unknown to the client
//-------------------------------------------------------


class stack
{ 
  
 private: // to be hidden from the client
  
  el_t     el[MAX];       // el is  an array of el_t's
  int      top;           // top is index to the top of stack
  
 public: // prototypes to be used by the client
  // Note that no parameter variables are given
  
  // exception handling classes  
  class Overflow{};   // thrown when the stack overflows
  class Underflow{};  // thrown when the stack underflows
  
  stack();   // constructor to create an object
  ~stack();  // destructor  to destroy an object
  
  // PURPOSE: if not full, enters an element at the top;
  //          otherwise throws an exception - Overflow
  // PARAMETER: pass the element to be pushed
  void push(el_t);
  
  // PURPOSE: if not empty, removes and gives back the top element;
  //          otherwise throws an exception - Underflow
  // PARAMETER: provide variable to receive the popped element (pass by ref)
  void pop(el_t&);
  
  // PURPOSE: if not empty, gives the top element without removing it;
  //          otherwise, throws an exception - Underflow
  // PARAMETER: I must provide a variable to recieve the top elem by (pass by ref)
  void topElem(el_t&);
  
  // Must add good comments for each function - See Notes1B
  
  // PURPOSE: Checks to see if the stack is empty, returns false if there is something in it
  //         and returns true if it is empty
  bool isEmpty();
  
  // PURPOSE: Checks to see if the stack is full, returns false if the stack is empty or if
  //         top doens't = MAX - 1. It will return true if full which means top == MAX - 1.
  bool isFull();
  
  // PURPOSE: displayAll will show the content of the stack. It will check if it is empty,
  //         if it is empty then a message saying [ empty ] will appear.
  void displayAll();
  
  // PURPOSE: ClearIt will clear the stack by popping all the elements from the stack. It
  //         will pop while checking if it is empty once it is empty it will stop.
  void clearIt();
  
};  

// Note: semicolon is needed at the end of the header file

