#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    int distance = sqrt(x * x + y * y);
    int sum = x + y;

    cout << distance << endl << sum;

    return 0;

}
