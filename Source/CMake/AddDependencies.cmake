include(BuildSDL2)
include(Buildminiaudio)
include(Addpsstmath)

add_dependencies(${SCARLETT_TARGET_NAME} SDL2)
add_dependencies(${SCARLETT_TARGET_NAME} miniaudio)

target_link_libraries(${SCARLETT_TARGET_NAME} PUBLIC SDL2 miniaudio)
message(STATUS "Added all dependencies.")