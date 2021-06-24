################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../qsortDima/qsortDima/main.cpp 

OBJS += \
./qsortDima/qsortDima/main.o 

CPP_DEPS += \
./qsortDima/qsortDima/main.d 


# Each subdirectory must supply rules for building sources it contributes
qsortDima/qsortDima/%.o: ../qsortDima/qsortDima/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


