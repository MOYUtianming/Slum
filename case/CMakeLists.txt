add_executable(case0 ./case0_timer.cpp)
target_link_libraries(
    case0 PUBLIC
    Timer
)
include_directories(${PROJECT_SOURCE_DIR}/code/core/public)

add_executable(case1 ./case1_phasor.cpp)
target_link_libraries(
    case1 PUBLIC
    Timer
)

add_executable(case2 ./case2_shaper.cpp)
target_link_libraries(
    case2 PUBLIC
    Timer
    Shaper
)
