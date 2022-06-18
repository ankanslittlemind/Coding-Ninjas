/* Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively. */
#include<iostream>
using namespace std;

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if (n == 0)
        return 0;
    int result = input[0];
    result += sum(input + 1, n - 1);
    return result;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}