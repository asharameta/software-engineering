################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project2.2/Project2.2/Pencja.cpp \
../Project2.2/Project2.2/mysz.cpp \
../Project2.2/Project2.2/?ród?o.cpp 

OBJS += \
./Project2.2/Project2.2/Pencja.o \
./Project2.2/Project2.2/mysz.o \
./Project2.2/Project2.2/?ród?o.o 

CPP_DEPS += \
./Project2.2/Project2.2/Pencja.d \
./Project2.2/Project2.2/mysz.d \
./Project2.2/Project2.2/?ród?o.d 


# Each subdirectory must supply rules for building sources it contributes
Project2.2/Project2.2/%.o: ../Project2.2/Project2.2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


