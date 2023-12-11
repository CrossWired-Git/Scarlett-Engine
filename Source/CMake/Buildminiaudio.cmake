set(MINIAUDIO_DIR ${SCARLETT_DEPENDENCIES_DIRECTORY}/miniaudio)
set(MINIAUDIO_TARGET_NAME "miniaudio")
add_library(${MINIAUDIO_TARGET_NAME})
target_sources(${MINIAUDIO_TARGET_NAME} PRIVATE "${MINIAUDIO_DIR}/extras/miniaudio_split/miniaudio.c" "${MINIAUDIO_DIR}/extras/miniaudio_split/miniaudio.h")
target_include_directories(${MINIAUDIO_TARGET_NAME} PUBLIC "${MINIAUDIO_DIR}/extras/miniaudio_split")
set_target_properties(${MINIAUDIO_TARGET_NAME}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${SCARLETT_DEPENDENCIES_BUILD_DIRECTORY}/miniaudio/${CMAKE_BUILD_TYPE}"
    LIBRARY_OUTPUT_DIRECTORY "${SCARLETT_DEPENDENCIES_BUILD_DIRECTORY}/miniaudio/${CMAKE_BUILD_TYPE}"
    OUTPUT_NAME "${MINIAUDIO_TARGET_NAME}"
)
message(STATUS "\
Added miniaudio by mackron (David Reid)\n\
Copyright 2023 David Reid\n\
\n\
Permission is hereby granted, free of charge, to any person obtaining a copy of\n\
this software and associated documentation files (the \"Software\"), to deal in\n\
the Software without restriction, including without limitation the rights to\n\
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies\n\
of the Software, and to permit persons to whom the Software is furnished to do\n\
so.\n\
\n\
THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n\
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n\
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n\
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n\
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n\
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE\n\
SOFTWARE.\n\
")
