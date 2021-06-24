################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AntonZ3/AntonZ3/program.cpp 

OBJS += \
./AntonZ3/AntonZ3/program.o 

CPP_DEPS += \
./AntonZ3/AntonZ3/program.d 


# Each subdirectory must supply rules for building sources it contributes
AntonZ3/AntonZ3/%.o: ../AntonZ3/AntonZ3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


