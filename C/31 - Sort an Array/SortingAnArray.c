#include <stdio.h>
 

 void sort(int array[], int size)
 //Is void cuz we don't want to return nothing
 //We are gonna use two parameters
 {
     for(int i = 0; i < size - 1; i++)
     {
         for(int j = 0; j < size - i - 1; j++)
         {
           
          if (array[j] > array[j+1])
          {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
          }
          

        
         }
     }
 }


void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}


 int main()
 {
    int array[] = {27,18,22,53,4,55,62};
    int size =                                 sizeof(array)   /   sizeof(array[0]);
           //This will calculate the size of array IN BYTES        //The size of just one element of array IN BYTES


    sort(array, size);
    printArray(array, size);

    return 0;
 }