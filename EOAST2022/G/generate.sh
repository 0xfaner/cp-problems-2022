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

createDataFile -kind 1 -n 200 -maxm 1000000000
createDataFile -kind 1 -n 200 -maxm 1000000000
createDataFile -kind 1 -n 200 -maxm 1000000000

createDataFile -kind 0 -n 200 -maxm 100
createDataFile -kind 0 -n 200 -maxm 100
createDataFile -kind 0 -n 200 -maxm 100

createDataFile -kind 0 -n 200 -maxm 1000000000
createDataFile -kind 0 -n 200 -maxm 1000000000
createDataFile -kind 0 -n 200 -maxm 1000000000
createDataFile -kind 0 -n 200 -maxm 1000000000
