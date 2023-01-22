include_directories(public)
add_library(timer ./source/timer.cpp)

add_library(phasor ./source/phasor.cpp)
target_link_libraries(phasor PUBLIC timer)

add_library(shaper ./source/shaper.cpp)
