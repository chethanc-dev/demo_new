pipeline {
    agent any

    stages {
        stage('Parallel Build') {
            parallel {

                stage('Maven') {
                    /* Assumes you have a Maven installation named 'Maven 3' 
                       configured under Manage Jenkins -> Tools.
                    */
                    tools {
                        maven 'Maven 3' 
                    }
                    steps {
                        dir('vehicle-parking') {
                            sh 'mvn clean package'
                        }
                    }
                }

                stage('CMake') {
                    steps {
                        dir('led-firmware') {
                            sh '''
                                pwd
                                ls -la
                                
                                # 1. Clean up old, corrupted CMake cache files
                                rm -rf build
                                
                                # 2. Create a fresh build directory
                                mkdir -p build
                                cd build
                                
                                # 3. Configure with the toolchain and compile
                                cmake -DCMAKE_TOOLCHAIN_FILE=../arm-gcc-toolchain.cmake ..
                                make
                            '''
                        }
                    }
                }

            }
        }
    }

    post {
        success {
            echo "Both projects built successfully!"
        }
        failure {
            echo "Build failed!"
        }
    }
}
