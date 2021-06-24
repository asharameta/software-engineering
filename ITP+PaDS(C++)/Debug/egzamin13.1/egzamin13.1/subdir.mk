################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../egzamin13.1/egzamin13.1/main.cpp 

OBJS += \
./egzamin13.1/egzamin13.1/main.o 

CPP_DEPS += \
./egzamin13.1/egzamin13.1/main.d 


# Each subdirectory must supply rules for building sources it contributes
egzamin13.1/egzamin13.1/%.o: ../egzamin13.1/egzamin13.1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


