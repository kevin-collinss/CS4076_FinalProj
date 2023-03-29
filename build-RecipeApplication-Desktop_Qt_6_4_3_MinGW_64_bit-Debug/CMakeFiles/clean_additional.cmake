# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RecipeApplication_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RecipeApplication_autogen.dir\\ParseCache.txt"
  "RecipeApplication_autogen"
  )
endif()
