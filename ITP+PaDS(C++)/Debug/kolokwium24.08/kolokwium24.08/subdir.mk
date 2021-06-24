################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kolokwium24.08/kolokwium24.08/Source.cpp 

OBJS += \
./kolokwium24.08/kolokwium24.08/Source.o 

CPP_DEPS += \
./kolokwium24.08/kolokwium24.08/Source.d 


# Each subdirectory must supply rules for building sources it contributes
kolokwium24.08/kolokwium24.08/%.o: ../kolokwium24.08/kolokwium24.08/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


