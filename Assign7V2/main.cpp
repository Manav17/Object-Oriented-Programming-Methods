
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <unistd.h>     //For Sleep Functions
//#include <conio.h>


using namespace std;


#include "Meep.h"
#include "Worker.h"

int main ()
{
    Hourly HOURLY[10];
    Salary SALARY[10];
    Contractor CONTRACTOR[10];
    
    Worker *H_POINTER = &HOURLY[0];
    Worker *S_POINTER = &SALARY[0];
    Worker *C_POINTER = &CONTRACTOR[0];
    
    HOURLY[0].setALL("AS101", 32.34, 28.5, .55, 0);
    HOURLY[1].setALL("GH100", 44.5, 39.22, .04, 1);
    HOURLY[2].setALL( "UY189", 47.22, 45.6, .016, 2);
    
    SALARY[0].setALL("VE320", 45750.34, .07, 0);
    SALARY[1].setALL("BR003", 65740.88, .065, 1);
    SALARY[2].setALL("AA981", 50900.71, .012, 2);
    
    CONTRACTOR[0].setALL("BV111", 55473.56, 0);
    CONTRACTOR[1].setALL("NB290", 65540.87, 1);
    CONTRACTOR[2].setALL("VC100", 45679.25, 2);
    
    int OPT = 0;
    int H_SIZE = 3, S_SIZE = 3, C_SIZE = 3;
    
    while (OPT != 5)
    {
        int OPT2 = 0, OPT3 = 0;
        int INDEX;
        float T_PAY, T_HRS, T_TAX;
        string T_ID, T_STATUS;
        
        OPT = menu("Main Menu", "Input New Employee", "Edit Emplyee Data", "Display Data", "Terminate", "Quit");
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                while (OPT2 != 4)
                {
                    OPT2 = menu("Input Data", "Hourly", "Salaried", "Contractor", "Back To Main");
                    cls();
                    
                    switch (OPT2)
                    {
                        case 1:
                        {
                            cout << "\n\tInput New Hourly Employee\n";
                            H_POINTER = &HOURLY[H_SIZE];
                            H_POINTER -> input();
                            H_POINTER -> setINDEX(H_SIZE);
                            H_SIZE++;
                            cout << "\n\tHourly Employee Added To Array";
                            any();
                            cls();
                            break;
                        }
                            
                        case 2:
                        {
                            cout << "\n\tInput New Salaried Employee\n";
                            S_POINTER = &SALARY[S_SIZE];
                            S_POINTER -> input();
                            S_POINTER -> setINDEX(S_SIZE);
                            S_SIZE++;
                            cout << "\n\tSalaried Employee Added To Array";
                            any();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            cout << "\n\tInput New Contractor Peronnel\n";
                            C_POINTER = &CONTRACTOR[C_SIZE];
                            C_POINTER -> input();
                            C_POINTER -> setINDEX(C_SIZE);
                            C_SIZE++;
                            cout << "\n\tContractor Personnel Added to Array";
                            any();
                            cls();
                            break;
                        }
                    }
                }
                break;
            }
                
            case 2:
            {
                while (OPT2 != 4)
                {
                    OPT2  = menu("Edit", "Hourly", "Salaried", "Contractor", "Back To Main Menu");
                    cls();
                    
                    switch (OPT2)
                    {
                        case 1:
                        {
                            do
                            {
                                cout << "\n\tEdit Hourly Employee (0 to " << H_SIZE - 1 << ")\n";
                                INDEX = icin("Index");
                                cls();
                            }
                            while (INDEX < 0 or INDEX >= H_SIZE);
                            
                            H_POINTER = &HOURLY[INDEX];
                            
                            while (OPT3 != 7)
                            {
                                H_POINTER -> calculatepay();
                                
                                OPT3 = menu("\n\tEdit Hourly Employee", "ID", "Hours", "Pay Per Hour", "Tax Rate", "Status", "All", "Back To Edit Menu");
                                cls();
                                switch (OPT3)
                                {
                                    case 1:
                                    case 6:
                                    {
                                        T_ID = scin("ID");
                                        H_POINTER -> setID(T_ID);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 2:
                                    {
                                        T_HRS = fcin("Hours Worked");
                                        H_POINTER -> setHRS(T_HRS);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 3:
                                    {
                                        T_PAY = fcin("Pay Per Hour");
                                        H_POINTER -> setPAY(T_PAY);
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 4:
                                    {
                                        T_TAX = pcin("Tax Rate");
                                        H_POINTER -> setTAX(T_TAX);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                    case 5:
                                    {
                                        T_STATUS = scin("Status");
                                        H_POINTER -> setSTATUS(T_STATUS);
                                        cls();
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                            
                        case 2:
                        {
                            do
                            {
                                cout << "\n\tEdit Salaried Employee (0 to " << S_SIZE - 1 << ")\n";
                                INDEX = icin("Index");
                                cls();
                            }
                            while (INDEX < 0 or INDEX >= S_SIZE);
                            
                            S_POINTER = &SALARY[INDEX];
                            
                            while (OPT3 != 5)
                            {
                                S_POINTER -> calculatepay();
                                
                                OPT3 = menu("\n\tEdit Salaried Employee", "ID", "Pay", "Tax Rate", "All", "Back to Edit Menu");
                                cls();
                                
                                switch (OPT3)
                                {
                                    case 1:
                                    case 4:
                                    {
                                        T_ID = scin("ID");
                                        S_POINTER -> setID(T_ID);
                                        
                                        if (OPT3 != 4)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 2:
                                    {
                                        T_PAY = fcin("Yearly Salary");
                                        S_POINTER -> setPAY(T_PAY);
                                        
                                        if (OPT3 != 4)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 3:
                                    {
                                        T_TAX = pcin("Tax Rate");
                                        S_POINTER -> setTAX(T_TAX);
                                        cls();
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                            
                        case 3:
                        {
                            do
                            {
                                cout << "\n\tEdit Contractor Personnel (0 to " << C_SIZE - 1 << ")\n";
                                INDEX = icin("Index");
                                cls();
                            }
                            while (INDEX < 0 or INDEX >= C_SIZE);
                            
                            C_POINTER = &CONTRACTOR[INDEX];
                            
                            while (OPT3 != 4)
                            {
                                C_POINTER -> calculatepay();
                                
                                OPT3 = menu("\n\tEdit Contractor Personnel", "ID", "Fee", "All", "Back To Edit Menu");
                                cls();
                                
                                switch (OPT3)
                                {
                                    case 1:
                                    case 3:
                                    {
                                        T_ID = scin("ID");
                                        C_POINTER -> setID(T_ID);
                                        
                                        if (OPT3 != 3)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                    case 2:
                                    {
                                        T_PAY = fcin("Fee");
                                        C_POINTER -> setPAY(T_PAY);
                                        cls();
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
            }
                
            case 3:
            {
                while (OPT2 != 5)
                {
                    OPT2 = menu("\n\tDisplay", "Hourly", "Salaried", "Contractor", "All", "Back To Main");
                    cls();
                    switch (OPT2)
                    {
                        case 1:
                        case 4:
                        {
                            cout << "\n\n\tHourly Employees";
                            for(int A = 0; A < H_SIZE; A++ )
                            {
                                H_POINTER = &HOURLY[A];
                                H_POINTER -> calculatepay();
                            }
                            
                            if (OPT2 != 4)
                            {
                                any();
                                cls();
                                break;
                            }
                        }
                            
                        case 2:
                        {
                            cout << "\n\n\tSalary Employees";
                            for(int B = 0; B < S_SIZE; B++ )
                            {
                                S_POINTER = &SALARY[B];
                                S_POINTER -> calculatepay();
                            }
                            
                            if (OPT2 != 4)
                            {
                                any();
                                cls();
                                break;
                            }
                        }
                            
                        case 3:
                        {
                            cout << "\n\n\tContractor Personnel";
                            for(int C = 0; C < C_SIZE; C++)
                            {
                                C_POINTER = &CONTRACTOR[C];
                                C_POINTER -> calculatepay();
                            }
                            any();
                            cls();
                            break;
                        }
                    }
                }
                break;
            }
                
            case 4:
            {
                while (OPT2 != 4)
                {
                    OPT2 = menu("Terminate", "Hourly", "Salaried", "Contractor", "Back To Main");
                    cls();
                    switch (OPT2)
                    {
                        case 1:
                        {
                            cout << "\n\tTerminate Hourly Employee\n";
                            INDEX = icin("Index");
                            cls();
                            H_POINTER = &HOURLY[INDEX];
                            H_POINTER -> terminate();
                            any();
                            cls();
                            break;
                        }
                            
                        case 2:
                        {
                            cout << "\n\tTerminate Salaried Employee\n";
                            INDEX = icin("Index");
                            cls();
                            S_POINTER = &SALARY[INDEX];
                            S_POINTER -> terminate();
                            any();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            cout << "\n\tTerminate Contract\n";
                            INDEX = icin("Index");
                            cls();
                            C_POINTER = &CONTRACTOR[INDEX];
                            C_POINTER -> terminate();
                            any();
                            cls();
                            break;
                        }
                    }
                }
                break;
            }
        }
    }
}
