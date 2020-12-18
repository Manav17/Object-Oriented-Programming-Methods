
//#include <stdlib.h>
//#include <unistd.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>


#include "Meep.h"


using namespace std;


struct node
{
    node *NEXT;
    int NUM;
    node *PREVIOUS;
};

struct nodeSSJ
{
    nodeSSJ *Xpos;
    nodeSSJ *Ypos;
    int NUM;
    nodeSSJ *Xneg;
    nodeSSJ *Yneg;
    
};

struct nodeSSJ2
{
    nodeSSJ2 *Xpos;
    nodeSSJ2 *Ypos;
    nodeSSJ2 *Zpos;
    int NUM;
    nodeSSJ2 *Xneg;
    nodeSSJ2 *Yneg;
    nodeSSJ2 *Zneg;
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

