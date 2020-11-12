#include <iostream>
#include <vector>
#include <time.h>
#include <random>

#include "sorts.h"

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, vector<T> v) {
    os << "{";
    for (auto t : v)
        os << ' ' << t;
    os << " }\n";
    return os;
}

vector<int> createRandomArray(int n) {
    srand(static_cast<unsigned int>(time(0)));
    vector<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(rand() % 2001 - 1000);
    return v;
}

vector<int> createSortedArray(int n, bool reversed = false) {
    vector<int> v;
    while(n--)
        v.push_back(n);
    if (reversed)
        reverse(v.begin(), v.end());
    
    return v;
}

int main()
{   
    /*vector<int> v = createSortedArray(10000, true);
    clock_t t = clock();
    v = selectionSort(v);
    t = clock() - t;
    cout << t << '\n';*/
    return 0;
}
