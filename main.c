bool debug = true; 

bool isPalindrome(int x){
    unsigned int digitCount = 0;   
    unsigned int tempX = x;
    unsigned int i = 0;
    unsigned int digit = 0;
    
    while( tempX != 0) {  
        tempX = tempX / 10;  
        digitCount++;  
    }  
    
    unsigned int* digitArr = (unsigned int*) calloc(digitCount, sizeof(unsigned int));
    
    if(debug){printf("number = %d\n", x);}
    if(debug){printf("digitCount = %d\n", digitCount);}
    
    tempX = x;
    i = 0; 
    while(tempX > 0) 
    {
        digit = tempX % 10;          
        digitArr[i] = digit; 
        i++;
        tempX = tempX / 10;    
    }
    
    for (i = 0; i < digitCount; i++) {
        if(debug){printf("digit = %d\n", digitArr[i]);}
    }
    
    i = 0;
    if(digitCount != 0){
        while(i<(digitCount/2)){
            if(debug){printf("i = %d\n", i);}
            if(debug){printf("digitArr[%d] = %d\n", i, digitArr[i]);}
            if(debug){printf("digitArr[%d] = %d\n", digitCount - 1 - i, digitArr[digitCount - 1 - i]);}
            if(digitArr[i] != digitArr[digitCount - 1 - i]){
                free(digitArr); 
                return false;
            }
            i++;
        }        
    }
    
    free(digitArr);
    return true;
}
