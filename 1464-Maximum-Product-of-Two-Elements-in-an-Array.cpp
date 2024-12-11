class Solution {
public:
int maxProduct(vector<int>& nums) {
priority_queue pq(nums.begin(),nums.end());
int count=2,pod=1;
while(count--)
{
pod = pod*(pq.top()-1);
pq.pop();
}
return pod;
}
};
 
