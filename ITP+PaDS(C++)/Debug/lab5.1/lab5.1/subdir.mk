################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab5.1/lab5.1/main.cpp \
../lab5.1/lab5.1/sport.cpp 

OBJS += \
./lab5.1/lab5.1/main.o \
./lab5.1/lab5.1/sport.o 

CPP_DEPS += \
./lab5.1/lab5.1/main.d \
./lab5.1/lab5.1/sport.d 


# Each subdirectory must supply rules for building sources it contributes
lab5.1/lab5.1/%.o: ../lab5.1/lab5.1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


