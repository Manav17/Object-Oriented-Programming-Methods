
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

using namespace std;

#include "Tree.h"

int main ()
{
    
    tree TREE;
    int OPT= 0, IND;
    
    TREE.addleaf();
    
    while (OPT != 4)
    {
        TREE.display();
        OPT = menu("\n\tLeaf Menu", "Add A New Leaf", "Go To A Leaf", "Go Back", "QUIT");
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                TREE.addleaf();
                cls();
                break;
            }
            case 2:
            {
                TREE.display();
                IND = icin("\n\tPick A Node");
                TREE.nextleaf(IND);
                cls();
                break;
            }
            case 3:
            {
                TREE.goback();
                cls();
                break;
            }
        }
    }
    
}
