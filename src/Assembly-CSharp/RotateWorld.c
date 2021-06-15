
/* Void Update() */

void Assembly-CSharp.dll::RotateWorld::RotateWorld_Update(RotateWorld *this,MethodInfo *method)

{
  this_00 = (this->fields).rotateTarget;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
    axis = *pVVar1;
    fVar2 = (this->fields).rotateSpeed;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (this_00,axis,fVar3 * fVar2,Space__Enum_World,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

