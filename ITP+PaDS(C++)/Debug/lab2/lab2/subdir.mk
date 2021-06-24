################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab2/lab2/main.cpp \
../lab2/lab2/wzor.cpp 

OBJS += \
./lab2/lab2/main.o \
./lab2/lab2/wzor.o 

CPP_DEPS += \
./lab2/lab2/main.d \
./lab2/lab2/wzor.d 


# Each subdirectory must supply rules for building sources it contributes
lab2/lab2/%.o: ../lab2/lab2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


