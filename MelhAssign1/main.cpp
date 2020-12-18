
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


using namespace std;


void OUTPUT (float, float, int, string);
int READ (string, float&, float&, float&);
int ROOT (float, float, float, float&, float&);


int main ()

{
    int REREAD, REROOT;
    float A, B, C, R1, R2;
    string FILENAME;
    string EQT;
    ifstream DIN;
    
    //Intilizations
    FILENAME = "/Users/manavjotsingh/Documents/Chabot/CSCI/CSCI 15/MelhAssign1/MelhAssign1/Input.txt";
    REREAD = 0;
    A = 0;
    B = 0;
    C = 0;
    
    //Read
    DIN.open (FILENAME);
    
    while ((!DIN.eof()) and (REREAD == 0))
    {
        //Conditions
        if (!DIN)
        {
            cout << "\n\tThere Has Been An Error, Please Try Again";
            break;
        }
        
        getline (DIN, EQT);
        
        REREAD = READ (EQT, A, B, C);
        
        if (REREAD == 0)
        {
            REROOT = ROOT (A, B, C, R1, R2);
            
            OUTPUT (R1, R2, REROOT, EQT);
        }
    }
    
    DIN.close();
    
}

//Definitions
void OUTPUT (float X1, float X2, int OPT, string EQT)
{
    static int COUNT = 0;
    float W = 22;
    string FILENAME = "OUTPUT1", A, B, O;
    ofstream DOUT;
    stringstream SS1, SS2;
    
    DOUT.open (FILENAME, ios::app);
    SS1.clear();
    SS2.clear();
    
    SS1 << setprecision(2) << X1;
    SS1 >> A;
    SS2 << setprecision(2) << X2;
    SS2 >> B;
    
    //Setw Justify left
    DOUT << std::left;
    
    //Precision
    SS1.precision(2);
    SS1.setf(ios::fixed, ios::floatfield);
    SS1.setf(ios::showpoint);
    
    SS2.precision(2);
    SS2.setf(ios::fixed, ios::floatfield);
    SS2.setf(ios::showpoint);
    
    
    
    if (COUNT == 0)
    {
        DOUT << "ROOTS OF FUNCTIONS" << endl;
        DOUT << setw(W) << "EQUATION" << setw(W) << "ROOTS" << endl;
    }
    
    switch (OPT)
    {
            //Real
        case 0:
        {
            O = "{(" + A + "), (" + B + ")}";
            DOUT << setw(W) << EQT << setw(W) << O << endl;
            break;
        }
            //No Solutions
        case -1:
        {
            DOUT  << setw(W) << EQT << setw(W) << "No Solution" << endl;
            break;
        }
            //Imaginary
        case -2:
        {
            
            O = "{(" + A + " - (i)" + B +  "), (" + A + " + (i)" + B + ")}";
            DOUT << setw(W) << EQT << setw(W) << O << endl;
            break;
        }
            //Error In Calculation
        case 1:
        {
            DOUT << setw(W) << EQT << setw(W) << "Error In Calcuation" << endl;
        }
    }
    
    DOUT.close();
    
    COUNT++;
}

int READ (string EQ, float &X, float &Y, float &Z)
{
    
    string CSTR, ASTR, BSTR;
    float XA, XB, XC, ASC, LENGTH;
    int AA, BB, CC;
    stringstream SS;
    
    
    //Initializtions
    SS.clear();
    CSTR.clear();
    ASTR.clear();
    BSTR.clear();
    XA = 0;
    XB = 0;
    XC = 0;
    
    
    //Parse
    LENGTH = EQ.length();
    XA = EQ.find("x^2");
    XB = EQ.find("x ");
    
    if (XA > LENGTH)
    {
        XA = -1;
    }
    
    if (XB > LENGTH)
    {
        XB = -1;
    }
    
    for (float A = LENGTH ; (A > XB) and (A > XA + 2); A--)
    {
        ASC = EQ[A]-48;
        
        if (((ASC<10) and (ASC>=0)) or (ASC == -2) or (ASC == -3))
        {
            CSTR = EQ[A] + CSTR;
        }
        
    }
    
    for (int B = XA; B >= 0; B--)
    {
        ASC = EQ[B]-48;
        
        if (((ASC<10) and (ASC>=0)) or (ASC == -2) or (ASC == -3))
        {
            ASTR = EQ[B] + ASTR;
        }
    }
    
    for (int C = XB; C >= XA+3; C--)
    {
        ASC = EQ[C]-48;
        
        if (((ASC<10) and (ASC>=0)) or (ASC == -2) or (ASC == -3))
        {
            BSTR = EQ[C] + BSTR;
        }
    }
    
    if ((XA != -1) and (ASTR == ""))
    {
        X = 0;
    }
    else
    {
        SS << ASTR;
        SS >> X;
        SS.clear();
    }
    
    if ((XB != -1) and (BSTR == ""))
    {
        Y = 0;
    }
    else
    {
        SS << BSTR;
        SS >> Y;
        SS.clear();
    }
    
    if (CSTR == "")
    {
        Z = 0;
    }
    else
    {
        SS << CSTR;
        SS >> Z;
        SS.clear();
    }
    
    if (CSTR == "")
    {
        CC = -1;
    }
    else
    {
        CC = 1;
    }
    
    if (BSTR == "")
    {
        BB = -1;
    }
    else
    {
        BB = 1;
    }
    
    if (ASTR == "")
    {
        AA = -1;
    }
    else
    {
        AA = 1;
    }
    
    if ((AA + BB + CC) < 3)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}

int ROOT (float A, float B, float C, float &X1, float &X2)
{
    
    float D, E, F, G = 0.0; //Intermediatery
    int N;
    
    //Initializations
    X1 = 0;
    X2 = 0;
    D = 0;
    E = 0;
    F = 0;
    G = 0;
    
    //Calculations
    D=-B;
    E=powf(B, 2)-(4*A*C);
    F=2*A;
    
    if (A == 0) //No Solutions
    {
        return -1;
    }
    
    if(E >= 0) //Real
    {
        N=1;
    }
    else //Imaginary
    {
        N=2;
    }
    
    //Calculations
    switch (N)
    {
        case 1: //Real
        {
            X1=(D+sqrtf(E))/F;
            X2=(D-sqrtf(E))/F;
            return 0;
            
            
        }
        case 2: //Imaginary1
        {
            E=(E*-1);
            G=sqrtf(E)/F;
            D=D/F;
            X1 = D;
            X2 = G;
            //D - iF
            //D + iF
            return -2;
            
            
        }
    }
    return 1;
}
