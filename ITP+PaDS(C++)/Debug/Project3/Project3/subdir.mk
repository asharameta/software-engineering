################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project3/Project3/testIFa.cpp \
../Project3/Project3/?ród?o.cpp 

OBJS += \
./Project3/Project3/testIFa.o \
./Project3/Project3/?ród?o.o 

CPP_DEPS += \
./Project3/Project3/testIFa.d \
./Project3/Project3/?ród?o.d 


# Each subdirectory must supply rules for building sources it contributes
Project3/Project3/%.o: ../Project3/Project3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


