
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>

using namespace std;

class Num
{
private:
    float X;
    float Y;
    
public:
    Num ();
    
    float GetX ();
    float GetY ();
    
    void SetX (float);
    void SetY (float);
    void Setall (float, float);
    
    float Add ();
    float Sub ();
    float Multi ();
    float Dvde ();
    
};

class NM
{
private:
    float A;
    float B;

public:
    float Avg ();
    float Comp1 ();
    float Comp2 ();
    void Convert (Num);
};

Num::Num ()
{
    X = 0;
    Y = 0;
}

float Num::GetX()
{
    return X;
}

float Num::GetY()
{
    return Y;
}



void Num::SetX(float A)
{
    X = A;
}

void Num::SetY(float B)
{
    Y = B;
}

void Num::Setall(float C, float D)
{
    X = C;
    Y = D;
}


float Num::Add()
{
    return X + Y;
}

float Num::Sub()
{
    return X - Y;
}

float Num::Multi()
{
    return X * Y;
}

float Num::Dvde()
{
    if (Y == 0)
    {
        return X / 1;
    }
    else
    {
        return X / Y;
    }
}

///////////////////////////////NM Functions
float NM::Avg()
{
    return ((A + B) / 2);
}

float NM::Comp1 ()
{
    if (A > B)
    {
        return A;
    }
    else if (A == B)
    {
        return 0;
    }
    else
    {
        return B;
    }
}

float NM::Comp2 ()
{
    if (A < B)
    {
        return A;
    }
    else if (A == B)
    {
        return 0;
    }
    else
    {
        return B;
    }
}

void NM::Convert(Num C)
{
    A = C.GetX();
    B = C.GetY();
}
