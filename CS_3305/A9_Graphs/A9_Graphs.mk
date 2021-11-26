##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=A9_Graphs
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305
ProjectPath            :=C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305/A9_Graphs
IntermediateDirectory  :=../build-$(ConfigurationName)/A9_Graphs
OutDir                 :=../build-$(ConfigurationName)/A9_Graphs
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jonathan
Date                   :=25/11/2021
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
Objects0=../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/A9_Graphs/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\A9_Graphs" mkdir "..\build-$(ConfigurationName)\A9_Graphs"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\A9_Graphs" mkdir "..\build-$(ConfigurationName)\A9_Graphs"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/A9_Graphs/.d:
	@if not exist "..\build-$(ConfigurationName)\A9_Graphs" mkdir "..\build-$(ConfigurationName)\A9_Graphs"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(ObjectSuffix): Reachability_Matrix.cpp ../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Jonathan/Documents/GitHub/CS_3305/CS_3305/A9_Graphs/Reachability_Matrix.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Reachability_Matrix.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(DependSuffix): Reachability_Matrix.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(DependSuffix) -MM Reachability_Matrix.cpp

../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(PreprocessSuffix): Reachability_Matrix.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/A9_Graphs/Reachability_Matrix.cpp$(PreprocessSuffix) Reachability_Matrix.cpp


-include ../build-$(ConfigurationName)/A9_Graphs//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


