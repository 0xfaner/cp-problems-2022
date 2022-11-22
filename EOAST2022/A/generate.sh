scriptRoot=$(dirname "$0" | sed 's?\\?\/?g')


dataRoot="${scriptRoot}/data"

generatorCppFileName="generator.cpp"
generatorCppFilePath="${scriptRoot}/${generatorCppFileName}"
generatorExecFileName="generator.exe"
generatorExecFilePath="${scriptRoot}/${generatorExecFileName}"

solutionCppFileName="solution.cpp"
solutionCppFilePath="${scriptRoot}/${solutionCppFileName}"
solutionExecFileName="solution.exe"
solutionExecFilePath="${scriptRoot}/${solutionExecFileName}"

source ${scriptRoot}/../common/color.sh
source ${scriptRoot}/../common/message.sh
source ${scriptRoot}/../common/generator.sh

buildGeneratorExecFile
buildSolutionExecFile
createDataRoot

createDataFile -kind 1 -maxm 100
createDataFile -kind 2 -maxm 100
createDataFile -kind 3 -maxm 100

createDataFile -t 100 -kind 0 -maxm 1000
createDataFile -t 100 -kind 0 -maxm 1000
createDataFile -t 100 -kind 0 -maxm 1000
createDataFile -t 100 -kind 0 -maxm 1000

createDataFile -t 100000 -kind 0 -maxm 1000000000
createDataFile -t 100000 -kind 0 -maxm 1000000000
createDataFile -t 100000 -kind 0 -maxm 1000000000
