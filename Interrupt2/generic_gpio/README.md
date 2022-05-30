# Example: G
                                                    |
| GPIO4    | input     | pulled up, interrupt from rising edge and falling edge |
| GPIO5    | input     | pulled up, interrupt from rising edge                  |

Beides Eingänge 

#define GPIO_INPUT_IO_0     4
#define GPIO_INPUT_IO_1     5
#define GPIO_INPUT_PIN_SEL  ((1ULL<<GPIO_INPUT_IO_0) | (1ULL<<GPIO_INPUT_IO_1))
#define GPIO_BLINK 2
#define GPIO_BLINK_SEL  (1ULL<<GPIO_BLINK)

1ULL bedeutet 1 unsigned long long

    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;


GPIO_BLINK ist Pin der internen LED, also 2

GND an 4 setzt Pin 2 auf High, GND an 5 setzt Pin 2 auf Low




Interrupt Handler definieren

    gpio_install_isr_service(ESP_INTR_FLAG_DEFAULT);
    //hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_0, gpio_isr_handler, (void*) GPIO_INPUT_IO_0);
    //hook isr handler for specific gpio pin
    gpio_isr_handler_add(GPIO_INPUT_IO_1, gpio_isr_handler2, (void*) GPIO_INPUT_IO_1);


ISR Handler. Den Pointer auf die Argumente benötigen wir hier nicht


static void IRAM_ATTR gpio_isr_handler(void* arg)
{
    static uint32_t counter;
    counter++;
    gpio_set_level(2, 1 );
    
}

static void IRAM_ATTR gpio_isr_handler2(void* arg)
{
    static uint32_t counter;
    counter++;
    gpio_set_level(2, 0 );
  
}
