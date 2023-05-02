################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../COTS/APP/main.c \
../COTS/APP/tempCodeRunnerFile.c 

OBJS += \
./COTS/APP/main.o \
./COTS/APP/tempCodeRunnerFile.o 

C_DEPS += \
./COTS/APP/main.d \
./COTS/APP/tempCodeRunnerFile.d 


# Each subdirectory must supply rules for building sources it contributes
COTS/APP/%.o: ../COTS/APP/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


