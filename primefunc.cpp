#include <iostream>
using namespace std;

int count;

int isprime(int a) {
    int flag = 0;
    if(a==1 || a==0) flag=1;
    else {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            flag = 1;
            break;
        }
    }
    }
    if (flag == 1) {
        return 0;
    }
    else {
        ::count++;
        return 1;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    ::count = 0;
    for (int i = n; i <= m; i++) {
        if (isprime(i))
            cout << i << " ";
    }
    cout << "\nTotal numbers: " << ::count << endl;
    return 0;
}
