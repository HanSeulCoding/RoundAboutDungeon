#pragma once

class ModelRenderScene : public Scene
{
private:
	Model* model;

	Matrix node;
	Sphere* sphere;

public:
	ModelRenderScene();
	~ModelRenderScene();

	virtual void Update() override;
	virtual void PreRender() override;
	virtual void Render() override;
	virtual void PostRender() override;
};