
/*
 *   Header File [pearl.h]
 */

#ifndef PEARL_HEADER_GUARD
#define PEARL_HEADER_GUARD

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

void init(const char*, int, int);
void running(void);

#endif /* PEARL_HEADER_GUARD */

