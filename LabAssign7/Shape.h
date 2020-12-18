
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <conio.h>

using namespace std;

class Shape
{
protected:
    float WIDTH;
    float BASE;
    float HEIGHT;
    
public:
    float GetWidth ()
    {
        return WIDTH;
    }
    
    float GetBase ()
    {
        return BASE;
    }
    
    float GetHeight ()
    {
        return HEIGHT;
    }
    
    
    void SetWidth (float width)
    {
        WIDTH = width;
    }
    
    void SetBase (float base)
    {
        BASE = base;
    }
    
    void SetHeight (float height)
    {
        HEIGHT = height;
    }
    
    void SetAll (float width, float base, float height)
    {
        WIDTH = width;
        BASE = base;
        HEIGHT = height;
    }
    
    void SetBH (float base, float height)
    {
        BASE = base;
        HEIGHT = height;
    }
    
    virtual float Area ()
    {
        return 0;
    }
};

class Rectangle : public Shape
{
public:
    float Area ()
    {
        return BASE * HEIGHT;
    }
};

class Triangle : public Shape
{
public:
    float Area ()
    {
        return (BASE * HEIGHT) / 2;
    }
};

class Cylinder : public Shape
{
public:
    float Area ()
    {
        return (2 * M_PI * BASE) * (HEIGHT + BASE);
    }
};

class Trapezoid : public Shape
{
public:
    float Area ()
    {
        return ((WIDTH + BASE) / 2) * HEIGHT;
    }
};

class Circle : public Shape
{
public:
    float Area ()
    {
        return (M_PI * BASE * BASE);
    }
};
