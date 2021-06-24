################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../strukturyyyyy/strukturyyyyy/main.cpp \
../strukturyyyyy/strukturyyyyy/test2.cpp 

OBJS += \
./strukturyyyyy/strukturyyyyy/main.o \
./strukturyyyyy/strukturyyyyy/test2.o 

CPP_DEPS += \
./strukturyyyyy/strukturyyyyy/main.d \
./strukturyyyyy/strukturyyyyy/test2.d 


# Each subdirectory must supply rules for building sources it contributes
strukturyyyyy/strukturyyyyy/%.o: ../strukturyyyyy/strukturyyyyy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


