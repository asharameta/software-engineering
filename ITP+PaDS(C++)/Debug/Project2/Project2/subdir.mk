################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Project2/Project2/Kalkulator\ Walut.cpp \
../Project2/Project2/prostopad?o?cia.cpp \
../Project2/Project2/temperatura.cpp \
../Project2/Project2/wysoko??\ pensji.cpp \
../Project2/Project2/?redni?\ pr?dko??.cpp 

OBJS += \
./Project2/Project2/Kalkulator\ Walut.o \
./Project2/Project2/prostopad?o?cia.o \
./Project2/Project2/temperatura.o \
./Project2/Project2/wysoko??\ pensji.o \
./Project2/Project2/?redni?\ pr?dko??.o 

CPP_DEPS += \
./Project2/Project2/Kalkulator\ Walut.d \
./Project2/Project2/prostopad?o?cia.d \
./Project2/Project2/temperatura.d \
./Project2/Project2/wysoko??\ pensji.d \
./Project2/Project2/?redni?\ pr?dko??.d 


# Each subdirectory must supply rules for building sources it contributes
Project2/Project2/Kalkulator\ Walut.o: ../Project2/Project2/Kalkulator\ Walut.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Project2/Project2/Kalkulator Walut.d" -MT"Project2/Project2/Kalkulator\ Walut.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Project2/Project2/%.o: ../Project2/Project2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Project2/Project2/wysoko??\ pensji.o: ../Project2/Project2/wysoko??\ pensji.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Project2/Project2/wysoko?? pensji.d" -MT"Project2/Project2/wysoko??\ pensji.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Project2/Project2/?redni?\ pr?dko??.o: ../Project2/Project2/?redni?\ pr?dko??.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"Project2/Project2/?redni? pr?dko??.d" -MT"Project2/Project2/?redni?\ pr?dko??.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


