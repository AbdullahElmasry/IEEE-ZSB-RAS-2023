################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/MCAL/1-DIO/DIO_program.c 

OBJS += \
./COTS/MCAL/1-DIO/DIO_program.o 

C_DEPS += \
./COTS/MCAL/1-DIO/DIO_program.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/MCAL/1-DIO/%.o: ../COTS/MCAL/1-DIO/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


