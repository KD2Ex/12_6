#include <iostream>
using namespace std;


int main() {
    float channels[11] = { 0, 87.5, 89.3, 91.4, 100.6, 101.2, 101.8, 103.20, 104.7, 106.8, 107.7};
    int currentChannel = 8;

    while (currentChannel != 0) {
        if (currentChannel < 0 || currentChannel > 10) {
            cerr << "Wrong channel!" << endl;
        } else {
            cout << "Current channel is " << currentChannel << " on frequency " << channels[currentChannel] << endl;
        }
        cout << "Enter a channel number (enter 0 to power off):";
        cin >> currentChannel;
    }
}
