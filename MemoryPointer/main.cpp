
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

    float NUM1, NUM2, SIZE = 10;
    float ARRY[SIZE];
    float *PTR1, *PTR2, **PTR3, *PTR_ARRY[SIZE];
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
    
    
    //Array cout

    for (int Z = 0; Z < SIZE; Z++)
    {
        
        cout << "\n\t" << PTR_ARRY [Z];
        cout << "\n\t" << PTR_ARRY + Z;
        
    }
    
    for (int B = 0; B < SIZE; B++)
    {
        cout << "\n\tNUM " << ARRY [B];
        cout << "\n\t&NUM " << &ARRT [B];
        cout << "\n\t&PTR_NUM1 " << &PTR_ARRY [B];
        cout << "\n\t*PTR_NUM1 " << *PTR_ARRY [B];
        cout << "\n\t*PTR_NUM1 " << *(*PTR_ARRY + B);
        cout << "\n\tPTR_NUM1 " << PTR_ARRY [B] << "\n";
        
        
    }
///SORTING

    for (int C = 0; C < SIZE - 1;)
    {
        for  (int H= 0; H < SIZE -C -1; H++)
        {
            
            X = *PTR_NUM2 [C];
            Y = *PTR_NUM2 [C + 1];
            COUNT++;
            if (X < Y)
            {
                
                swap(PTR_NUM2 [C], PTR_NUM2 [C+1]);
                
                
            }
            else C++;
        }
        
    }
    cout << "\n\t count" << COUNT;
    
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

