

void moveZeroes(int* nums, int numsSize){
    int m=numsSize;
    int count =0;
    step:
    for(int i=0;i<m;i++)
    {

        if(nums[i] ==0 && i != m-1)
        {
            for(int k=i;k<numsSize-1;k++)
                nums[k]=nums[k+1];
            nums[numsSize-1]=0;
            m--;
            goto step;
        }
    }
    
}