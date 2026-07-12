pipeline {
    agent any

    stages {

        stage('Parallel Build') {

            parallel {

                stage('Maven') {
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
                                mkdir -p build
                                cd build
                                cmake ..
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
