
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
//#include <conio.h>

using namespace std;

///--------------------------------------------------------------------------------
///--------------------------------------------------------------------------------
///--------------------------------------------------------------------------------
///Table Of Contents(In Lines):
///30 - 277 ----- Various Ease Of Life Functions
///285 - 290 ---- Struct Node
///298 - 465 ---- Linklist, Contain Add to front, back, traverse, reverse traverse
///470 - 595 ---- LinklistSSJ, Contains remove, edit, find
///600 - 685 ---- LinklistSSJ2, Contian read, Write
///690 - 785 ---- MAIN
///
///
///
///
///

void any ()
{
    cout << "\n\n\tPress Enter To Continue";
    getchar();
    cin.get();
}


void cicc ()
{
    cin.clear();
    cin.ignore();
}

void cls ()
{
    system ("clear");
}



//Input Functions
string scin (string aSTR)
{
    string aTEMP;
    
    cout << "\n\t" << aSTR << " : ";
    cin >> aTEMP;
    
    return aTEMP;
}

int icin (string bSTR)
{
    int bTEMP;
    
    cout << "\n\t" << bSTR << " : ";
    cin >> bTEMP;
    
    return bTEMP;
}

float fcin (string cSTR)
{
    float cTEMP;
    
    cout << "\n\t" << cSTR << " : ";
    cin >> cTEMP;
    
    return cTEMP;
}

float pcin (string dSTR)
{
    float dTEMP;
    
    cout << "\n\t" << dSTR << " : ";
    cin >> dTEMP;
    
    if (dTEMP > 1)
    {
        dTEMP = dTEMP/100;
    }
    
    return dTEMP;
}


