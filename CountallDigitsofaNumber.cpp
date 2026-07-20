#include <iostream>
using namespace std;

int countdigitsN(int n){
    int cnt =0;

    while(n > 0){
        cnt += 1;
        n = n/10;
    }
    return cnt;
}

int main(){
    int x = countdigitsN(256);
    cout << x;

    cout << endl;

    return 0;
}