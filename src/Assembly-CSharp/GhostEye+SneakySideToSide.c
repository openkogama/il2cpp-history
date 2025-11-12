
/* Quaternion GetSneakySideToSideRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+SneakySideToSide::
GhostEye_SneakySideToSide_GetSneakySideToSideRotation
          (Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar1)();
    return pQVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar5 = _UNK_?;
  fVar6 = _UNK_?;
  fVar4 = fVar4 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * _UNK_?
          + (this->fields)._.wrappedTime;
  bVar7 = _UNK_? <= fVar4;
  (this->fields)._.wrappedTime = fVar4;
  if (bVar7) {
    do {
      fVar4 = fVar4 + fVar5;
    } while (fVar6 <= fVar4);
    (this->fields)._.wrappedTime = fVar4;
  }
  pfVar8 = &(this->fields)._.wrappedTime;
  if (*pfVar8 <= fVar5 && fVar5 != *pfVar8) {
    fVar4 = (this->fields)._.wrappedTime;
    do {
      fVar4 = fVar4 + fVar6;
    } while (fVar4 < fVar5);
    (this->fields)._.wrappedTime = fVar4;
  }
  pQVar3 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
                     (&QStack_9,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar6 = pQVar3->y;
  fVar5 = pQVar3->z;
  fVar4 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar6;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* GhostEye+SneakySideToSide() */

void Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide__ctor
               (GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  (this->fields)._.rotatationPrSecond = 0.5;
  (this->fields)._.direction = 1.0;
  return;
}

