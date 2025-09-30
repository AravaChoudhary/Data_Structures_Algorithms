#include<iostream>

using namespace std;

int main() {

    int a = 10;
    int *p = &a;    // Pointer to an int
    int * *q = &p;   // Pointer to an int* OR Pointer to [Pointer to an int].

    return 0;
}