################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab5.2/lab5.2/main.cpp \
../lab5.2/lab5.2/sportowiec.cpp 

OBJS += \
./lab5.2/lab5.2/main.o \
./lab5.2/lab5.2/sportowiec.o 

CPP_DEPS += \
./lab5.2/lab5.2/main.d \
./lab5.2/lab5.2/sportowiec.d 


# Each subdirectory must supply rules for building sources it contributes
lab5.2/lab5.2/%.o: ../lab5.2/lab5.2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


