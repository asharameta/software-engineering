################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../2020z4/2020z4/Source.cpp \
../2020z4/2020z4/main.cpp 

OBJS += \
./2020z4/2020z4/Source.o \
./2020z4/2020z4/main.o 

CPP_DEPS += \
./2020z4/2020z4/Source.d \
./2020z4/2020z4/main.d 


# Each subdirectory must supply rules for building sources it contributes
2020z4/2020z4/%.o: ../2020z4/2020z4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


