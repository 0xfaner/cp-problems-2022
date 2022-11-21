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

createDataFile -t 1 -n 1000000 -kind 0 -maxc a
createDataFile -t 1 -n 1000000 -kind 0 -maxc z

createDataFile -t 100 -n 10000 -kind 1 -maxc b
createDataFile -t 100 -n 10000 -kind 1 -maxc c
createDataFile -t 100 -n 10000 -kind 1 -maxc d
createDataFile -t 100 -n 10000 -kind 1 -maxc z

createDataFile -t 1000 -n 1000 -kind 1 -maxc b
createDataFile -t 1000 -n 1000 -kind 1 -maxc c
createDataFile -t 1000 -n 1000 -kind 1 -maxc d
createDataFile -t 1000 -n 1000 -kind 1 -maxc z

