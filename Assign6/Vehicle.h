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


class Vehicle
{
protected: 
    
    string NAME;
    int PASSENGERS;
    int WHEELS;
    float SPD;
    
public:
    
    Vehicle ();
    Vehicle (string, int, int, float);
    
    void SetName (string);
    void SetPassengers (int);
    void SetWheels (int);
    void SetSpd (float);
    void SetAll (string, int, int, float);
    
    string GetName ();
    int GetPassengers ();
    int GetWheels ();
    float GetSpd ();
    
    void Display (int);
};


Vehicle::Vehicle ()
{
    NAME = "Motorcycle";
    PASSENGERS = 2;
    WHEELS = 2;
    SPD = 100;
}

Vehicle::Vehicle (string fNAME, int fPASSENGERS, int fWHEELS, float fSPD)
{
    NAME = fNAME;
    PASSENGERS = fPASSENGERS;
    WHEELS = fWHEELS;
    SPD = fSPD;
}

void Vehicle::SetName (string aNAME)
{
    NAME = aNAME;
}

void Vehicle::SetPassengers (int bPASSENGERS)
{
    PASSENGERS = bPASSENGERS;
}

void Vehicle::SetWheels (int cWHEELS)
{
    WHEELS = cWHEELS;
}

void Vehicle::SetSpd (float dSPD)
{
    SPD = dSPD;
}

void Vehicle::SetAll (string eNAME, int ePASSENGERS, int eWHEELS, float eSPD)
{
    NAME = eNAME;
    PASSENGERS = ePASSENGERS;
    WHEELS = eWHEELS;
    SPD = eSPD;
}

string Vehicle::GetName ()
{
    return NAME;
}

int Vehicle::GetPassengers ()
{
    return PASSENGERS;
}

int Vehicle::GetWheels ()
{
    return WHEELS;
}

float Vehicle::GetSpd ()
{
    return SPD;
}


void Vehicle::Display(int fIND)
{
    cout << "\n\n\tIndex #" << fIND;
    cout << "\n\t" << NAME << " Carries " << PASSENGERS << " Passengers (Including The Driver)";
    cout << "\n\t" << NAME << " Has " << WHEELS << " Wheel(s) And Has A Maximum Speed Of " << SPD << "Mph";
}
