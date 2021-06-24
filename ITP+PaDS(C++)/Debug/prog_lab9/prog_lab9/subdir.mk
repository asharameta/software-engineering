################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../prog_lab9/prog_lab9/main.cpp \
../prog_lab9/prog_lab9/siatka.cpp 

OBJS += \
./prog_lab9/prog_lab9/main.o \
./prog_lab9/prog_lab9/siatka.o 

CPP_DEPS += \
./prog_lab9/prog_lab9/main.d \
./prog_lab9/prog_lab9/siatka.d 


# Each subdirectory must supply rules for building sources it contributes
prog_lab9/prog_lab9/%.o: ../prog_lab9/prog_lab9/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


