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
# include_directories(${PROJECT_SOURCE_DIR}/code/core/public)
