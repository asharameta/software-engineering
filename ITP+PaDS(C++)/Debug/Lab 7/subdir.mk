################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Lab\ 7/Stack.cpp 

OBJS += \
./Lab\ 7/Stack.o 

CPP_DEPS += \
./Lab\ 7/Stack.d 


# Each subdirectory must supply rules for building sources it contributes
Lab\ 7/Stack.o: ../Lab\ 7/Stack.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Lab 7/Stack.d" -MT"Lab\ 7/Stack.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


