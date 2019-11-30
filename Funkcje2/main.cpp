#include <iostream>
#include "biblioteka.h"

using namespace std;

int main()
{
    cout << poleKwadratu(3) << endl;

    for (int i=0; i<10; i++)
        cout << i << " " << potega(2,i) << endl;
    return 0;
}
