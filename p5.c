

#include <stdio.h>
 
int main()
{
  int array[100], maximum, size, c, location = 1;
 
 printf("Enter the number of elements in array\n");
  scanf("%d", &size);
 
  printf("Enter %d integers\n", size);
 
  for (c = 0; c < size; c++)
   {
    
  maximum = array[0];
 

    if (array[c] < maximum)
    {
       maximum  = array[c];

       location = c+1;
       printf("\n max is %d",maximum);
    

    }
    else 
      printf("%d",array[c]);
  
  }

 
  return 0;
}