.PHONY: clean All

All:
	@echo "----------Building project:[ A9_Graphs - Debug ]----------"
	@cd "A9_Graphs" && "$(MAKE)" -f  "A9_Graphs.mk"
clean:
	@echo "----------Cleaning project:[ A9_Graphs - Debug ]----------"
	@cd "A9_Graphs" && "$(MAKE)" -f  "A9_Graphs.mk" clean
