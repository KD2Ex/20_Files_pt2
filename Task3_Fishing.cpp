#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream river("river.txt");
    ofstream bucket("bucket.txt", ios::app);
    string fishType;
    int count = 0;

    cout << "Enter the type of fish you want to catch:\n";
    cin >> fishType;
    while(!river.eof()) {
        string nextFish;
        river >> nextFish;
        if (nextFish == fishType) {
            count++;
            bucket << nextFish << "\n";
        }
    }

    cout << "You've caught " << count << " " << fishType << endl;

    river.close();
    bucket.close();
}
