
/* Void Update() */

void Assembly-CSharp.dll::RotateLocal::RotateLocal_Update(RotateLocal *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).aroundVector.x = (float)(int)(uVar1 << 0x20);
  (this->fields).aroundVector.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).rotationSpeed = 360.0;
  (this->fields).aroundVector.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}

