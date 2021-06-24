################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../2017z3/2017z3/Main.cpp \
../2017z3/2017z3/Source.cpp 

OBJS += \
./2017z3/2017z3/Main.o \
./2017z3/2017z3/Source.o 

CPP_DEPS += \
./2017z3/2017z3/Main.d \
./2017z3/2017z3/Source.d 


# Each subdirectory must supply rules for building sources it contributes
2017z3/2017z3/%.o: ../2017z3/2017z3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


