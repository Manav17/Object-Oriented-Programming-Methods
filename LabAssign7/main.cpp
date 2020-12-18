
#include <stdlib.h>
//#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


//Header Files
#include "Meep.h"
#include "Shape.h"


using namespace std;


int main ()
{
    Shape *REC_P = new Rectangle;
    Shape *TRI_P = new Triangle;
    Shape *CYL_P = new Cylinder;
    Shape *TRA_P = new Trapezoid;
    Shape *CIR_P = new Circle;
    
    int OPT = 0;
    float BASE, HEIGHT, WIDTH;
    
    while (OPT != 6)
    {
        ///Menu
        OPT = menu ("Area Calculator", "Rectangle", "Triangle", "Cylinder", "Trapezoid", "Circle", "Quit");
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                cout << "\n\tRectangle Area, Input Parameters\n\n";
                BASE = fcin ("1 of 2 - Base");
                HEIGHT = fcin ("2 of 2 - Height");
                REC_P -> SetBH(BASE, HEIGHT);
                
                cout << "\n\tArea of Rectangle Is "
                     << BASE << " * " << HEIGHT << " = "
                     << REC_P -> Area();
                
                any();
                cls();
                break;
            }
                
            case 2:
            {
                cout << "\n\tTriangle Area, Input Parameters\n\n";
                BASE = fcin ("1 of 2 - Base");
                HEIGHT = fcin ("2 of 2 - Height");
                TRI_P -> SetBH(BASE, HEIGHT);
                
                cout << "\n\tArea of Cylinder Is ("
                     << BASE << " * " << HEIGHT << ") / 2 = "
                     << TRI_P -> Area();
                
                any();
                cls();
                break;
            }
                
            case 3:
            {
                cout << "\n\tCylinder Area, Input Parameters\n\n";
                BASE = fcin ("1 of 2 - Radius");
                HEIGHT = fcin ("2 of 2 - Height");
                CYL_P -> SetBH(BASE, HEIGHT);
                
                cout << "\n\tArea of Cylinder Is [(2 * π * "
                     << BASE << ") * (" << HEIGHT << " + " << BASE << ")] = "
                     << CYL_P -> Area();
                
                any();
                cls();
                break;
            }
                
            case 4:
            {
                cout << "\n\tTrapezoid Area, Input Parameters\n\n";
                BASE = fcin ("1 of 3 - Base 1");
                WIDTH = fcin ("2 of 3 - Base 2");
                HEIGHT = fcin ("3 of 3 - Height");
                TRA_P -> SetAll(WIDTH, BASE, HEIGHT);
                
                cout << "\n\tArea of Trapezoid Is [(" << WIDTH << " + "
                     << BASE << ") / 2 ] * " << HEIGHT << " = "
                     << TRA_P -> Area();
                
                any();
                cls();
                break;
            }
                
            case 5:
            {
                cout << "\n\tCircle Area, Input Parameters\n\n";
                BASE = fcin ("1 of 1 - Radius");
                CIR_P -> SetBase(BASE);
                
                cout << "\n\tArea of Circle Is π * "
                    << BASE << " * " << BASE << " = "
                    << CIR_P -> Area();
                
                any();
                cls();
                break;
            }
        }//Switch
    }
}

