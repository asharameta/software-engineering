################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lab8/lab8/main.cpp \
../lab8/lab8/obiekt.cpp \
../lab8/lab8/plansza.cpp 

OBJS += \
./lab8/lab8/main.o \
./lab8/lab8/obiekt.o \
./lab8/lab8/plansza.o 

CPP_DEPS += \
./lab8/lab8/main.d \
./lab8/lab8/obiekt.d \
./lab8/lab8/plansza.d 


# Each subdirectory must supply rules for building sources it contributes
lab8/lab8/%.o: ../lab8/lab8/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


