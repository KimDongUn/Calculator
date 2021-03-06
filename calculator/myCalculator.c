#include <stdio.h>
#include "defaultCal.h"
#include <string.h>
#include "manual.h"
#include "programmerCal.h"
#include "engineerCal.h"
int main()
{
  char mode=0;

  while(1)
  {
    mode = mode_select();
	printf("===================\n");
	printf("mode select : %c\n",mode);

    if(mode == '0')
    {
	printf("Current Mode : Manual\n");
	manual();
    }else if(mode == '1')
    {
	printf("Current Mode : Default\n");
	while(execution_defaultCal())
	{
	}
 
    }else if(mode == '2')
    {
	printf("Current Mode : Engineering\n");
	while(executionEngineerCal())
	{

	}
    }else if(mode == '3')
    {
	printf("Current Mode : Programmer\n");
	while(executionprogrammerCal())
	{

	}
	
    }else if (mode =='4')
    {
	while(executionConverter())
	{
	}
    }else if(mode == 'q')
    {
	printf("Program exit\n");
	return 0;
    }
  }
  return 0;
}
