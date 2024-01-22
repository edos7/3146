/*Emir Dostovic*/
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

//struct 
struct CartesianCoordinate
{
    float x,y;
};
//declaring method calculateDistance
float calculateDistance(CartesianCoordinate *c1, CartesianCoordinate *c2);
//main method containing variables, structures, pointers, print statements, input storage, and function calls
int main()
{
    float distance; 
    CartesianCoordinate p1,p2;
    CartesianCoordinate *a1, *a2;
    a1=&p1;
    a2=&p2;
    cout <<"Enter coordinate x: ";
    cin >> a1->x;
    cout <<"Enter coordinate y: ";
    cin >> a1->y;
    cout <<"Enter coordinate x: ";
    cin >> a2->x;
    cout << "Enter coordinate y: ";
    cin >> a2->y;
    distance = calculateDistance(a1,a2);
    cout << distance << endl;

}
//calculateDistance accepts pointers to structures and references their coordinates to perform a math function and returns a float
float calculateDistance(CartesianCoordinate *c1, CartesianCoordinate *c2)
{
    return sqrt(((c2->x-c1->x)*(c2->x-c1->x))-((c2->y-c1->y)*(c2->y-c1->y)));
}