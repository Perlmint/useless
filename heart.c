
     #include<stdio.h>          /*code by perlmint*/
  #define _(a,b) for (int    j=0; j<a;++j){putchar(b);}
typedef unsigned char uc_;  void pc(char a){ putchar(a);}
const char _$=' ',_$$='*',_$_='\n';uc_ k[] = {6 , 3 ,1,0}
 ,d=18,e=38,f[]={0,1,3,6,9,13,16,18}; int main(){for(int
    i = 0; i < 4; ++i) {_(k[i],_$); _(d-k[i]*2, _$$);
       ;_(k[i]*2+2,_$);_(d-k[i]* 2, _$$);pc(_$_);}
          for(int i =0;i<sizeof(f);++i){for(int
             j=0;j< f[i]; ++j){putchar(_$);}
                for(int j=0;j < e-f[i]*2;
                   j++){putchar(_$$);}
                      putchar(_$_);
                        }return d
                          - d;}
