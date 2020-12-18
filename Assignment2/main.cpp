
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
//#include <conio.h>


using namespace std;


//Function Prototypes
void LOAD (int [], int *[], int *[], int, int); //LOAD (NUM, PTR, PTR, SIZE, MAX);
void SORT (int *[], int, bool); // SORT (PTR, SIZE, ASCEND)
void OUTPUT (int [], int);
void OUTPUT (int *[], int);


int main ()
{

    int SIZE = 15, MAX;
    int NUM [SIZE];
    int *PTR_NUM1[SIZE], *PTR_NUM2[SIZE];
    char AGAIN = 'y';

//Loop App
    while (AGAIN == 'y' or AGAIN == 'Y')
    {
        
    //Randomizer of Rand #
        srand((unsigned) time (NULL));
        
    //Setw Justify left
        cout << std::left;

    //Initialization
        MAX = 100;

    //Intro
        cout << "\n\tUsing Shadow Array's To Accesses and Sort Arrays";
        
    //Load and Output Array
        cout << "\n\n\tContents Of Original Array";
        
        LOAD (NUM, PTR_NUM1, PTR_NUM2, SIZE, MAX);
        OUTPUT (NUM, SIZE);
        
    //Output Shawdow Array
        cout << "\n\n\tContents Of Array Via Shawdow Array PTR_NUM1";
        OUTPUT (PTR_NUM1, SIZE);

    //Ascending Sort
        SORT (PTR_NUM1, SIZE, true);
        
    //Decending Sort
        SORT (PTR_NUM2, SIZE, false);
        
    //Output
        cout << "\n\n\tContents Of PTR_NUM1 In Ascending Order";
        OUTPUT (PTR_NUM1, SIZE);

        cout << "\n\n\tContents Of PTR_NUM2 In Descending Order";
        OUTPUT (PTR_NUM2, SIZE);
        
        cout << "\n\n\tContents Of Original Array";
        OUTPUT (NUM, SIZE);
        
        cout << "\n\n\n\tWould You Like To Run App Again (Y or N)? : ";
        cin >> AGAIN;
        
        system ("clear");
        
    }
    
}

//Function Definitions
void LOAD (int ARNUM [], int *PTR_AR1 [], int *PTR_AR2[], int SIZ, int MAX)
{
    for (int A = 0; A < SIZ; A++)
    {
        ARNUM [A] = rand() % MAX + 1;
        
        PTR_AR1 [A] = &ARNUM [A];
        PTR_AR2 [A] = &ARNUM [A];
    }
}

void SORT (int *ARRAY [], int SIZ, bool ASCEND)
{
        
    for (int D = 0; D < SIZ - 1; D++)
    {
        
        for (int Y = 0; Y < SIZ - D - 1; Y++)
        {
            
            if (ASCEND == true)
            {
                if (*ARRAY [Y] > *ARRAY [Y + 1])
                {
                    
                    swap(ARRAY [Y], ARRAY [Y + 1]);
                    
                }
                
            }
            
            else
            {
                
                if (*ARRAY [Y] < *ARRAY [Y + 1])
                {
                    
                    swap(ARRAY [Y], ARRAY [Y + 1]);
                    
                }
                
            }
            
        }
    
    }
    
}


void OUTPUT (int ARRAY [], int SIZ)
{
    
    for (int E = 0; E < SIZ; E++)
    {
        
        cout << "\n\tINDEX " << setw(2) << E << "\t" << ARRAY [E];
        
    }
    
}


void OUTPUT (int *ARRAY [], int SIZ)
{
    
    for (int F = 0; F < SIZ; F++)
    {
        
        cout << "\n\tINDEX " << setw(2) << F << "\t" << *ARRAY [F] << "\t\tAt Memory Location  " << ARRAY [F];
        
    }

}
