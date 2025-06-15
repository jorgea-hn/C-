#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int* p = &x;
    cout << *p << endl; // imprime 10

    *p = 25;
    cout << x << endl; // imprime 25

    char letra = 'A';
    char* ptr = &letra;
    cout << *ptr << endl; // imprime A

    int nums[] = {5,10,15};
    int* ptr2 = nums;
    cout << *(ptr2 +1) << endl; // imprime 10


    return 0;
}   