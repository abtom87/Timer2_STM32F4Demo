################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gpio_led.c \
../src/main_OutCompare.c \
../src/syscalls.c \
../src/system_stm32f4xx.c \
../src/timer2_drv.c \
../src/usart2_comm.c 

OBJS += \
./src/gpio_led.o \
./src/main_OutCompare.o \
./src/syscalls.o \
./src/system_stm32f4xx.o \
./src/timer2_drv.o \
./src/usart2_comm.o 

C_DEPS += \
./src/gpio_led.d \
./src/main_OutCompare.d \
./src/syscalls.d \
./src/system_stm32f4xx.d \
./src/timer2_drv.d \
./src/usart2_comm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F411VETx -DSTM32F411E_DISCO -DSTM32F411xE -DUSE_STDPERIPH_DRIVER -I"/home/abel/Ac6/SystemWorkbench/Timer_OutputCompare_Demo/StdPeriph_Driver/inc" -I"/home/abel/Ac6/SystemWorkbench/Timer_OutputCompare_Demo/inc" -I"/home/abel/Ac6/SystemWorkbench/Timer_OutputCompare_Demo/CMSIS/device" -I"/home/abel/Ac6/SystemWorkbench/Timer_OutputCompare_Demo/CMSIS/core" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


