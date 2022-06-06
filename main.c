#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  stdio_init_all();
  gpio_init(10);
  gpio_init(25);
  gpio_set_dir(10, false);
  gpio_set_dir(25, true);

  while (true) {

    char pul = gpio_get(10);
    char led = gpio_get(25);

    if(pul==1){

      if(led==1){
        gpio_put(25, false);
      }

      else if(led==0){
        gpio_put(25, true);
      } 
    }
    sleep_ms(500);
  }
}