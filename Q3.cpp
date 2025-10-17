#include <iostream>
#include <string>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point coor[6]; 


    for (int i = 0; i < 6; i++) {  
        float x, y;
        cout << "Enter coordinates for point " << i + 1 << ":" << endl;
        
        cout << "x: ";
        cin >> x;

        cout << "y: ";
        cin >> y;

        coor[i] = {x, y};
    }


    int count = 0;
    for (int i = 0; i < 6; i++) {  
        if (coor[i].x >= 0 && coor[i].y >= 0) { 
            count++;
        }
    }

    cout << "Number points in first quadrant: " << count << endl;

    return 0;
}

