################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CODE/MCAL/TIMERS/TIMERS_program.c 

OBJS += \
./CODE/MCAL/TIMERS/TIMERS_program.o 

C_DEPS += \
./CODE/MCAL/TIMERS/TIMERS_program.d 


# Each subdirectory must supply rules for building sources it contributes
CODE/MCAL/TIMERS/%.o: ../CODE/MCAL/TIMERS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


