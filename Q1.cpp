#include <iostream>
#include <string>
using namespace std;

struct item {
    int id;
    float cost;
};

int main() {
    item items[6];
    

    items[0] = {12, 435.0};
    items[1] = {13, 2350.0};
    items[2] = {14, 450.0};
    items[3] = {15, 350.0};

    for (int i = 0; i < 2; i++) { 
        int arrid;
        cout << "Enter id for item " << i + 1 << ": ";
        cin >> arrid;

        float arrcost; 
        cout << "Enter cost for item " << i + 1 << ": ";
        cin >> arrcost;

        items[4 + i] = {arrid, arrcost};  
    }

    cout << "\nItems with cost greater than 50.0:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.0) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}

