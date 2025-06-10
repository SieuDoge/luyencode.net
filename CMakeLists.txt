cmake_minimum_required(VERSION 3.25)
project(LuyenCodeNet)

set(CMAKE_CXX_STANDARD 20)

# Tìm tất cả file .cpp trong thư mục gốc
file(GLOB all_sources "*.cpp")

# Tạo 1 executable cho mỗi file .cpp
foreach(source_file ${all_sources})
    # Lấy tên file (----.cpp) làm tên target
    get_filename_component(exec_name ${source_file} NAME_WE)
    add_executable(${exec_name} ${source_file})
endforeach()