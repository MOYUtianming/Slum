add_executable(case0 ./case0_timer.cpp)
target_link_libraries(
    case0 PUBLIC
    timer
)
include_directories(${PROJECT_SOURCE_DIR}/code/core/public)
add_executable(case1 ./case1_shaper.cpp)
target_link_libraries(
    case1 PUBLIC
    phasor
    shaper
)
include_directories(${PROJECT_SOURCE_DIR}/code/core/public)