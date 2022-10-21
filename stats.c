#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {                
    struct Stats s;                
                    
    float sum=0.0, avg=0.0, small=0.0, larger=0.0;                
    int i=0;                
    if(setlength==0)                
    {                
        s.average = NAN;                
        s.min = NAN;                
        s.max = NAN;                
                    
        return s;                
    }                
    else                
    {                
        for(i=0; i<setlength; i++)                
        {                
            sum=sum+numberset[i];                
        }                
                    
        avg=sum/setlength;                
                    
        small=numberset[0];                
        for(i=0; i<setlength; i++)                
        {                
            if(numberset[i]<small)                
            {                
             small=numberset[i];                
            }                
        }                
                    
        larger=numberset[0];                
        for(i=0; i<setlength; i++)                
        {                
            if(numberset[i]>larger)                
            {                
                larger=numberset[i];                
            }                
        }                
                    
        //printf("AVG=%f, SMALL=%f, LARGER=%f", avg,small,larger);                
                    
        s.average = avg;                
        s.min = small;                
        s.max = larger;                
                    
        return s;                
    }                
                    
}
