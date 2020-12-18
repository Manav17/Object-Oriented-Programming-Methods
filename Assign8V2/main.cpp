
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

int menu (string TITLE, string OPT1, string QUIT)
{
    int OPT;
    
    cout << "\n\t" << TITLE;
    
    cout << "\n\n\t1 - " << OPT1;
    cout << "\n\t2 - " << QUIT;
    
    cout << "\n\n\tOPT : ";
    cin >> OPT;
    
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
    
    return OPT;
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

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

struct data
{
    string STATE;
    int VALUE;
};

struct node
{
    node *NEXT;
    data DATA;
    node *PREVIOUS;
};

struct box
{
    box *NEXT;
    node *FILE;
    int INDEX;
    box *PREVIOUS;
};

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

class storage
{
private:
    box *FIRST;
    box *LAST;
    box *TEMP;
    box *T_TEMP;
    int SIZE;
    
public:
    storage ()
    {
        FIRST = NULL;
        LAST = NULL;
        TEMP = NULL;
        T_TEMP = NULL;
        SIZE = 0;
    }
    void addbox(node *NODE)
    {
        TEMP = new box;
        
        TEMP -> FILE = NODE;
        
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
        TEMP -> INDEX = SIZE;
        TEMP = NULL;
    }
    
    node* pullbox (int IND)
    {
        TEMP = FIRST;
        
        while (TEMP != NULL)
        {
            if(TEMP -> INDEX == IND)
            {
                return TEMP -> FILE;
            }
            TEMP = TEMP -> NEXT;
        }
        TEMP = NULL;
        return FIRST -> FILE;
    }
    
    void clear ()
    {
        TEMP = FIRST;
        
        while (TEMP != NULL)
        {
            T_TEMP = TEMP;
            delete T_TEMP;
            TEMP = TEMP -> NEXT;
        }
        
        TEMP = NULL;
        FIRST = NULL;
        LAST = NULL;
        T_TEMP = NULL;
        SIZE = 0;
    }
};



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
    TEMP -> DATA.STATE = scin("Enter State Name");
    TEMP -> DATA.VALUE = icin("Enter State Value");
}

void linkedlist::output ()
{
    cout << "\n\t" << setw(15) << TEMP -> DATA.STATE << setw(10) << TEMP -> DATA.VALUE << setw(20) << TEMP << setw(20) <<  TEMP -> NEXT << setw(20) << TEMP -> PREVIOUS;
}

void linkedlist::outputtitle ()
{
    cout << "\n\n\t" << setw(15) << "State" << setw(10) << "Value" << setw(20) << "Current" << setw(20) << "Next" << setw(20) << "Previous\n";
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
    string NAME_SEARCH;
    int VALUE_SEARCH;
    storage STORAGE;
    
public:
    linkedlistSSJ ();
    void addmiddle ();
    int searchname ();
    int searchvalue ();
    void addforward (int);
    void addaft (int);
    void editstate (int);
    void editvalue (int);
    void editall (int);
    void remove (int);
    void outputone (int);
    
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
    INDEX = 0;
}

int linkedlistSSJ::searchname()
{
    STORAGE.clear();
    
    int COUNT = 0;
    TEMP = FIRST;
    
    NAME_SEARCH = scin("Search For State Name");
    
    while (TEMP != NULL)
    {
        if(TEMP -> DATA.STATE == NAME_SEARCH)
        {
            COUNT++;
            if (COUNT == 1)
            {
                cout << "\n\tMatch Found";
                outputtitle();
            }
            STORAGE.addbox(TEMP);
            output();
            cout << " ----- " << COUNT;
        }
        TEMP = TEMP -> NEXT;
    }
    TEMP = NULL;
    
    return COUNT;
}

int linkedlistSSJ::searchvalue()
{
    STORAGE.clear();
    
    int COUNT = 0;
    TEMP = FIRST;
    
    VALUE_SEARCH = icin("Search For State Value");
    
    while (TEMP != NULL)
    {
        if(TEMP -> DATA.VALUE == VALUE_SEARCH)
        {
            COUNT++;
            if (COUNT == 1)
            {
                cout << "\n\tMatch Found";
                outputtitle();
            }
            STORAGE.addbox(TEMP);
            output();
            cout << " ----- " << COUNT;
        }
        TEMP = TEMP -> NEXT;
    }
    TEMP = NULL;
    
    return COUNT;
}

