/*Emir Dostovic*/
#include <iostream>
using namespace std;
int main()
{
    //variable declaration
    int myInt, *myPointer;
    //variable initialization
    myInt=15;
    myPointer=&myInt;
    /*print statements with & point to memory
      print statements with * point to value stored at memory location
      print statements with just variable name point
      to the value at the address of the variable
    */
    cout << &myPointer << endl;
    cout << *myPointer << endl;
    cout << myInt << endl;
    cout << *myPointer <<endl;
    myInt=10;
    cout << &myInt << endl;
    cout << *myPointer <<endl;
    cout << myInt <<endl;
    cout << *myPointer << endl;

}
