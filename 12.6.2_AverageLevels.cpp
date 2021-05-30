#include <iostream>
using namespace std;

int main() {
    int fitnessClub[2];
    int shop[1];
    int cottage[3];
    int apartments[15];
    int skyscraper[50];
    int levelsOfQuarter = sizeof(fitnessClub) / sizeof(fitnessClub[0]) +
                          sizeof(shop) / sizeof(shop[0]) +
                          sizeof(cottage) / sizeof(cottage[0]) +
                          sizeof(apartments) / sizeof(apartments[0]) +
                          sizeof(skyscraper) / sizeof(skyscraper[0]);
    cout << "Arithmetical mean: " << levelsOfQuarter / 5.0;
}