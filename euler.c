#include <stdio.h>

int multi35(){
    int total = 0;
    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0){
            total += i;
        }
    }
    return total;
}

int smallMulti(){
    int i = 0;
    int multiple = 3;
    while (1)
    {
        i += 2;
        for (multiple = 2; multiple <= 20; multiple++)
        {
            if (i % multiple != 0){
                break;
            }else{
                if (multiple == 20){
                    return i;
                }
            }
        }
    }
}