
/* Void Awake() */

void Assembly-CSharp.dll::AvatarRemoteMovementCalculator::AvatarRemoteMovementCalculator_Awake
               (AvatarRemoteMovementCalculator *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
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
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3._0_4_ = (this->fields).prevPos.x;
    fStack_4 = (this->fields).prevPos.y;
    fVar5 = (this->fields).prevPos.z;
    puStack_6 = (undefined *)pVVar2->x;
    unique0x0000a404 = pVVar2->y;
    fVar7 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uVar3._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
      func_?();
    }
    VVar8.z = fVar7;
    VVar8.x = (float)puStack_6;
    VVar8.y = stack0xfffffff8;
    b.z = fVar5;
    b.x = (float)uVar3;
    b.y = SUB84(uVar3,4);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xfffffff0,VVar8,b,(MethodInfo *)0x0);
    method_00 = pVVar2->x;
    uVar9 = pVVar2->y;
    this = (AvatarRemoteMovementCalculator *)pVVar2->z;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                      ((MethodInfo *)method_00);
    fVar10 = (float)uVar9;
    stack0xfffffff8 = (float)&stack0xffffffe4;
    VVar8.x = (float)method_00;
    VVar8 = (Vector3)CONCAT84(uVar11,VVar8.x);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                       ((Vector3 *)&stack0xffffffe4,VVar8,fVar5,(MethodInfo *)0x0);
    fVar7 = pVVar2->y;
    fVar5 = pVVar2->z;
    (this_00->fields).velocityEstimate.x = pVVar2->x;
    (this_00->fields).velocityEstimate.y = fVar7;
    (this_00->fields).velocityEstimate.z = fVar5;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      fVar5 = pVVar2->y;
      unique0x00017200 = pVVar2->z;
      (this_00->fields).prevPos.x = pVVar2->x;
      (this_00->fields).prevPos.y = fVar5;
      (this_00->fields).prevPos.z = unique0x00017200;
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* AvatarRemoteMovementCalculator() */

void Assembly-CSharp.dll::AvatarRemoteMovementCalculator::AvatarRemoteMovementCalculator__ctor
               (AvatarRemoteMovementCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).prevPos.x = pVVar1->x;
  (this->fields).prevPos.y = fVar3;
  (this->fields).prevPos.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).velocityEstimate.x = pVVar1->x;
  (this->fields).velocityEstimate.y = fVar3;
  (this->fields).velocityEstimate.z = fVar4;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

