# DoomsdayTrainer
# (c) Florian Giesemann, 2024

add_library(doomsday_method
    src/doomsday_method.cpp
)

target_include_directories(doomsday_method
    PUBLIC include
)

enable_testing()
add_executable(doomsday_method_tests
    test/doomsday_method_tests.cpp
)

target_link_libraries(doomsday_method_tests
    GTest::gtest_main
    doomsday_method
)

include(GoogleTest)
gtest_discover_tests(doomsday_method_tests)
