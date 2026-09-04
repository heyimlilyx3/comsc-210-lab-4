#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;

    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
};

int main() {
    Color myColor(255, 0, 0); // test data
    cout << "Red: " << myColor.red << ", Green: " << myColor.green << ", Blue: " << myColor.blue << endl;
    return 0;
}