void linkedlistSSJ::addforward (int IND)
{
    TEMP = new node;
    
    input();
    
    T_NEXT = STORAGE.pullbox(IND);
    
    if (T_NEXT -> PREVIOUS == NULL)
    {
        TEMP -> PREVIOUS = NULL;
        FIRST = TEMP;
    }
    else
    {
        T_PREVIOUS = T_NEXT -> PREVIOUS;
        TEMP -> PREVIOUS = T_PREVIOUS;
        T_PREVIOUS -> NEXT = TEMP;
    }
    
    TEMP -> NEXT = T_NEXT;
    T_NEXT -> PREVIOUS = TEMP;
    
    SIZE++;
    
    TEMP = NULL;
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
    
}

void linkedlistSSJ::addaft (int IND)
{
    TEMP = new node;
    
    input();
    
    T_PREVIOUS = STORAGE.pullbox(IND);
    
    if (T_PREVIOUS -> NEXT == NULL)
    {
        TEMP -> NEXT = NULL;
        LAST = TEMP;
    }
    else
    {
        T_NEXT = T_PREVIOUS -> NEXT;
        TEMP -> NEXT = T_NEXT;
        T_NEXT -> PREVIOUS = TEMP;
    }
    
    T_PREVIOUS -> NEXT = TEMP;
    TEMP -> PREVIOUS = T_PREVIOUS;
    
    
    SIZE++;
    
    TEMP = NULL;
    T_NEXT = NULL;
    T_PREVIOUS = NULL;
}

void linkedlistSSJ::editstate (int IND)
{
    TEMP = STORAGE.pullbox(IND);
    TEMP -> DATA.STATE = scin("State Name");
    TEMP = NULL;
}

void linkedlistSSJ::editvalue(int IND)
{
    TEMP = STORAGE.pullbox(IND);
    TEMP -> DATA.VALUE = icin("State Value");
    TEMP = NULL;
}

void linkedlistSSJ::editall(int IND)
{
    TEMP = STORAGE.pullbox(IND);
    TEMP -> DATA.STATE = scin("State Name");
    TEMP -> DATA.VALUE = icin("State Value");
    TEMP = NULL;
}

void linkedlistSSJ::remove(int IND)
{
    TEMP = STORAGE.pullbox(IND);
    
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
    
    TEMP = NULL;
    T_PREVIOUS = NULL;
    T_NEXT = NULL;
    
    SIZE--;
}

void linkedlistSSJ::outputone(int IND)
{
    TEMP = STORAGE.pullbox(IND);
    outputtitle();
    output();
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
    void addbackfile (string, int); //Change This If Data Changes
    
};

