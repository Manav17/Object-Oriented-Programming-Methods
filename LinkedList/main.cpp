
#include <stdlib.h>
//#include <unistd.h>//For Sleep Functions
//#include <time.h>
#include <iostream>
//#include <math.h>
#include <iomanip>
#include <fstream>
//#include <sstream>
//#include <vector>
//#include <conio.h>


#include "linkedlist.h"


using namespace std;


int main ()
{
    int OPT = 0;
    linkedlistSSJ2 LIST;
    
    while (OPT != 8)
    {
        OPT = menu("Linked List", "Add To Front", "Add To Back", "Traverse", "Reverse Traverse", "Write To File (Save Data To File)", "Read From File (Add Data From File To Back)", "Add To Middle", "Quit");
        
        switch (OPT)
        {
            case 1:
            {
                LIST.addfront();
                break;
            }
            case 2:
            {
                LIST.addback();
                break;
            }
            case 3:
            {
                LIST.traverse();
                any();
                break;
            }
            case 4:
            {
                LIST.reversetraverse();
                any();
                break;
            }
            case 5:
            {
                LIST.write();
                any();
                break;
            }
            case 6:
            {
                LIST.read();
                any();
                break;
            }
            case 7:
            {
                LIST.addmiddle();
                any();
                break;
            }
        }
        cls();
    }
}
