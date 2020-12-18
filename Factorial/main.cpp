
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


#include "Meep.h"


using namespace std;


int main()
{
    string N1, N2, N3;

    string SUM, TEMP;
    stringstream SS, ss, aa, bb, cc, dd;
    int INT1, INT2, INT3 = 0;
    int IT;
    
    N1.clear();
    N2.clear();
    SUM.clear();
    TEMP.clear();
    N3.clear();
    
//Input
    N1 = scin("Num 1");
    N2 = scin("Num 2");
    
//Make larger number N1
    if (N1.length() < N2.length())
    {
        TEMP = N1;
        N1 = N2;
        N2 = TEMP;
    }
    
    while (N1.length() != N2.length())
    {
        
        N2 = '0' + N2;
    }
    
    for (int A = 0; A < N1.length() + 5; A++)
    {
        N3[A] = '0';
    }
    
    for (long int B = N1.length() - 1; B >= 0; B--)
    {
        TEMP.clear();
        
        aa.clear();
        aa << N1[B];
        aa >> INT1;
        ss.clear();
        ss << N2[B];
        ss >> INT2;
        cout << "\n\t INt1 = " << INT1 << "\t INt 2 = " << INT2;
        
        IT = INT1 + INT2 + INT3;
        cout << "\n\t Sum = "<< IT;
        
        SS.clear();
        SS << IT;
        SS >> TEMP;
        
    

        if (!TEMP[1])
        {
            SUM = TEMP[0] + SUM;
            INT3 = 0;
            cout << "\n\t Remainder Empty = " << TEMP[1];
        }
        
        else
        {
            SUM = TEMP[1] + SUM;
            bb.clear();
            bb << TEMP[0];
            bb >> INT3;
            cout << "\n\t Remainder = " << TEMP[0];
        }
    }
    
    cc.clear();
    cc << INT3;
    cc >> TEMP;
    
    if (TEMP[1])
    {
        SUM = TEMP + SUM;
    }
 
    cout << "\n\t" << SUM;
    
}
