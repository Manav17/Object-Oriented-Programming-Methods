
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
    Hourly hourly[10];
    Salary salary[10];
    Contractor contractor[10];
    Worker *HOURLY = &hourly[0];
    Worker *SALARY = &salary[0];
    Worker *CONTRACTOR = &contractor[0];
    
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
                            HOURLY[H_SIZE].input();
                            HOURLY[H_SIZE].setINDEX(H_SIZE);
                            H_SIZE++;
                            cout << "\n\tHourly Employee Added To Array";
                            any();
                            cls();
                            break;
                        }
                            
                        case 2:
                        {
                            cout << "\n\tInput New Salaried Employee\n";
                            SALARY[S_SIZE].input();
                            SALARY[S_SIZE].setINDEX(S_SIZE);
                            
                            S_SIZE++;
                            cout << "\n\tSalaried Employee Added To Array";
                            any();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            cout << "\n\tInput New Contractor Peronnel\n";
                            CONTRACTOR[C_SIZE].input();
                            CONTRACTOR[C_SIZE].setINDEX(C_SIZE);
                            
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
                            
                            while (OPT3 != 7)
                            {
                                HOURLY[INDEX].calculatepay();
                                
                                OPT3 = menu("\n\tEdit Hourly Employee", "ID", "Hours", "Pay Per Hour", "Tax Rate", "Status", "All", "Back To Edit Menu");
                                cls();
                                switch (OPT3)
                                {
                                    case 1:
                                    case 6:
                                    {
                                        T_ID = scin("ID");
                                        HOURLY[INDEX].setID(T_ID);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 2:
                                    {
                                        T_HRS = fcin("Hours Worked");
                                        HOURLY[INDEX].setHRS(T_HRS);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 3:
                                    {
                                        T_PAY = fcin("Pay Per Hour");
                                        HOURLY[INDEX].setPAY(T_PAY);
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 4:
                                    {
                                        T_TAX = pcin("Tax Rate");
                                        HOURLY[INDEX].setTAX(T_TAX);
                                        
                                        if (OPT3 != 6)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                    case 5:
                                    {
                                        T_STATUS = scin("Status");
                                        HOURLY[INDEX].setSTATUS(T_STATUS);
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
                            
                            while (OPT3 != 5)
                            {
                                SALARY[INDEX].calculatepay();
                                
                                OPT3 = menu("\n\tEdit Salaried Employee", "ID", "Pay", "Tax Rate", "All", "Back to Edit Menu");
                                cls();
                                
                                switch (OPT3)
                                {
                                    case 1:
                                    case 4:
                                    {
                                        T_ID = scin("ID");
                                        SALARY[INDEX].setID(T_ID);
                                        
                                        if (OPT3 != 4)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                    
                                    case 2:
                                    {
                                        T_PAY = fcin("Yearly Salary");
                                        SALARY[INDEX].setPAY(T_PAY);
                                        
                                        if (OPT3 != 4)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                        
                                    case 3:
                                    {
                                        T_TAX = pcin("Tax Rate");
                                        SALARY[INDEX].setTAX(T_TAX);
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
                            
                            while (OPT3 != 4)
                            {
                                CONTRACTOR[INDEX].calculatepay();
                                
                                OPT3 = menu("\n\tEdit Contractor Personnel", "ID", "Fee", "All", "Back To Edit Menu");
                                cls();
                                
                                switch (OPT3)
                                {
                                    case 1:
                                    case 3:
                                    {
                                        T_ID = scin("ID");
                                        CONTRACTOR[INDEX].setID(T_ID);
                                        
                                        if (OPT3 != 3)
                                        {
                                            cls();
                                            break;
                                        }
                                    }
                                    case 2:
                                    {
                                        T_PAY = fcin("Fee");
                                        CONTRACTOR[INDEX].setPAY(T_PAY);
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
                                HOURLY[A].calculatepay();
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
                                SALARY[B].calculatepay();
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
                                CONTRACTOR[C].calculatepay();
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
                            HOURLY[INDEX].terminate();
                            any();
                            cls();
                            break;
                        }
                            
                        case 2:
                        {
                            cout << "\n\tTerminate Salaried Employee\n";
                            INDEX = icin("Index");
                            cls();
                            SALARY[INDEX].terminate();
                            any();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            cout << "\n\tTerminate Contract\n";
                            INDEX = icin("Index");
                            cls();
                            CONTRACTOR[INDEX].terminate();
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
