
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_Enter
               (GhostEye_IdleBase *this,GhostEye *ghostEye,MethodInfo *method)

{
  if (ghostEye != (GhostEye *)0x0) {
    (this->fields).radiusPitch = (ghostEye->fields).maxPitch;
    (this->fields).radiusYaw = (ghostEye->fields).maxYaw;
    (this->fields).direction = 1.0;
    (this->fields).wrappedTime = 0.0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single GetYaw() */

float Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYaw
                (GhostEye_IdleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).radiusYaw;
  fVar2 = (this->fields).wrappedTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar3 = (double)fVar2;
  func_?();
  return (float)dVar3 * fVar1;
}


/* Quaternion GetYawRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_IdleBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1._4_4_ = (this->fields).radiusYaw;
  fVar2 = (this->fields).wrappedTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  dVar3 = (double)fVar2;
  func_?();
  fVar2 = (float)dVar3 * uStack_1._4_4_;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_5,(MethodInfo *)0x0);
  uStack_1._0_4_ = pVVar4->x;
  uStack_1._4_4_ = pVVar4->y;
  fVar6 = pVVar4->z;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  axis.z = fVar6;
  axis.x = (float)(undefined4)uStack_1;
  axis.y = uStack_1._4_4_;
  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffe4,fVar2,axis,(MethodInfo *)0x0);
  fVar2 = pQVar7->y;
  fVar6 = pQVar7->z;
  fVar8 = pQVar7->w;
  __return_storage_ptr__->x = pQVar7->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar6;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_Update
          (Quaternion *__return_storage_ptr__,GhostEye_IdleBase *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     (&QStack_2,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}


/* Void UpdateWrappedTime(Single) */

void Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_UpdateWrappedTime
               (GhostEye_IdleBase *this,float deltaTime,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (this->fields).direction * deltaTime * (this->fields).rotatationPrSecond * _UNK_? +
          (this->fields).wrappedTime;
  (this->fields).wrappedTime = fVar2;
  fVar3 = _UNK_?;
  while (_UNK_? = fVar3, fVar1 <= fVar2) {
    fVar2 = (this->fields).wrappedTime - fVar1;
    (this->fields).wrappedTime = fVar2;
    fVar3 = _UNK_?;
  }
  while (fVar2 < fVar3) {
    fVar2 = (this->fields).wrappedTime + fVar1;
    (this->fields).wrappedTime = fVar2;
  }
  return;
}

