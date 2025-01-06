# Define the configuration header file path 
# (put it in build directory because it is autogenerated and does not have to be pushed to Github)
set(OUTPUT_FILE ${CMAKE_BINARY_DIR}/config.h)

# Find the Python script and throw an error if it was not found
message(STATUS "Current source directory: ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "Looking for generate_config.py in: ${CMAKE_CURRENT_SOURCE_DIR}/..")
# find_program(CONFIG_SCRIPT NAMES generate_config.py PATHS ${CMAKE_CURRENT_SOURCE_DIR} REQUIRED)
set(CONFIG_SCRIPT ${CMAKE_CURRENT_SOURCE_DIR}/generate_config.py)
if (CONFIG_SCRIPT)
    message(STATUS "Found generate_config.py at: ${CONFIG_SCRIPT}")
else()
    message(FATAL_ERROR "generate_config.py not found. Ensure it exists in one of the expected locations.")
endif()

# Make sure Python3 is present and throw an error if it was not found
find_package(Python3 REQUIRED)

# Modified configFeature macro
macro(configFeature FEATURES_STRING)

    string(REPLACE " " ";" FEATURES_LIST ${FEATURES_STRING})
    add_custom_command(
        OUTPUT ${OUTPUT_FILE}
        COMMAND ${CMAKE_COMMAND} -E env python3 ${CMAKE_SOURCE_DIR}/generate_config.py ${FEATURES_LIST}
        COMMENT "Generating config.h in the build directory"
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        VERBATIM
    )

    add_custom_target(
        config_h_target
        ALL  # Important: include config.h in the default automatic target if you don't use it you have to exeplicity specify the target during the build process 
        DEPENDS ${OUTPUT_FILE}
    )

endmacro()
