cmake_minimum_required(VERSION 3.17)
project(learning_c C)

set(CMAKE_C_STANDARD 99)

add_executable(learning_c playground.c)

add_subdirectory("${PROJECT_SOURCE_DIR}/data_types" "${PROJECT_SOURCE_DIR}/data_types/data_types_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/enum" "${PROJECT_SOURCE_DIR}/enum/enum_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/keywords_and_identifiers" "${PROJECT_SOURCE_DIR}/keywords_and_identifiers/keywords_and_identifiers_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/declaration_vs_definition" "${PROJECT_SOURCE_DIR}/declaration_vs_definition/declaration_vs_definition_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/variables_expressions_statements" "${PROJECT_SOURCE_DIR}/variables_expressions_statements/variables_expressions_statements_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/strings" "${PROJECT_SOURCE_DIR}/strings/strings_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/area_of_circle" "${PROJECT_SOURCE_DIR}/area_of_circle/area_of_circle_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/type_casting" "${PROJECT_SOURCE_DIR}/type_casting/type_casting_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/using_functions" "${PROJECT_SOURCE_DIR}/using_functions/using_functions_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/union" "${PROJECT_SOURCE_DIR}/union/union_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/dereference_operator" "${PROJECT_SOURCE_DIR}/dereference_operator/dereference_operator_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/main_argc_argv" "${PROJECT_SOURCE_DIR}/main_argc_argv/main_argc_argv_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/pointers" "${PROJECT_SOURCE_DIR}/pointers/pointers_output")

