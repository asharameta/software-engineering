################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../proj/bib_stosy.cpp \
../proj/program.cpp 

OBJS += \
./proj/bib_stosy.o \
./proj/program.o 

CPP_DEPS += \
./proj/bib_stosy.d \
./proj/program.d 


# Each subdirectory must supply rules for building sources it contributes
proj/%.o: ../proj/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


