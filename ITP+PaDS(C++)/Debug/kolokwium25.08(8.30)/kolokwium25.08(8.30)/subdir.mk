################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.cpp \
../kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.cpp 

OBJS += \
./kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.o \
./kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.o 

CPP_DEPS += \
./kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.d \
./kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.d 


# Each subdirectory must supply rules for building sources it contributes
kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.o: ../kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.d" -MT"kolokwium25.08(8.30)/kolokwium25.08(8.30)/Source.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.o: ../kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.d" -MT"kolokwium25.08(8.30)/kolokwium25.08(8.30)/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


