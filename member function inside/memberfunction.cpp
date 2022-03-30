#include <iostream>

using namespace std;
class car 
{
    private:
    int wheels;
    string name;
    string color;
    
public:
void drive()
{
    cout<<"member function describe inside class";
}

int distancetravelled()
{
    return 1000;
}
    void driving();
};

void car ::driving()
{
    cout<<"member function describe outside the class";
}
int main()
{
    cout<<"Hello World";
car car1;
car1.drive();
cout<<car1.distancetravelled();
car1.driving();
}
