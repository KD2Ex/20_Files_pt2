#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int width;
    int height;
    ofstream file ("pic.txt");
    cin >> width >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            file << rand() % 2;
        }
        file << "\n";
    }
}