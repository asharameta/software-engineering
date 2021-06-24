################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab3/lab3/main.cpp \
../lab3/lab3/ulamek.cpp 

OBJS += \
./lab3/lab3/main.o \
./lab3/lab3/ulamek.o 

CPP_DEPS += \
./lab3/lab3/main.d \
./lab3/lab3/ulamek.d 


# Each subdirectory must supply rules for building sources it contributes
lab3/lab3/%.o: ../lab3/lab3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


