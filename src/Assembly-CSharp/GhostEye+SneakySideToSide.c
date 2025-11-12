
/* Quaternion GetSneakySideToSideRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide_GetSneakySideToSideRotation(Quaternion *__return_storage_ptr__,GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar1)();
    return pQVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar4 = fVar4 * (this->fields)._.direction * (this->fields)._.rotatationPrSecond * 6.2831855 + (this->fields)._.wrappedTime;
  (this->fields)._.wrappedTime = fVar4;
  if (6.2831855 <= fVar4) {
    do {
      fVar4 = fVar4 + -6.2831855;
    } while (6.2831855 <= fVar4);
    (this->fields)._.wrappedTime = fVar4;
  }
  pfVar5 = &(this->fields)._.wrappedTime;
  if (*pfVar5 <= -6.2831855 && *pfVar5 != -6.2831855) {
    fVar4 = (this->fields)._.wrappedTime;
    do {
      fVar4 = fVar4 + 6.2831855;
    } while (fVar4 < -6.2831855);
    (this->fields)._.wrappedTime = fVar4;
  }
  pQVar3 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation(&QStack_6,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar4 = pQVar3->y;
  fVar7 = pQVar3->z;
  fVar8 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar7;
  __return_storage_ptr__->w = fVar8;
  return __return_storage_ptr__;
}


/* GhostEye+SneakySideToSide() */

void Assembly-CSharp.dll::GhostEye+SneakySideToSide::GhostEye_SneakySideToSide__ctor(GhostEye_SneakySideToSide *this,MethodInfo *method)

{
  (this->fields)._.rotatationPrSecond = 0.5;
  (this->fields)._.direction = 1.0;
  return;
}

