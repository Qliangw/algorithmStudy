#include <stdlib.h>

/*******************************************************************************
  * @brief  将IP改为十六进制
  * @param  (ip字符串类型，ip十六进制类型，ip端口)
            前一个为输入，后两个为输出
  * @retval None
*******************************************************************************/
void ip_str2hex(unsigned char *_ipstr, unsigned char *_iphex, unsigned int *_port)
{
//  uint16_t i = 0;
  unsigned char ip_buf[22];
  unsigned char *p1 = ip_buf;
  unsigned char *p2 = ip_buf;
  unsigned char* addr = (unsigned char*) _iphex;
  unsigned int* port = _port;
  
//  memcpy(ip_buf,_str,strlen(_str));
  strcpy(ip_buf, (&_ipstr[0]) );
  
  while(*p1++ != '.');
  *addr = atoi(p2);
  
  p2 = p1;
  *(p1-1) = 0;
  *(addr+1) = atoi(p2);
  
  while(*p1++ != '.');
  p2 = p1;
  *(p1-1) = 0;
  *(addr+2) = atoi(p2);
  
  while(*p1++ != '.');
  p2 = p1;
  *(p1-1) = 0;
  *(addr+3) = atoi(p2);
  
  while(*p1++ != ',');
  p2 = p1;
  *(p1-1) = 0;
  *port = atoi(p2);

}