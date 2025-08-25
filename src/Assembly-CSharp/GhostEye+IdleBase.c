
/* Void Enter(GhostEye) */

void Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_Enter
               (GhostEye_IdleBase *this,GhostEye *ghostEye,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (ghostEye != (GhostEye *)0x0) {
    (this->fields).radiusPitch = (ghostEye->fields).maxPitch;
    (this->fields).radiusYaw = (ghostEye->fields).maxYaw;
    (this->fields).direction = 1.0;
    (this->fields).wrappedTime = 0.0;
    return;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single GetYaw() */

float Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYaw
                (GhostEye_IdleBase *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields).wrappedTime;
  func_?();
  return (float)dVar1 * (this->fields).radiusYaw;
}


/* Quaternion GetYawRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_IdleBase *this,MethodInfo *method)

{
  dVar1 = (double)(this->fields).wrappedTime;
  func_?();
  fVar2 = (this->fields).radiusYaw;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (&QStack_4,(float)dVar1 * fVar2,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar2 = pQVar3->y;
  fVar5 = pQVar3->z;
  fVar6 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* Void UpdateWrappedTime(Single) */

void Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_UpdateWrappedTime
               (GhostEye_IdleBase *this,float deltaTime,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = deltaTime * (this->fields).direction * (this->fields).rotatationPrSecond * _UNK_? +
          (this->fields).wrappedTime;
  bVar3 = _UNK_? <= fVar2;
  (this->fields).wrappedTime = fVar2;
  if (bVar3) {
    do {
      fVar2 = fVar2 - fVar1;
    } while (fVar1 <= fVar2);
    (this->fields).wrappedTime = fVar2;
  }
  pfVar4 = &(this->fields).wrappedTime;
  if (*pfVar4 <= _UNK_? && _UNK_? != *pfVar4) {
    fVar2 = (this->fields).wrappedTime;
    do {
      fVar2 = fVar2 + fVar1;
    } while (fVar2 < _UNK_?);
    (this->fields).wrappedTime = fVar2;
  }
  return;
}

