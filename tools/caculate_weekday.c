/*******************************************************************************
  * @brief  基姆拉尔森计算公式
  * @param  
  * @retval None
*******************************************************************************/
static char caculate_weekday(int yyyy,char mm, char dd)
{
  if( mm==1 || mm==2)
  {
    mm+=12;
    yyyy--;
  }
  char iWeek;
  iWeek = (dd + 2*mm + 3*(mm+1)/5+yyyy + yyyy/4 - yyyy/100 + yyyy/400) % 7;

  return (iWeek+1);
}
