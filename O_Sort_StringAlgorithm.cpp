#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    char S[N + 1]; 
    cin.ignore(); 

    for(int i=0;i<N;i++) {
        cin >> S[i];
    }

    sort(S, S+N);
    // for(int i=0;i<N-1;i++) {
    //     for(int j=i+1;j<N;j++) {
    //         if (S[i] > S[j]) {
    //             char tmp = S[i];
    //             S[i] = S[j];
    //             S[j] = tmp;
    //         }
    //     }
    // }

    for(int i=0;i<N;i++) {
        cout << S[i] ;
    }
    
    return 0;
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int N;
//     cin >> N; // Read the size of the string

   
    



//     return 0;
// }
