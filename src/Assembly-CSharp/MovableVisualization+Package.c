
/* MovableVisualization+Package(Vector3, Quaternion) */

void Assembly-CSharp.dll::MovableVisualization+Package::MovableVisualization_Package__ctor
               (MovableVisualization_Package *this,Vector3 position,Quaternion rotation,
               MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedTime((MethodInfo *)0x0);
  (this->fields).position.x = position.x;
  (this->fields).position.y = position.y;
  (this->fields).position.z = position.z;
  (this->fields).time = fVar1;
  (this->fields).rotation.x = rotation.x;
  (this->fields).rotation.y = rotation.y;
  (this->fields).rotation.z = rotation.z;
  (this->fields).rotation.w = rotation.w;
  return;
}