//Menu Functions
int menu (string TITLE, string OPT1, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << OPT7;
    cout << "\n\t8 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string OPT8, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << OPT7;
    cout << "\n\t8 - " << OPT8;
    cout << "\n\t9 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}

int menu (string TITLE, string OPT1, string OPT2, string OPT3, string OPT4, string OPT5, string OPT6, string OPT7, string OPT8, string OPT9, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << OPT2;
    cout << "\n\t3 - " << OPT3;
    cout << "\n\t4 - " << OPT4;
    cout << "\n\t5 - " << OPT5;
    cout << "\n\t6 - " << OPT6;
    cout << "\n\t7 - " << OPT7;
    cout << "\n\t8 - " << OPT8;
    cout << "\n\t9 - " << OPT9;
    cout << "\n\t10 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    cicc();
    
    return OPT;
}


//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


struct node
{
    node *NEXT;
    int NUM;
    node *PREVIOUS;
};


//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


class linkedlist
{
protected:
    node *FIRST;
    node *LAST;
    node *T_NEXT;
    node *T_PREVIOUS;
    node *TEMP;
    int SIZE;
    
public:
    linkedlist ();
    void addfront ();
    void addback ();
    void traverse ();
    void reversetraverse ();
    
    
protected:
    void input (); //Change This If Data Changes
    void output (); //Change This If Data Changes
    void outputtitle (); //Change This If Data Changes
    void empty (); //Change This Maybe
    void endoflist(); //Change This Maybe
    
};


linkedlist::linkedlist ()
{
    FIRST = NULL;
    LAST = NULL;
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
    TEMP = NULL;
    SIZE = 0;
}


void linkedlist::addfront ()
{
    TEMP = new node;
    
    input();
    
    TEMP -> PREVIOUS = NULL;
    
    if (SIZE == 0)
    {
        TEMP -> NEXT = NULL;
        FIRST = TEMP;
        LAST = TEMP;
    }
    else
    {
        TEMP -> NEXT = FIRST;
        FIRST -> PREVIOUS = TEMP;
        FIRST = TEMP;
    }
    
    SIZE++;
    
    TEMP = NULL;
}


void linkedlist::addback()
{
    TEMP = new node;
    
    input();
    
    TEMP -> NEXT = NULL;
    
    if (SIZE == 0)
    {
        TEMP -> PREVIOUS = NULL;
        FIRST = TEMP;
        LAST = TEMP;
    }
    else
    {
        TEMP -> PREVIOUS = LAST;
        LAST -> NEXT = TEMP;
        LAST = TEMP;
    }
    
    SIZE++;
    
    TEMP = NULL;
}

void linkedlist::traverse()
{
    TEMP = FIRST;
    
    if (TEMP != NULL)
    {
        outputtitle();
        
        while (TEMP != NULL)
        {
            output();
            TEMP = TEMP -> NEXT;
        }
        
        endoflist();
    }
    else
    {
        empty();
    }
    
    TEMP = NULL;
}

void linkedlist::reversetraverse()
{
    TEMP = LAST;
    
    if (TEMP != NULL)
    {
        outputtitle();
        
        while (TEMP != NULL)
        {
            output();
            TEMP = TEMP -> PREVIOUS;
        }
        
        endoflist();
    }
    else
    {
        empty();
    }
    
    TEMP = NULL;
}


void linkedlist::input ()
{
    TEMP -> NUM = icin("Enter Integer");
}

void linkedlist::output ()
{
    cout << "\n\t" << setw(10) << TEMP -> NUM << setw(20) << TEMP << setw(20) <<  TEMP -> NEXT << setw(20) << TEMP -> PREVIOUS;
}

void linkedlist::outputtitle ()
{
    cout << "\n\tTraverse List";
    cout << "\n\n\t" << setw(10) << "Number" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous";
}

void linkedlist::empty ()
{
    cout << "\n\tLinked List Is Empty";
}

void linkedlist::endoflist()
{
    cout << "\n\n\tEnd Of List -- Size : " << SIZE;
}


//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


class linkedlistSSJ : public linkedlist
{
protected:
    int INDEX;
    int FIND;
    
public:
    linkedlistSSJ ();
    void addmiddle ();
    bool find (); //Change This If Data Changes
    void edit (); //Use in conjunction with find
    void remove (); //Use in conjunction with find
    void null (); //Use in conjunction with find
    
};

linkedlistSSJ::linkedlistSSJ ()
{
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
    INDEX = 0;
}

void linkedlistSSJ::addmiddle()
{
    T_NEXT = FIRST;
    
    INDEX = SIZE/2;
    
    for (int COUNT = 0; COUNT < INDEX; COUNT++)
    {
        T_NEXT = T_NEXT -> NEXT;
    }
    
    T_PREVIOUS = T_NEXT -> PREVIOUS;
    
    TEMP = new node;
    
    input();
    
    if (SIZE == 0)
    {
        TEMP -> NEXT = NULL;
        TEMP -> PREVIOUS = NULL;
        FIRST = TEMP;
        LAST = TEMP;
    }
    else
    {
        TEMP -> PREVIOUS = T_PREVIOUS;
        TEMP -> NEXT = T_NEXT;
        T_NEXT -> PREVIOUS = TEMP;
        T_PREVIOUS -> NEXT = TEMP;
    }
    
    SIZE++;
    
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
    TEMP = NULL;
}

bool linkedlistSSJ::find()
{
    TEMP = FIRST;
    
    FIND = icin("Enter Value Of Integer");
    cls();
    
    while (TEMP != NULL)
    {
        if(TEMP -> NUM == FIND)
        {
            cout << "\n\tMatch Found";
            cout << "\n\n\t" << setw(10) << "Number" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous";
            output();
            return true;
        }
        TEMP = TEMP -> NEXT;
    }
    
    cout << "\n\tNo Match Found For " << FIND;
    return false;
}

void linkedlistSSJ::edit()
{
    cout << "\n\n\t" << setw(10) << "Number" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous";
    output();
    cout << "\n";
    input();
}

void linkedlistSSJ::remove()
{
    T_PREVIOUS = TEMP -> PREVIOUS;
    T_NEXT = TEMP -> NEXT;
    delete TEMP;
    
    if (T_NEXT == NULL)
    {
        T_PREVIOUS -> NEXT = NULL;
        LAST = T_PREVIOUS;
    }
    else if (T_PREVIOUS == NULL)
    {
        T_NEXT -> PREVIOUS = NULL;
        FIRST = T_NEXT;
    }
    else
    {
        T_PREVIOUS -> NEXT = T_NEXT;
        T_NEXT -> PREVIOUS = T_PREVIOUS;
    }
    
    SIZE--;
}

void linkedlistSSJ::null()
{
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
    TEMP = NULL;
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


class linkedlistSSJ2 : public linkedlistSSJ
{
protected:
    ofstream fout;
    ifstream fin;
    
public:
    void write (); //Change This If Data Changes
    void read (); //Change This If Data Changes
    
private:
    void addbackfile (int); //Change This If Data Changes
    
};

void linkedlistSSJ2::addbackfile(int T_INT)
{
    TEMP = new node;
    
    TEMP -> NUM = T_INT;
    
    TEMP -> PREVIOUS = NULL;
    
    if (SIZE == 0)
    {
        TEMP -> PREVIOUS = NULL;
        FIRST = TEMP;
        LAST = TEMP;
    }
    else
    {
        TEMP -> PREVIOUS = LAST;
        LAST -> NEXT = TEMP;
        LAST = TEMP;
    }
    
    SIZE++;
    
    TEMP = NULL;
}

void linkedlistSSJ2::write()
{
    
    TEMP = FIRST;
    
    fout.open ("Listdata.dat", ios::out); //*****
    
    while (TEMP != NULL)
    {
        fout << TEMP -> NUM << "\n"; //*****
        TEMP = TEMP -> NEXT;
    }
    
    fout.close();
    
    cout << "\n\tWrite Complete"; //*****
}

void linkedlistSSJ2::read()
{
    int T_INT;
    
    fin.open("Listdata.dat", ios::in); //*****
    
    if (!fin)
    {
        cout << "\n\tNo Data File To Read From, Use Write To Create One";
    }
    else
    {
        fin >> T_INT;//*****
        
        while (!fin.eof())
        {
            addbackfile (T_INT);//*****
            fin >> T_INT;//*****
        }
        
        fin.close();
        
        cout << "\n\tRead Complete";//*****
    }
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

int main ()
{
    int OPT = 0, OPT2;
    bool FOUND;
    
    linkedlistSSJ2 LIST;
    
    while (OPT != 8 )
    {
        FOUND = false;
        OPT2 = 0;
        OPT = menu ("Linkedlist", "Add Node To Front", "Add Node To Back", "Traverse", "Reverse Traverse", "Find", "Save To Data File", "Load From Data File To Back", "Quit");
        
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                cout << "\n\tAdd To Front\n";
                LIST.addfront();
                cls();
                break;
            }
            case 2:
            {
                cout << "\n\tAdd To Back\n";
                LIST.addback();
                cls();
                break;
            }
            case 3:
            {
                LIST.traverse();
                any();
                cls();
                break;
            }
            case 4:
            {
                LIST.reversetraverse();
                any();
                cls();
                break;
            }
            case 5:
            {
                cout << "\n\tFind";
                FOUND = LIST.find();
                
                if(FOUND)
                {
                    OPT2 = menu ("\n\tEdit Node", "Edit Value", "Delete", "Back To Main");
                    cls();
                    switch (OPT2)
                    {
                        case 1:
                        {
                            cout << "\n\tEdit Value";
                            LIST.edit();
                            break;
                        }
                        case 2:
                        {
                            LIST.remove();
                            cout << "\n\tNode Deleted";
                            any();
                            break;
                        }
                    }
                    LIST.null();
                    cls();
                    break;
                }
                else
                {
                    LIST.null();
                    any();
                    cls();
                    break;
                }
            case 6:
                {
                    LIST.write();
                    any();
                    cls();
                    break;
                }
            case 7:
                {
                    LIST.read();
                    any();
                    cls();
                    break;
                }
            }
        }
    }
}
