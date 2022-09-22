#ifndef __ACID_SEQUENCER_SETUP_H__
#define __ACID_SEQUENCER_SETUP_H__

// setup how many 303 and 808s you need
// 303 its indexed as 0 to TRACK_NUMBER_303-1, so 808 follows the index
#define TRACK_NUMBER_303      2 
#define TRACK_NUMBER_808      2

//
// User interface config
//
#define SEQUENCER_MIN_BPM     10
#define SEQUENCER_MAX_BPM     177

//
// Sequencer config
//
// 303
#define STEP_MAX_SIZE_303      64 // UI is prepared for only 64 steps, but you can further until the memory blow up
#define NOTE_LENGTH_303        4 // min: 1 max: 5 DO NOT EDIT BEYOND!!!
#define NOTE_VELOCITY_303      70
#define ACCENT_VELOCITY_303    127
#define NOTE_STACK_SIZE_303    3

//
// Generative config
//
#define ACCENT_PROBABILITY_GENERATION_303   50
#define SLIDE_PROBABILITY_GENERATION_303    30
#define REST_PROBABILITY_GENERATION_303     10

//
// Sequencer config
//
// 808
#define STEP_MAX_SIZE_808       64
#define VOICE_MAX_SIZE_808      4
#define NOTE_LENGTH_808         4 // min: 1 max: 5 DO NOT EDIT BEYOND!!!
#define NOTE_VELOCITY_808      70
#define ACCENT_VELOCITY_808    127

#define MAX_VOICE_NAME_CHARS  2

// MIDI clock, start, stop, note on and note off byte definitions - based on MIDI 1.0 Standards.
#define MIDI_CLOCK 0xF8
#define MIDI_START 0xFA
#define MIDI_STOP  0xFC
#define NOTE_ON    0x90
#define NOTE_OFF   0x80
#define MIDI_CC    0xB0

#endif