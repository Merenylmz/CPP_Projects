#include <iostream>

using namespace std;

int sum(int s1, int s2){
    return s1 + s2;
}
int sum(int s1, int s2, int s3){
    return s1 + s2 + s3;
}

int main(){
    cout << sum(1, 5)<<endl;
    cout << sum(1,2,3)<<endl;


    return 0;
}