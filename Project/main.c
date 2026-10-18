
/*
 *   Source File [main.c]
 */

#include "pearl.h"

int main(void)
{
	const char* title = "Application Title";
	const uint32_t screen_width = 500;
	const uint32_t screen_height = 500;
	//init(title, screen_width, screen_height);

	float mouse_xvel = 0.0f;
	float mouse_yvel = 0.0f;
	float mouse_scroll = 0.0f;

	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* window = SDL_CreateWindow(title, screen_width, screen_height, SDL_WINDOW_RESIZABLE);
	SDL_GPUDevice* device = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, true, NULL);

	SDL_ClaimWindowForGPUDevice(device, window);
	SDL_SetGPUSwapchainParameters(device, window, SDL_GPU_SWAPCHAINCOMPOSITION_SDR, SDL_GPU_PRESENTMODE_VSYNC);
	SDL_SetWindowMinimumSize(window, 32, 32);

	while (true)
	{
		mouse_xvel = 0.0f;
		mouse_yvel = 0.0f;
		mouse_scroll = 0.0f;

		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
			{
				break;
			}

			//if (event.type == SDL_EVENT_MOUSE_WHEEL)
			//{
			//	mouse_scroll += event.wheel.y;
			//}
			//
			//if (event.type == SDL_EVENT_MOUSE_MOTION)
			//{
			//	mouse_xvel += event.motion.xrel;
			//	mouse_yvel += event.motion.yrel;
			//}
		}

		//memcpy(prev_keyboard_state, curr_keyboard_state, sizeof(bool) * SDL_SCANCODE_COUNT);
		//memcpy(curr_keyboard_state, SDL_GetKeyboardState(NULL), sizeof(bool) * SDL_SCANCODE_COUNT);
		//
		//prev_mouse_state = curr_mouse_state;
		//curr_mouse_state = SDL_GetMouseState(&mouse_xpos, &mouse_ypox);
		//return true;
	}


	return EXIT_SUCCESS;
}

