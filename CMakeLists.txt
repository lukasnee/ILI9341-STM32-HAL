add_library(ILI9341-STM32-HAL STATIC)

target_sources(
  ILI9341-STM32-HAL PRIVATE ILI9341/ili9341_font.c ILI9341/ili9341_gfx.c
                            ILI9341/ili9341.c
)

target_include_directories(ILI9341-STM32-HAL PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# target_compile_definitions(ILI9341-STM32-HAL PUBLIC -DSTM32H7)

target_link_libraries(ILI9341-STM32-HAL PUBLIC STM32H7xx_HAL freertos-addons)
