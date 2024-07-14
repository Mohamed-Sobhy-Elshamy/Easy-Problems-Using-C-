#include <iostream>
using namespace std;

int main() {
    int lines, hashs;
    cin >> lines >> hashs;
    int counter = 0;

    for(int i=0; i<lines; i++) {
        if(i%2 == 0) {
            for(int j=0; j<hashs; j++) {
                cout << "#" ;
            }
        } else { // Print Hash at end and begin
            counter++;
            for(int z=0; z<hashs; z++) {
                if( (counter%2 == 1 && z == hashs-1) || (counter%2 == 0 && z == 0) ) {
                    cout << "#" ;
                } else {
                    cout << ".";
                }
            }
        }
    cout << endl;
    }



    return 0;
}
