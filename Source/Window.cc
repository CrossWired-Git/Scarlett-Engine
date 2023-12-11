#include "SDL_video.h"
#include <Scarlett/Graphics/Window.hh>

namespace Scarlett::Graphics {
	Window::Window( ) {
		this->CreateWindow( Math::Vector2i32{ SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED }, Math::Vector2i32( 0, 0 ),
		                    "Scarlett Window", SCARLETT_WINDOW_RESIZABLE );
	}

	Window::~Window( ) {
		if ( this->_window != nullptr ) {
			SDL_DestroyWindow( this->_window );
		}
	}

	void Window::CreateWindow( Math::Vector2i32 position, Math::Vector2i32 size, std::string name, WindowFlag flags ) {
		std::uint32_t _flags = 0;

		if ( ( flags | SCARLETT_WINDOW_FULLSCREEN ) ) {
			_flags = _flags | SDL_WINDOW_FULLSCREEN_DESKTOP;
		}

		if ( ( flags | SCARLETT_WINDOW_EXCLUSIVE_FULLSCREEN ) ) {
			_flags = _flags | SDL_WINDOW_FULLSCREEN;
		}

		if ( ( flags | SCARLETT_WINDOW_HIDDEN ) ) {
			_flags = _flags | SDL_WINDOW_HIDDEN;
		}

		if ( ( flags | SCARLETT_WINDOW_BORDERLESS ) ) {
			_flags = _flags | SDL_WINDOW_BORDERLESS;
		}

		if ( ( flags | SCARLETT_WINDOW_RESIZABLE ) ) {
			_flags = _flags | SDL_WINDOW_RESIZABLE;
		}

		if ( ( flags | SCARLETT_WINDOW_MINIMIZED ) ) {
			_flags = _flags | SDL_WINDOW_MINIMIZED;
		} else if ( ( flags | SCARLETT_WINDOW_MAXIMIZED ) ) {
			_flags = _flags | SDL_WINDOW_MAXIMIZED;
		}

		if ( ( flags | SCARLETT_WINDOW_HIGH_DPI ) ) {
			_flags = _flags | SDL_WINDOW_ALLOW_HIGHDPI;
		}

		if ( ( flags | SCARLETT_WINDOW_ALWAYS_ON_TOP ) ) {
			_flags = _flags | SDL_WINDOW_ALWAYS_ON_TOP;
		}

		this->_window = SDL_CreateWindow( name.c_str( ), position.x( ), position.y( ), size.x( ), size.y( ), _flags );
		if ( this->_window == nullptr ) {
			return;
		}
	}
} // namespace Scarlett::Graphics