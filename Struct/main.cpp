
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


struct MEEP
{
    string NAME;
    int AGE;
    double SALARY;
} XX;

MEEP GOUP (MEEP);
void COUT (MEEP []);
int COUT (int[]);

int main()
{
    MEEP ARRAY[10];
    char A = 'A';
    char *P;
    
    if (isnumber(A))
    {
        cout << "YEET";
    }
    P = &A;

    XX.NAME = "MIKE";
    XX.AGE = 99;
    XX.SALARY = 10000;
    
   COUT (ARRAY);
    ARRAY[1]= GOUP(XX);
    
    cout << XX.SALARY;
    cout << XX.AGE;
    cout << ARRAY[1].AGE;
    
}

void COUT (MEEP Y[])
{
    cout << Y[0].AGE;
}

MEEP GOUP (MEEP X)
{
    X.AGE = X.AGE + 10;
    return X;
}
