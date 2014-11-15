andl=[[1,1,1,1],[1,-1,1,-1],[-1,1,1,-1],[-1,-1,1,-1]]
orl=[[1,1,1,1],[1,-1,1,1],[-1,1,1,1],[-1,-1,1,-1]]
nandl=[[1,1,1,-1],[1,-1,1,1],[-1,1,1,1],[-1,-1,1,1]]
norl=[[1,1,1,-1],[1,-1,1,-1],[-1,1,1,-1],[-1,-1,1,1]]
xorl=[[1,1,1,-1],[1,-1,1,1],[-1,1,1,1],[-1,-1,1,-1]]

w1,w2,b_old=0,0,0
'''
w1=w1+(x1*y)
w2=w2+(x2*y)
b=b+y
'''
def net(x,val1,val2):
	global w1,w2,b_old
	for i in range(4):
		x1,x2,b_new,y=x[i]
		w1=w1+(x1*y)
		w2=w2+(x2*y)
		b_new=b_old+y
		b_old=b_new
	
	ans = (val1*w1)+(val2*w2)+b_new
	print ans
	
	if(ans>=2):
		print 1
	else:
		print -1
	

def xor(x,val1,val2):
	global w1,w2,b_old

net(xorl,1,1)
