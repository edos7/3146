/*Emir Dostovic
  Used ChatGPT to resolve Segmentation Error
  The solution as far as im able to understand was 
  in creating methods that handle each particular task of the code
  my previous itteration had the same logic nested within the main method
  but it kept returning errors upon any attempt to sort
  additionally my completion of 2d IS the following program
  it already resolves the requests made from 2e & 2f  */
#include <iostream>
using namespace std;
//Methods 
void swap(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
/* Sorts the pointer array by checking all adjacent values 
   in ascending order and compares their values pointed to by the pointer
   if lower index position is larger than the higher
   then it swaps the hexadecimal memory references cointained within the array 
*/
void sort(int *my_ptrs[], int size)
{
    for(int i=0; i<size-1;i++)
        for(int j=0; j<size-i-1;j++)
            if(*my_ptrs[j]>*my_ptrs[j+1])
                swap(my_ptrs[j],my_ptrs[j+1]);
}
//prints values pointed to by pointers at index
void print(int *my_ptrs[], int size)
{
    for(int i=0; i<size; i++)
        std::cout << *my_ptrs[i] << " " ;
}
//prints hexadecimal location values of pointers
void print_locations(int *my_ptrs[], int size)
{
    for(int i=0; i<size; i++)
        std::cout << &my_ptrs[i] << " " ;
}
// main function
int main()
{
    //Size and array initialization and declaration 
    int size = 4;
    int my_ints[size];
    int *my_ptrs[size];
    
    //for loop capturing user input and storing it into arrays
    for(int i=0; i<size; i++)
    {
        cout << "Please Enter an Integer:";
        cin >> my_ints[i];
        my_ptrs[i]=&my_ints[i];
    }
    /*calls sort function to sort values in ascending order
      and prints values pointed to by pointers and their hexadecimal
      values */
    sort(my_ptrs,size);
    print(my_ptrs,size);    
    cout << endl;
    print_locations(my_ptrs,size);

    
}