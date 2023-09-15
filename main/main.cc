#include "protoc/user_data.pb.h"
#include "iostream"
#include "grpc++/grpc++.h"

using namespace std;

using grpc::Server;
using grpc::ServerBuilder;


int main(int argc, char const *argv[])
{
//    data::users::UserProfile userProfile;
//    userProfile.set_email("756633687@qq.com");
//    userProfile.set_id(123456);
//
//    cout << "user profile id: " << userProfile.id() << " email: " << userProfile.email() ;

    std::string server_address("0.0.0.0:10001");

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());

    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    server->Wait();
    return 0;
} 