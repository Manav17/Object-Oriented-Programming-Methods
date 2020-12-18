
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
//#include <conio.h>


using namespace std;


//Prototype
void CALCULATE (float *, float *, float &, float &, float &, float &); //(NUM1, NUM2, ADD, SUB, SUB, MULTI)


int main ()
{
    
    char AGAIN = 'y';
    
    //Intro
    cout << "\n\tWelcome To The Memory Pointer Arithmetic Calculator";
    
    while ((AGAIN == 'y') or (AGAIN == 'Y'))
    {
        
        float NUM1, NUM2;
        float ARRY[10];
        float *PTR1, *PTR2, **PTR3;
        float ADDITION, SUBTRACTION1, SUBTRACTION2, MULTIPLICATION;
        
    //Initializations
        NUM1 = 0;
        NUM2 = 0;
        
        PTR1 = &NUM1;
        PTR2 = &NUM2;
        
        ADDITION = 0;
        SUBTRACTION1 = 0;
        SUBTRACTION2 = 0;
        MULTIPLICATION = 0;

        ARRY[0] = 0;
        
        PTR3 = &PTR2;
     
    //Input
        cout << "\n\n\tEnter Value For Number 1 : ";
        cin >> *PTR1;
        
        cout << "\n\tEnter Value For Number 2 : ";
        cin >> *PTR2;
        
    //Call Functions
        CALCULATE (PTR1, PTR2, ADDITION, SUBTRACTION1, SUBTRACTION2, MULTIPLICATION);
    
    //Output
        cout << "\n\n\tCalculations:";
        
        cout << "\n\n\t" << *PTR1 << " + " << *PTR2 << " = " << ADDITION;
        cout << "\n\t" << *PTR1 << " - " << *PTR2 << " = " << SUBTRACTION1;
        cout << "\n\t" << *PTR2 << " - " << *PTR1 << " = " << SUBTRACTION2;
        cout << "\n\t" << *PTR1 << " * " << *PTR2 << " = " << MULTIPLICATION;
        
        cout << "\n\n\tWould You Like To Run This Again (Y or N) : ";
        cin >> AGAIN;
        
        system ("clear");
        
    }
    
}


//Definitions
void CALCULATE (float *A, float *B, float &ADD, float &SUB1, float &SUB2, float &MULTI)
{
    
    //Calculations
    ADD = *A + *B;
    SUB1 = *A - *B;
    SUB2 = *B - *A;
    MULTI = *A * *B;
    
}

