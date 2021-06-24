################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../cw7(2020)/cw7(2020)/Source.cpp \
../cw7(2020)/cw7(2020)/test.cpp 

OBJS += \
./cw7(2020)/cw7(2020)/Source.o \
./cw7(2020)/cw7(2020)/test.o 

CPP_DEPS += \
./cw7(2020)/cw7(2020)/Source.d \
./cw7(2020)/cw7(2020)/test.d 


# Each subdirectory must supply rules for building sources it contributes
cw7(2020)/cw7(2020)/Source.o: ../cw7(2020)/cw7(2020)/Source.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"cw7(2020)/cw7(2020)/Source.d" -MT"cw7(2020)/cw7(2020)/Source.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

cw7(2020)/cw7(2020)/test.o: ../cw7(2020)/cw7(2020)/test.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"cw7(2020)/cw7(2020)/test.d" -MT"cw7(2020)/cw7(2020)/test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


