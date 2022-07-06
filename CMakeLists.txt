cmake_minimum_required(VERSION 3.0.0)

project("Xilinx Converter" VERSION 1.0.0)

add_subdirectory(third_party/pugixml)

add_executable(convert src/main.cpp)

target_link_libraries(convert pugixml)

configure_file(src/tree.xml ./ COPYONLY)
configure_file(src/bus_muxer.sch ./ COPYONLY)
