#ifndef SCARLETT_GRAPHICS_WINDOW_H
#define SCARLETT_GRAPHICS_WINDOW_H
#pragma once

#include <SDL2/SDL_video.h>
#include <Scarlett/Math/Vector2.hh>
#include <cstdint>
#include <string>

namespace Scarlett::Graphics {

	using WindowFlag = enum WindowFlag {
		SCARLETT_WINDOW_NONE = 0,
		SCARLETT_WINDOW_FULLSCREEN = 1,
		SCARLETT_WINDOW_EXCLUSIVE_FULLSCREEN = 2,
		SCARLETT_WINDOW_HIDDEN = 4,
		SCARLETT_WINDOW_BORDERLESS = 8,
		SCARLETT_WINDOW_RESIZABLE = 16,
		SCARLETT_WINDOW_MINIMIZED = 32,
		SCARLETT_WINDOW_MAXIMIZED = 64,
		SCARLETT_WINDOW_HIGH_DPI = 128,
		SCARLETT_WINDOW_ALWAYS_ON_TOP = 256
	};

	class Window {
	  private:
		SDL_Window *_window;

		void CreateWindow( Math::Vector2i32 position, Math::Vector2i32 size, std::string name, WindowFlag flags );

	  public:
		Window( );

		~Window( );
	};
} // namespace Scarlett::Graphics

#endif // SCARLETT_GRAPHICS_WINDOW_H
