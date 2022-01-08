#include <stdio.h>
void main() {
    float fa = 3.3f;        /* float 형식 */
    float fb = 3.3;         /* double 형식 */
    printf("fa %f.\n", fa);
    printf("fb %f.\n", fb);
    printf("fa %d.\n", fa); /* 잘못된 type 지정시 이상한 값*/

}
