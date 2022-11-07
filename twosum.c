/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    bool found = false;
    for(int i=0; i<numsSize && !found; i++)
    {
        for(int j=i+1; j<numsSize && !found; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                nums[0] = i; nums[1] = j;
                found = true;
            }
        }
    }
    if(!found) return NULL;
    *returnSize = 2;
    return nums;
}
