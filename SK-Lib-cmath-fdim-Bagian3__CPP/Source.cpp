#include <cmath>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    // perbedaan positif untuk 5.0 dan 4.0 adalah 1
    cout << "fdim of (5.0, 4.0) is " << fdim(5.0, 4.0) << endl;

    // di sini 4.0 < 5.0 jadi outputnya adalah 0
    cout << "fdim of (4.0, 5.0) is " << fdim(4.0, 5.0) << endl;

    // di sini -5.0 < -4.0 jadi outputnya 0
    cout << "fdim of (-5.0, -4.0) is " << fdim(-5.0, -4.0) << endl;

    // perbedaan positif untuk 5.0 dan 4.0 adalah 1
    cout << "fdim of (-4.0, -5.0) is " << fdim(-4.0, -5.0) << endl;

    _getch();
    return 0;
}