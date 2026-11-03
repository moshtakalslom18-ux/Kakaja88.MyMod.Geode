cmake_minimum_required(VERSION 3.25)

status("Configuring Geode Mod")

project(Kakaja88MyMod VERSION 1.0.0 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
    Geode
    GIT_REPOSITORY https://github.com
    GIT_TAG main
)
FetchContent_MakeAvailable(Geode)

add_geode_mod(
    ${PROJECT_NAME}
    LINK_LIBRARIES geode
    RESOURCES
)

target_sources(${PROJECT_NAME} PRIVATE src/main.cpp)
