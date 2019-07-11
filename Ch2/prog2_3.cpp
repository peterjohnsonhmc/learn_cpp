    //Think about the max numbers that can be assigned to a short and an unsigned 
    //short each with 16 bits
    //For short:
    //Twos complement storage
    //=-2^15 is the min value since highest order bit is all negative
    //2^15-1 is the max value since 2^14 is highest positive, but also has lower order high 32767
    
    
    //Now think of range for unsigned short
    // 2^15 is the highest order bit, but we also have a 1 in all lower order bits
    //2^16 -1 = 65535 is the max value of a 16 bit short ex in hex FFFF is 65535