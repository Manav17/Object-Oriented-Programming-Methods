
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "Date.h"

using namespace std;


int main ()
{
    int Y, M, D, CNT;
    Date D1, D2;
    
    cout << "\n\tEnter Year : ";
    cin >> Y;
    
    cout << "\n\tEnter Month : ";
    cin >> M;
    
    cout << "\n\tEner Day : ";
    cin >> D;
    
    D1.setALL(Y, M, D);
    
    cout << "\n\tEnter Year2 : ";
    cin >> Y;
    
    cout << "\n\tEnter Month2 : ";
    cin >> M;
    
    cout << "\n\tEner Day2 : ";
    cin >> D;
    
    D2.setALL (Y, M, D);
    
    cout << "\n\n\tDat1";
    D1.coutA();
    D1.coutB();
    D1.coutC();
    
    cout << "\n\n\tDat2";
    D2.coutA();
    D2.coutB();
    D2.coutC();

    CNT = D1.difference(D1, D2);
    
    cout << "\n\n\tThe difference is " << CNT <<" Days";
    

    
}

