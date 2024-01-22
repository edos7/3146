//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};


//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
int comparePatientsByAge(const void *a, const void *b)
{   
    const struct patient *sA =  (const struct patient *)a;
    const struct patient *sB =  (const struct patient *)b;

    if(sA->age==sB->age)
        return 0;
    else if(sA->age<sB->age)
        return -1;
    else
        return 1;
}

void displayPatientList(patient list[],int size)
{
    for(int i =0; i<size;i++)
    {
        cout << "----------------------------"<<endl;
        cout << "Patient Age:" << list[i].age << endl;
        cout << "Patient Name: " << list[i].name << endl;
        cout << "Patient Balance: " << list[i].balance << endl;

    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE
int comparePatientsByBalance(const void *a, const void *b)
{   
    const struct patient *sA =  (const struct patient *)a;
    const struct patient *sB =  (const struct patient *)b;

    if(sA->balance==sB->balance)
        return 0;
    else if(sA->balance<sB->balance)
        return -1;
    else
        return 1;
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)
int comparePatientsByName(const void *a, const void *b)
{   
    const struct patient *sA =  (const struct patient *)a;
    const struct patient *sB =  (const struct patient *)b;

    return strncmp(sA->name,sB->name,sizeof(sA->name));
    
}

//  The main program
int main()
{
    int total_patients = 5;
    
    //  Storing some test data
    struct patient patient_list[5] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Mario O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };
    
    
    cout << "Patient List: " << endl;
    
    displayPatientList(patient_list,total_patients);

    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    qsort(patient_list,total_patients,sizeof(patient),comparePatientsByAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    displayPatientList(patient_list,total_patients);
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort(patient_list,total_patients,sizeof(patient),comparePatientsByBalance);

    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    displayPatientList(patient_list,total_patients);

    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort(patient_list,total_patients,sizeof(patient),comparePatientsByName);
    
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    displayPatientList(patient_list,total_patients);
    
    cout << endl;
    
    return 0;
}
