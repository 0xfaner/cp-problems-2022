buildGeneratorExecFile() {
    printfInfo "compiling generator.."
    printfInfo "generator code path: ${generatorCppFilePath}"
    printfInfo "generator exec path: ${generatorExecFilePath}"
    g++ ${generatorCppFilePath} -o ${generatorExecFilePath}
    if [[ $? -ne 0 ]]; then
        printfErr "compile generator failed"
        exit 1
    fi
    printfInfo "compiling generator success"
}

buildSolutionExecFile() {
    printfInfo "compiling solution.."
    printfInfo "solution code path: ${solutionCppFilePath}"
    printfInfo "solution exec path: ${solutionExecFilePath}"
    g++ ${solutionCppFilePath} -o ${solutionExecFilePath}
    if [[ $? -ne 0 ]]; then
        printfErr "compile solution failed"
        exit 1
    fi
    printfInfo "compiling solution success"
}

createDataRoot() {
    printfInfo "Cleaning data directory..."

    failed() {
        printfErr "Clean data directory failed"
        exit 1
    }
    if [ -z ${dataRoot+x} ]; then 
        printfErr "variable dataRoot is unset"
        failed
    fi

    if [ -d "${dataRoot}" ]; then
        rm -rf $dataRoot
        if [[ $? -ne 0 ]]; then failed; fi
    fi

    mkdir ${dataRoot}
    if [[ $? -ne 0 ]]; then failed; fi

    printfInfo "Clean data directory success"
}

dataId=0

createDataFile() {
    printfTask "generate data file, data id: ${dataId}"

    $generatorExecFilePath -seed ${dataId} $* > "${dataRoot}/${dataId}.in"
    $solutionExecFilePath < "${dataRoot}/${dataId}.in" > "${dataRoot}/${dataId}.out"

    let dataId+=1
}