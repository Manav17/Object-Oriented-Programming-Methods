
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


#include "Meep.h"


using namespace std;


//struct leaf
//{
//    leaf *UP;
//    leaf *PREVIOUS;
//    string NAME;
//    leaf *NEXT;
//    int INDEX;
//
//    class storage
//    {
//        leaf *TEMP;
//        leaf *LAST;
//        leaf *FIRST;
//        leaf *T_NEXT;
//        leaf *T_PREVIOUS;
//        int SIZE;
//
//    public:
//
//        storage ()
//        {
//            FIRST = NULL;
//            LAST = NULL;
//            T_NEXT = NULL;
//            T_PREVIOUS = NULL;
//            TEMP = NULL;
//            SIZE = 0;
//        }
//
//        void traverse()
//        {
//            TEMP = FIRST;
//
//            if (TEMP != NULL)
//            {
//                outputtitle();
//
//                while (TEMP != NULL)
//                {
//                    output();
//                    TEMP = TEMP -> NEXT;
//                }
//
//                endoflist();
//            }
//            else
//            {
//                empty();
//            }
//
//            TEMP = NULL;
//        }
//
//        void pull(int INDEX)
//        {
//            TEMP = FIRST;
//
//            if (TEMP != NULL)
//            {
//                outputtitle();
//
//                while (TEMP != NULL)
//                {
//                    output();
//                    TEMP = TEMP -> NEXT;
//                }
//            }
//            else
//            {
//               empty();
//            }
//
//            TEMP = NULL;
//        }
//
//        void addto()
//        {
//            TEMP = new leaf;
//
//            input();
//            TEMP -> UP =
//            TEMP -> NEXT = NULL;
//
//            if (SIZE == 0)
//            {
//                TEMP -> PREVIOUS = NULL;
//                FIRST = TEMP;
//                LAST = TEMP;
//            }
//            else
//            {
//                TEMP -> PREVIOUS = LAST;
//                LAST -> NEXT = TEMP;
//                LAST = TEMP;
//            }
//
//            TEMP -> INDEX = SIZE;
//            SIZE++;
//
//            TEMP = NULL;
//        }
//        void input()
//        {
//            TEMP -> NAME = scin("Leaf Name");
//        }
//        void output()
//        {
//            cout << "\n\t" << setw(20) << TEMP -> NAME << setw(10) << TEMP -> INDEX;
//        }
//        void outputtitle()
//        {
//            cout << "\n\t" << TEMP -> NAME;
//            cout << "\n\n\t" << setw(20) << "Leaf Name" << setw(10) << "Index";
//        }
//        void endoflist()
//        {
//            cout << "\n\n\tEnd Of List -- Size : " << SIZE;
//        }
//        void empty()
//        {
//            cout << "\n\tLeaf Is Empty";
//        }
//    };
//    storage DOWN;
//};

struct leaf
{
    leaf *UP = NULL;
    string NAME = "";
    leaf *DOWN[2] = {NULL, NULL};
    int SIZE = 0;
};

class tree
{
private:
    leaf *ROOT;
    leaf *CURRENT;
    leaf *TEMP;
    
public:
    tree ()
    {
        ROOT = NULL;
        TEMP = NULL;
        CURRENT = NULL;
    }
    void addleaf()
    {
        if (ROOT == NULL)
        {
            ROOT = new leaf;
            ROOT -> NAME = "Root";
            ROOT -> UP = NULL;
            
            CURRENT = ROOT;
        }
        
        if (CURRENT -> SIZE == 2)
        {
            full();
            any();
            cls();
        }
        else
        {
            TEMP = new leaf;
            input ();
            TEMP -> UP = CURRENT;
            
            CURRENT -> DOWN[CURRENT -> SIZE] = TEMP;
            CURRENT -> SIZE++;
        }
        
        TEMP = NULL;
    }
    
    void nextleaf(int INDEX)
    {
        CURRENT = CURRENT -> DOWN[INDEX];
    }
    
    void goback ()
    {
        CURRENT = CURRENT -> UP;
    }
    void display ()
    {
        cout << "\n\t" << CURRENT -> NAME << "\n";
        if (CURRENT -> SIZE == 0)
        {
            cout << "\n\tNode Is Empty";
        }
        for (int A = 0; A < CURRENT -> SIZE; A++)
        {
            cout << "\n\t" << A << " ---- " << CURRENT -> DOWN[A] -> NAME;
        }
    }
    

private:
    void input ()
    {
        TEMP -> NAME = scin ("New Leaf Name");
    }
    void full ()
    {
        cout << "\n\tCurrent Node Is Full, Cannot Not Add New";
    }
};
