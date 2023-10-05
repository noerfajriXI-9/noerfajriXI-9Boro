#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;
int main() {
    double s;
    double v;
    double jarak;
    double sinA;

    cin >> s;
    cin >> v;
    sinA = sin(2 * s * 3.141 / 180);
    jarak = (v * sinA) / 10;
    cout << jarak << endl;
    return 0;
}

