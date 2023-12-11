set(SDL2_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
set(SDL2_DISABLE_UNINSTALL ON CACHE BOOL "" FORCE)
set(SDL2_DISABLE_MAIN ON CACHE BOOL "" FORCE)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_STATIC_PIC ON CACHE BOOL "" FORCE)
add_subdirectory("${SCARLETT_DEPENDENCIES_DIRECTORY}/SDL2.28.x" "${SCARLETT_DEPENDENCIES_BUILD_DIRECTORY}/SDL2")
message(STATUS "\
Added SDL2 by the SDL organization.\n\
Copyright (C) 1997-2023 Sam Lantinga <slouken@libsdl.org>\n\
\n\
This software is provided 'as-is', without any express or implied\n\
warranty.  In no event will the authors be held liable for any damages\n\
arising from the use of this software.\n\
\n\
Permission is granted to anyone to use this software for any purpose,\n\
including commercial applications, and to alter it and redistribute it\n\
freely, subject to the following restrictions:\n\
\n\
1. The origin of this software must not be misrepresented; you must not\n\
   claim that you wrote the original software. If you use this software\n\
   in a product, an acknowledgment in the product documentation would be\n\
   appreciated but is not required. \n\
2. Altered source versions must be plainly marked as such, and must not be\n\
   misrepresented as being the original software.\n\
3. This notice may not be removed or altered from any source distribution.\n\
")
