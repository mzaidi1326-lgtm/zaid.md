#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;
    if (num> 0) {
        if (num% 2== 0) {
            cout<<num <<" is EVEN and POSITIVE" <<endl;
        } else {
            cout<<num <<" is ODD and POSITIVE" <<endl;
        }
    } else if (num< 0) {
        if (num %2 == 0) {
            cout <<num <<"is EVEN and NEGATIVE"<<endl;
        } else {
            cout << num<<" is ODD and NEGATIVE"<<endl;
        }
    } else {
        cout <<"0 is EVEN and NEITHER POSITIVE NOR NEGATIVE"<<endl;
    }
    return 0;
}