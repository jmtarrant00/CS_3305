##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A2_Polynomial
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/GitHub/CS_3305/CS_3305
ProjectPath            :=D:/GitHub/CS_3305/CS_3305/A2_Polynomial
IntermediateDirectory  :=../build-$(ConfigurationName)/A2_Polynomial
OutDir                 :=../build-$(ConfigurationName)/A2_Polynomial
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=13/09/2021
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
Objects0=../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A2_Polynomial/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A2_Polynomial" mkdir "..\build-$(ConfigurationName)\A2_Polynomial"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A2_Polynomial" mkdir "..\build-$(ConfigurationName)\A2_Polynomial"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A2_Polynomial/.d:
	@if not exist "..\build-$(ConfigurationName)\A2_Polynomial" mkdir "..\build-$(ConfigurationName)\A2_Polynomial"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(ObjectSuffix): polytest1.cpp ../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/A2_Polynomial/polytest1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/polytest1.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(DependSuffix): polytest1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(DependSuffix) -MM polytest1.cpp

../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(PreprocessSuffix): polytest1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A2_Polynomial/polytest1.cpp$(PreprocessSuffix) polytest1.cpp

../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(ObjectSuffix): poly1.cpp ../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/GitHub/CS_3305/CS_3305/A2_Polynomial/poly1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/poly1.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(DependSuffix): poly1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(DependSuffix) -MM poly1.cpp

../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(PreprocessSuffix): poly1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A2_Polynomial/poly1.cpp$(PreprocessSuffix) poly1.cpp


-include ../build-$(ConfigurationName)/A2_Polynomial//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


