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
	printf("�п�J�n�p�⪺����:");
	printf("1.�����V�q���n 2.�Ŷ��V�q���n�ȡB�~�n�P�����\n");
	scanf("%d",&mode);
	
	switch(mode)
	{
	    case 1: printf("�]��V�q���O��(a,b)�M(c,d)\n");
	            printf("�Ф��O��Ja,b,c,d���ȡA��ⶡ�H�Ů�j�}:");
	            for(i=0;i<4;i++) 
	            {scanf("%f",&dot[i]);}
	            a=dot[0];b=dot[1];c=dot[2];d=dot[3];
	            printf("���n�Ȭ�%.2f\n",DOT1);
	            break;
	          
	    case 2: printf("�]��V�q���O��(A,B,C)�M(D,E,F)\n");    
	            printf("�Ф��O��JA,B,C,D,E,F���ȡA��ⶡ�H�Ů�j�}:");
	            for(j=0;j<6;j++)
	            {scanf("%f",&cross[j]);}
	            A=cross[0];B=cross[1];C=cross[2];
	            D=cross[3];E=cross[4];F=cross[5];
	            float X=(CROSS1)*(CROSS1)+(CROSS2)*(CROSS2)+(CROSS3)*(CROSS3); 
	            float Y=sqrt(X);
	            printf("�V�q���n�Ȭ�%.2f\n",DOT2);
	            printf("�V�q�~�n��(%.2f,%.2f,%.2f)\n",CROSS1,CROSS2,CROSS3);
	            printf("�V�q�~�n���׬�%.2f\n",Y);
	}
	    system("pause");
	    return 0;
}
