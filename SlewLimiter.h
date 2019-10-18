/**
 * @file SlewLimiter.h
 * @brief Class for implementing asymmetric slew limiting
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once

class SlewLimiter
{
public:
	SlewLimiter(float rate_max, float rate_min, float f_sample);
	SlewLimiter(float rate_max, float f_sample);
	float update(float val);
	void reset();
private:
	bool first_frame;
	float val_prev;
	float delta_max;
	float delta_min;
};