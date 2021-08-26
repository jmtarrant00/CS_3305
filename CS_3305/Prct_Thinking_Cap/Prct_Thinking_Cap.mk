##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Prct_Thinking_Cap
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GitHub/CS_3305/CS_3305
ProjectPath            :=D:/GitHub/CS_3305/CS_3305/Prct_Thinking_Cap
IntermediateDirectory  :=../build-$(ConfigurationName)/Prct_Thinking_Cap
OutDir                 :=../build-$(ConfigurationName)/Prct_Thinking_Cap
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=26/08/2021
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
Objects0=../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Prct_Thinking_Cap/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Prct_Thinking_Cap" mkdir "..\build-$(ConfigurationName)\Prct_Thinking_Cap"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Prct_Thinking_Cap" mkdir "..\build-$(ConfigurationName)\Prct_Thinking_Cap"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Prct_Thinking_Cap/.d:
	@if not exist "..\build-$(ConfigurationName)\Prct_Thinking_Cap" mkdir "..\build-$(ConfigurationName)\Prct_Thinking_Cap"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(ObjectSuffix): TestThinkingCap.cpp ../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/Prct_Thinking_Cap/TestThinkingCap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TestThinkingCap.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(DependSuffix): TestThinkingCap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(DependSuffix) -MM TestThinkingCap.cpp

../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(PreprocessSuffix): TestThinkingCap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Prct_Thinking_Cap/TestThinkingCap.cpp$(PreprocessSuffix) TestThinkingCap.cpp

../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(ObjectSuffix): Thinking_Cap.cpp ../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/Prct_Thinking_Cap/Thinking_Cap.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Thinking_Cap.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(DependSuffix): Thinking_Cap.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(DependSuffix) -MM Thinking_Cap.cpp

../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(PreprocessSuffix): Thinking_Cap.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Prct_Thinking_Cap/Thinking_Cap.cpp$(PreprocessSuffix) Thinking_Cap.cpp


-include ../build-$(ConfigurationName)/Prct_Thinking_Cap//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


