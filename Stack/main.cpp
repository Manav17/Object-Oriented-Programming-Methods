
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

#include "Meep.h"

using namespace std;

int main ()
{
    int max = 10;
    string stack[max], temp;
    stringstream SS;
    int top, opt;
    
    opt = 0;
    top = -1;
    
    while (opt != 4)
    {
        SS.clear();

        if (top == -1)
        {
            SS << "Queue" << "\tEmpty";
        }
        else
        {
            SS << "Queue" << "\tTop = " << top;
        }
        
        getline(SS, temp);
        
        opt = menu (temp, "Add To Stack", "Process", "Display Stack", "Quit");
        
        switch (opt)
        {
            case 1:
            {
                if(top < max-1)
                {
                    top++;
                    stack [top] = scin("Enter String");
                }
                else
                {
                    cout << "\n\tStack Is Full";
                    any();
                }
                cls();
                break;
            }
                
            case 2:
            {
                if (top == -1)
                {
                    cout << "\n\tStack Is Empty";
                }
                else
                {
                    cout << "\n\t" << stack [top] << " Processed";
                    top--;
                }
                any();
                cls();
                break;
            }
                
            case 3:
            {
                if (top == -1)
                {
                    cout << "\n\tStack Is Empty";
                }
                else
                {
                    cout << "\n\tDisplaying Stack\n";
                    
                    for (int a = top; a != -1; a--)
                    {
                        cout << "\n\tIndex # " << a << "\t" << stack[a];
                    }
                }
                any();
                cls();
                break;
            }
        }
    }
}
