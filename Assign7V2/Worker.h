
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


using namespace std;


class Worker
{
protected:
    string ID;
    string STATUS;
    float HRS;
    float PAY;
    float TAX;
    float OVERTIME;
    int INDEX;
    
public:
    Worker ()
    {
        ID = "n/a";
        STATUS = "n/a";
        HRS = 0;
        PAY = 0;
        TAX = 0;
        INDEX = 0;
    }
    
    void setID (string id)
    {
        ID = id;
    }
    
    void setSTATUS (string status)
    {
        STATUS = status;
    }
    
    void setHRS (float hrs)
    {
        HRS = hrs;
    }
    
    void setPAY (float pay)
    {
        PAY = pay;
    }
    
    void setTAX (float tax)
    {
        TAX = tax;
    }
    
    void setINDEX (int index)
    {
        INDEX = index;
    }
    
    void setALL (string id, float hrs, float pay, float tax, int index)
    {
        ID = id;
        HRS = hrs;
        PAY = pay;
        TAX = tax;
        STATUS = "Hourly";
        INDEX = index;
    }
    
    void setALL (string id, float pay, float tax, int index)
    {
        ID = id;
        PAY = pay;
        TAX = tax;
        STATUS = "Salary";
        INDEX = index;
    }
    
    void setALL (string id, float pay, int index)
    {
        ID = id;
        PAY = pay;
        STATUS = "Contractor";
        INDEX = index;
    }
    
    
    string getID ()
    {
        return ID;
    }
    
    string getSTATUS ()
    {
        return STATUS;
    }
    
    float getHRS ()
    {
        return HRS;
    }
    
    float getPAY ()
    {
        return PAY;
    }
    
    float getTAX ()
    {
        return TAX;
    }
    
    int getINDEX ()
    {
        return INDEX;
    }
    
    virtual void calculatepay(void){}
    virtual void terminate(void){}
    virtual void setovertime(void){}
    virtual void input(void){}
};




class Hourly : public Worker
{
public:
    void calculatepay ()
    {
        float R_PAY, O_PAY, G_PAY, T_TAX, N_PAY;
        
        setovertime();
        
        R_PAY = HRS * PAY;
        O_PAY = OVERTIME * PAY * 1.5;
        G_PAY = R_PAY + O_PAY;
        T_TAX = G_PAY * TAX;
        N_PAY = G_PAY - T_TAX;
        
        cout << std::left;
        cout << "\n\n\tINDEX : " << INDEX;
        cout << "\n\tID : " << ID << " -- " << STATUS;
        cout << "\n\tRegular Pay : $" << setw(10) << R_PAY;
        
        if (OVERTIME >0)
        {
            cout << "Overtime Pay : $" << setw(10) << O_PAY;
        }
        
        cout << "Tax Rate : " << TAX;
        cout << "\n\tGross Pay : $" << setw(10) << G_PAY << "Tax Witheld : $" << setw(10) << T_TAX << "Net Pay : $" << setw(10) << N_PAY;
    }
    
    void setovertime ()
    {
        if (HRS > 40)
        {
            HRS = 40;
            OVERTIME = HRS - 40;
        }
        else
        {
            OVERTIME = 0;
        }
    }
    
    void terminate ()
    {
        STATUS = STATUS + " - Terminated";
        HRS = 0;
        PAY = 0;
        TAX = 0;
        OVERTIME = 0;
        cout << "\n\tID : " << ID << " Has Been Terminated";
    }
    
    void input ()
    {
        ID = scin("(1 Of 5) ID");
        HRS = fcin("(2 Of 5) Hours Worked");
        PAY = fcin("(3 Of 5) Hourly Pay");
        TAX = pcin("(4 Of 5) Tax Rate");
        STATUS = scin("(5 Of 5) Status");
    }
};



class Salary : public Worker
{
public:
    void calculatepay ()
    {
        float G_PAY, W_TAX, N_PAY;
        
        G_PAY = PAY;
        W_TAX = G_PAY * TAX;
        N_PAY = G_PAY - W_TAX;
        
        cout << "\n\n\tINDEX : " << INDEX;
        cout << "\n\tID : " << ID << " -- " << STATUS;
        cout << "\n\tTax Rate : " << TAX;
        cout << "\n\tGross Pay : $" << setw(10) << G_PAY << "Tax Witheld : $" << setw(10) << W_TAX << "Net Pay : $" << setw(10) << N_PAY;
    }
    
    void terminate ()
    {
        STATUS = STATUS + " - Terminated";
        HRS = 0;
        PAY = 0;
        TAX = 0;
        OVERTIME = 0;
        cout << "\n\tID : " << ID << " Has Been Terminated";
    }
    
    void input ()
    {
        ID = scin("(1 of 4) ID");
        PAY = fcin("(2 of 4) Annual Salary");
        TAX = pcin("(3 of 4) Tax Rate");
        STATUS = scin ("(4 Of 4) Status:)");
    }
};



class Contractor : public Worker
{
public:
    void calculatepay ()
    {
        float G_PAY;
        
        G_PAY = PAY;
        
        cout << "\n\n\tINDEX : " << INDEX;
        cout << "\n\tID : " << ID << " -- " << STATUS;
        cout << "\n\tGross Pay : $" << setw(10) << G_PAY;
    }
    
    void terminate ()
    {
        STATUS = "Contract Ended";
        HRS = 0;
        PAY = 0;
        TAX = 0;
        OVERTIME = 0;
        cout << "\n\tID : " << ID << " Has Been Terminated";
    }
    
    void input ()
    {
        ID = scin("(1 Of 3) ID");
        PAY = fcin("(2 Of 3) Contractor Fee");
        STATUS = scin("(3 Of 3) Status");
    }
};
