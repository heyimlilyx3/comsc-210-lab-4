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
    for (int i = 0; i < 10; ++i) {
        colors.push_back(Color(i * 25, i * 25, i * 25));
    }

    for (int i = 0; i < colors.size(); ++i) {
        cout << "Color " << i << ": (" << colors[i].red << ", " << colors[i].green << ", " << colors[i].blue << ")" << endl;
    }

    return 0;
}
