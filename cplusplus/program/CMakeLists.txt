#确定cmake版本
cmake_minimum_required(VERSION 3.0)

#设置环境变量
SET(current_dir  ${CMAKE_CURRENT_SOURCE_DIR})   #当前CMakeLists.txt所在文件夹
SET(code_dir     ${current_dir}/code)
SET(ft_dir       ${current_dir}/ft)


#项目名称
PROJECT(cppliang)

#头文件路径
INCLUDE_DIRECTORIES(
    "${code_dir}/inc"
    "${ft_dir}/inc"
)

#源文件路径
FILE(GLOB SRC_LIST 
    "${ft_dir}/src/*.cpp"
)

#6.生成可执行文件
ADD_EXECUTABLE(cppliang ${SRC_LIST})

#7.链接库文件
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} m)
