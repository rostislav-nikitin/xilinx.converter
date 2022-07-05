cmake_minimum_required(VERSION 3.0.0)

project(PugiXML)

add_library(pugixml
		src/pugixml.cpp)

target_include_directories(pugixml PUBLIC include/pugixml)
