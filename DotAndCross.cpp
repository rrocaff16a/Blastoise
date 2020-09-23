#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DOT1 (a)*(c)+(b)*(d)
#define DOT2 (A)*(D)+(B)*(E)+(C)*(F)
#define CROSS1 (B)*(F)-(C)*(E)
#define CROSS2 (C)*(D)-(A)*(F)
#define CROSS3 (A)*(E)-(B)*(D)
 
  int main(void)
{
	float a,b,c,d;
	float A,B,C,D,E,F;
	float dot[4];
	float cross[6];
	int i,j,mode;
	printf("請輸入要計算的項目:");
	printf("1.平面向量內積 2.空間向量內積值、外積與其長度\n");
	scanf("%d",&mode);
	
	switch(mode)
	{
	    case 1: printf("設兩向量分別為(a,b)和(c,d)\n");
	            printf("請分別輸入a,b,c,d的值，兩兩間以空格隔開:");
	            for(i=0;i<4;i++) 
	            {scanf("%f",&dot[i]);}
	            a=dot[0];b=dot[1];c=dot[2];d=dot[3];
	            printf("內積值為%.2f\n",DOT1);
	            break;
	          
	    case 2: printf("設兩向量分別為(A,B,C)和(D,E,F)\n");    
	            printf("請分別輸入A,B,C,D,E,F的值，兩兩間以空格隔開:");
	            for(j=0;j<6;j++)
	            {scanf("%f",&cross[j]);}
	            A=cross[0];B=cross[1];C=cross[2];
	            D=cross[3];E=cross[4];F=cross[5];
	            float X=(CROSS1)*(CROSS1)+(CROSS2)*(CROSS2)+(CROSS3)*(CROSS3); 
	            float Y=sqrt(X);
	            printf("向量內積值為%.2f\n",DOT2);
	            printf("向量外積為(%.2f,%.2f,%.2f)\n",CROSS1,CROSS2,CROSS3);
	            printf("向量外積長度為%.2f\n",Y);
	}
	    system("pause");
	    return 0;
}
