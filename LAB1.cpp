#include <iostream>
using namespace std;
int main() {
    int* number;
    number = new int;
    *number = 5;
    cout <<"Memory address "<<number <<endl;
    cout <<"Memory address value "<<*number <<endl;
    delete number;
    return 0;
}
