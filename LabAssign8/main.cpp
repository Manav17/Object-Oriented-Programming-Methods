
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "list.h"


using namespace std;


int main ()
{
    int OPT = 0, OPT2;
    bool FOUND;
    
    linkedlistSSJ2 LIST;
    
    while (OPT != 8 )
    {
        FOUND = false;
        OPT2 = 0;
        OPT = menu ("Linkedlist", "Add Node To Front", "Add Node To Back", "Traverse", "Reverse Traverse", "Find", "Save To Data File", "Load From Data File To Back", "Quit");

        cls();
        
        switch (OPT)
        {
            case 1:
            {
                cout << "\n\tAdd To Front\n";
                LIST.addfront();
                cls();
                break;
            }
            case 2:
            {
                cout << "\n\tAdd To Back\n";
                LIST.addback();
                cls();
                break;
            }
            case 3:
            {
                LIST.traverse();
                any();
                cls();
                break;
            }
            case 4:
            {
                LIST.reversetraverse();
                any();
                cls();
                break;
            }
            case 5:
            {
                cout << "\n\tFind";
                FOUND = LIST.find();
                
                if(FOUND)
                {
                    OPT2 = menu ("\n\tEdit Node", "Edit Value", "Delete", "Back To Main");
                    cls();
                    switch (OPT2)
                    {
                        case 1:
                        {
                            cout << "\n\tEdit Value";
                            LIST.edit();
                            break;
                        }
                        case 2:
                        {
                            LIST.remove();
                            cout << "\n\tNode Deleted";
                            any();
                            break;
                        }
                    }
                    LIST.null();
                    cls();
                    break;
                }
                else
                {
                    LIST.null();
                    any();
                    cls();
                    break;
                }
            case 6:
                {
                    LIST.write();
                    any();
                    cls();
                    break;
                }
            case 7:
                {
                    LIST.read();
                    any();
                    cls();
                    break;
                }
            }
        }
    }
}
