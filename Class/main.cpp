#include <iostream>                 //Gursimrit Singh CSCI 15
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <math.h>

using namespace std;

struct employees
{
    string ID;
    string last_name;
    string first_name;
    float hours;
    float payrate;
    float taxrate;
};

int main()
{
    employees records[100];
    int n=0;///set n =0;
    string user_id;
    char again = 'y';
    float gross_pay, total_taxes, net_pay;
    int option, counter, select;// pick;
    ofstream writing;
    
    string worker_id, user_last, user_first;
    float user_hours, user_payrate, user_taxrate;
    
    ifstream reading;
    reading.open("personnel1.dat", ios::in); //Opening file to read
    
    while (n < 100 && reading >> records[n].ID >> records[n].last_name >> records[n].first_name >> records[n].hours >> records[n].payrate >> records[n].taxrate)
    {
        n++;
    }
    
    while (again == 'y')
    {
        //char repeat = 'y';///////////
        int tracker = 0;
        int pick = 0;////////Move Pick Here
        system("cls");
       
//        ofstream writing;
       // writing.open("personnel1.dat", ios::out | ios::app); //Opening file to write
        //count number of employees
      
        
        cout << "1 - Display All Employees\n";
        cout << "2 - Find One Particular Employee\n";
        cout << "3 - Add a New Employee\n";
        cout << "4 - Find One Particular Employee and change one or more fields\n";
        cout << "5 - Quit\n\n";
        cout << "Enter an option (1-5): ";
        cin >> option;
        
        system("cls");
        
        
        switch(option)
        {
            case 1:
//                while (n < 100 && reading >> records[n].ID >> records[n].last_name >> records[n].first_name >> records[n].hours >> records[n].payrate >> records[n].taxrate)
//                {
//                    n++;
//                }
                cout << n << " Total Employees: \n\n";
                for(int i = 0; i < n; i++)
                {
                    gross_pay = records[i].hours * records[i].payrate;
                    total_taxes = gross_pay * records[i].taxrate;
                    net_pay = gross_pay - total_taxes;
                    
                    cout << "Employee #" << i+1 << "\tEmployee ID " << records[i].ID << "\n";
                    cout << records[i].first_name << ", " << records[i].last_name << "\n";
                    cout << "Hours Worked: " << records[i].hours << "\n";
                    cout << "Employee Pay Rate: $" << records[i].payrate << "\n";
                    cout << "Employee Tax Rate: " << records[i].taxrate * 100 << "%\n";
                    cout << "Gross Pay \t$" << gross_pay << "\n";
                    cout << "Less Taxes \t$" << total_taxes << "\n";
                    cout << "Net Pay \t$" << net_pay << "\n\n";
                }
                reading.close();
                break;
            case 2:
//                while (n < 100 && reading >> records[n].ID >> records[n].last_name >> records[n].first_name >> records[n].hours >> records[n].payrate >> records[n].taxrate)
//                {
//                    n++;
//                }
                cout << n << " Total Employees: \n\n";
                cout << "Find an Employee By ID (Ex: AB123): ";
                cin >> user_id;
                system("cls");
                for(int i = 0; i < n; i++)
                {
                    if (user_id == records[i].ID)
                    {
                        tracker++;
                        
                        gross_pay = records[i].hours * records[i].payrate;
                        total_taxes = gross_pay * records[i].taxrate;
                        net_pay = gross_pay - total_taxes;
                        
                        cout << "Employee #" << i+1 << "\tEmployee ID " << records[i].ID << "\n";
                        cout << records[i].first_name << ", " << records[i].last_name << "\n";
                        cout << "Hours Worked: " << records[i].hours << "\n";
                        cout << "Employee Pay Rate: $" << records[i].payrate << "\n";
                        cout << "Employee Tax Rate: " << records[i].taxrate * 100 << "%\n";
                        cout << "Gross Pay \t$" << gross_pay << "\n";
                        cout << "Less Taxes \t$" << total_taxes << "\n";
                        cout << "Net Pay \t$" << net_pay << "\n\n";
                    }
                }
                if (tracker == 0)
                {
                    cout << "No Employee Found\n";
                }
                reading.close();
                break;
            case 3:
                cout << "1 of 6 - Enter Employee's ID: ";
                cin >> records[n].ID;
                cout << "2 of 6 - Enter Employee's Last Name: ";
                cin >> records[n].last_name;
                cout << "3 of 6 - Enter Employee's First Name: ";
                cin >> records[n].first_name;
                cout << "4 of 6 - Enter Employee's Hours: ";
                cin >> records[n].hours;
                records[n].hours = fabs(records[n].hours);
                cout << "5 of 6 - Enter Employee's Pay Rate Per Hour: ";
                cin >>records[n].payrate;
                records[n].payrate = fabs(records[n].payrate);
                cout << "6 of 6 - Enter Employee's Tax Rate: ";
                cin >> records[n].payrate;
                records[n].taxrate = fabs(records[n].taxrate);
                
                n++;
                //SIZE IS BIGGER NOW
                //Writes it to the File
//                writing << fixed << setprecision(2) << worker_id << " " << user_last << " " << user_first << " " << user_hours << " " << user_payrate << " " << user_taxrate << " " << "\n";
//                writing.close();
                break;
            case 4:
//                while (n < 100 && reading >> records[n].ID >> records[n].last_name >> records[n].first_name >> records[n].hours >> records[n].payrate >> records[n].taxrate)
//                {
//                    n++;
//                }
                cout << n << " Total Employees: \n\n";
                cout << "Find an Employee By ID (Ex: AB123): ";
                cin >> user_id;
                system("cls");
                for(int i = 0; i < n; i++)
                {
                    if (user_id == records[i].ID)
                    {
                        tracker++;
                        while (pick != '7')
                        {
                            cout << "1 - Change Employee Last Name (" << records[i].last_name << ")\n";
                            cout << "2 - Change Employee First Name (" << records[i].first_name << ")\n";
                            cout << "3 - Change Employee Hours Worked (" << records[i].hours << ")\n";
                            cout << "4 - Change Employee Pay Per Hour (" << records[i].payrate << ")\n";
                            cout << "5 - Change Employee Tax Rate (" << records[i].taxrate * 100 << "%)\n";
                            cout << "6 - Change Employee ID (" << records[i].ID << ")\n";
                            cout << "7 - QUIT Changes\n";
                            cin >> pick;
                            
                            system("cls");
                            
                            switch (pick)
                            {
                                    /////////////////////ADD system("cls") after each case;
                                case 1:
                                    cout << "Change Employee Last Name (" << records[i].last_name << ")\n";
                                    cout << "Enter the last name: ";
                                    cin >> records[i].last_name;
//                                    cout << "\nWould you like to change more records for " << records[i].first_name << " " << records[i].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                    system("cls");
                                    break;
                                case 2:
                                    cout << "Change Employee First Name (" << records[i].first_name << ")\n";
                                    cout << "Enter the first name: ";
                                    cin >> records[i].first_name;
//                                    cout << "\nWould you like to change more records for " << records[i].first_name << " " << records[i].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                    system("cls");
                                    break;
                                case 3:
                                    cout << "Change Employee Hours Worked (" << records[i].hours << ")\n";
                                    cout << "Enter the hours worked: ";
                                    cin >> records[i].hours;
                                    records[i].hours = fabs(records[i].hours);
//                                    cout << "\nWould you like to change more records for " << records[i].first_name << " " << records[i].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                    system("cls");
                                    break;
                                case 4:
                                    cout << "Change Employee Pay Per Hour (" << records[i].payrate << ")\n";
                                    cout << "Enter the pay per hour: ";
                                    cin >> records[i].payrate;
                                    records[i].payrate= fabs(records[i].payrate);
//                                    cout << "\nWould you like to change more records for " << records[i].first_name << " " << records[i].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                    break;
                                case 5:
                                    cout << "Change Employee Tax Rate (" << records[i].taxrate << ")\n";
                                    cout << "Enter the tax rate: ";
                                    cin >> records[i].taxrate;
                                   records[i].taxrate = fabs(records[i].taxrate);
//                                    cout << "\nWould you like to change more records for " << records[select].first_name << " " << records[select].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                    break;
                                case 6:
                                    cout << "Change Employee ID (" << records[i].ID << ")\n";
                                    cout << "Enter the ID: ";
                                    cin >> records[i].ID;
//                                    cout << "\nWould you like to change more records for " << records[select].first_name << " " << records[select].last_name << " (y or n).\n";
//                                    cin >> repeat;
                                //case 6:
                                    cout << "Your changes have been submitted.\n";
//                                    repeat = 'n';
                                    break;
                                default:
                                    cout << "Please enter a correct option (1-7)\n";
//                                    cout << "Would you like to go back to the change menu? (y or n) ";
//                                    cin >> repeat;
                                    break;
                            }
                        }
                    }
                }
                if (tracker == 0)
                {
                    cout << "No Employee Found\n";
                }
                reading.close();
                writing.close();
                break;
                
        }
        
        //Allows the user to run the program multiple times
        cout << "\nWould you like to run this program again? (y or n) ";
        cin >> again;
        while (again != 'n' && again != 'y')
        {
            cout << "\nWould you like to run this program again? (y or n) ";
            cin >> again;
            if(again == 'n')
            {
                return 0;
            }
            else if(again == 'y')
                again = 'y';
        }
    }
     writing.open("personnel1.dat", ios::out | ios::app); //Opening file to write
    for (int a=0;a<n;a++)
    {
     writing << fixed << setprecision(2) << records[a].ID << " " << records[a].last_name << " " << records[a].first_name << " " << records[a].hours << " " << records[a].payrate << " " << records[a].taxrate << " " << "\n";
    }
    writing.close();
}

