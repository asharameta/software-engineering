################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../?/?/Sharameta_1zadanie.c \
../?/?/sharameta_lab10zadanie3.c \
../?/?/sharameta_lab9zad3.c \
../?/?/sharameta_lab9zadanie1.c \
../?/?/source.c 

OBJS += \
./?/?/Sharameta_1zadanie.o \
./?/?/sharameta_lab10zadanie3.o \
./?/?/sharameta_lab9zad3.o \
./?/?/sharameta_lab9zadanie1.o \
./?/?/source.o 

C_DEPS += \
./?/?/Sharameta_1zadanie.d \
./?/?/sharameta_lab10zadanie3.d \
./?/?/sharameta_lab9zad3.d \
./?/?/sharameta_lab9zadanie1.d \
./?/?/source.d 


# Each subdirectory must supply rules for building sources it contributes
?/?/%.o: ../?/?/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


