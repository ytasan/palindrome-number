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
    
    printf("number = %d\n", x);
    printf("digit number = %d\n", digitCount);
    
    tempX = x;        
    i = 0; 
    while(tempX > 0) 
    {
        digit = tempX % 10;          
        // printf("digit = %d\n", digit);
        // printf("tempX = %d\n", tempX);
        // printf("i = %d\n", i);
        digitArr[i] = digit; 
        // printf("i = %d\n", i);
        i++;
        // printf("i = %d\n", i);
        tempX = tempX / 10;    
        // printf("tempX = %d\n", tempX);
    }
    
    for (i = 0; i < digitCount; i++) {
        printf("digit = %d\n", digitArr[i]); 
    }

    return false;
}
