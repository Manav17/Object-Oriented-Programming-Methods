//
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


using namespace std;


class Truck : public Vehicle
{
private:
    
    float LOAD;
    float WEIGHT;
    
public:
    
    Truck ();
    ~Truck ();
    Truck (string, int, int, float);
    
    void SetLoad (float);
    void SetWeight (float);
    
    float GetLoad ();
    float GetWeight ();
    
    void TrkDisplay ();
};


Truck::Truck ()
{
    LOAD = 0;
    WEIGHT = 2000;
}

Truck::~Truck ()
{
    LOAD = 0;
    WEIGHT = 2000;
}


Truck::Truck (string fNAME, int fPASSENGERS, int fWHEELS, float fSPD)
{
    NAME = fNAME;
    PASSENGERS = fPASSENGERS;
    WHEELS = fWHEELS;
    SPD = fSPD;
}



void Truck::SetLoad (float aLOAD)
{
    LOAD = aLOAD;
}

void Truck::SetWeight (float bWEIGHT)
{
    WEIGHT = bWEIGHT;
}


float Truck::GetLoad()
{
    return LOAD;
}

float Truck::GetWeight()
{
    return WEIGHT;
}


void Truck::TrkDisplay ()
{
    cout << "\n\tPickup Weighs " << WEIGHT << " lbs And Carries A Load Of " << LOAD << " lbs";
}


//class LightTruck : public Truck
//{
//private:
//    string lbs_of_boost;
//    string Liters_of_Nitrol;
//public:
//    void ccout (int A)
//    {
//        cout << A;
//    }
//};
