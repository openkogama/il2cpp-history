
/* Quaternion GetEyeRollRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

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
  fVar6 = (float)FUN_?((this->fields)._.wrappedTime);
  fVar4 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_8.x = (pVVar7->rightVector).x;
  QStack_8.y = (pVVar7->rightVector).y;
  QStack_8.z = (pVVar7->rightVector).z;
  uStack_9 = 0;
  uStack_10 = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar1)();
    return pQVar3;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(fVar6 * fVar4,&QStack_8);
  pQVar3 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation(&QStack_8,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar4 = pQVar3->x;
  fVar6 = pQVar3->y;
  fVar11 = pQVar3->z;
  fVar12 = pQVar3->w;
  __return_storage_ptr__->x = ((float)uStack_9 * fVar12 + uStack_10._4_4_ * fVar4 + (float)uStack_10 * fVar6) - uStack_9._4_4_ * fVar11;
  __return_storage_ptr__->y = (uStack_10._4_4_ * fVar6 + uStack_9._4_4_ * fVar12 + (float)uStack_9 * fVar11) - (float)uStack_10 * fVar4;
  __return_storage_ptr__->z = (uStack_10._4_4_ * fVar11 + (float)uStack_10 * fVar12 + uStack_9._4_4_ * fVar4) - (float)uStack_9 * fVar6;
  __return_storage_ptr__->w = ((uStack_10._4_4_ * fVar12 - (float)uStack_9 * fVar4) - uStack_9._4_4_ * fVar6) - (float)uStack_10 * fVar11;
  return __return_storage_ptr__;
}


/* Single GetPitch() */

float Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitch(GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?((this->fields)._.wrappedTime);
  return fVar1 * (this->fields)._.radiusPitch;
}


/* Quaternion GetPitchRotation() */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitchRotation(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?((this->fields)._.wrappedTime);
  fVar2 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->rightVector).x;
  uStack_4._4_4_ = (pVVar3->rightVector).y;
  fStack_5 = (pVVar3->rightVector).z;
  uStack_6 = 0;
  uStack_7 = 0;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
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


/* Quaternion Update(GhostEye) */

Quaternion * Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_Update(Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,GhostEye *ghostEye,MethodInfo *method)

{
  pQVar1 = GhostEye_RandomEyeRoll_GetEyeRollRotation(&QStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  __return_storage_ptr__->x = pQVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  __return_storage_ptr__->w = fVar5;
  return __return_storage_ptr__;
}

