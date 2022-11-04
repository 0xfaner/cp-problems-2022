printfInfo() {
    printf "${Green}INFO:${Color_Off} %s\n" "$*"
}

printfWarn() {
    printf "${Yellow}WARN:${Color_Off} %s\n" "$*"
}

printfErr() {
    printf "${Red}ERROR:${Color_Off} %s\n" "$*"
}

printfProg() {
    printf "\r${Red}PROCESSING:${Color_Off} %s" "$*"
}

printfTask() {
    printf "${Blue}TASK:${Color_Off} %s\n" "$*"
}