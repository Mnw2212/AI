#include <stdio.h>
/*
int andl={{1,1,1,1},{1,-1,1,-1},{-1,1,1,-1},{-1,-1,1,-1}};
int orl={{1,1,1,1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,-1}};
int nandl={{1,1,1,-1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,1}};
int norl={{1,1,1,-1},{1,-1,1,-1},{-1,1,1,-1},{-1,-1,1,1}};
int xorl={{1,1,1,-1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,-1}};
*/
int net(int x[][4],int val1,int val2)
{
	int i=0,w1=0,w2=0,b_old=0,b_new;
	int x1,x2,y;
	for(i=0;i<4;i++)
	{
		x1=x[i][0];
		x2=x[i][1];
		b_new=x[i][2];
		y=x[i][3];
		w1=w1+(x1*y);
		w2=w2+(x2*y);
		b_new=b_old+y;
		b_old=b_new;
	}
	int ans;
	ans = (val1*w1)+(val2*w2)+b_new;
	if(ans>=2)
		{printf("\n\t1\n");}
	else
		{printf("-1");}
}


int main()
{
	int andl[4][4]={{1,1,1,1},{1,-1,1,-1},{-1,1,1,-1},{-1,-1,1,-1}};
	int orl[4][4]={{1,1,1,1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,-1}};
	int nandl[4][4]={{1,1,1,-1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,1}};
	int norl[4][4]={{1,1,1,-1},{1,-1,1,-1},{-1,1,1,-1},{-1,-1,1,1}};
	int xorl[4][4]={{1,1,1,-1},{1,-1,1,1},{-1,1,1,1},{-1,-1,1,-1}};

	int i;
	// Replace 1,1 below with any other inputs that the gate can accept
	// andl can be replaced with nandl,orl,norl.Depending on which gate is required
	net(andl,1,1);
	return 0;
}