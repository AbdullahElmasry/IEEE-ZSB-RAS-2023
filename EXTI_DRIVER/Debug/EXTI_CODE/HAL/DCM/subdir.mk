################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../EXTI_CODE/HAL/DCM/DCM_program.c 

OBJS += \
./EXTI_CODE/HAL/DCM/DCM_program.o 

C_DEPS += \
./EXTI_CODE/HAL/DCM/DCM_program.d 


# Each subdirectory must supply rules for building sources it contributes
EXTI_CODE/HAL/DCM/%.o: ../EXTI_CODE/HAL/DCM/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


