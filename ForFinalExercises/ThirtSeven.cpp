#include <iostream>

using namespace std;

int findMaxAmount(int* exchange, int size){
    int sum = exchange[0];
    
    for (int i = 0; i < size; i++)
    {
        if (sum<0)
        {
            sum = 0;
        }else if (exchange[i] <= (-1)*sum)
        {
            continue;
        }
        sum += exchange[i];     
    }
    

    return sum;
}

int main(){
    int exchangeDays[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = 9;
    int result = findMaxAmount(exchangeDays, size);

    cout << result <<endl;

    return 0;
}