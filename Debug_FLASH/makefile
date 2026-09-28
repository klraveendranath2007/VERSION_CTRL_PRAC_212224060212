################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include board/subdir.mk
-include SDK/rtos/osif/subdir.mk
-include SDK/platform/pal/src/pwm/subdir.mk
-include SDK/platform/drivers/src/pins/subdir.mk
-include SDK/platform/drivers/src/interrupt/subdir.mk
-include SDK/platform/drivers/src/ftm/subdir.mk
-include SDK/platform/drivers/src/clock/S32K1xx/subdir.mk
-include SDK/platform/devices/S32K144/startup/subdir.mk
-include SDK/platform/devices/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.siz \


# All Target
all: VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.elf secondary-outputs

# Tool invocations
VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.elf: $(OBJS) C:/Users/acer/workspaceS32DS.3.5/VERSIONCTRL_SEMPRAC_212224060212_28_SEPT/Project_Settings/Linker_Files/S32K144_64_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.elf" "@VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.args"  $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.siz: VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley VERSIONCTRL_SEMPRAC_212224060212_28_SEPT.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
