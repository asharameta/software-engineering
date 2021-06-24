################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project21/Project21/2.cpp \
../Project21/Project21/Source.cpp 

OBJS += \
./Project21/Project21/2.o \
./Project21/Project21/Source.o 

CPP_DEPS += \
./Project21/Project21/2.d \
./Project21/Project21/Source.d 


# Each subdirectory must supply rules for building sources it contributes
Project21/Project21/%.o: ../Project21/Project21/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


