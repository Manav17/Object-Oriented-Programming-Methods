
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


struct leaf
{
    leaf *UP = NULL;
    string NAME = "";
    int SIZE = 0;
    string LOCATION;
    struct node
    {
        node *NEXT;
        leaf *LEAF;
        node *PREVIOUS;
        int INDEX;
    };
    
    class store
    {
    private:
        node *TEMP;
        node *FIRST;
        node *LAST;
        int SIZE;
        
    public:
        store ()
        {
            TEMP = NULL;
            FIRST = NULL;
            LAST = NULL;
            SIZE = 0;
        }
        
        void addnode(leaf *T_LEAF)
        {
            TEMP = new node;
            
            TEMP -> LEAF = T_LEAF;
            TEMP -> INDEX = SIZE;
            
            
            TEMP -> PREVIOUS = NULL;
            
            if (SIZE == 0)
            {
                TEMP -> NEXT = NULL;
                FIRST = TEMP;
                LAST = TEMP;
            }
            else
            {
                TEMP -> NEXT = FIRST;
                FIRST -> PREVIOUS = TEMP;
                FIRST = TEMP;
            }
            
            SIZE++;
            TEMP = NULL;
        }
        
        leaf* pullnode (int T_INDEX)
        {
            TEMP = FIRST;
            
            if (TEMP != NULL)
            {
                while (TEMP != NULL)
                {
                    if (TEMP -> INDEX == T_INDEX)
                    {
                        return TEMP -> LEAF;
                    }
                    TEMP = TEMP -> NEXT;
                }
            }
            
            cout << "\n\tError With pullnode() Function";
            TEMP = NULL;
            return NULL;
        }
    };
    store DOWN;
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
        ROOT = NULL
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
            ROOT -> LOCATION = "/";
            
            CURRENT = ROOT;
        }

        TEMP = new leaf;
        
        input ();
        
        TEMP -> UP = CURRENT;
        CURRENT -> DOWN.addnode(TEMP);
        CURRENT -> SIZE++;
        
        TEMP = NULL;
    }
    void nextleaf(int INDEX)
    {
        if (CURRENT -> DOWN.pullnode(INDEX) == NULL)
        {
            error();
        }
        else
        {
            CURRENT = CURRENT -> DOWN.pullnode(INDEX);
        }
    }
    
    void goback ()
    {
        if (CURRENT -> UP == NULL)
        {
            error();
        }
        else
        {
            CURRENT = CURRENT -> UP;
        }
    }
    void display ()
    {
        cout << "\n\t" << CURRENT -> NAME << " : " << CURRENT -> LOCATION  << "\n";
        if (CURRENT -> SIZE == 0)
        {
            cout << "\n\tNode Is Empty";
        }

        for (int A = 0; A < CURRENT -> SIZE; A++)
        {
            TEMP = CURRENT -> DOWN.pullnode(A);
            cout << "\n\t" << A << " ---- " << TEMP -> NAME;
        }
        TEMP = NULL;
    }
    
    
private:
    void input ()
    {
        TEMP -> NAME = scin ("New Leaf Name");
    }
    void error ()
    {
        cout << "\n\tAction Cannot Be Completed";
        any();
    }
};
