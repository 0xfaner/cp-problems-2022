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

createDataFile -kind 1 -n 8
createDataFile -kind 1 -n 9
createDataFile -kind 1 -n 10

createDataFile -kind 0 -t 10000 -maxn 50
createDataFile -kind 0 -t 5000 -maxn 100
createDataFile -kind 0 -t 1000 -maxn 500
createDataFile -kind 0 -t 500 -maxn 1000
createDataFile -kind 0 -t 100 -maxn 5000
createDataFile -kind 0 -t 50 -maxn 10000
createDataFile -kind 0 -t 5 -maxn 100000
