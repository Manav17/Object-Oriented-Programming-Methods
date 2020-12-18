//
//  main.cpp
//  argc
//
//  Created by Manavjot Singh on 10/11/18.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[])
{

    cout << "\n\targc = " << argc;
    
    for (int x = 0; x < argc; x++)
        cout << "\n\t" <<argv[x]  << "\n\tAdress" << (void *) argv[x];

    ofstream fout;
    
    fout.open(argv[1],ios::out);
    
    fout << "hello";
    
    fout.close();
    
}
