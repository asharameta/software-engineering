################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project1.1/Project1.1/Source.cpp \
../Project1.1/Project1.1/Tmnozenia.cpp \
../Project1.1/Project1.1/nwd.cpp \
../Project1.1/Project1.1/rownanie\ kwadratowe.cpp \
../Project1.1/Project1.1/slodzikcpp.cpp 

OBJS += \
./Project1.1/Project1.1/Source.o \
./Project1.1/Project1.1/Tmnozenia.o \
./Project1.1/Project1.1/nwd.o \
./Project1.1/Project1.1/rownanie\ kwadratowe.o \
./Project1.1/Project1.1/slodzikcpp.o 

CPP_DEPS += \
./Project1.1/Project1.1/Source.d \
./Project1.1/Project1.1/Tmnozenia.d \
./Project1.1/Project1.1/nwd.d \
./Project1.1/Project1.1/rownanie\ kwadratowe.d \
./Project1.1/Project1.1/slodzikcpp.d 


# Each subdirectory must supply rules for building sources it contributes
Project1.1/Project1.1/%.o: ../Project1.1/Project1.1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Project1.1/Project1.1/rownanie\ kwadratowe.o: ../Project1.1/Project1.1/rownanie\ kwadratowe.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Project1.1/Project1.1/rownanie kwadratowe.d" -MT"Project1.1/Project1.1/rownanie\ kwadratowe.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


