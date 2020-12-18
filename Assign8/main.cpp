
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


#include "Linkedlist.h"


using namespace std;


int main ()
{
    linkedlistSSJ2 LIST;
    int OPT, OPT_2, OPT_3, OPT_4, OPT_5;
    int FOUND, INDEX, COUNT;
    
    LIST.read();
    
    OPT = 0;
    
    while (OPT != 5)
    {
        OPT_2 = 0;
        OPT_3 = 0;//Here
        OPT_4 = 0;//Here
        OPT_5 = 0;
        INDEX = 0;
        COUNT = 0;
        FOUND = -1;//Here
        
        OPT = menu("LinkedList", "Add A Node", "Traverse", "Reverse Traverse", "Search", "Quit");
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                while (OPT_2 != 4)
                {
                    OPT_4 = 0;
                    OPT_3 = 0;
                    
                    OPT_2 = menu ("Add A Node", "To Front", "To Back", "Other Location", "Back To Main");
                    cls();
                    
                    switch (OPT_2)
                    {
    //Add To Front
                        case 1:
                        {
                            cout << "\n\tAdd To Front List\n";
                            LIST.addfront();
                            cls();
                            break;
                        }
    //Add To Back
                        case 2:
                        {
                            cout << "\n\tAdd To Back Of List\n";
                            LIST.addback();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            while (OPT_4 != 2 and OPT_3 != 3)
                            {
                                FOUND = -1;
                                OPT_5 = 0;
                                OPT_4 = 0;
    //Add To Custom Menu
                                OPT_3 = menu("Search For Node", "Via State Name", "Via State Value", "Back To Add Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
    //Search For Name
                                    case 1:
                                    {
                                        FOUND = LIST.searchname();
                                        break;
                                    }
                                    case 2:
                                    {
                                        FOUND = LIST.searchvalue();
                                        break;
                                    }
                                }
                                switch (FOUND)
                                {
                                    case -1:
                                    {
                                        break;
                                    }
//No Values Found
                                    case 0:
                                    {
                                        while (!(OPT_4 != 1 xor OPT_4 != 2))
                                        {
                                            OPT_4 = menu("No Matches Found", "Search For Another Node", "Back To Add Menu");
                                            cls();
                                        }
                                        break;
                                        
                                    }//III C 0
//1 Value Found
                                    case 1:
                                    {
                                        while (!(OPT_5 != 1 xor OPT_5 != 2))
                                        {
                                            OPT_5 = menu("\n\tAdd A Node", "In Front", "Behind");
                                            cls();
                                        }
                            
                                        switch (OPT_5)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tAdd In Front\n";
                                                LIST.addforward(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 1
                                            
                                            case 2:
                                            {
                                                cout << "\n\tAdd Behind\n";
                                                LIST.addaft(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 2
                                        }//IIII S
                                        break;
                                    }//III C 1
//Multiple Values Found
                                    default:
                                    {
                                        do
                                        {
                                            if (COUNT > 1)
                                            {
                                                cout << "\n\tPlease Enter A Value From the Choices Above";
                                            }
                                            INDEX = icin("\n\tInput Number Next To Target Node");
                                            COUNT ++;
                                        }
                                        while (INDEX > FOUND or INDEX < 1);
                                        
                                        while (!(OPT_5 != 1 xor OPT_5 != 2))
                                        {
                                            OPT_5 = menu("Add A Node", "In Front", "Behind");
                                            cls();
                                        }
                                        
                                        switch (OPT_5)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tAdd In Front\n";
                                                LIST.addforward(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 1
                                                
                                            case 2:
                                            {
                                                cout << "\n\tAdd Behind\n";
                                                LIST.addaft(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 2
                                        }//IIII S
                                        break;
                                    }//III D
                                }//III S
                            }//II WL
                        }//II WL
                    }//I S
                }//I W
                break;
            }//C 1
                
            case 2:
            {
                cout << "\n\tTravere List";
                LIST.traverse();
                any();
                cls();
                break;
            }
            
            case 3:
            {
                cout << "\n\tReverse Traverse";
                LIST.reversetraverse();
                any();
                cls();
                break;
            }
   
            case 4:
            {
                while (OPT_2 != 3)
                {
                    OPT_3 = 0;
                    OPT_4 = 0;
                    FOUND = -1;
                    OPT_2 = menu("Search For Node", "Via State Name", "Via State Value", "Back To Main Menu");
                    cls();
                    
                    switch (OPT_2)
                    {
                        case 1:
                        {
                            FOUND = LIST.searchname();
                            break;
                        }
                        case 2:
                        {
                            FOUND = LIST.searchvalue();
                            break;
                        }
                        case 3:
                        {
                            FOUND = -1;
                            break;
                        }
                    }
                    
                    switch (FOUND)
                    {
                        case -1:
                        {
                            break;
                        }
                        case 0:
                        {
                            cout << "\n\tNo Matches Found";
                            any();
                            cls();
                            break;
                        }//II C 0
                        case 1:
                        {
                            while (OPT_3 != 3)
                            {
                                OPT_4 = 0;
        
                                OPT_3 = menu("\n\tNode Menu", "Edit", "Delete", "Back To Search Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
                                    case 1:
                                    {
                                        LIST.outputone(1);
                                        while (!(OPT_4 == 1 or OPT_4 == 2 or OPT_4 == 3))
                                        {
                                            OPT_4 = menu ("Edit Menu", "State Name", "State Value", "All");
                                            cls();
                                        }
                                        switch (OPT_4)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tEdit State Name\n";
                                                LIST.editstate(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 2:
                                            {
                                                cout << "\n\tEdit State Value\n";
                                                LIST.editvalue(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 3:
                                            {
                                                cout << "\n\tEdit All\n";
                                                LIST.editall(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                        }//IIII S
                                        break;
                                    }//III C 1
                                    case 2:
                                    {
                                        cout << "\n\tDeleting Node";
                                        LIST.remove(1);
                                        any();
                                        cls();
                                        OPT_3 = 3;
                                        break;
                                    }
                                }//II S
                            }//II WL
                            break;
                        }//I C 1
                            
                        default:
                        {
                            do
                            {
                                if (COUNT > 1)
                                {
                                    cout << "\n\tPlease Enter A Value From the Choices Above";
                                }
                                INDEX = icin("\n\tInput Number Next To Target Node");
                                COUNT ++;
                            }
                            while (INDEX > FOUND or INDEX < 1);
                            
                            while (OPT_3 != 3)
                            {
                                OPT_4 = 0;
                                OPT_3 = menu("Node Menu", "Edit", "Delete", "Back To Search Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
                                    case 1:
                                    {
                                        LIST.outputone(INDEX);
                                        
                                        while (!(OPT_4 == 1 or OPT_4 == 2 or OPT_4 == 3))
                                        {
                                            OPT_4 = menu ("Edit Menu", "State Name", "State Value", "All");
                                            cls();
                                        }
                                        switch (OPT_4)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tEdit State Name\n";
                                                LIST.editstate(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 2:
                                            {
                                                cout << "\n\tEdit State Value\n";
                                                LIST.editvalue(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 3:
                                            {
                                                cout << "\n\tEdit All\n";
                                                LIST.editall(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                        }//IIII S
                                        break;
                                    }//III C 1
                                    case 2:
                                    {
                                        cout << "\n\tDeleting Node";
                                        LIST.remove(INDEX);
                                        any();
                                        cls();
                                        OPT_3 = 3;
                                        break;
                                    }
                                }//II S
                            }
                        }
                    }//I S
                }//I WL
            }//C 4
        }//S
    }//WL
    LIST.write();
}
