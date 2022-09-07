################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Ejercicio_4-2.c \
../src/converter.c \
../src/validate.c 

C_DEPS += \
./src/Ejercicio_4-2.d \
./src/converter.d \
./src/validate.d 

OBJS += \
./src/Ejercicio_4-2.o \
./src/converter.o \
./src/validate.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Ejercicio_4-2.d ./src/Ejercicio_4-2.o ./src/converter.d ./src/converter.o ./src/validate.d ./src/validate.o

.PHONY: clean-src

