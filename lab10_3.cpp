#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int Count = 0;
    float sum = 0.0, SumOfSquare = 0.0;
    string textline;

    ifstream source("score.txt");
    
    while (getline(source, textline)) {
        float number = stof(textline);
        sum += number;
        SumOfSquare += number * number;
        Count++;
    }
    source.close();

    float Mean = sum / Count;
    float std = sqrt((SumOfSquare / Count) - (Mean * Mean));

    cout << "Number of data = " << Count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << std << "\n";
    
    return 0;
}