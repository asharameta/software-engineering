################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../2017z6/2017z6/Source.cpp \
../2017z6/2017z6/main.cpp 

OBJS += \
./2017z6/2017z6/Source.o \
./2017z6/2017z6/main.o 

CPP_DEPS += \
./2017z6/2017z6/Source.d \
./2017z6/2017z6/main.d 


# Each subdirectory must supply rules for building sources it contributes
2017z6/2017z6/%.o: ../2017z6/2017z6/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


