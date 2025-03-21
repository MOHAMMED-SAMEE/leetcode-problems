// Logic : find the largest possible number whose square is <= x

    int mySqrt(int x) {
        int ans;
        int low = 0;
        int high = x;
        
        while(low<=high){
            int mid = low+(high-low)/2;
            long long sqr = mid*1LL*mid;
			
            if(sqr <= x){
                ans = mid;
                low = mid+1; 
            }else{
                high = mid-1;
            }
        }
        return ans;
    }