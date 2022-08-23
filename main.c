bool isPalindrome(int x){
    int digitCount = 0;   
    int tempX = x;
    unsigned int i = 0;
    unsigned int* digitArr = (unsigned int*) malloc(digitCount * sizeof(unsigned int));
    
    while( tempX != 0) {  
        tempX = tempX / 10;  
        digitCount++;  
    }  
    printf("digit number = %d\n", digitCount);
    printf("number = %d\n", x);
    
    tempX = x;    
    while(tempX > 0) 
    {
        int digit = tempX % 10;          
        digitArr[i] = digit; 
        i++;
        tempX = tempX / 10;    
    }
    
    for (i = 0; i < digitCount; i++) {
        printf("digit = %d\n", digitArr[i]); 
    }

    return false;
}
