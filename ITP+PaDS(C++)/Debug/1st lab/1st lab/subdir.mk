################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../1st\ lab/1st\ lab/Samochod.cpp \
../1st\ lab/1st\ lab/main.cpp 

OBJS += \
./1st\ lab/1st\ lab/Samochod.o \
./1st\ lab/1st\ lab/main.o 

CPP_DEPS += \
./1st\ lab/1st\ lab/Samochod.d \
./1st\ lab/1st\ lab/main.d 


# Each subdirectory must supply rules for building sources it contributes
1st\ lab/1st\ lab/Samochod.o: ../1st\ lab/1st\ lab/Samochod.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"1st lab/1st lab/Samochod.d" -MT"1st\ lab/1st\ lab/Samochod.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

1st\ lab/1st\ lab/main.o: ../1st\ lab/1st\ lab/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"1st lab/1st lab/main.d" -MT"1st\ lab/1st\ lab/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


