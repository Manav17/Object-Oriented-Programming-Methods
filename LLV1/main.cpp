
#include <stdlib.h>
#include <unistd.h>//For Sleep Functions
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
//#include <conio.h>

using namespace std;


struct node
{
    node *NP = nullptr;//Next pointer
    int NUM = 0;
    node *PP = nullptr;//Previous pointer
};

int main ()
{
    //Initialize
    //    node F;
    //    node L;
    //    F.NP = &L;
    //    F.NUM = 21;
    //    L.PP = &F;
    //    L.NUM = 24;
    
    node *FIRST = NULL;
    node *LAST = NULL;
    node *T_NEXT = NULL;
    node *T_PREV = NULL;
    node *TEMP = NULL;
    node *TEMP2 = NULL;
    int OPT, T_NUM, CNT = 0, SIZE = 0;
    
    //Formating
    cout << left;
    
    do
    {
        OPT = menu("Linked List", "Add To Back", "Add To Front", "Traverse", "Reverse Traverse", "Add To Middle", "Quit");
        
        switch (OPT)
        {
            case 1:
            {
                cout << "\n\tAdd Element To Back";
                cout << "\n\tNum";
                cin >> T_NUM;
                TEMP = new node;
                TEMP -> PP = LAST;
                TEMP -> NP = NULL;
                TEMP -> NUM = T_NUM;
                
                if (SIZE == 0)
                {
                    TEMP = FIRST;
                    TEMP = LAST;
                }
                else
                {
                    LAST -> NP = TEMP;
                    LAST = TEMP;
                }
                
                SIZE++;
                break;
            }
            case 2:
            {
                cout << "\n\tAdd Element To Front";
                cout << "\n\tNum";
                cin >> T_NUM;
                TEMP = new node;
                TEMP -> PP = NULL;
                TEMP -> NP = FIRST;
                TEMP -> NUM = T_NUM;
               
                
                if (SIZE == 0)
                {
                    FIRST = TEMP;
                    LAST = TEMP;
                }
                else
                {
                    FIRST = TEMP;
                    FIRST -> PP = TEMP;
                }
                
                SIZE++;
                break;
            }
            case 3:
            {
                CNT = 0;
                T_NEXT = FIRST;
                cout << "\n\t" << setw(10) << "Index" << setw(10) << "Number" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous";
                while (T_NEXT != NULL)
                {
                    cout << "\n\t" << setw(10) << CNT << setw(10) << T_NEXT -> NUM << setw(20) << T_NEXT << setw(20) <<  T_NEXT -> NP << setw(20) << T_NEXT -> PP;
                    T_NEXT = T_NEXT -> NP;
                    CNT++;
                }
                break;
            }
            case 4:
            {
                CNT = SIZE;
                T_PREV = LAST;
                cout << "\n\t" << setw(10) << "Index" << setw(10) << "Number" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous";
                while (T_PREV != NULL)
                {
                    CNT--;
                    cout << "\n\t" << setw(10) << CNT << setw(10) << T_PREV -> NUM << setw(20) << T_PREV << setw(20) <<  T_PREV -> NP << setw(20) << T_PREV -> PP;
                    T_PREV = T_PREV -> PP;
                    
                }
                
                break;
            }
            case 5:
            {
                cout << "\n\tAdd to Middle";
                cout << "\n\tNum";
                cin >> T_NUM;
                TEMP = new node;
                TEMP -> NUM = T_NUM;
                CNT = SIZE/2;
                TEMP2 = FIRST;
                for (int X = 1; X < CNT; X++)
                {
                    TEMP2 = TEMP2 -> NP;
                }
                TEMP -> PP = TEMP2;
                TEMP -> NP = TEMP2 -> NP;
                TEMP2 -> NP = TEMP;
                TEMP2 = TEMP2 -> NP;
                TEMP2 -> PP = TEMP;
                SIZE++;
            }
        }
        cls();
    }
    while (OPT != 6);
}
