/*******************************************************************************
  * @brief  ≤Â»Î≈≈–Ú
  * @param  
  * @retval None
*******************************************************************************/
static void InsertSort(uint16_t *array,uint8_t length)
{

	int left;
	int right;
	uint16_t temp;
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