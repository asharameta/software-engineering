################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../graGuessGame/graGuessGame/GuessGame.cpp 

OBJS += \
./graGuessGame/graGuessGame/GuessGame.o 

CPP_DEPS += \
./graGuessGame/graGuessGame/GuessGame.d 


# Each subdirectory must supply rules for building sources it contributes
graGuessGame/graGuessGame/%.o: ../graGuessGame/graGuessGame/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


