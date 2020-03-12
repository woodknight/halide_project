add_library(bar_interface bar_interface.cpp)
target_include_directories(bar_interface 
    PRIVATE
        ${HALIDE_INCLUDE_DIR}
        ${PROJECT_BINARY_DIR}/genfiles/foo)
target_link_libraries(bar_interface
    PRIVATE
    ${PROJECT_BINARY_DIR}/genfiles/foo/foo.a
    ${PROJECT_BINARY_DIR}/lib/libfoo.generator_library.a)

add_executable(run_bar run_bar.cpp)
target_link_libraries(run_bar PRIVATE bar_interface pthread)
