.PHONY: clean All

All:
	@echo "----------Building project:[ A7_Heaps - Debug ]----------"
	@cd "A7_Heaps" && "$(MAKE)" -f  "A7_Heaps.mk"
clean:
	@echo "----------Cleaning project:[ A7_Heaps - Debug ]----------"
	@cd "A7_Heaps" && "$(MAKE)" -f  "A7_Heaps.mk" clean
