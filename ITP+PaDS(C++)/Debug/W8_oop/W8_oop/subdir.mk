################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../W8_oop/W8_oop/main.cpp 

OBJS += \
./W8_oop/W8_oop/main.o 

CPP_DEPS += \
./W8_oop/W8_oop/main.d 


# Each subdirectory must supply rules for building sources it contributes
W8_oop/W8_oop/%.o: ../W8_oop/W8_oop/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


