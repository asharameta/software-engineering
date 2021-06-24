################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab5/lab5/main.cpp 

OBJS += \
./lab5/lab5/main.o 

CPP_DEPS += \
./lab5/lab5/main.d 


# Each subdirectory must supply rules for building sources it contributes
lab5/lab5/%.o: ../lab5/lab5/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


