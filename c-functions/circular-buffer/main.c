#include <stdio.h>
#include "audio_buffer.h"

void printBuffer(TAudioBuffer buffer)
{
    printf("Audio buffer:\n  ");
    for (int i = 0; i < buffer.bufferLength; i++)
    {
        printf("%.0f-", buffer.buffer[i]);
    }
    printf("\n");
}


int main(void)
{
    TAudioBuffer _buffer = newBuffer(4);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));

    addSample(&_buffer, 1);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));

    addSample(&_buffer, 2);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));

    addSample(&_buffer, 3);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));

    addSample(&_buffer, 4);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));
    
    addSample(&_buffer, 5);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));
    
    addSample(&_buffer, 6);
    printBuffer(_buffer);
    printf("-> %.0f\n", getSample(&_buffer, 0));

    return 0;
}
