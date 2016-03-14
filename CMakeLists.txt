cmake_minimum_required(VERSION 2.8.3)
project(ds-algo)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
find_package(Boost COMPONENTS log log_setup thread filesystem system)
include_directories(${Boost_INCLUDE_DIRS})
add_executable(ed src/edit_distance.cpp)
add_executable(phoenix src/boost_phoenix.cpp)
add_executable(p_vs_lambda src/phoenix_vs_lambda.cpp)
target_link_libraries(p_vs_lambda ${Boost_LIBRAIRES})
target_link_libraries(phoenix ${Boost_LIBRARIES})
add_executable(func src/boost_function.cpp)
target_link_libraries(func ${Boost_LIBRARIES})
add_executable(func2 src/boost_function2.cpp)
target_link_libraries(func2 ${Boost_LIBRARIES})
add_executable(bind src/boost_bind.cpp)
target_link_libraries(bind ${BoostLIBRARIES})
add_executable(thread src/boost_thread.cpp)
target_link_libraries(thread 
	${Boost_THREAD_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
)
add_executable(mutex src/boost_mutex.cpp)
target_link_libraries(mutex 
	${Boost_THREAD_LIBRARY}
	${Boost_SYSTEM_LIBRARY}
)