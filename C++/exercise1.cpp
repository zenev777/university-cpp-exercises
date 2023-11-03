#include <iostream>
using namespace std;
class Room
{
    private:
    double length;
    double breadth;
    double height;

public:
 Room(double len, double brth, double hgt){
    length=len;
    breadth=brth;
    height=hgt;
}

double calculateArea(){
    return length*breadth;
}

double calculateVolume(){
    return length*breadth*height;
}

};

int Main()
{
    Room room1(2,4,2);
    //lear
    //room1.initData(2,4,2);

    cout<<"Area = "<<room1.calculateArea()<<"\n";
    cout<<"Volume = "<<room1.calculateArea()<<"\n";
}

