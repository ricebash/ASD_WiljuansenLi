#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "Entity.h"
#include "GraphicsManager.h"
#include "PhysicsComponent.h"
#include "InputComponent.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class ASD_WiljuansenLiApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );
	void keyDown(KeyEvent e);
	void keyUp(KeyEvent e);
	void update();
	void draw();
};

Entity entity;
GraphicsManager graphics;
PhysicsComponent phy;
InputComponent put;

void ASD_WiljuansenLiApp::setup()
{
	Vec2f position, half_dimen;
	position.x = 0.0f;
	position.y = 0.0f;
	//half_dimen.x = 100.0f;
	//half_dimen.y = 100.0f;
	entity = Entity( position, half_dimen, "juan.jpg", 4, 4, 16 );
	phy = PhysicsComponent(&entity);
	put = InputComponent(&entity);
	//entity.texture = gl::Texture( loadImage( "../assets/Ardal.png" ) );
}

void ASD_WiljuansenLiApp::mouseDown( MouseEvent event )
{
}

void ASD_WiljuansenLiApp::keyDown(KeyEvent e)
{
	if(e.getCode() == KeyEvent::KEY_d)
	{
		put.doStuff(4);
	}
	if(e.getCode() == KeyEvent::KEY_a)
	{
		put.doStuff(8);
	}
	if(e.getCode() == KeyEvent::KEY_w)
	{
		put.doStuff(12);
	}
	if(e.getCode() == KeyEvent::KEY_s)
	{
		put.doStuff(16);
	}
}

void ASD_WiljuansenLiApp::keyUp(KeyEvent e)
{
	if(e.getCode() == KeyEvent::KEY_d)
	{
		put.doStuff(20);
	}
	if(e.getCode() == KeyEvent::KEY_a)
	{
		put.doStuff(20);
	}
	if(e.getCode() == KeyEvent::KEY_w)
	{
		put.doStuff(20);
	}
	if(e.getCode() == KeyEvent::KEY_s)
	{
		put.doStuff(20);
	}
}

void ASD_WiljuansenLiApp::update()
{
	phy.update();
}

void ASD_WiljuansenLiApp::draw()
{
	// clear out the window with black
	//gl::wait(100);
	gl::clear( Color( 0, 0, 0 ) ); 

	entity.draw();
}

CINDER_APP_BASIC( ASD_WiljuansenLiApp, RendererGl )
