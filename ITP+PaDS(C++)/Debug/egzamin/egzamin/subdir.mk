################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../egzamin/egzamin/main.cpp 

OBJS += \
./egzamin/egzamin/main.o 

CPP_DEPS += \
./egzamin/egzamin/main.d 


# Each subdirectory must supply rules for building sources it contributes
egzamin/egzamin/%.o: ../egzamin/egzamin/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


