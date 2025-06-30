#include<stdio.h>

int main()
{
    int ar[5]={10,20,30,40,50};
    //Address printing
    printf("Oth index er address - %p\n",&ar[0]); 
    printf("Oth index er address - %p\n",ar);

    //Value printng
    printf("Oth index er value - %d\n",ar); 
    printf("Oth index er value - %d\n",*ar); 
    
    //type 1
    printf("1th index er value - %d\n",ar[1]);
   
    //type 2
    printf("1th index er value - %d\n",(*ar+1)); 
    printf("2th index er value - %d\n",*(ar+2)); 
    printf("3th index er value - %d\n",*(ar+3));
 
    //type 3
    printf("3th index er value - %d\n",*(3+ar)); 

    //type 4
    printf("3th index er value - %d\n",3[ar]); 

//so we can write the semilar thing
    // ar[1] -> *(ar+1)
    // *(ar+1) -> ar[1]
    // *(1+ar) -> ar[1] -> 1[ar]

    return 0;
}