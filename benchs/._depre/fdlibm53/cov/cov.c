#include <stdio.h>
#include <stdlib.h>


double foo_raw (double);


/* generate a random floating point number from min to max */

double randfrom(double min, double max){
double range = (max - min);
 double div = RAND_MAX / range;
 return min + (rand() / div);
}
void hello(){

}
int main(){
  /*   -------------------------------------------------------------- */
  /* 1: [0.0]                                      -> 0.0 */
  /* 2: [1.0]                                      -> 0.0 */
  /* 3: [2.6180339999999998]                       -> 0.0 */
  /* 4: [-240.66896114502708]                      -> 0.0 */
  /* 5: [-239.66896114502708]                      -> 0.0 */
  /* 6: [-238.05092714502709]                      -> 0.0 */
  /* -------------------------------------------------------------- */
  /*
    foo_raw(0.0);
    foo_raw(1.0);
    foo_raw(2.6180339999999998);
    foo_raw(-240.66896114502708);
    foo_raw(-239.66896114502708);
    foo_raw(-238.05092714502709);
  */
  double min=-1e307;
  double max=+1e307;
  int i;
  printf("random\n");
  for (i =0; i<1277;i++){
    double d = randfrom(min,max);
    foo_raw(d);
  }


}
//gcc cov.c foo.c libm.a -fprofile-arcs -ftest-coverage -o cov
//rm *.gcov *.cpp *.gcno *.gcda
