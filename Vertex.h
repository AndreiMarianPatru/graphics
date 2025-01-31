#ifndef VERTEX_H
#define VERTEX_H
#include <glm/glm.hpp>
struct Vertex 
{
	glm::vec3 Position;
	glm::vec2 TextureCoord;

	glm::vec3 Tangent;
	glm::vec3 BiTangent;
	glm::vec3 Normal;

	Vertex()
	{
		
	}
	
	Vertex(const Vertex &vert) 
	{
		this->Position.x = vert.Position.x;
		this->Position.y = vert.Position.y;
		this->Position.z = vert.Position.z;

		TextureCoord= {vert.TextureCoord.x,vert.TextureCoord.y};

		Tangent= glm::vec3(0);
		BiTangent= glm::vec3(0);
		
	}
	Vertex(const float X,const float Y,const float Z)
	{
		this->Position.x=X;
		this->Position.y=Y;
		this->Position.z=Z;

		TextureCoord={0,0};

		Tangent= glm::vec3(0);
		BiTangent= glm::vec3(0);
		
	}
	Vertex(const glm::vec3 position):Vertex(Position.x,Position.y,Position.z)
	{
		
	}
	Vertex(const glm::vec3 position, const glm::vec2 texCoord )
	{
		this->Position=position;
		this->TextureCoord=texCoord;
	}
};
#endif
