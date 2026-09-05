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
    //Set up the WIDTH constant for less repetition and easier editing
    const int WIDTH = 10;
    //Set up a random seed generator for more variety
    srand(time(0));

    //Set up a first initial color struct
    Color test1;
    //Initialize the RGB values with a random number between 0 and 255.
    test1.red = rand() % 255;
    test1.blue = rand() % 255;
    test1.green = rand() % 255;
    //Also print it out just for good measure
    cout << "Sample color struct output:" << endl;
    //Print out a separation line by using a ranged-loop
    for (int i = 0; i < 40; i++)
        cout << "-";
    //Then print out the color struct sample
    cout << endl << setw(WIDTH) << test1.red << setw(WIDTH) << test1.green << setw(WIDTH) << test1.blue << endl << endl;

    //Now it's time to get to the good stuff; it's time to print out 25-50 of these structs.
    //Set up the struct vector that will be used for the multiple struct loop.
    vector<Color> clist;
    //Initialize n, which is a random number between 25 and 50.
    int n = rand() % 25 + 25;
    //Use a ranged-loop to store the structs that have random integers to the vector clist.
    for (int i = n; i > 0; i--)
    {
        //Initialize a temporary color struct named t
        Color t;
        //Add random numbers between 0 and 255 to the RGB values of the temporary struct
        t.red = rand() % 255;
        t.blue = rand() % 255;
        t.green = rand() % 255;
        //Store the struct into the 'clist' vector by pushing back
        clist.push_back(t);
    }

    //Print out the whole list!
    //First, print out the column names & the separation lines
    cout << "Color#" << setw(WIDTH) << "R value" << setw(WIDTH) << "G value" << setw(WIDTH) << "B value" << endl;
    cout << "------" << setw(WIDTH) << "-------" << setw(WIDTH) << "-------" << setw(WIDTH) << "-------" << endl;
    //Then use a for-loop to print the rest of the functions
    for (int i = 0; i < n; i++)
        cout << setw(5) << i+1 << setw(WIDTH) << clist[i].red << setw(WIDTH) << clist[i].green << setw(WIDTH) << clist[i].blue << endl;
}
//End of main()