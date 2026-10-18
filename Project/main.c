
#pragma warning(push, 0)
#include "SDL3/SDL.h"
#include "stb_image.h"
#include "stb_image_write.h"
#pragma warning(pop)

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <stdbool.h>

int main(void)
{
	SDL_Init(SDL_INIT_VIDEO);

	fprintf(stdout, "Hello World!\n");
	return 0;
}

