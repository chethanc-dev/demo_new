pipeline {
    agent any

    stages {
        stage('Parallel Build') {
            parallel {

                stage('Maven') {
                    /* Fixed name to match your exact Jenkins configuration */
                    tools {
                        maven 'Maven' 
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
