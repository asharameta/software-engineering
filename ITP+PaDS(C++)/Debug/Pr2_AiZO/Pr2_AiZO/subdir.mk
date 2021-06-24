################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Pr2_AiZO/Pr2_AiZO/main.cpp 

OBJS += \
./Pr2_AiZO/Pr2_AiZO/main.o 

CPP_DEPS += \
./Pr2_AiZO/Pr2_AiZO/main.d 


# Each subdirectory must supply rules for building sources it contributes
Pr2_AiZO/Pr2_AiZO/%.o: ../Pr2_AiZO/Pr2_AiZO/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


