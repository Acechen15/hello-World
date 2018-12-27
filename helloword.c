void inSort(int* array, int length)
{
  int i,j;
  for (i = 2; i <= length; ++i)
  {
    array[0] = array[i]       // 给监视哨赋值
    j = i - 1;                // 这是带比较的最右边的数
    while(array[0] < array[j])
    {
      array[j + 1] = array[j];  //数据右移
      j--;
    }
    
    array[j + 1] = array[0]
    
  }
}
