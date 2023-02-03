#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare variables
    string city;
    double fahrenheit, celsius;

    //read a file

    ifstream inFile;
    inFile.open("FahrenheitTemperature.txt");
    string cities[6];
    double temperature[6];



    // Open output file
    ofstream outFile("converted_temperatures.txt");

    // Read and convert data
    while (inFile >> city && inFile >> fahrenheit) {

        celsius = (fahrenheit - 32) * 5 / 9;
        outFile << city << " " << celsius << endl;

    }   // Close file
    outFile.close();

    return 0;
}