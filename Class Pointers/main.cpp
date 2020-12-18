
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

class Num
{
public:
    int A;
    int B;
public:
    int Add ()
    {
        return A+B;
    }
};

using namespace std;

int main ()
{
    Num A;
    Num *X;
    
    A.A = 12;
    A.B = 34;
    
    int c;
    X = &A;
    
    c = X -> Add();
    cout << c;
}
