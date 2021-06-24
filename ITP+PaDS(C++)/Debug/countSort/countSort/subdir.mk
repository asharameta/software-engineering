################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../countSort/countSort/count.cpp 

OBJS += \
./countSort/countSort/count.o 

CPP_DEPS += \
./countSort/countSort/count.d 


# Each subdirectory must supply rules for building sources it contributes
countSort/countSort/%.o: ../countSort/countSort/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


