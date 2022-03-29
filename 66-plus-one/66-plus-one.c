

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    
    for(int i=digitsSize-1;i>=0;i--){
        if(digits[i]!=9){
            digits[i]++;
            break;
            
        }else{
            digits[i]=0;
        }
        
    }
    
    if(digits[0]==0){
        int* newArray=malloc(sizeof(int)*(digitsSize+1));
        newArray[0]=1;
        int j=0;
        for(int i=1;i<digitsSize+1;i++){
            newArray[i]=digits[j++];
        }
         *returnSize=digitsSize+1;
        return newArray;
    }
    *returnSize=digitsSize;
    return digits;
}
