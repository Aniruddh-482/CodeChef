#include<iostream>
using namespace std;

int main(){
    int w;
    double t;

    cin >> w >> t;

    if (w % 5 != 0)
    {
        cout << t << endl;
    }
    else
    {
        cout << t - double(w) - 0.5 << endl;
    }

    return 0;
}

