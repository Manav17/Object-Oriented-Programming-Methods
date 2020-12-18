#include <stdlib.h>
//#include <conio.h>
#include <time.h> // used for the "seed" number
#include <iomanip> //used for setw() command where setw() moves "x" spaces to the right.
#include <iostream>

#include "Shape.h"

using namespace std;


int main()
{
    char again = 'y';
    int option;
    float base, width, height;
    
    Rectangle *Rect = new Rectangle;
    Triangle *Tri = new Triangle;
    Cylinder *Cyl = new Cylinder;
    Trapezoid *Trap = new Trapezoid;
    Circle *Cir = new Circle;
    
    /*
     cout.precision(2);
     cout.setf(ios::fixed | ios::showpoint);
     */
    do
    {
        do
        {
            cout << "\n\tDetermine the Area of the Objects:"
            << "\n\t1 - Rectangle"
            << "\n\t2 - Triangle"
            << "\n\t3 - Cylinder"
            << "\n\t4 - Trapezoid"
            << "\n\t5 - Circle"
            << "\n\t6 - Quit"
            << "\n\tEnter Option (1-6): ";
            cin >> option;
            system("cls");
            
        }while(option < 1 or option > 6);
        
        switch(option)
        {
            case 1:
            {
                cout << "\n\tRectangle Object";
                cout << "\n\n\tEnter Width - ";
                cin >> width;
                cout << "\n\tEnter Height - ";
                cin >> height;
                Rect -> setSome(width, height);
                //system ("cls");
                
                cout << "\n\tRectangle Object Area Is " << Rect -> Area();
                cout << "\n\n\tPress any key to continue...";
                //getch();
                
                //system ("cls");
                break;
            }
            case 2:
            {
                cout << "\n\tTriangle Object";
                cout << "\n\n\tEnter Width - ";
                cin >> width;
                cout << "\n\tEnter Base - ";
                cin >> height;
                Tri -> setSome(width, height);
                //system ("cls");
                
                cout << "\n\tRectangle Object Area Is " << Tri -> Area();
                cout << "\n\n\tPress any key to continue...";
                //getch();
                
                //system ("cls");
                break;
            }
            case 3:
            {
                cout << "\n\tCylinder Object";
                cout << "\n\n\tEnter Width - ";
                cin >> width;
                cout << "\n\tEnter Height - ";
                cin >> height;
                Cyl -> setSome(width, height);
                //system ("cls");
                
                cout << "\n\tCylinder Object Area Is " << Cyl -> Area();
                cout << "\n\n\tPress any key to continue...";
                //getch();
                
                //system ("cls");
                break;
            }
            case 4:
            {
                cout << "\n\tTrapezoid Object";
                cout << "\n\n\tEnter Width - ";
                cin >> width;
                cout << "\n\tEnter Height - ";
                cin >> height;
                cout << "\nt\Enter Base - ";
                cin >> base;
                Trap -> setAll(width, height, base);
                //system ("cls");
                
                cout << "\n\tCylinder Object Area Is " << Trap -> Area();
                cout << "\n\n\tPress any key to continue...";
                //getch();
                
                //system ("cls");
                break;
            }
            case 5:
            {
                cout << "\n\tCircle Object";
                cout << "\n\n\tEnter Width - ";
                cin >> width;
                Cir -> setWidth(width);
                //system ("cls");
                
                cout << "\n\tCircle Object Area Is " << Cir -> Area();
                cout << "\n\n\tPress any key to continue...";
                //getch();
                
                //system ("cls");
                break;
            }
            case 6:
            {
                cout << "\n\tOption 7:"
                << "\n\tQuitting...";
                again = 'n';
                break;
            }
                
        }
        
        cout << "\n\n\tHit Any Key to Continue...";
        //getch();
        system("clear");
        
    }while(again == 'y');
}

