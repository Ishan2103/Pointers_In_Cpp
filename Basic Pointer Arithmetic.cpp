#include <iostream>
using namespace std;
int main() {
    int a = 45, *aptr;
    bool b = true, *bptr;
    float c = a, *cptr;
    double d = 10.66466464, *dptr;
    aptr = &a;
    bptr = &b;
    cptr = &c;
    dptr = &d;
    cout<<"Integer address before increment :"<<aptr<<endl;
    aptr++;
    cout<<"Integer address after incremeny :"<<aptr<<endl;
    cout<<"Boolean address before increment :"<<bptr<<endl;
    bptr++;
    cout<<"Boolean address after increment :"<<bptr<<endl;
    cout<<"Floating address before increment :"<<cptr<<endl;
    cptr++;
    cout<<"Floating address after retirement :"<<cptr<<endl;
    cout<<"Double address before increment :"<<dptr<<endl;
    dptr++;
    cout<<"Double address after increment :"<<dptr<<endl;
    return 0;
}
