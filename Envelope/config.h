#ifndef __config_h__
#define __config_h__

#define MILLION 1000000
const uint32_t ADSR_ATTACK_MAX_DURATION_MICROS = 5 * MILLION;
const uint32_t ADSR_DECAY_MAX_DURATION_MICROS = 5 * MILLION;
//sustain time only used in TRAP mode
const uint32_t ADSR_SUSTAIN_MAX_DURATION_MICROS = 5 * MILLION;
const uint32_t ADSR_RELEASE_MAX_DURATION_MICROS = 5 * MILLION;
const uint32_t ADSR_DELAY_MAX_DURATION_MICROS = 5 * MILLION;

const float EXP_RATE_SCALE = 4;
const float EXP_FUNCTION_ZERO_THRESH = 0.0001;

const bool LOOP_HARD_SYNC_ON_PING = true;
const bool LOOP_WHEN_GATE_OFF = true;

//PINS
const uint16_t GATE_IN_PIN = 2;
const uint16_t RETRIG_IN_PIN = 3;
const uint16_t LED_PINS[4] = {4, 5, 6, 7};
#define CV_PIN_A A0
#define CV_PIN_D A1
#define CV_PIN_S A2
#define CV_PIN_R A3

#endif // __config_h__

