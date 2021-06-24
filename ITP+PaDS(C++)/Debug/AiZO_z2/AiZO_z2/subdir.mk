################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AiZO_z2/AiZO_z2/main.cpp 

OBJS += \
./AiZO_z2/AiZO_z2/main.o 

CPP_DEPS += \
./AiZO_z2/AiZO_z2/main.d 


# Each subdirectory must supply rules for building sources it contributes
AiZO_z2/AiZO_z2/%.o: ../AiZO_z2/AiZO_z2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


