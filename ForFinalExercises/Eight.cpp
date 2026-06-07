#include <iostream>

using namespace std;

bool isPalindrome(const char* word){
    int length = 0;
    for (; true; length++)
    {
        if (*(word+length) == '\0')
        {
            break;
        }
    }

    for (int i = 0; i < length/2; i++)
    {
        if (*(word+i) != *(word+length-i-1))
        {
            return false;
        } 
        
    }
    return true;
}

int main(){

    if (isPalindrome("KAYAIYAK"))
    {
        cout << "Evet palindrom" << endl;
        return 0;
    }
    
    cout <<"Hayir degil"<<endl;

    return 0;
}