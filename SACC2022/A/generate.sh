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

for i in $(seq 1 79); do
    createDataFile -parity 7 -maxn 1000
done

for ((parity = 0; parity < 7; parity++)) {
    array=(10 100 1000)
    for maxn in "${array[@]}"; do
        createDataFile -parity ${parity} -maxn ${maxn}
    done
}