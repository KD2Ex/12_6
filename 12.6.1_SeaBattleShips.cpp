#include <iostream>
#include <cstring>
using namespace std;


int main() {
    bool tiny[4];
    bool small[3];
    bool medium[2];
    bool large[1];

    cout << "Size of arrays:\n"
         << "Tiny: " << sizeof (tiny) << endl
         << "Small: " << sizeof (small) << endl
         << "Medium: " << sizeof (medium) << endl
         << "Large: " << sizeof (large) << endl;
}
