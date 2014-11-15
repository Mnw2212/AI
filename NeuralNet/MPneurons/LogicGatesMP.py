
andl=[[1,1,1],[1,0,0],[0,1,0],[0,0,0]]
orl=[[1,1,1],[1,0,1],[0,1,1],[0,0,0]]


def valFunc(a,b,w1,w2):
	return (a*w1)+(b*w2)

def NET(x,a,b,w1,w2):
	z=[]
	for i in range(4):
		y=(x[i][0]*w1)+(x[i][1]*w2)
		z.append(y)

	ch=max(z)
	for i in range(4):
		if x[i][2]==1 and ch>z[i]:
			ch=z[i]

	print ch
	if valFunc(a,b,w1,w2) >= ch:
		print True
	else:
		print False
	print z



NET(orl,1,1,1,1)
