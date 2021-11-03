.PHONY: clean All

All:
	@echo "----------Building project:[ A6_BST_FILE - Debug ]----------"
	@cd "A6_BST_FILE" && "$(MAKE)" -f  "A6_BST_FILE.mk"
clean:
	@echo "----------Cleaning project:[ A6_BST_FILE - Debug ]----------"
	@cd "A6_BST_FILE" && "$(MAKE)" -f  "A6_BST_FILE.mk" clean
