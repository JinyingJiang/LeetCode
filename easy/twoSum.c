#include <stdio.h>
#include <stdlib.h>

/*int* twoSum(int* nums, int numsSize, int target) {
    int* a;
    int result[2]={0};
    a=result;
    int i,j;
    for(i=0;i<numsSize;i++){
    	for(j=0;j<numsSize;j++){
    		if(i==j) continue;
    		else{
    			if(nums[j]==target-nums[i]){
    				a[0]=i;
					a[1]=j;
					return a; 
				} 
				
			}
		}
	}
	return NULL; 
}*/

int* twoSum(int* nums, int numsSize, int target) {
    	int i, min = nums[0], max = nums[0];
	for (i = 0; i < numsSize; i++) {
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}
	int *map = (int*)calloc((max - min + 1), sizeof(int));
	int *twosum = (int*)malloc(sizeof(int) * 2);
	for (i = 0; i < numsSize; map[nums[i] - min] = ++i) {
		int lookfornum = target - nums[i];
		if (lookfornum<min || lookfornum>max)
			continue;
		int dis = lookfornum - min;
		printf("map[dis] is %d,dis is %d\n",map[dis],dis);
		if (map[dis] != 0) {
			twosum[0] = i;
			twosum[1] = map[dis] - 1;
			break;
		}
	}

	return twosum;
}

int main(){
	int nums[5]={3,4,2,7};
	int numsSize=4,target=6;
	int* a;
	a=(int *)malloc(2*sizeof(int *));
	a=twoSum(nums,numsSize,target);
	printf("%d %d\n",a[0],a[1]);
	return 0;
}
