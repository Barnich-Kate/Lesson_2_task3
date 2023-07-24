#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    int mas[n];
    for (int i = 0; i < n; i++) {
        mas[i] = 1 + rand() % 20;
    }
    
    for (int i = 0; i < n; i++) {
        cout<<mas[i]<<endl; 
    }

    return 0;
}
