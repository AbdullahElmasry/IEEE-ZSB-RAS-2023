################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/STM/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KPD/subdir.mk
-include HAL/DCM/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Electronic_Switches.lss \

FLASH_IMAGE += \
Electronic_Switches.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Electronic_Switches.elf secondary-outputs

# Tool invocations
Electronic_Switches.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Electronic_Switches.map -mmcu=atmega32 -o "Electronic_Switches.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Electronic_Switches.lss: Electronic_Switches.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Electronic_Switches.elf  >"Electronic_Switches.lss"
	@echo 'Finished building: $@'
	@echo ' '

Electronic_Switches.hex: Electronic_Switches.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Electronic_Switches.elf  "Electronic_Switches.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Electronic_Switches.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Electronic_Switches.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Electronic_Switches.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
