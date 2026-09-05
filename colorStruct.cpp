//COMSC-210 | Lab 4 | Eric-Giulio Hedes
#include <iostream>
#include <vector>
using namespace std;

//Declare the color struct
struct Color {
    //Also declare the RGB data types
    int red, green, blue;
};

//Start of main()
int main()
{
    Color test1;
    test1.red = 128;
    test1.green = 90;
    test1.blue = 100;
    cout << test1.red << " " << test1.blue << " " << test1.green << endl;
}
//End of main()