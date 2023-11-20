
/* Void Awake() */

void Assembly-CSharp.dll::AvatarRemoteMovementCalculator::AvatarRemoteMovementCalculator_Awake
               (AvatarRemoteMovementCalculator *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (this->fields).prevPos.x = pVVar1->x;
    (this->fields).prevPos.y = fVar2;
    (this->fields).prevPos.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarRemoteMovementCalculator::AvatarRemoteMovementCalculator_Update
               (AvatarRemoteMovementCalculator *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fStack_5 = pVVar2->z;
    VStack_3.x = (this->fields).prevPos.x;
    VStack_3.y = (this->fields).prevPos.y;
    fVar6 = (float)(undefined4)uStack_4 - VStack_3.x;
    VStack_3.z = (this->fields).prevPos.z;
    fStack_7 = (float)uStack_4._4_4_ - VStack_3.y;
    fStack_8 = fStack_5 - VStack_3.z;
    fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    VStack_3.z = fStack_8 / fStack_9;
    (this->fields).velocityEstimate.x = fVar6 / fStack_9;
    (this->fields).velocityEstimate.y = fStack_7 / fStack_9;
    (this->fields).velocityEstimate.z = VStack_3.z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      fVar10 = pVVar2->y;
      fVar6 = pVVar2->z;
      (this->fields).prevPos.x = pVVar2->x;
      (this->fields).prevPos.y = fVar10;
      (this->fields).prevPos.z = fVar6;
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AvatarRemoteMovementCalculator() */

void Assembly-CSharp.dll::AvatarRemoteMovementCalculator::AvatarRemoteMovementCalculator__ctor
               (AvatarRemoteMovementCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).prevPos.x = (pVVar1->zeroVector).x;
  (this->fields).prevPos.y = fVar2;
  (this->fields).prevPos.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).velocityEstimate.x = (pVVar1->zeroVector).x;
  (this->fields).velocityEstimate.y = fVar2;
  (this->fields).velocityEstimate.z = fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

