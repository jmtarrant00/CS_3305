.PHONY: clean All

All:
	@echo "----------Building project:[ A0_Temperature - Debug ]----------"
	@cd "A0_Temperature" && "$(MAKE)" -f  "A0_Temperature.mk"
clean:
	@echo "----------Cleaning project:[ A0_Temperature - Debug ]----------"
	@cd "A0_Temperature" && "$(MAKE)" -f  "A0_Temperature.mk" clean
