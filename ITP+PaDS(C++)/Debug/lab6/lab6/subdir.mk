################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab6/lab6/main.cpp \
../lab6/lab6/planeta.cpp 

OBJS += \
./lab6/lab6/main.o \
./lab6/lab6/planeta.o 

CPP_DEPS += \
./lab6/lab6/main.d \
./lab6/lab6/planeta.d 


# Each subdirectory must supply rules for building sources it contributes
lab6/lab6/%.o: ../lab6/lab6/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


