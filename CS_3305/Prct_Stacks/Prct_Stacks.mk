##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Prct_Stacks
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/Prct_Stacks
IntermediateDirectory  :=../build-$(ConfigurationName)/Prct_Stacks
OutDir                 :=../build-$(ConfigurationName)/Prct_Stacks
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=tiger
Date                   :=29/09/2021
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
Objects0=../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Prct_Stacks/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Prct_Stacks" mkdir "..\build-$(ConfigurationName)\Prct_Stacks"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Prct_Stacks" mkdir "..\build-$(ConfigurationName)\Prct_Stacks"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Prct_Stacks/.d:
	@if not exist "..\build-$(ConfigurationName)\Prct_Stacks" mkdir "..\build-$(ConfigurationName)\Prct_Stacks"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(ObjectSuffix): stacks.cpp ../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/tiger/Documents/GitHub/CS_3305/CS_3305/Prct_Stacks/stacks.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stacks.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(DependSuffix): stacks.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(DependSuffix) -MM stacks.cpp

../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(PreprocessSuffix): stacks.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Prct_Stacks/stacks.cpp$(PreprocessSuffix) stacks.cpp


-include ../build-$(ConfigurationName)/Prct_Stacks//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


