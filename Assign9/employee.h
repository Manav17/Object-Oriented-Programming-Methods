
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



struct employee
{
    string ID;
    string LAST;
    string FIRST;
    float HRS;
    float PAY;
    float TRATE;
    int DEPENDENTS;
};

class store
{
private:
    vector <employee> EMP;
    ifstream fin;
    ofstream fout;
    
public:
    vector <int> TEMPINT;
public:
    void read()
    {
        string T_ID, T_LAST, T_FIRST;
        float T_HRS, T_PAY, T_TRATE;
        int T_DEPENDENTS, CNT = 0;
        
        fin.open("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Assign9/Assign9/Personnel.dat", ios::in);
        
        if (!fin)
        {
            cout << "\n\tError With Reading Data File";
        }
        
        fin >> T_ID >> T_LAST >> T_FIRST >> T_HRS >> T_PAY >> T_TRATE >> T_DEPENDENTS;
        
        while (!fin.eof())
        {
            EMP.push_back(employee());
            
            EMP[CNT].ID = T_ID;
            EMP[CNT].LAST = T_LAST;
            EMP[CNT].FIRST = T_FIRST;
            EMP[CNT].HRS = T_HRS;
            EMP[CNT].PAY = T_PAY;
            EMP[CNT].TRATE = T_TRATE;
            EMP[CNT].DEPENDENTS = T_DEPENDENTS;
            
            fin >> T_ID >> T_LAST >> T_FIRST >> T_HRS >> T_PAY >> T_TRATE >> T_DEPENDENTS;
            
            CNT++;
        }
        
        fin.close();
    }
    
    void write()
    {
        fout.open("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Assign9/Assign9/Personnel.dat", ios::out);
        
        if (!fout)
        {
            cout << "\n\tError With Writing To Data File";
        }
        
        for(int X = 0; X < EMP.size(); X++)
        {
            fout << EMP[X].ID << " " << EMP[X].LAST << " " << EMP[X].FIRST << " " << EMP[X].HRS << " " << EMP[X].PAY << " " << EMP[X].TRATE << " " << EMP[X].DEPENDENTS;
        }
        
        fout.close();
    }
    
    long int size()
    {
        return EMP.size();
    }
    
    void add()
    {
        float INDEX;
        INDEX = EMP.size();
        EMP.push_back(employee());
        input(INDEX);
    }
    
    void add(int INDEX)
    {
        EMP.insert(EMP.begin() + INDEX, employee());
        input(INDEX);
    }
    
    void display(int INDEX)
    {
        
        cout << "\n\n\tIndex : " << setw(7) << INDEX << "ID : " << EMP[INDEX].ID;
        cout << "\n\tLast : " << setw(15) << EMP[INDEX].LAST << "\tFirst : " << setw(15) << EMP[INDEX].FIRST;
        cout << "\n\tHours : " << setw(7) << EMP[INDEX].HRS << "\tPay : $" << setw(7) << EMP[INDEX].PAY << "\tTax Rate : " << setw(7) << EMP[INDEX].TRATE << "Dependents : " << setw(7) << EMP[INDEX].DEPENDENTS;
    }
    
    void displaytemp(vector<employee> TEMP, int INDEX)
    {
        cout << "\n\n\tIndex : " << setw(7) << INDEX << "ID : " << TEMP[INDEX].ID;
        cout << "\n\tLast : " << setw(15) << TEMP[INDEX].LAST << "\tFirst : " << setw(15) << TEMP[INDEX].FIRST;
        cout << "\n\tHours : " << setw(7) << TEMP[INDEX].HRS << "\tPay : $" << setw(7) << TEMP[INDEX].PAY << "\tTax Rate : " << setw(7) << TEMP[INDEX].TRATE << "Dependents : " << setw(7) << TEMP[INDEX].DEPENDENTS;
    }
    
