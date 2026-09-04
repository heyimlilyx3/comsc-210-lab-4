#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;

    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
};

int main() {
    // Color myColor(255, 0, 0); // test data

    vector<Color> colors;
    // colors.push_back(myColor);

    // Generate a random number of colors between 25 and 50
    int numColors = rand() % 25 + 25; 

    for (int i = 0; i < numColors; ++i) {
        // Generate random RGB values between 0 and 255
        colors.push_back(Color(rand() % 256, rand() % 256, rand() % 256));  
    }

    for (int i = 0; i < colors.size(); ++i) {
        cout << "Color " << i << ": (" << colors[i].red << ", " << colors[i].green << ", " << colors[i].blue << ")" << endl;
    }

    return 0;
}
