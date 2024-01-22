/*Emir Dostovic*/
#include <iostream>
using namespace std;

//swapInt method declaration accepts two pointers that point to num1 & num2
void swapInt(int *a, int *b); 
//main method 
int main() 
{
    //variable declaration
    int num1, num2, *n1, *n2;
    //print prompts and input storage   
    cout << "Please enter an integer: ";  
    cin >> num1;
    cout << "Please enter an integer: ";
    cin >> num2;
    //points n1 and n2 to num1 and num2
    n1=&num1;
    n2=&num2;
    //call to the swampInt 
    swapInt(n1,n2);
    //print statements 
    cout << num1 << endl;
    cout << num2 << endl;
}
//Swamp int method stores a into temp then points a to b and b to temp
void swapInt(int *a, int *b) 
{
    int temp = *a;
    *a=*b;
    *b=temp;
}