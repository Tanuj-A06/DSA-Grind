class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        n*=n;
        int num=maxWeight/w;
        if(n>num) return num;
        else return n;
    }
};