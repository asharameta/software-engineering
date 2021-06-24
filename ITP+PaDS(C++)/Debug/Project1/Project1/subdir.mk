################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project1/Project1/liczba.cpp \
../Project1/Project1/rok.cpp \
../Project1/Project1/trojkat.cpp \
../Project1/Project1/wybor.cpp 

OBJS += \
./Project1/Project1/liczba.o \
./Project1/Project1/rok.o \
./Project1/Project1/trojkat.o \
./Project1/Project1/wybor.o 

CPP_DEPS += \
./Project1/Project1/liczba.d \
./Project1/Project1/rok.d \
./Project1/Project1/trojkat.d \
./Project1/Project1/wybor.d 


# Each subdirectory must supply rules for building sources it contributes
Project1/Project1/%.o: ../Project1/Project1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


