#include <iostream>

using namespace std;

int *function(){
    int *p = new int(7);
    p = NULL;

    return p;
}

int main(){

    int *ptr;
    ptr = function();
    if (ptr == NULL)
    {
        cout << "Donen Pointer Bos" << endl;
        exit(0);
    }
    
    cout << *ptr << endl;
    return 0;
}