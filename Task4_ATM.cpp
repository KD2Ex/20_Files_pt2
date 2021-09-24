#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int atm_statement(ifstream &file, string path = "atm.txt") {
    if (!file.is_open()) {
        file.open(path, ios::binary);
    }
    int billsCount = 0;
    string str = "\n";
    while (!file.eof()) {
        billsCount++;
        getline(file,str);
    }
    return billsCount;
}

int main() {
    ofstream atm_out("atm.txt", ios::app);
    ifstream atm_in("atm.txt", ios::binary);
    srand(time(nullptr));
    ifstream file;
    const int BILLS[] = {100, 200, 500, 1000, 2000, 5000};
    char operation;
    //cout << atm_statement(file, "atm.txt") << " of bills\n";
    cin >> operation;

    if (operation == '+') {
        string str;
        for (int i = 0; i < 1000; ++i) {
            atm_in >> str;
            if (atm_in.eof()) {
                atm_out << BILLS[rand() % 6] << "\n";
            }
        }
    } else if (operation == '-') {
        int withdrawal;
        cout << "Enter a withdrawal:" << endl;
        cin >> withdrawal;

    }
    atm_out.close();
    atm_in.close();
}