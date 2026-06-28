#include <iostream>
using namespace std;

int main() {
    int num[] = {22,43,65,43,77,90,54,93};
    int size = 8;

    int smallest = INT_MAX;

    for(int i=0; i<size ;i++){
        smallest = min (smallest , num[i]);
    }
    cout<<smallest;
    
return 0;
}