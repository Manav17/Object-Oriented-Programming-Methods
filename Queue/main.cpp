
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
    string queue[max], temp;
    stringstream SS;
    int head, tail, size, opt;
    
    opt = 0;
    size = 0;
    head = 0;
    tail = 9;
    
    while (opt != 4)
    {
        SS.clear();
        SS << "Queue" << "\tHead = " << head << "\tTail = " << tail << "\tSize = " << size;
        getline(SS, temp);

        opt = menu (temp, "Add To Queue", "Process", "Display Queue", "Quit");
        
        switch (opt)
        {
            case 1:
            {
                if (size < max)
                {
                    tail++;
                    if (tail == 10)
                    {
                        tail = 0;
                    }
                    queue [tail] = scin("Enter String");
                    size++;
                }
                else
                {
                    cout << "\n\tQueue Is Full";
                }
                cls();
                break;
            }
                
            case 2:
            {
                if (size == 0)
                {
                    cout << "\n\tQueue Is Empty";
                }
                else
                {
                    cout << "\n\t" << queue [head] << " Processed";
                    head++;
                    if (head == 10)
                    {
                        head = 0;
                    }
                    size--;
                }
                any();
                cls();
                break;
            }
                
            case 3:
            {
                for (int a = head; a-1 != tail; a++)
                {
                    if(a == 10)
                    {
                        a = 0;
                    }
                    cout << "\n\tIndex # " << a << "\t" << queue[a];
                }
                any();
                cls();
                break;
            }
        }
    }
}
