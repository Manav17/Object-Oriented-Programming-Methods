
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
//#include <conio.h>


using namespace std;


int main ()
{
    
    int OPT = 0, REC, COUNTER;
    string FILENAME = "personnel2.dat";
    char LNAME [30], FNAME [30], ID [10];
    double HRS, PRATE, FTRATE, STRATE, GPAY, FTAX, STAX, NPAY; // If I Use Float There Is An Error With The Range For Data File Inputs
    double FTIN, STIN, SEARCHHRS;
    ofstream OUTDAT;
    ifstream INDAT;
    
    
    cout << "\n\tWelcome to Data File Application";
    
    while (OPT != 4)
    {

//Initializaton
        REC = 0;
        COUNTER = 0;
        
//Precision
        cout.precision(2);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);
        
//Menu
        cout << "\n\n\tMenu";
        
        cout << "\n\n\t1 - Write New Record To The Data File";
        cout << "\n\t2 - Display Records From The Data File";
        cout << "\n\t3 - Search Data File Via Hours";
        cout << "\n\t4 - Quit";
        
        cout << "\n\n\tOpt : ";
        cin >> OPT;
        
        system ("clear");
        
        switch (OPT)
        {
                
//Write to File
        case 1:
            {
                
        //Input Data
                cout << "\n\tWriting To Data File";
                
                cout << "\n\n\t(1 of 7) Enter Employee ID : ";
                cin >> ID;
                
                cout << "\n\t(2 of 7) Enter Employee Last Name : ";
                cin >> LNAME;
                
                cout << "\n\t(3 of 7) Enter Employee First Name : ";
                cin >> FNAME;
                
                cout << "\n\t(4 of 7) Enter Hours Worked (0 - 40) : ";
                cin >> HRS;
                
                while ((HRS > 40) or (HRS < 0))
                {
                    
                    cout << "\n\tYou Have Entered An Invalid Value, Please Enter A Value From 0 To 40 : ";
                    cin >> HRS;
                    
                }
                
                cout << "\n\t(5 of 7) Enter Pay Rate (10 - 100) : $";
                cin >> PRATE;
                
                while ((PRATE > 100) or (PRATE < 10))
                {
                    
                    cout << "\n\tYou Have Entered An Invalid Value, Please Enter A Value From 10 to 100 : ";
                    cin >> PRATE;
                    
                }
                
                cout << "\n\t(6 of 7) Enter Federal Tax Rate (0 - .4) : ";
                
                do
                {
    
                    if (COUNTER > 0)
                    {
                        
                        cout << "\n\tYou Have Entered An Invalid Value, Please Enter A Value From 0 % to 40 % : ";
                        
                    }
                    
                    cin >> FTRATE;
                    
                    if (FTRATE > 1)
                    {
                        
                        FTRATE = FTRATE / 100;
                        
                    }
                    
                    COUNTER++;
                    
                }
                while ((FTRATE > .4) or (FTRATE < 0));
                
                COUNTER = 0;
                    
                cout << "\n\t(7 of 7) Enter State Tax Rate ( 0 - .1) : ";
                
                do
                {
                    
                    if (COUNTER > 0)
                    {
                        
                        cout << "\n\tYou Have Entered An Invalid Value, Please Enter A Value From 0 % to 10 % : ";
                        
                    }
                    
                    cin >> STRATE;
                    
                    if (STRATE > 1)
                    {
                        
                        STRATE = STRATE / 100;
                        
                    }
                    
                    COUNTER++;
                    
                }
                while ((STRATE > .1) or (STRATE < 0));
                
                COUNTER = 0;
                
                cout << "\n\n\t Data Written To File, Press Any Key to Continue";
                
                getchar();
                
                system ("clear");
                
        //Write to File
                OUTDAT.open(FILENAME, ios::out|ios::app);
                
                OUTDAT << ID << " " << LNAME << " " << FNAME << " " << HRS << " "<< PRATE << " " << FTRATE << " " << STRATE << " " << "\n";
                
                OUTDAT.close();
                break;
                
            }
                
//Read From File
            case 2:
                
            {
                cout << "\n\tReading Data File";
                
                INDAT.open(FILENAME);
                
                //Read First
                INDAT >> ID >> LNAME >> FNAME >> HRS >> PRATE >> FTIN >> STIN;
                
                while (!INDAT.eof())
                {
                    
                    REC ++;
                    
                //Calculations
                    FTRATE = FTIN * 100;
                    STRATE = STIN * 100;
                    GPAY = HRS * PRATE;
                    FTAX = FTIN * GPAY;
                    STAX = STIN * GPAY;
                    NPAY = GPAY - FTAX - STAX;
                    
                //Output Then Read
                    cout << "\n\n\tRecord # " << REC;
                    cout << "\n\tEmployee ID: " << ID;
                    cout << "\n\tLast Name : " << LNAME << "\tFirst Name : " << FNAME;
                    cout << "\n\tHours Worked : " << HRS << "\tPay Rate : $" << PRATE << "\tGross Pay : $" << GPAY;
                    cout << "\n\tFederal Taxes : $" << FTAX << "\tState Taxes : $" << STAX << "\tNet Pay : $" << NPAY;
                    cout << "\n\tFederal Tax Rate : " << FTRATE << " %\tState Tax Rate : " << STRATE << " %";
                    
                //Read Again
                    INDAT >> ID >> LNAME >> FNAME >> HRS >> PRATE >> FTIN >> STIN;
                }
                
                INDAT.close();
                
                cout << "\n\n\tEnd Of File, No More Records, Press Any Key To Continue";
                getchar();
                system ("clear");
                
                break;
            }
                
//Search File
            case 3:
            {
                
            //Intput
                cout << "\n\tSearch For Employees Via Hours";
                cout << "\n\tEnter A Value For Hours, The Program Will Output All Employees With Less Than  Or Equivalent Hours To The Value";
                cout << "\n\tValue : ";
                cin >> SEARCHHRS;
            
                system ("clear");
            
            //Searching
                INDAT.open(FILENAME);
            
                cout << "\n\tSearching...";
            
            //Read First
                INDAT >> ID >> LNAME >> FNAME >> HRS >> PRATE >> FTIN >> STIN;
            
                while (!INDAT.eof())
                {
                    
                //Calculations
                    FTRATE = FTIN * 100;
                    STRATE = STIN * 100;
                    GPAY = HRS * PRATE;
                    FTAX = FTIN * GPAY;
                    STAX = STIN * GPAY;
                    NPAY = GPAY - FTAX - STAX;
                    
                //Output If Less Than
                    if (HRS <= SEARCHHRS)
                    {
                        
                        REC++;
                        
                        
                    //Cout If Found
                        cout << "\n\n\tRecord # " << REC;
                        cout << "\n\tEmployee ID: " << ID;
                        cout << "\n\tLast Name : " << LNAME << "\tFirst Name : " << FNAME;
                        cout << "\n\tHours Worked : " << HRS << "\tPay Rate : $" << PRATE << "\tGross Pay : $" << GPAY;
                        cout << "\n\tFederal Taxes : $" << FTAX << "\tState Taxes : $" << STAX << "\tNet Pay : $" << NPAY;
                        cout << "\n\tFederal Tax Rate : " << FTRATE << " %\tState Tax Rate : " << STRATE << " %";
                        
                    }
                    
                //Read Again
                    INDAT >> ID >> LNAME >> FNAME >> HRS >> PRATE >> FTIN >> STIN;
                    
                }
            
                INDAT.close();
                
            //If None Found
                if (REC == 0)
                {
                    cout << "\n\n\tNo Records Found";
                }
            
                cout << "\n\tPress Any Key To Return To Menu";
                getchar();
            
                break;
            }
                
        }
    
    }
}
