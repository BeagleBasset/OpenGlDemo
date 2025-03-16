# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\OpenGlDemo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\OpenGlDemo_autogen.dir\\ParseCache.txt"
  "OpenGlDemo_autogen"
  )
endif()
