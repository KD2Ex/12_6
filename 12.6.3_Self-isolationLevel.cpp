#include <iostream>
using namespace std;

int main() {
    int N;
    int ppl[5];
    int pplCount = 0;
    cout << "Input a number of registered residents:";
    cin >> N;
    for (int i = 0; i < 5; i++) {
        cout << "Input a current number of residents on " << i + 1 << " floor: ";
        cin >> ppl[i];
        pplCount += ppl[i];
    }
    if (pplCount > N) {
        cout << "Invalid data!";
        return 0;
    }
    float selfIsolationLevel = pplCount * 100 / N;
    cout << "Current self-isolation level: " << selfIsolationLevel << "%";
}
