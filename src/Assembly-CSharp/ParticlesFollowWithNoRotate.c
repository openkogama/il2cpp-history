
/* Void LateUpdate() */

void Assembly-CSharp.dll::ParticlesFollowWithNoRotate::ParticlesFollowWithNoRotate_LateUpdate
               (ParticlesFollowWithNoRotate *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,(this->fields).startRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ParticlesFollowWithNoRotate::ParticlesFollowWithNoRotate_Start
               (ParticlesFollowWithNoRotate *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffec,this_00,(MethodInfo *)0x0);
    fVar2 = pQVar1->y;
    fVar3 = pQVar1->z;
    fVar4 = pQVar1->w;
    (this->fields).startRotation.x = pQVar1->x;
    (this->fields).startRotation.y = fVar2;
    (this->fields).startRotation.z = fVar3;
    (this->fields).startRotation.w = fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

