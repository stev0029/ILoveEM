#ifndef CONFIG_H
#define CONFIG_H

// DI (Data-In) pins for the four LED strips
#define I_DI_PIN 30  // Letter 'I'
#define E_DI_PIN 32  // Letter 'E'
#define M_DI_PIN 34  // Letter 'M'
#define HEART_DI_PIN 28  // Heart

// Pins for the three HC-SR04 Ranging Sensors
#define LEFT_TRIG_PIN   38   // Left Sensor
#define LEFT_ECHO_PIN   39
#define CENTER_TRIG_PIN 40   // Center Sensor
#define CENTER_ECHO_PIN 41
#define RIGHT_TRIG_PIN  42   // Right Sensor
#define RIGHT_ECHO_PIN  43

// == Letter 'I' ==
#define I_NUM_LEDS 241
// == Letter 'E' ==
#define E_NUM_LEDS 288
// == Letter 'M' ==
#define M_NUM_LEDS 392
// == Heart ==
#define HEART_NUM_LEDS 39

#endif