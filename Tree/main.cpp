
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <unistd.h>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


#include "Tree.h"


using namespace std;


int main ()
{
    tree TREE;
    int OPT = 0, OPT_A = 0;
    
    cout << "\n\tTree is Empty";
    TREE.addleaf();
    
    while (OPT != 4)
    {
        TREE.display();
        
        OPT = menu("", "Add A Node", "Go To Node", "Go Back", "QUIT");
        
        switch (OPT)
        {
            case 1:
            {
                TREE.addleaf();
                break;
            }
            case 2:
            {
                cout << "\n\tGo To Node\n";
                TREE.display();
                
                OPT_A = icin("Pick A Node");
                    
                TREE.nextleaf(OPT_A);
                break;
            }
            case 3:
            {
                TREE.goback();
                break;
            }
        }
    }
}
