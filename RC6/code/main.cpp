#include "parkinglot.h"
using namespace std;

int main(){
    Vec a;
    Vec b(3,4);
    cout << "Vector a:  "; a.print();
    cout << "Vector b:  "; b.print();
    Vec add=a+b;
    cout << "Vector a+b: "; add.print();
    double inner_prod=a*b;
    cout << "Inner product of a and b: " << inner_prod << endl;
    Vec number_prod=a*10;
    cout << "Vector a times 10: "; number_prod.print();
    return 0;
}
