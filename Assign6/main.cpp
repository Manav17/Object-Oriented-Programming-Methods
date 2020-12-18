
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>


//Header Files
#include "Meep.h"
#include "Vehicle.h"
#include "Truck.h"



using namespace std;


int main ()
{
    int OPT = 0, OPT2 = 0, VHL_SIZE = 4, TRK_SIZE = 2;
    int E_IND = 0, F_IND = 0;
    const int MAX = 10;
    
    Vehicle VHL [MAX] = {
                        {"Sedan", 5, 4, 80},
                        {"Bicycle", 1, 2, 30},
                        {"Unicycle", 1, 1, 15},
                        {"Row Boat", 3, 0, 10}
                        };
    Truck TRK [MAX] = {
                        {"Pickup Truck", 2, 4, 65},
                        {"Van", 2, 6, 70}
                        };
    

    while (OPT != 8)
    {
///Initializations
        OPT2 = 0;
        OPT = 0;
        E_IND = 0;
        F_IND = 0;
        
        OPT = menu("Main Menu", "Display All Vehicles" , "Edit A Vehicle Class Member", "Find a Vehicle Class Member", "Add A New Vehicle Member", "Add a New Truck Member", "Display Truck Members", "Edit A Truck Class Member", "Quit");
        //cicc();
        cls();
        
        switch (OPT)
        {
///Case 1
            case 1:
            {
                cout << "\n\tDisplay All Vehicles";
                for (int A = 0; A < VHL_SIZE; A++)
                {
                    VHL[A].Display(A);
                }
                
                any();
                cls();
                break;
            }
            case 2:
            {
                cout << "\n\tEdit Vehicle\n";
                E_IND = icin("Enter Index Location Of Target Vehicle");
                cicc();
                cls();
                
                if (E_IND < 0 or E_IND > VHL_SIZE)
                {
                    cout << "\n\tTarget Vehicle Was Not Found";
                    any();
                    cls();
                    break;
                }
                
                while (OPT2 != 6)
                {
                    VHL[E_IND].Display(E_IND);
                    cout << "\n";
                    
                    OPT2 = menu ("Vehicle Edit Menu", "Edit Name", "Edit Number Of Passengers", "Edit Number Of Wheels", "Edit Maximum Speed", "Edit All", "Return To Main");
                    //cicc();
                    cls();
                    
                    cout << "\n\tEdit\n";
                    
                    switch (OPT2)
                    {
                        case 1:
                        case 5:
                        {
                            VHL[E_IND].SetName(scin("Name"));
                            
                            if (OPT2 != 5)
                            {
                                cls();
                                break;
                            }
                        }
                        case 2:
                        {
                            VHL[E_IND].SetPassengers(icin("Passengers"));
                            cicc();
                            
                            if (OPT2 != 5)
                            {
                                cls();
                                break;
                            }
                        }
                        case 3:
                        {
                            VHL[E_IND].SetWheels(icin("Number Of Wheels"));
                            cicc();
                            
                            if (OPT2 != 5)
                            {
                                cls();
                                break;
                            }
                        }
                        case 4:
                        {
                            VHL[E_IND].SetSpd(fcin("Maximum Speed"));
                            cicc();
                            cls();
                            break;
                        }
                    }//Innerswitch
                }//While Loop
                cls();
                break;
            }//Case 2
            case 3:
            {
                cout << "\n\tFind\n";
                F_IND = icin("Enter Index Location Of Target Vehicle");
                
                cicc();
                cls();
                
                if (F_IND < 0 or F_IND > VHL_SIZE)
                {
                    cout << "\n\tTarget Vehicle Was Not Found";
                    any();
                    cls();
                    break;
                }
                else
                {
                    cout << "\n\tTarget Vehicle Found";
                    VHL[F_IND].Display(F_IND);
                    
                    any();
                    cls();
                    break;
                }
            }//case 3
            case 4:
            {
                if (VHL_SIZE >= MAX)
                {
                    cout << "\n\tArray Is Full, No More Avaliable Space To Add Member";
                    any();
                    cls();
                    break;
                }
                
                cout << "\n\tAdd A Vehicle Member\n\n";
                VHL[VHL_SIZE].SetAll(scin("Name"), icin("Passengers"), icin("Number Of Wheels"), fcin("Maxmimum Speed"));
                cout << "\n\tVehicle Member Saved";
                VHL_SIZE++;
                
                any();
                cls();
                break;
            }
            case 5:
            {
                if (TRK_SIZE >= MAX)
                {
                    cout << "\n\tArray Is Full, No More Avaliable Space To Add Member";
                    any();
                    cls();
                    break;
                }
                
                cout << "\n\tAdd A Truck Member\n\n";
                TRK[TRK_SIZE].SetAll(scin("NAME"), icin("Passengers"), icin("Number Of Wheels"), fcin("Maxmimum Speed"));
                TRK[TRK_SIZE].SetLoad(fcin("Maximum Load"));
                TRK[TRK_SIZE].SetWeight(fcin("Weight"));
                cout << "\n\tTruck Member Saved";
                TRK_SIZE++;
                
                any();
                cls();
                break;
            }
            case 6:
            {
                cout << "\n\tDisplay All Truck Member";
                
                for (int B = 0; B < TRK_SIZE; B++)
                {
                    TRK[B].Display(B);
                    TRK[B].TrkDisplay();
                }
                any();
                cls();
                break;
            }
            case 7:
            {
                cout << "\n\tEdit Truck";
                E_IND = icin("Enter Index Location Of Target Truck");
                cicc();
                cls();
                
                if (E_IND < 0 or E_IND > TRK_SIZE)
                {
                    cout << "\n\tTarget Truck Was Not Found";
                    any();
                    cls();
                    break;
                }
                
                while (OPT2 != 7)
                {
                    TRK[E_IND].Display(E_IND);
                    TRK[E_IND].TrkDisplay();
                    cout << "\n";
                    
                    OPT2 = menu ("Truck Edit Menu", "Edit Name", "Edit Number Of Passengers", "Edit Number Of Wheels", "Edit Maximum Speed","Edit Load", "Edit Weight", "Edit All",  "Return To Main");
                    //cicc();
                    cls();
                    
                    cout << "\n\tEdit\n";
                    
                    switch (OPT2)
                    {
                        case 1:
                        case 7:
                        {
                            TRK[E_IND].SetName(scin("Name"));
                            
                            if (OPT2 != 7)
                            {
                                cls();
                                break;
                            }
                        }
                        case 2:
                        {
                            TRK[E_IND].SetPassengers(icin("Passengers"));
                            cicc();
                            
                            if (OPT2 != 7)
                            {
                                cls();
                                break;
                            }
                        }
                        case 3:
                        {
                            TRK[E_IND].SetWheels(icin("Number Of Wheels"));
                            cicc();
                            
                            if (OPT2 != 7)
                            {
                                cls();
                                break;
                            }
                        }
                        case 4:
                        {
                            TRK[E_IND].SetSpd(fcin("Maximum Speed"));
                            cicc();
                            
                            if (OPT2 != 7)
                            {
                                cls();
                                break;
                            }
                        }
                        case 5:
                        {
                            TRK[E_IND].SetWeight(fcin("Weight"));
                            cicc();
                            
                            if (OPT2 != 7)
                            {
                                cls();
                                break;
                            }
                        }
                        case 6:
                        {
                            TRK[E_IND].SetLoad(fcin("Maximum Load"));
                            cicc();
                            cls();
                            break;
                        }
                    }//Innerswitch
                }//While Loop
                cls();
                break;
            }//Case 7
        }//Switch
    }//Main
    
    cout << "End Program";
}
