################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kolejkaFIFO/kolejkaFIFO/kolejka.cpp \
../kolejkaFIFO/kolejkaFIFO/main.cpp 

OBJS += \
./kolejkaFIFO/kolejkaFIFO/kolejka.o \
./kolejkaFIFO/kolejkaFIFO/main.o 

CPP_DEPS += \
./kolejkaFIFO/kolejkaFIFO/kolejka.d \
./kolejkaFIFO/kolejkaFIFO/main.d 


# Each subdirectory must supply rules for building sources it contributes
kolejkaFIFO/kolejkaFIFO/%.o: ../kolejkaFIFO/kolejkaFIFO/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


