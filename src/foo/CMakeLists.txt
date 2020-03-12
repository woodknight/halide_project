halide_library(foo SRCS foo_generator.cpp)

add_library(foo_interface foo_interface.cpp)
target_include_directories(foo_interface PRIVATE ${HALIDE_INCLUDE_DIR})
target_link_libraries(foo_interface PRIVATE foo)

add_executable(run_foo run_foo.cpp)
target_link_libraries(run_foo PRIVATE foo_interface pthread)
