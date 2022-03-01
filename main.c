#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    
    motor(1,100);
    motor(2,100);
    msleep(1000);
    
     
    motor(1,20);
    motor(2,90);
    msleep(2000);
    
     
    motor(1,100);
    motor(2,100);
    msleep(2000);
    
    
    wait_for_milliseconds(2000);
    set_servo_position(0,1332);
    
     motor(1,100);
    motor(2,20);
    msleep(3000);
    
     motor(1,100);
    motor(2,100);
    msleep(7000);
   
    return 0;
}
