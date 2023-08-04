#pragma once
#include <vector>


//This class is used as a base class for all rectangle shaped building materials. The vertex counts are ordered in the format:
/*
* 
   5__________6
   /         /|
  /         / |
1/_________/2 | 7
 |    8    |  /
 |         | / 
4|_________|/3

*/

//This is the numbering scheme for the faces. 1 & 2 are the fronty and back. 3 is the top, 5 is the bottom. 6 & 4 are the sides
/*
		 ____2____
	   /         /|
	  /     3   / |
	6/_________/  |
	|         | 4/|
	|    1    | / |
	|_________|/
			5
*/

class board
{
protected:
	//Board basic variables. All values are in inches
	double width, length, thickness, fastenerLength, fastenerWidth, fastenerDiameter;
	int timelineNumber;

	//Vectors that contain the vertext of each corner of the board. There are a total of 8 vertices and the format of each vertex is X, Y, Z.
	//Use by calling boardVertices[vertex#][x/y/z values]
	std::vector<std::vector<double>> boardVertices = { 
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 1
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 2 
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 3
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 4 
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 5
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 6 
		{0.0, 0.0, 0.0}, //X, Y, Z of Vertex 7
		{0.0, 0.0, 0.0}  //X, Y, Z of Vertex 8 
	};

	//This matrix contains the vertex number of the 3 connecting vertexes. The ordering scheme is currently smallest number to largest number.
	
	std::vector<std::vector<int>> adjacencyMatrix = {
		{2, 4, 5},	//Vertex 1
		{1, 3, 6},	//Vertex 2
		{2, 4, 7},	//Vertex 3
		{1, 3, 8},	//Vertex 4
		{1, 6, 8},	//Vertex 5
		{2, 5, 7},	//Vertex 6
		{3, 6, 8},	//Vertex 7
		{4, 5, 7}	//Vertex 8
	};

	//Enum where position matches the numbersing scheme
	enum Faces{
		Front,
		Back,
		Top,
		RightSide,
		Bottom,
		LeftSide
	};

	//Connection vectors for which vector on this object connects with vectors of another object.
	//This object vertex values are first. Format is as follows: The first 3 values are offsets of X, Y, Z. 
	//Then the timeline number/ID of the other connecting object. Last is the value the other connecting face
	std::vector<std::vector<double>> connectionVertices = {
		{0.0, 0.0, 0.0, 0.0, 0.0}, // Front
		{0.0, 0.0, 0.0, 0.0, 0.0}, // Back
		{0.0, 0.0, 0.0, 0.0, 0.0}, // Top
		{0.0, 0.0, 0.0, 0.0, 0.0}, // Right
		{0.0, 0.0, 0.0, 0.0, 0.0}, // Bottom
		{0.0, 0.0, 0.0, 0.0, 0.0}  // Left
	};

	//Enum of material types. Class not selected for implicit int typcast
	enum class Species {
		Pine,
		DouglasFir,
		Spruce,
		Cedar,
		Laminated
	};

	//Enum of material grades. Highest = 1, lowest = 10
	enum class MaterialGrade {
		Firsts,
		Seconds,
		FAS,
		Select,
		No1,
		No2,
		Finish,
		Premium,
		Standard,
		Stud
	};

	//Standard fasteners for this board

	enum class defaultFasteners {
		GalvNail,
		NoGalvNail,
		GalvScrew,
		NoGalvScrew,
		SDSBolt,
		LagBolt,
		DeckScrew,
		DeckingFastener,
		GalvHexBolt

	};

	enum class FastenerLocation {

	};
};

