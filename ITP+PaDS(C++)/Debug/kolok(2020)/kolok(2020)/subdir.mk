################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kolok(2020)/kolok(2020)/Source.cpp \
../kolok(2020)/kolok(2020)/main.cpp 

OBJS += \
./kolok(2020)/kolok(2020)/Source.o \
./kolok(2020)/kolok(2020)/main.o 

CPP_DEPS += \
./kolok(2020)/kolok(2020)/Source.d \
./kolok(2020)/kolok(2020)/main.d 


# Each subdirectory must supply rules for building sources it contributes
kolok(2020)/kolok(2020)/Source.o: ../kolok(2020)/kolok(2020)/Source.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"kolok(2020)/kolok(2020)/Source.d" -MT"kolok(2020)/kolok(2020)/Source.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

kolok(2020)/kolok(2020)/main.o: ../kolok(2020)/kolok(2020)/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"kolok(2020)/kolok(2020)/main.d" -MT"kolok(2020)/kolok(2020)/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


