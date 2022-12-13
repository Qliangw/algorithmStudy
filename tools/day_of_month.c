/*******************************************************************************
  * @brief  平年 闰年
  * @param  
  * @retval None
*******************************************************************************/
static char is_leap_year(int _year) //const
{
    if (_year % 4 == 0 && _year % 100 != 0 || _year % 400 == 0)
        return 1;
    else
        return 0;
}

//bool IsLeapYear(int _year) const  
//{
//    return _year % 400 ? (_year % 100 ? (_year % 4 ? (false) : (true)) : (false)) : true;
//}

/*******************************************************************************
  * @brief  x月的天数
  * @param  
  * @retval None
*******************************************************************************/
static char day_of_month(int year,char month)
{
    char day = 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2:
        day = 28 + IsLeapYear(year);
        break;
    }
    return day;
}
