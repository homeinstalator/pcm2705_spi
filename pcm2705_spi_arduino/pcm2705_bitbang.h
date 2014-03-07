
//Internal descriptor data
const int VENDOR_ID = 0x08BB;  //Texas Instruments
const int PRODUCT_ID = 0x2705; // PCM2705 Audio Codec
const byte DEVICE[16] = {'H', 'a', 'l', 'l', 'o', 'n', 'B', 'o', 'x', ' ', '-', ' ', 'D', 'A', 'C', ' '};
const byte VENDOR[32] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
const byte BM_ATTRIBUTE = 0x80; // Bus-powered
const byte MAX_PWR = 0xFA; // 500 mA, multiply byte value with 2 to get max pwr
const byte HID_USAGE_ID[3] = {0x0A, 0x93, 0x01}; //AL A/V capture

//Define names for SPI register bits
const byte ADDR = 9;
const byte ST = 11;
const byte D7 = 0;
const byte D6 = 1;
const byte D5 = 2;
const byte D4 = 3;
const byte D3 = 4;
const byte D2 = 5;
const byte D1 = 6;
const byte D0 = 7;
const byte MUTE = D7;
const byte VOLU = D6;
const byte VOLD = D5;
const byte NEXT = D4;
const byte PREV = D3;
const byte STOP = D2;
const byte PLAY = D1;
const byte EXT = D0;

//Button pins, only for testing
const byte BUTTON1 = 9;
const byte BUTTON2 = 8;
const byte BUTTON3 = 7;
const byte BUTTON4 = 6;


void tick();
void send_spi_reg();
void clear_spi_reg();

void mute();
void volume_up();
void volume_down();
void next();
void previous();
void stop();
void play_pause();

