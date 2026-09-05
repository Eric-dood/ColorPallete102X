//COMSC-210 | Lab 4 | Eric-Giulio Hedes
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

//Declare the color struct
struct Color {
    //Also declare the RGB data types
    int red, green, blue;
};

//Start of main()
int main()
{
    srand(time(0));

    Color test1;
    test1.red = rand() % 255;
    test1.blue = rand() % 255;
    test1.green = rand() % 255;
    vector<Color> clist;
    clist.push_back(test1);

    cout << clist[0].red << setw(10) << clist[0].blue << setw(10) << clist[0].green << endl;
}
//End of main()