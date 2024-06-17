# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appHelloQML_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appHelloQML_autogen.dir/ParseCache.txt"
  "appHelloQML_autogen"
  )
endif()
