class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        if (n % 2 != 0) {
            return false;
        }
        return isPowerOfTwo(n / 2);
    
    }
};

// 2nd approach
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0){
//             return false;
//         }
//          int p= n& (n-1);   //  n == 2^x satisfy when x=0,1,2..
//                              // n=0; n=2, n=4, ...
//                              // so if bitwise and of n ,n-1 equal to zero, then condition                                  //will 
//                          // true 
//         if(p==0){
//             return true;
//         }
//         return false;
//     }
// };
