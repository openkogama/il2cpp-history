
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single GetYaw() */

float Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYaw
                (GhostEye_IdleBase *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?((this->fields).wrappedTime);
  return fVar1 * (this->fields).radiusYaw;
}


/* Quaternion GetYawRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
          (Quaternion *__return_storage_ptr__,GhostEye_IdleBase *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?((this->fields).wrappedTime);
  fVar2 = (this->fields).radiusYaw;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pQVar10 = (Quaternion *)(*pcVar8)();
    return pQVar10;
  }
  pcRam_? = pcVar8;
  (*pcRam_?)(fVar1 * fVar2,&uStack_4,&uStack_6);
  __return_storage_ptr__->x = (float)(undefined4)uStack_6;
  __return_storage_ptr__->y = (float)uStack_6._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_7;
  __return_storage_ptr__->w = (float)uStack_7._4_4_;
  return __return_storage_ptr__;
}


/* Void UpdateWrappedTime(Single) */

void Assembly-CSharp.dll::GhostEye+IdleBase::GhostEye_IdleBase_UpdateWrappedTime
               (GhostEye_IdleBase *this,float deltaTime,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = deltaTime * (this->fields).direction * (this->fields).rotatationPrSecond * _UNK_?
          + (this->fields).wrappedTime;
  bVar4 = _UNK_? <= fVar3;
  (this->fields).wrappedTime = fVar3;
  if (bVar4) {
    do {
      fVar3 = fVar3 + fVar1;
    } while (fVar2 <= fVar3);
    (this->fields).wrappedTime = fVar3;
  }
  pfVar5 = &(this->fields).wrappedTime;
  if (*pfVar5 <= fVar1 && fVar1 != *pfVar5) {
    fVar3 = (this->fields).wrappedTime;
    do {
      fVar3 = fVar3 + fVar2;
    } while (fVar3 < fVar1);
    (this->fields).wrappedTime = fVar3;
  }
  return;
}

