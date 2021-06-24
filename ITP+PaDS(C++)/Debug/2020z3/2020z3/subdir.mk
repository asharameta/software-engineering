################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../2020z3/2020z3/Source.cpp \
../2020z3/2020z3/main.cpp 

OBJS += \
./2020z3/2020z3/Source.o \
./2020z3/2020z3/main.o 

CPP_DEPS += \
./2020z3/2020z3/Source.d \
./2020z3/2020z3/main.d 


# Each subdirectory must supply rules for building sources it contributes
2020z3/2020z3/%.o: ../2020z3/2020z3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


