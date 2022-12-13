/*******************************************************************************
  * @brief  插入排序
  * @param  
  * @retval None
*******************************************************************************/
static void insert_sort(unsigned int *array,unsigned char length)
{

	int left;
	int right;
	unsigned int temp;
	for(right = 1; right < length; right++)
	{
		temp = array[right];
		left = right - 1;
		while( (left >= 0) && ( array[left] > temp ) && (left < length))
		{
			array[left+1] = array[left];
			left -=1;
		}
		array[left+1] = temp;
	}
}
