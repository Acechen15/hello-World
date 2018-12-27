void insertionSort(int* a, int length)
{
  int i;
  int j;
  for(i = 1; i < length; ++i)
  {
    int key = a[i];
    for(j = i - 1; j >= 0 && key < a[j]; --j)
    {
      a[j + 1] = a[j];
    }
    
    a[j + 1] = key; 
  }
}
