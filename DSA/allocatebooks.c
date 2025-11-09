#include<stdio.h>

int studentcount(int array[], int mid, int size)
{
  int students = 1;
  int pages = 0;
  for(int i = 0; i < size; i++)
  {
    if(pages + array[i] <= mid)
    {
      pages += array[i];
    }
    else
    {
      students++;
      pages = array[i];
    }
  }
  return students;
}

int binary(int array[], int low, int high, int m, int size)
{
  if(m > size)
    return -1;

  int mid;
  while(low <= high)
  {
    mid = (low + high) / 2;
    int students = studentcount(array, mid, size);

    if(students < m)
    {
      high = mid - 1;
    }
    else if(students > m)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1; // search left to minimize
    }
  }
  return low;
}

int allocatebooks()
{
  int array[] = {25, 46, 28, 49, 24};
  int arraysize = 5;
  int maxnumofstudents = 4;
  int arraysum = 0;
  int maxofarray = array[0];

  for(int i = 0; i < arraysize; i++)
  {
    arraysum += array[i];
    if(array[i] > maxofarray)
      maxofarray = array[i];
  }

  int low = maxofarray;
  int high = arraysum;

  int numberofpages = binary(array, low, high, maxnumofstudents, arraysize);
  printf("Minimum number of maximum pages allocated is %d\n", numberofpages);

  return 0;
}
