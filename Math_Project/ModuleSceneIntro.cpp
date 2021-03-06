#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	// TODO 2: Place the camera one unit up in Y and one unit to the right
	// experiment with different camera placements, then use LookAt()
	// to make it look at the center
	//App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	//App->camera->LookAt(vec3(0, 0, 0));
	int rotation = 1;
	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update: draw background
update_status ModuleSceneIntro::Update(float dt)
{
	// TODO 1: Create a Plane primitive. This uses the plane formula
	// so you have to express the normal of the plane to create 
	// a plane centered around 0,0. Make that it draw the axis for reference
	
	Cube cube(1,1,1);
	cube.SetPos(-2,0,0);
	

	if (App->input->GetKey(SDL_SCANCODE_W) == KEY_REPEAT) rotation += 20;

	cube.SetRotation(rotation, rotation);

	cube.Render();






	/*
	Plane plane(0, 1, 0, 0);
	plane.axis = true;
	plane.Render();
	//plane.InnerRender();
	*/

	// TODO 6: Draw a sphere of 0.5f radius around the center
	// Draw somewhere else a cube and a cylinder in wireframe

	return UPDATE_CONTINUE;
}

