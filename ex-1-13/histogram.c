#include <stdio.h>

#include "histogram.h"

// #define MAKE_MAIN_FUNC_HERE

int histogram(int (*data) (int), int data_length)
{
  int i, j, data_min, data_max, data_range;
  int histogram_size = 40;
  
  
  // get min and max of data
  
  data_min = data_max = (*data)(0);
  
  for (i = 0; i < data_length; ++i)
  {
    if(data_min > data(i))
      data_min = data(i);
    
    if(data_max < data(i))
      data_max = data(i);
  }
  
  // get range of data
  
  data_range = data_max - data_min;
  
  for (i = 0 ; i < data_length; ++i)
  {
    int this_hist_len = histogram_size - 15; // how wide (in chars) is variable part of hist
    float how_many_char_positions_is_one_data =  this_hist_len / (float) data_range;
    int num_variable_hist_chars = how_many_char_positions_is_one_data * data(i) - data_min;
    
    printf("=====[ %d ]=====", data(i));
    for(j = 0; j < num_variable_hist_chars; j++)
      putchar('=');
    
    putchar('\n');
  }
  
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

ifdef MAKE_MAIN_FUNC_HERE

int main(void)
{
  histo_tester();
  
  return 0;
}

#endif

