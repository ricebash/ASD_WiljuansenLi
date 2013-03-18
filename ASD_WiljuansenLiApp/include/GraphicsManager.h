#pragma once
#include <string>
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "cinder\ImageIo.h"
#include "cinder\gl\Texture.h"
#include "Entity.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class GraphicsManager
{
public:
	GraphicsManager(void);
	~GraphicsManager(void);
	GraphicsManager( Entity *entity, string filename, int fr, int fc, int fn);
	//GraphicsManager( string filename, int fr, int fc, int fn );

	void nextFrame();
	void setFrame( int r, int c );
	
	void update();
	void draw( Vec2f p );
	void draw( Area a );
	void draw( Area srcA, Area destA );
protected:
	int cur_col, cur_row;
	int state;
	//int *max_at_row;
	int num_frames;
	int num_cols, num_rows;
	int cell_width, cell_height;
	int counter;
	int start_cell, end_cell;
	gl::Texture texture;
	Entity *entity;
};

