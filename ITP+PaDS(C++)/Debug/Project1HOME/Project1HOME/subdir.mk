################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project1HOME/Project1HOME/Czy_Trojkatcpp.cpp \
../Project1HOME/Project1HOME/HOME.cpp \
../Project1HOME/Project1HOME/Source.cpp \
../Project1HOME/Project1HOME/array.cpp \
../Project1HOME/Project1HOME/template.typename.cpp 

OBJS += \
./Project1HOME/Project1HOME/Czy_Trojkatcpp.o \
./Project1HOME/Project1HOME/HOME.o \
./Project1HOME/Project1HOME/Source.o \
./Project1HOME/Project1HOME/array.o \
./Project1HOME/Project1HOME/template.typename.o 

CPP_DEPS += \
./Project1HOME/Project1HOME/Czy_Trojkatcpp.d \
./Project1HOME/Project1HOME/HOME.d \
./Project1HOME/Project1HOME/Source.d \
./Project1HOME/Project1HOME/array.d \
./Project1HOME/Project1HOME/template.typename.d 


# Each subdirectory must supply rules for building sources it contributes
Project1HOME/Project1HOME/%.o: ../Project1HOME/Project1HOME/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


