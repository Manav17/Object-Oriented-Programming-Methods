//
//  main.cpp
//  CharArray
//
//  Created by Manavjot Singh on 2/6/19.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    char ch[10][10];
    
//    for (int a = 0; a < 3; a++)
//    {
//        cout << "\n\tINput Stuff";
//        cin.getline(ch[a],10,'.');//[0];
//        cin.ignore();
//    }
    
    for(int a=0; a < 3; a++)
    {
        cout << "\n\tinput Stuff";
        for(int x = 0; (x < 10) and ch[x][a] != '.' and ch[x][a] != '\0'; x++)
        {
            ch[a][x]=getchar();
        }
        cout << "\n";
    }
    
    cout << ch[0][0];
    cout << ch[0][1];
}
