// Board and hardware specific configuration
#define MICROPY_HW_BOARD_NAME "Raspberry Pi Pico2"
// #define MICROPY_HW_FLASH_STORAGE_BYTES          (PICO_FLASH_SIZE_BYTES - 1024
// * 1024)
//  Find this line and change 3MB to 1MB:
#define MICROPY_HW_FLASH_STORAGE_BYTES (1 * 1024 * 1024)
