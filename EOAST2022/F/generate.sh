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

createDataFile -t 10 -n 10 -maxm 10
createDataFile -t 10 -n 10 -maxm 10
createDataFile -t 10 -n 10 -maxm 10

createDataFile -t 200 -n 1000 -maxm 1000
createDataFile -t 200 -n 1000 -maxm 1000
createDataFile -t 200 -n 1000 -maxm 1000

createDataFile -t 20000 -n 10 -maxm 1000000000
createDataFile -t 10 -n 20000 -maxm 1000000000
createDataFile -t 2 -n 100000 -maxm 1000000000
createDataFile -t 2 -n 100000 -maxm 1000000000
