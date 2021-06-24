################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AiZo/AiZo/AiZo\ 2.cpp \
../AiZo/AiZo/AiZo.cpp 

OBJS += \
./AiZo/AiZo/AiZo\ 2.o \
./AiZo/AiZo/AiZo.o 

CPP_DEPS += \
./AiZo/AiZo/AiZo\ 2.d \
./AiZo/AiZo/AiZo.d 


# Each subdirectory must supply rules for building sources it contributes
AiZo/AiZo/AiZo\ 2.o: ../AiZo/AiZo/AiZo\ 2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"AiZo/AiZo/AiZo 2.d" -MT"AiZo/AiZo/AiZo\ 2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

AiZo/AiZo/%.o: ../AiZo/AiZo/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


