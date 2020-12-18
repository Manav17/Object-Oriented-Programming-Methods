
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>


using namespace std;


//Functions Prototypes
float CALCULATE (float, float, int);


int main()
{
    char AGAIN = 'Y';
    
    while (AGAIN != 'n' and AGAIN != 'N')
    {
        char OPT = 'A';
        float NUM1 = 0, NUM2 = 0;
        
        while (OPT != '7')
        {
            switch (OPT)
            {
                case 'A':
                    //Input
                {
                    cout << "\n\tArithmetic Calculator";
                    cout << "\n\n\tEnter Number 1 : ";
                    cin >> NUM1;
                    
                    cout << "\n\tEnter Number 2 : ";
                    cin >> NUM2;
                    
                    system ("clear");
                    
                }
                    
                case 'B':
                    //Menu
                {
                    cout << "\n\tMenu";
                    
                    cout << "\n\n\t1 - Add (" << NUM1 << " + " << NUM2 << ")";
                    cout << "\n\t2 - Subtract (" << NUM1 << " - " << NUM2 << ")";
                    cout << "\n\t3 - Multiply (" << NUM1 << " * " << NUM2 << ")";
                    cout << "\n\t4 - Divide (" << NUM1 << " / " << NUM2 << ")";
                    cout << "\n\t5 - All";
                    cout << "\n\t6 - Change Value Of Numbers";
                    cout << "\n\t7 - Quit";
                    
                    cout << "\n\n\tOPT : ";
                    cin >> OPT;
                    
                    system ("clear");
                    break;
                }
                    
                case '5':
                case '1':
                    //Add
                {
                    cout << "\n\n\t" << NUM1 << " + " << NUM2 << " = " << CALCULATE (NUM1, NUM2, 1);
                    
                    if (OPT != '5')
                    {
                        
                        cout << "\n\n\n\tPress Any Key To Continue";
                        
                        system ("clear");
                        OPT = 'B';
                        break;
                    }
                }
                    
                case '2':
                    //Subtract
                {
                    cout << "\n\n\t" << NUM1 << " - " << NUM2 << " = " << CALCULATE (NUM1, NUM2, 2);
                    
                    if (OPT != '5')
                    {
                        
                        cout << "\n\n\n\tPress Any Key To Continue";
                        
                        system ("clear");
                        OPT = 'B';
                        break;
                    }
                }
                    
                case '3':
                    //Multiply
                {
                    cout << "\n\n\t" << NUM1 << " * " << NUM2 << " = " << CALCULATE (NUM1, NUM2, 3);
                    
                    if (OPT != '5')
                    {
                        
                        cout << "\n\n\n\tPress Any Key To Continue";
                        
                        system ("clear");
                        OPT = 'B';
                        break;
                    }
                }
                    
                case '4':
                    //Divide
                {
                    if (NUM2 == 0)
                    {
                        cout << "\n\n\tIt Is Not Possible To Divide By 0, Defaulting To 1:";
                        cout << "\n\n\t" << NUM1 << " / " << 1 << " = " << CALCULATE (NUM1, 1, 4);
                        
                        cout << "\n\n\n\tPress Any Key To Continue";
                        
                        getchar();
                        system("clear");
                        
                        OPT = 'B';
                        break;
                    }
                    
                    else
                    {
                        cout << "\n\n\t" << NUM1 << " / " << NUM2 << " = " << CALCULATE (NUM1, NUM2, 4);
                        
                        cout << "\n\n\n\tPress Any Key To Continue";
                        
                        getchar();
                        system("clear");
                        
                        OPT = 'B';
                        break;
                    }
                }
                    
                case '6':
                    //Change Numbers
                {
                    OPT = 'A';
                    break;
                }
            }
        }
        
        cout << "\n\tWould You Like to Run The Program Again (y or n)?";
        cin >> AGAIN;
        
        system ("clear");
    }
}

//Functions Definitions
float CALCULATE (float NUM1, float NUM2, int OPT)
{
    float TOT;
    
    //Calculations
    switch (OPT)
    {
        case 1:
        {
            //Add
            TOT = NUM1 + NUM2;
            
            return TOT;
            break;
        }
            
        case 2:
        {
            //Subtract
            TOT = NUM1 - NUM2;
            
            return TOT;
            break;
        }
            
        case 3:
        {
            //Multiply
            TOT = NUM1 * NUM2;
            
            return TOT;
            break;
        }
            
        case 4:
        {
            //Divide
            TOT = NUM1 / NUM2;
            
            return TOT;
            break;
        }
            
        default:
        {
            return 0;
            break;
        }
    }
}

