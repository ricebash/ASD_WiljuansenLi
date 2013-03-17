#include "..\include\GraphicsManager.h"
#include <time.h>

using namespace ci;
using namespace ci::app;
using namespace std;

GraphicsManager::GraphicsManager(void)
{
	
}


GraphicsManager::~GraphicsManager(void)
{
}

GraphicsManager::GraphicsManager( string filename, int fc, int fr, int fn )
{
	texture = gl::Texture( loadImage( "../assets/" + filename ) );
	cur_row = 1;
	cur_col = 0;
	num_rows = fr;
	num_cols = fc;
	num_frames = fn;
	cell_width = texture.getWidth() / num_cols;
	cell_height = texture.getHeight() / num_rows;
}

void GraphicsManager::nextFrame()
{
	if ( ++cur_col == num_cols )
	{
		cur_col = 0;
		if ( ++cur_row == num_rows )
		{
			cur_row = 0;
		}
		else if ( cur_row * num_cols + cur_col == num_frames )
		{
			cur_col = 0;
			cur_row = 0;
		}
	}
}

void GraphicsManager::draw( Vec2f p )
{
	float srcX = cur_col * cell_width;
	float srcY = cur_row * cell_height;
	gl::clear( Color( 0, 0, 0 ) );
	gl::enableAlphaBlending();
	gl::draw( texture, Area ( srcX, srcY, srcX + cell_width, srcY + cell_height ), 
		Rectf( p.x, p.y, p.x + cell_width, p.y + cell_height) );
}

void GraphicsManager::draw( Area a )
{
	int srcX = cur_col * cell_width;
	int srcY = cur_row * cell_height;
	gl::draw( texture, Area ( srcX, srcY, srcX + cell_width, srcY + cell_height ) , a );
}

void GraphicsManager::draw( Area srcA, Area desA )
{
	gl::draw( texture, srcA, desA );
}
