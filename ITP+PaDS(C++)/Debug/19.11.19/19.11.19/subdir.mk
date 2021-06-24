################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../19.11.19/19.11.19/19.11.19.cpp \
../19.11.19/19.11.19/Source.cpp \
../19.11.19/19.11.19/Source1.cpp \
../19.11.19/19.11.19/symetryczna.cpp \
../19.11.19/19.11.19/testtt.cpp 

OBJS += \
./19.11.19/19.11.19/19.11.19.o \
./19.11.19/19.11.19/Source.o \
./19.11.19/19.11.19/Source1.o \
./19.11.19/19.11.19/symetryczna.o \
./19.11.19/19.11.19/testtt.o 

CPP_DEPS += \
./19.11.19/19.11.19/19.11.19.d \
./19.11.19/19.11.19/Source.d \
./19.11.19/19.11.19/Source1.d \
./19.11.19/19.11.19/symetryczna.d \
./19.11.19/19.11.19/testtt.d 


# Each subdirectory must supply rules for building sources it contributes
19.11.19/19.11.19/%.o: ../19.11.19/19.11.19/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


