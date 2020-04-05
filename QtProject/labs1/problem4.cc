#include "problem4.h"

//BUBBLE SORT

void bubble_sort(int[]);

void bubble_sort(int fn_arr[]) {
    int i, j, a, t;

    for (i = 1; i < MAX_SIZE; i++) {
        for (j = 0; j < MAX_SIZE - 1; j++) {
            if (fn_arr[j] > fn_arr[j + 1]) {

                t = fn_arr[j];
                fn_arr[j] = fn_arr[j + 1];
                fn_arr[j + 1] = t;
            }
        }

        std::cout << "\nIteration : " << i;
        for (a = 0; a < MAX_SIZE; a++) {
            std::cout << "\t" << fn_arr[a];
        }
    }

    std::cout << "\n\nSorted Data :";
    for (i = 0; i < MAX_SIZE; i++) {
        std::cout << "\t" << fn_arr[i];
    }
}

//QUICK SORT
int partition(int *a,int start,int end)
{
    int pivot=a[end];


    int P_index=start;
    int i,t;

    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }

      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;

     //at last returning the pivot value index
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
