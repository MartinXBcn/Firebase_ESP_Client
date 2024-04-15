

message(INFO "<MS>")
message(INFO "<MS> Firebase_ESP_Client >>")
message(INFO "<MS>")
message(INFO "<MS> CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")


set(Firebase_ESP_Client_SRCS 
    src/Firebase.cpp
    src/json/FirebaseJson.cpp
    )
set(Firebase_ESP_Client_INCL ${CMAKE_CURRENT_SOURCE_DIR}/src)

idf_component_register(
    INCLUDE_DIRS ${Firebase_ESP_Client_INCL} 
    SRCS ${Firebase_ESP_Client_SRCS}
    REQUIRES 
        arduino 
        ms_Logger
        TinyGSM
    )

message(INFO "<MS>")
message(INFO "<MS> Firebase_ESP_Client <<")
message(INFO "<MS>")
