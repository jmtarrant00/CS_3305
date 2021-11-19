##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A8_Hash_Tables
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305/A8_Hash_Tables
IntermediateDirectory  :=../build-$(ConfigurationName)/A8_Hash_Tables
OutDir                 :=../build-$(ConfigurationName)/A8_Hash_Tables
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=19/11/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A8_Hash_Tables/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A8_Hash_Tables" mkdir "..\build-$(ConfigurationName)\A8_Hash_Tables"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A8_Hash_Tables" mkdir "..\build-$(ConfigurationName)\A8_Hash_Tables"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A8_Hash_Tables/.d:
	@if not exist "..\build-$(ConfigurationName)\A8_Hash_Tables" mkdir "..\build-$(ConfigurationName)\A8_Hash_Tables"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(ObjectSuffix): hashFunctions.cpp ../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305/A8_Hash_Tables/hashFunctions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hashFunctions.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(DependSuffix): hashFunctions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(DependSuffix) -MM hashFunctions.cpp

../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(PreprocessSuffix): hashFunctions.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A8_Hash_Tables/hashFunctions.cpp$(PreprocessSuffix) hashFunctions.cpp


-include ../build-$(ConfigurationName)/A8_Hash_Tables//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


