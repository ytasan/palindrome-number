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
        digitArr[i] = digit; 
        i++;
        tempX = tempX / 10;    
    }
    
    for (i = 0; i < digitCount; i++) {
        printf("digit = %d\n", digitArr[i]); 
    }

    return false;
}
