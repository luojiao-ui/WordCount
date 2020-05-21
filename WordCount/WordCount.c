//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define MAX_LINE 1024
//int main(int argc,char *argv[])
//{
//	FILE *fp;       //文件指针 
//	char buf[MAX_LINE];  //缓冲区
//	int len,i=0; 
//	int j=0,k=0,count=0;            
//	if((fp = fopen("input.txt","r")) == NULL) {
//		 perror("fail to read");
//		 exit (1) ;
//	 }
//	while(fgets(buf,MAX_LINE,fp) != NULL){
//		 len = strlen(buf);
//	}
//	if(argv[0]=='-c')
//	{
//		printf("\n字符数：%d \n",len);
//	}
//	else if(argv[0]=='-w')
//	{
//	    for(i=0;i<len;i++)
//		{
//			if(buf[i]!=' '&&buf[i]!=',')
//			{
//				j=i;
//				break;
//			}
//		}
//		for(i=j;i<len;i++)
//		{
//			if(buf[i]==' '||buf[i]==',')
//			{
//				count++;
//				for(k=i;k<len;k++)
//				{
//					if(buf[k]!=' '&&buf[k]!=',')
//					{
//						i=k;
//						break;
//					}
//				}
//			}
//		}
//		if(buf[len-1]!=' '&&buf[len-1]!=',')
//		count++;
//		printf("\n单词数：%d \n",count);
//	}
//	printf("error"); 
//  return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024
int main(int argc,char **argv)
{
	FILE *fp;       //文件指针 
	char buf[MAX_LINE];  //缓冲区
	int len,i=0; 
	int j=0,k=0,count=0;            
	if((fp = fopen("input.txt","r")) == NULL) {
		 perror("fail to read");
		 exit (1) ;
	 }
	while(fgets(buf,MAX_LINE,fp) != NULL){
		 len = strlen(buf);
		
	}
	 int pop1=strcmp(argv[1],"-c");
	 int pop2=strcmp(argv[1],"-w");
	if(pop1==0)
	{
		printf("\n字符数：%d \n",len);
	}
	if(pop2==0)
	{
	    for(i=0;i<len;i++)
		{
			if(buf[i]!=' '&&buf[i]!=',')
			{
				j=i;
				break;
			}
		}
		for(i=j;i<len;i++)
		{
			if(buf[i]==' '||buf[i]==',')
			{
				count++;
				for(k=i;k<len;k++)
				{
					if(buf[k]!=' '&&buf[k]!=',')
					{
						i=k;
						break;
					}
				}
			}
		}
		if(buf[len-1]!=' '&&buf[len-1]!=',')
		count++;
		printf("\n单词数：%d \n",count);
	}
  return 0;
}

