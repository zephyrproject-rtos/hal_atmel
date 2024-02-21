if(CONFIG_SOC_ATMEL_SAMS70_REVB OR
   CONFIG_SOC_ATMEL_SAME70_REVB OR
   CONFIG_SOC_ATMEL_SAMV71_REVB)
  zephyr_include_directories(${CONFIG_SOC_SERIES}b)
else()
  zephyr_include_directories(${CONFIG_SOC_SERIES})
endif()
