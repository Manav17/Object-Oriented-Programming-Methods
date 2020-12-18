
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "meep.h"
#include "num.h"

using namespace std;


///float GetX ();
///float GetY ();

///void SetX (float);
///void SetY (float);
///void Setall (float, float);

///float Add ();
///float Sub ();
///float Multi ();
///float Dvde ();

///friend float Avg (Num);
///friend float Comp1 (Num);
///friend float Comp2 (Num);

void Output (float, string, float, float);

int main ()
{
    float N1, N2;
    Num A;
    NM TEMP;
    string AGN = "y";
    
    while ((AGN == "y") or (AGN == "Y"))
    {
        cout << "\n\tNumber Processor";
        
        cout << "\n\n\t(1 of 2) Enter First Value : ";
        cin >> N1;
        
        cout << "\n\n\t(2 of 2) Enter Second Value : ";
        cin >> N2;
        cls();
        A.Setall(N1, N2);

        Output(A.GetX(), "+", A.GetY(), A.Add());
        Output(A.GetX(), "-", A.GetY(), A.Sub());
        Output(A.GetX(), "x", A.GetY(), A.Multi());
        Output(A.GetX(), "/", A.GetY(), A.Dvde());
        
        TEMP.Convert(A);

        cout << "\n\n\tThe Average Of " << A.GetX() << " And " << A.GetY() << " Is " << TEMP.Avg();
        
        if (TEMP.Comp2() == 0)
        {
            cout << "\n\t" << A.GetX() << " And " << A.GetY() << " Are The Same Value";
        }
        else
        {
            cout << "\n\tThe Larger Of " << A.GetX() << " And " << A.GetY() << " Is " << TEMP.Comp1();
            cout << "\n\tThe Smaller Of " << A.GetX() << " And " << A.GetY() << " Is " << TEMP.Comp2();
        }

        cout << "\n\n\tRun Again (y or n) : ";
        cin >> AGN;
        
        cls();
    }
}

void Output (float F1, string S1, float F2, float A)
{
    cout << "\n\t" << F1 << " " << S1 << " " << F2 << " = " << A;
}
