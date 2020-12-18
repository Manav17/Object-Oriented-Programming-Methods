
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


#include "Mem.h"
#include "Meep.h"


using namespace std;


int main ()
{
    stringstream SS;
    string NAME, S1, S2, TEMP;
    int NUM, OPT;
    
    ofstream dout;
    string FILE = "/Users/manavjotsingh/Desktop/";
    
///Name
    cout << "\n\tClass Name : ";
    cin >> NAME;
    
    FILE = FILE + NAME + ".h";
    
///Status
    OPT = menu("Status Of Members :" , "private", "protected", "public");
    S1 = reswitch(OPT, "private", "protected", "public");
    
    OPT = menu("Status Of Functions :" , "private", "protected", "public");
    S2 = reswitch(OPT, "private", "protected", "public");

///Num of Members
    cout << "\n\tNumber Of Class Members : ";
    cin >> NUM;
    
    Mem MM[NUM];

///Member Info
    for (int A = 0; A < NUM; A++)
    {
        cout << "\n\n\tMember " << A << " Name : ";
        cin >> MM[A].NAME;
        
        SS << "Member " << A << "Data Type";
        getline (SS, TEMP);
        
        OPT = menu (TEMP, "int", "float", "double", "char", "string");
        MM[A].TYPE = reswitch(OPT, "int", "float", "double", "char", "string");
        
        cout << "\n\tMember " << A << " Default : ";
        cin >> MM[A].DEFAULT;
    }

///Writing
    dout.open(FILE, ios::out);
    
    if (!dout)
    {
        cout << "Write Fail";
    }

///Std
    dout << "\n\n\nusing namespace std;";
    
///Class
    dout << "\n\nclass " << NAME;
    dout << "\n{";
    dout << "\n" << S1 << ":\n";

///Member Declarations
    for (int B = 0; B < NUM; B++)
    {
        dout << "\n\t" << MM[B].TYPE << " " << MM[B].NAME << ";";
    }
    
///Functions
    dout << "\n\n" << S2 << ":\n";
    
///Constructor
    dout << "\n\t" << NAME << " ();\n";
    
///Set Functions
    for (int C = 0; C < NUM; C++)
    {
        dout << "\n\tvoid Set" << MM[C].NAME << " (" << MM[C].TYPE << ");";
    }
    dout << "\n";
    
///SetAll
    dout << "\n\tvoid SetALL (" << MM[0].TYPE;
    for (int D = 1; D < (NUM - 1); D++)
    {
        dout << " ," << MM[D].TYPE;
    }
    dout << ", " << MM[NUM - 1].TYPE << ");";
  
///Get Functions
    for (int C = 0; C < NUM; C++)
    {
        dout << "\n\t" << MM[C].TYPE << " Set" << MM[C].NAME << " ();";
    }
    dout << "\n};";

///Constructor Def
    dout << "\n\n";
    dout << "\n" << NAME << "::" << NAME << "()";
    dout << "\n{";
    for (int E = 0; E < NUM; E++)
    {
        if (MM[E].TYPE == "string")
        {
            dout << "\n\t" << MM[E].TYPE << " = \"" << MM[E].DEFAULT << "\";";
        }
        else if (MM[E].TYPE == "char")
        {
            dout << "\n\t" << MM[E].TYPE << " = \'" << MM[E].DEFAULT << "\';";
        }
        else
        {
            dout << "\n\t" << MM[E].TYPE << " = " << MM[E].DEFAULT << ";";
        }
    }
    dout << "\n}";
    
///SetFunctions Definitions
    dout << "\n";
    for (int G = 0; G < NUM; G++)
    {
        dout << "\n\nvoid " << NAME << "::Set" << MM[G].NAME << " (" << MM[G].TYPE << " t_" << MM[G].NAME << ");";
        dout << "\n{";
        dout << "\n\t"<< MM[G].NAME << " = t_" << MM[G].NAME << ";";
        dout <<"\n}";
    }
    
///SetAll Definitions
    dout << "\n\nvoid " << NAME << "::SetALL (" << MM[0].TYPE << " t_" << MM[0].NAME;
    
    for (int D = 1; D < (NUM - 1); D++)
    {
        dout << " ," << MM[D].TYPE << " t_" << MM[D].NAME;
    }
    
    dout << ", " << MM[NUM - 1].TYPE << " t_" << MM[0].NAME << ")";
    
    dout << "\n{";
    
    for (int E = 0; E < NUM; E++)
    {
        dout << "\n\t" << MM[E].TYPE << " = t_" << MM[E].DEFAULT << ";";
    }
    
    dout << "\n}";
    
//Getfunctions Definitons
    dout << "\n";
    for (int F = 0; F < NUM; F++)
    {
        dout << "\n\n" << MM[F].TYPE << " " << NAME << "::Get" << MM[F].NAME << " ()";
        dout << "\n{";
        dout << "\n\treturn " << MM[F].NAME << ";";
        dout <<"\n}";
    }
    
    dout.close();
    
    cout << "\n\tClass Created, Check Your Desktop";
}
