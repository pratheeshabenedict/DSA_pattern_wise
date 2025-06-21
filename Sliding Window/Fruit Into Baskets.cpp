class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> basket;
        int len=0;
        int left=0;
        for(int right=0;right<fruits.size();right++){
            basket[fruits[right]]++;
            while(basket.size()>2){
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0){
                    basket.erase(fruits[left]);
                }
                left++;
            }
            len=max(right-left+1,len);
        }
        return len;
    }
};
