#!/usr/bin/python3
from p import parse
import sys,os
P=os.popen('grep -o \'P=":+.*"\' k.edu/z.c').read()[3:-2];assert(P[0]==':')
trains={}
def v(x):return P.find(x)-1
def train(x):#just one monad to start with
 p=v(x[0]);assert(-1<p)
 def body(x):return f"k({p},0,x)"
 name='train'+str(abs(hash(x)))
 trains[name]='(Ux){return %s;}'%body(x)
 return name
def e(x):
 def each(x):return 'each(%s,%s)'%(train(x[0][1]),e(x[1]))
 if len(x[0])==2:assert(x[0][0]=="'");return each(x)
 if x[0]=='[':return "(%s)"%[e(x) for x in x].join(",")
 p=v(x[0])
 if -1<p:
  if len(x)==2:return "k(%s, 0,%s)"%(str(p),e(x[1]))
  if len(x)==3:return "k(%s,%s,%s)"%(str(p),e(x[1]),e(x[2]))
 if x in "0123456789":return "ti(%s)"%x
f=sys.stdin
while 1:
 if sys.stdin.isatty():print(" ",end="");sys.stdout.flush();
 x=f.readline()
 if not x:sys.exit(0)
 g=open("g.c","w")
 x=parse(x)
 g.write('#include"p.h"\n')
 main=e(x)
 for a in trains:g.write(f'U {a}{trains[a]}\n')
 g.write("main(){k_(0,0);print(%s);}\n"%main)
 g.close()
 os.system("make g >/dev/null && ./g")
