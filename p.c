#include"p.h"
#define O printf
#define r1(x) k_(1,x)
#define r0(x) k_(0,x)
#define rx r1(x)
#define el tn(0,0)
g(at,k(12,x,ti(i)))F(cat,k(17,a,x))f(en,k(17,0,x))
Oa(U x){tx==2?O("%d",ix):O("%f",ex);}
O0(U x){O("(");i(nx,prin(at(i,rx));$(i+1<$,O(";")));O(")");}
OA(U x){P(!nx,O("()"))P(nx==1,O(",");prin(at(0,rx)))P(!tx,O0(x));i2*a=k_(2,x);i(nx,tx==2?O("%d",a[i]):O("%f",((e2*)a)[i]);$(i+1<$,O(" ")));}
prin(U x){$(ax,Oa(x))OA(x);}print(U x){prin(x);O("\n");}
typedef U(*uf)(U),(*uF)(U,U);
#define xat(b) i2 b##at(i2 i,Ux){U a=at(i,r1(x));i2 r=x(a,b##x);r0(a);return r;}
xat(t)xat(a)f(sqz,P(ax||tx||!nx,x);i2 t=tat(0,x);i(nx,P(!aat(i,x)||t!=tat(i,x),x));U r=tn(t,nx);i2*p=k_(2,r);U*q=k_(2,x);i(nx,p[i]=*(i2*)(q+i));r0(x);r;)
U scan(uF w,U x){$(ax,x=en(x));P(!nx,ti(-1));U t=at(0,rx),r=tn(0,nx);U*p=k_(2,r);*p=r1(t);i(nx-1,p[i+1]=w(r1(p[i]),at(i+1,rx)));;r0(x);r0(t);return sqz(r);}
f(last,P(ax,x);P(!nx,el);at(nx-1,x))
U over(uF w,U x){return last(scan(w,x));}
U each(uf w,U x){$(ax,x=en(x));U r=tn(0,nx);U*p=k_(2,r);i(nx,p[i]=w(at(i,rx)));r0(x);return sqz(r);}
U niters(uf w,i2 n,U x){U r=tn(0,n+1);U*p=k_(2,r);*p=r1(x);i(n,p[i+1]=w(r1(p[i])));return sqz(r);}
