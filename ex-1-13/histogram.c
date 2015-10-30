#include <stdio.h>

int histogram(int (*data) (int), int data_length)
{
  int i, data_min, data_max;
  
  // get min and max data
  
  data_min = data_max = (*data)(0);
  
  for (i = 0; i < data_length; ++i)
  {
    if(data_min > data(i))
      data_min = data(i);
    
    if(data_max < data(i))
      data_max = data(i);
  }
  
  for (i = 0 ; i < data_length; ++i)
    printf("%d\n", i);
  
  return 0;
}

int a[] = {15,20,25};

int data_A(int index)
{
  return a[index];
}

void histo_tester(void)
{
  histogram(&data_A, 3);
}

int main(void)
{
  histo_tester();
  
  return 0;
}

