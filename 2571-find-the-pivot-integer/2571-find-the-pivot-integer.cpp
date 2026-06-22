using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int x = n * (n+1) / 2;
        int x_sqrt = sqrt(x);
        if (x_sqrt * x_sqrt == x)
            return x_sqrt;
        return -1; 
    }
};