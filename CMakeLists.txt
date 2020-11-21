cmake_minimum_required(VERSION 3.17)
project(learning_c C)

set(CMAKE_C_STANDARD 99)

add_subdirectory("${PROJECT_SOURCE_DIR}/data_types" "${PROJECT_SOURCE_DIR}/data_types/data_types_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/enum" "${PROJECT_SOURCE_DIR}/enum/enum_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/keywords_and_identifiers" "${PROJECT_SOURCE_DIR}/keywords_and_identifiers/keywords_and_identifiers_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/declaration_vs_definition" "${PROJECT_SOURCE_DIR}/declaration_vs_definition/declaration_vs_definition_output")
add_subdirectory("${PROJECT_SOURCE_DIR}/variables_expressions_statements" "${PROJECT_SOURCE_DIR}/variables_expressions_statements/variables_expressions_statements_output")