    void displaysearch(int INDEX, long int X)
    {
        cout << "\n\n\tIndex : " << setw(7) << INDEX << "ID : " << EMP[INDEX].ID << " --- >> NUM >> ----------- >> NUM " << X;
        cout << "\n\tLast : " << setw(15) << EMP[INDEX].LAST << "\tFirst : " << setw(15) << EMP[INDEX].FIRST;
        cout << "\n\tHours : " << setw(7) << EMP[INDEX].HRS << "\tPay : $" << setw(7) << EMP[INDEX].PAY << "\tTax Rate : " << setw(7) << EMP[INDEX].TRATE << "Dependents : " << setw(7) << EMP[INDEX].DEPENDENTS;
    }
    
    void displayall()
    {
        for (int X = 0; X < EMP.size(); X++)
        {
            display(X);
        }
    }
    
    void displayall(vector<employee> TEMP)
    {
        for (int X = 0; X < TEMP.size(); X++)
        {
            displaytemp(TEMP, X);
        }
    }
    
    void editid (int INDEX)
    {
         EMP[INDEX].ID = scin("ID");
    }
    
    void editlast (int INDEX)
    {
        EMP[INDEX].LAST = scin("Last Name");
    }
    
    void editfirst (int INDEX)
    {
        EMP[INDEX].FIRST = scin("First Name");
    }
    
    void edithrs (int INDEX)
    {
        EMP[INDEX].HRS = fcin("Hours");
    }
    
    void editpay (int INDEX)
    {
        EMP[INDEX].PAY = fcin("Pay Rate");
    }
    
    void edittrate (int INDEX)
    {
        EMP[INDEX].TRATE = pcin("Income Tax Rate");
    }
    
    void editdependents (int INDEX)
    {
        EMP[INDEX].DEPENDENTS = icin("Number Of Dependents");
    }
    
    int searchid (string T_ID)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        string STR;
        
        T_ID = upper(T_ID);
        
        for (int X = 0; X < EMP.size(); X++)
        {
            STR = upper(EMP[X].ID);
            
            if (T_ID == STR)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchlast (string T_LAST)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        string STR;
        
        T_LAST = upper(T_LAST);
        
        for (int X = 0; X < EMP.size(); X++)
        {
            STR = upper(EMP[X].LAST);
            
            if (T_LAST == STR)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchfirst (string T_FIRST)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        string STR;
        
        T_FIRST = upper(T_FIRST);
        
        for (int X = 0; X < EMP.size(); X++)
        {
            STR = upper(EMP[X].FIRST);
            
            if (T_FIRST == STR)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchhrs (float T_HRS)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        
        for (int X = 0; X < EMP.size(); X++)
        {
            if (T_HRS == EMP[X].HRS)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchpay (float T_PAY)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        
        for (int X = 0; X < EMP.size(); X++)
        {
            if (T_PAY == EMP[X].PAY)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchtrate (float T_TRATE)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        
        for (int X = 0; X < EMP.size(); X++)
        {
            if (T_TRATE == EMP[X].TRATE)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    int searchdependents (float T_DEPENDENTS)
    {
        TEMPINT.clear();
        
        int FOUND = 0;
        
        for (int X = 0; X < EMP.size(); X++)
        {
            if (T_DEPENDENTS == EMP[X].DEPENDENTS)
            {
                TEMPINT.push_back(X);
                displaysearch(X, TEMPINT.size() - 1);
                FOUND++;
            }
        }
        return FOUND;
    }
    
    void remove (int INDEX)
    {
        EMP.erase(EMP.begin() + INDEX);
    }

    void input (int INDEX)
    {
        EMP[INDEX].ID = scin("(1 of 7) ID");
        EMP[INDEX].LAST = scin("(2 of 7) Last Name");
        EMP[INDEX].FIRST = scin("(3 of 7) First Name");
        EMP[INDEX].HRS = fcin("(4 of 7) Hours");
        EMP[INDEX].PAY = fcin("(5 of 7) Pay Rate");
        EMP[INDEX].TRATE = pcin("(6 of 7) Income Tax Rate");
        EMP[INDEX].DEPENDENTS = icin("(7 of 7) Number Of Dependents");
    }
    
    vector<employee> set (vector<employee> TEMP)
    {
        TEMP = EMP;
        return TEMP;
    }
    
    void save (vector<employee> TEMP)
    {
        EMP = TEMP;
    }
    
};
