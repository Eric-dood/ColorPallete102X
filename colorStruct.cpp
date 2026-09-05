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

    //Initialize n, which is a random number between 25 and 50.
    int n = rand() % 25 + 25;
    for (int i = n; i > 0; i--)
    {
        Color t;
        t.red = rand() % 255;
        t.blue = rand() % 255;
        t.green = rand() % 255;
        clist.push_back(t);
    }

    cout << clist[0].red << setw(10) << clist[0].blue << setw(10) << clist[0].green << endl;
}
//End of main()