void linkedlistSSJ2::addbackfile(string T_STR, int T_INT)
{
    TEMP = new node;
    
    TEMP -> DATA.STATE = T_STR;
    TEMP -> DATA.VALUE = T_INT;
    
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

void linkedlistSSJ2::write()
{
    
    TEMP = FIRST;
    
    fout.open ("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Assign8/Assign8/Data", ios::out); //*****
    
    while (TEMP != NULL)
    {
        fout << TEMP -> DATA.STATE << " " << TEMP -> DATA.VALUE << "\n"; //*****
        TEMP = TEMP -> NEXT;
    }
    
    fout.close();
}

void linkedlistSSJ2::read()
{
    int T_INT;
    string T_STR;
    
    fin.open("/Users/manavjotsingh/Documents/CSCI/CSCI 15/Assign8/Assign8/Data", ios::in); //*****
    
    if(!(fin))
    {
        cout << "\n\tError With Data File";
        any();
    }
    
    fin >> T_STR >> T_INT;//*****
    
    while (!fin.eof())
    {
        addbackfile (T_STR, T_INT);//*****
        fin >> T_STR >> T_INT;//*****
    }
    
    fin.close();
}

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------


int main ()
{
    linkedlistSSJ2 LIST;
    int OPT, OPT_2, OPT_3, OPT_4, OPT_5;
    int FOUND, INDEX, COUNT;
    
    LIST.read();
    
    OPT = 0;
    
    while (OPT != 5)
    {
        OPT_2 = 0;
        OPT_3 = 0;//Here
        OPT_4 = 0;//Here
        OPT_5 = 0;
        INDEX = 0;
        COUNT = 0;
        FOUND = -1;//Here
        
        OPT = menu("LinkedList", "Add A Node", "Traverse", "Reverse Traverse", "Search", "Quit");
        cls();
        
        switch (OPT)
        {
            case 1:
            {
                while (OPT_2 != 4)
                {
                    OPT_4 = 0;
                    OPT_3 = 0;
                    
                    OPT_2 = menu ("Add A Node", "To Front", "To Back", "Other Location", "Back To Main");
                    cls();
                    
                    switch (OPT_2)
                    {
                            //Add To Front
                        case 1:
                        {
                            cout << "\n\tAdd To Front List\n";
                            LIST.addfront();
                            cls();
                            break;
                        }
                            //Add To Back
                        case 2:
                        {
                            cout << "\n\tAdd To Back Of List\n";
                            LIST.addback();
                            cls();
                            break;
                        }
                            
                        case 3:
                        {
                            while (OPT_4 != 2 and OPT_3 != 3)
                            {
                                FOUND = -1;
                                OPT_5 = 0;
                                OPT_4 = 0;
                                //Add To Custom Menu
                                OPT_3 = menu("Search For Node", "Via State Name", "Via State Value", "Back To Add Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
                                        //Search For Name
                                    case 1:
                                    {
                                        FOUND = LIST.searchname();
                                        break;
                                    }
                                    case 2:
                                    {
                                        FOUND = LIST.searchvalue();
                                        break;
                                    }
                                }
                                switch (FOUND)
                                {
                                    case -1:
                                    {
                                        break;
                                    }
                                        //No Values Found
                                    case 0:
                                    {
                                        while (!(OPT_4 != 1 xor OPT_4 != 2))
                                        {
                                            OPT_4 = menu("No Matches Found", "Search For Another Node", "Back To Add Menu");
                                            cls();
                                        }
                                        break;
                                        
                                    }//III C 0
                                        //1 Value Found
                                    case 1:
                                    {
                                        while (!(OPT_5 != 1 xor OPT_5 != 2))
                                        {
                                            OPT_5 = menu("\n\tAdd A Node", "In Front", "Behind");
                                            cls();
                                        }
                                        
                                        switch (OPT_5)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tAdd In Front\n";
                                                LIST.addforward(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 1
                                                
                                            case 2:
                                            {
                                                cout << "\n\tAdd Behind\n";
                                                LIST.addaft(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 2
                                        }//IIII S
                                        break;
                                    }//III C 1
                                        //Multiple Values Found
                                    default:
                                    {
                                        do
                                        {
                                            if (COUNT > 1)
                                            {
                                                cout << "\n\tPlease Enter A Value From the Choices Above";
                                            }
                                            INDEX = icin("\n\tInput Number Next To Target Node");
                                            COUNT ++;
                                        }
                                        while (INDEX > FOUND or INDEX < 1);
                                        
                                        while (!(OPT_5 != 1 xor OPT_5 != 2))
                                        {
                                            OPT_5 = menu("Add A Node", "In Front", "Behind");
                                            cls();
                                        }
                                        
                                        switch (OPT_5)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tAdd In Front\n";
                                                LIST.addforward(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 1
                                                
                                            case 2:
                                            {
                                                cout << "\n\tAdd Behind\n";
                                                LIST.addaft(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            } //IIII C 2
                                        }//IIII S
                                        break;
                                    }//III D
                                }//III S
                            }//II WL
                        }//II WL
                    }//I S
                }//I W
                break;
            }//C 1
                
            case 2:
            {
                cout << "\n\tTravere List";
                LIST.traverse();
                any();
                cls();
                break;
            }
                
            case 3:
            {
                cout << "\n\tReverse Traverse";
                LIST.reversetraverse();
                any();
                cls();
                break;
            }
                
            case 4:
            {
                while (OPT_2 != 3)
                {
                    OPT_3 = 0;
                    OPT_4 = 0;
                    FOUND = -1;
                    OPT_2 = menu("Search For Node", "Via State Name", "Via State Value", "Back To Main Menu");
                    cls();
                    
                    switch (OPT_2)
                    {
                        case 1:
                        {
                            FOUND = LIST.searchname();
                            break;
                        }
                        case 2:
                        {
                            FOUND = LIST.searchvalue();
                            break;
                        }
                        case 3:
                        {
                            FOUND = -1;
                            break;
                        }
                    }
                    
                    switch (FOUND)
                    {
                        case -1:
                        {
                            break;
                        }
                        case 0:
                        {
                            cout << "\n\tNo Matches Found";
                            any();
                            cls();
                            break;
                        }//II C 0
                        case 1:
                        {
                            while (OPT_3 != 3)
                            {
                                OPT_4 = 0;
                                
                                OPT_3 = menu("\n\tNode Menu", "Edit", "Delete", "Back To Search Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
                                    case 1:
                                    {
                                        LIST.outputone(1);
                                        while (!(OPT_4 == 1 or OPT_4 == 2 or OPT_4 == 3))
                                        {
                                            OPT_4 = menu ("Edit Menu", "State Name", "State Value", "All");
                                            cls();
                                        }
                                        switch (OPT_4)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tEdit State Name\n";
                                                LIST.editstate(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 2:
                                            {
                                                cout << "\n\tEdit State Value\n";
                                                LIST.editvalue(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 3:
                                            {
                                                cout << "\n\tEdit All\n";
                                                LIST.editall(1);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                        }//IIII S
                                        break;
                                    }//III C 1
                                    case 2:
                                    {
                                        cout << "\n\tDeleting Node";
                                        LIST.remove(1);
                                        any();
                                        cls();
                                        OPT_3 = 3;
                                        break;
                                    }
                                }//II S
                            }//II WL
                            break;
                        }//I C 1
                            
                        default:
                        {
                            do
                            {
                                if (COUNT > 1)
                                {
                                    cout << "\n\tPlease Enter A Value From the Choices Above";
                                }
                                INDEX = icin("\n\tInput Number Next To Target Node");
                                COUNT ++;
                            }
                            while (INDEX > FOUND or INDEX < 1);
                            
                            while (OPT_3 != 3)
                            {
                                OPT_4 = 0;
                                OPT_3 = menu("Node Menu", "Edit", "Delete", "Back To Search Menu");
                                cls();
                                
                                switch (OPT_3)
                                {
                                    case 1:
                                    {
                                        LIST.outputone(INDEX);
                                        
                                        while (!(OPT_4 == 1 or OPT_4 == 2 or OPT_4 == 3))
                                        {
                                            OPT_4 = menu ("Edit Menu", "State Name", "State Value", "All");
                                            cls();
                                        }
                                        switch (OPT_4)
                                        {
                                            case 1:
                                            {
                                                cout << "\n\tEdit State Name\n";
                                                LIST.editstate(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 2:
                                            {
                                                cout << "\n\tEdit State Value\n";
                                                LIST.editvalue(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                            case 3:
                                            {
                                                cout << "\n\tEdit All\n";
                                                LIST.editall(INDEX);
                                                OPT_3 = 3;
                                                cls();
                                                break;
                                            }
                                        }//IIII S
                                        break;
                                    }//III C 1
                                    case 2:
                                    {
                                        cout << "\n\tDeleting Node";
                                        LIST.remove(INDEX);
                                        any();
                                        cls();
                                        OPT_3 = 3;
                                        break;
                                    }
                                }//II S
                            }
                        }
                    }//I S
                }//I WL
            }//C 4
        }//S
    }//WL
    LIST.write();
}

