
/* Void Update() */

void Assembly-CSharp.dll::RotateLocal::RotateLocal_Update(RotateLocal *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  axis = (this->fields).aroundVector;
  fVar1 = (this->fields).rotationSpeed;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (this_00,axis,fVar2 * fVar1,Space__Enum_Self,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* RotateLocal() */

void Assembly-CSharp.dll::RotateLocal::RotateLocal__ctor(RotateLocal *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).rotationSpeed = 360.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3f800000,0,0);
  (this->fields).aroundVector.x = (float)(undefined4)uStack_2;
  (this->fields).aroundVector.y = (float)uStack_2._4_4_;
  (this->fields).aroundVector.z = fStack_1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

