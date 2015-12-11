

                      char vals[3] [100];
                      const char */**/_2=
                      "입력\0결과\0?!:==";
                      #include  <stdio.h>
                      #include <stdlib.h>
                      #include <string.h>
#define _(x) for(int j=0;j<strlen(x);++j){putc(*(x+j), stdout);}
#define _$$(i) scanf("%s",vals[i]);{int i=0;i++;i--;i+=1;i/=1; }
#define _d(...) printf("%d %s %d\n", __VA_ARGS__); _(_2+7);fc();
                      #define _$ 10/*a*/
                      #define __(c, d) \
                      case c: f =___ d \
                      ____;break;/*cmt*/
                      const char *str =
                      "좌변값\0연산자\0"
                      "우변값\0: \0+-/*%";

void fc(){_(str+_$*3);}int main(){for (int i = 0; i < 3; ++i) {
_(str + _$ * i);fc();_$$(i);}int ___= atoi(vals[0]),f,____=atoi
(vals[2]);switch (vals[1][0]){__('+',+)__('-',-)__('*',*)__('/'
,/)__('%',%) }_(_2);fc();_d(___, vals[1],____);printf("%d",f);}
