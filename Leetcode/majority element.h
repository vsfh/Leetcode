class Solution{
	public:
	int majorityElement(vector<in> & nums) {
		int n = nums.size();
		srand(unsigned(time(null)));
		while(true){
			int idx = rand() % n;
			int cadidate = nums [idx];
			int count = 0;
			for(int i = 0; i < n ;i++ )
				if(nums[i] == cadidate)
					count++;
		if(count > n /2 )
			return cadidate;
		}
	}
};