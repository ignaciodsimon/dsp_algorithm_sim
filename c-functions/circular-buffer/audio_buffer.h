/*
 * audio_buffer.h
 *
 *  Created on: Dec 7, 2016
 *      Author: Joe Simon
 */

#ifndef AUDIO_PROCESSING_AUDIO_BUFFER_H_
#define AUDIO_PROCESSING_AUDIO_BUFFER_H_

#include <stdlib.h>

typedef struct{
    float * buffer;
    int bufferLength;
    int currentPosition;
}TAudioBuffer;

extern void addSample(TAudioBuffer * buffer, float newSample);
extern float getSample(TAudioBuffer * buffer, int index);
extern TAudioBuffer newBuffer(int bufferLength);

#endif /* AUDIO_PROCESSING_AUDIO_BUFFER_H_ */
