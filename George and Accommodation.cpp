#include <iostream>
using namespace std;

int main() {
    int numOfRoom;
    cin >> numOfRoom; // 2
    int counter = 0;
    for(int i=0; i<numOfRoom; i++) { // 0 1
        int numOfPersons, capacityOfRoom;
        cin >> numOfPersons >> capacityOfRoom;
        int res = capacityOfRoom - numOfPersons;
        if(res >= 2) {
            counter++;
        }
    }
    cout << counter << endl;



    return 0;
}

