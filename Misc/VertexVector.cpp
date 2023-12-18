#include <iostream>
#include <string>
#include <vector>
 
struct Vertex{
	int x,y,z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){
	stream<<vertex.x<<", "<<vertex.y<<", "<<vertex.z;
	return stream;
}

int main(){
	std::vector<Vertex> vertices;
	vertices.push_back({1,2,3});
	vertices.push_back({2,4,6});
	for(int i=0; i<vertices.size(); i++){
		std::cout<<vertices[i]<<std::endl;
	}
	return 0;
}
