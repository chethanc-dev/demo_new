pipeline {
 agent any
 tools { jdk 'Java21'; maven 'Maven' }
 stages {
  stage('Parallel Build'){
   parallel{
    stage('Maven'){steps{dir('vehicle-parking'){sh 'mvn clean package'}}}
    stage('CMake'){steps{dir('cmake-project'){sh 'mkdir -p build && cd build && cmake .. && make'}}}
   }
  }
 }
}