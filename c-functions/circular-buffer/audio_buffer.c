/*
 * audio_buffer.c
 *
 *  Created on: Dec 7, 2016
 *      Author: Joe Simon
 */

#include "audio_buffer.h"

void addSample(TAudioBuffer * buffer, float newSample)
{
    // Advance the index and if it is over, go back to the beginning
    buffer->currentPosition++;
    if (buffer->currentPosition == buffer->bufferLength)
    {
        buffer->currentPosition = 0;
    }

    // Add new sample to the buffer
    buffer->buffer[buffer->currentPosition] = newSample;
}

float getSample(TAudioBuffer * buffer, int index)
{
    if (buffer->currentPosition - index < 0)
    {
        return buffer->buffer[(buffer->currentPosition - index) + buffer->bufferLength];
    }
    else
    {
        return buffer->buffer[(buffer->currentPosition - index)];
    }
}

TAudioBuffer newBuffer(int bufferLength)
{
    // Create a new buffer structure and allocate the necessary memory
    TAudioBuffer _newBuffer;
    _newBuffer.bufferLength = bufferLength;
    _newBuffer.buffer = (float *)malloc(bufferLength * sizeof(float));

    // Initialize the buffer
    _newBuffer.currentPosition = -1;
    for (int i = 0; i < bufferLength; i++)
    {
        _newBuffer.buffer[i] = 0;
    }
    
    return _newBuffer;
}
