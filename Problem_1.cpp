#include <iostream>
using namespace std;
int num, a, suma;
int main(){
    cout << "Number: ";
    cin >> num;
    for (int i=1; i<=num; i++){
        a = i;
        if (a%3 == 0 || a%5 == 0){
            cout << a << " ";
            suma = suma + a;
        }
    }
    cout << "\r\nThe sum is: "<<suma - num;
}
//233168