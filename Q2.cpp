#include <iostream>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};


void printColor(Color &c) {
    cout << "Red: " << c.red << ", Green: " << c.green << ", Blue: " << c.blue << endl;
}

int main() {
    Color rgb[5];  

    rgb[0] = {134, 234, 134};
    rgb[1] = {14, 134, 214};
    rgb[2] = {134, 234, 234};
    rgb[3] = {104, 224, 54};
    rgb[4] = {4, 234, 134};

    
    for(int i = 0; i < 5; i++) {
        rgb[i].red = max(0, 255-rgb[i].red);
        rgb[i].green = max(0, 255-rgb[i].green);
        rgb[i].blue = max(0, 255-rgb[i].blue);
    }

 
    for(int i = 0; i < 5; i++) {
        printColor(rgb[i]);
    }

    return 0;
}

