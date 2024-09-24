#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int x, y, R1, R2;

    srand((unsigned)time(NULL));

    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;

    for (int i = 0; i < 10; i++)
    {
        x = rand() % (2 * R1 + 1) - R1;
        y = rand() % (2 * R1 + 1) - R1;

        double D = sqrt(x * x + y * y);
        if (D > R1 && D <= R2)
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
            << setw(8) << setprecision(4) << y << " " << "no" << endl;
    }

    return 0;
}
