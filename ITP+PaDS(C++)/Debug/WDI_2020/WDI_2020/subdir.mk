################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../WDI_2020/WDI_2020/Source.cpp 

OBJS += \
./WDI_2020/WDI_2020/Source.o 

CPP_DEPS += \
./WDI_2020/WDI_2020/Source.d 


# Each subdirectory must supply rules for building sources it contributes
WDI_2020/WDI_2020/%.o: ../WDI_2020/WDI_2020/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


