#include <AT89S52.h>
#define LED P2_4
#define ON 0
#define OFF 1
#define SW P3_3
#define INPUT 1
void main(){
__bit status;
LED=OFF;
SW =INPUT;
while(1){
status=!SW;
LED=status;
}
}


