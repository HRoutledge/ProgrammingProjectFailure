#pragma once
#include <vector>
#include "Boid.h"
#include <ngl/AbstractVAO.h>
#include <memory>
class Emitter
{
public :
	Emitter(size_t _numBoids);
	~Emitter() = default;
	void update(float _deltaT);
	void update();
	void draw() const;
	void addBoid();
	void removeBoid();
	void clearBoids();

private :
	void resetBoid(Boid& io_b);
	std::vector<Boid> m_Boids;
	std::unique_ptr<ngl::AbstractVAO> m_vao;
};