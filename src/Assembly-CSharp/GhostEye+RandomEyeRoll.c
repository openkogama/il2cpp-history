
/* Quaternion GetEyeRollRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetEyeRollRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

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
  fVar5 = (float)FUN_?((this->fields)._.wrappedTime);
  fVar6 = (this->fields)._.radiusPitch;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  QStack_10.x = (pVVar9->rightVector).x;
  QStack_10.y = (pVVar9->rightVector).y;
  QStack_10.z = (pVVar9->rightVector).z;
  uStack_11 = 0;
  uStack_12 = 0;
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
  (*pcRam_?)(fVar5 * fVar6,&QStack_10);
  pQVar3 = GhostEye+IdleBase::GhostEye_IdleBase_GetYawRotation
                     (&QStack_10,(GhostEye_IdleBase *)this,(MethodInfo *)0x0);
  fVar6 = pQVar3->x;
  fVar5 = pQVar3->y;
  fVar4 = pQVar3->z;
  fVar13 = pQVar3->w;
  __return_storage_ptr__->x =
       ((float)uStack_11 * fVar13 + uStack_12._4_4_ * fVar6 + (float)uStack_12 * fVar5) -
       uStack_11._4_4_ * fVar4;
  __return_storage_ptr__->y =
       (uStack_12._4_4_ * fVar5 + uStack_11._4_4_ * fVar13 + (float)uStack_11 * fVar4) -
       (float)uStack_12 * fVar6;
  __return_storage_ptr__->z =
       (uStack_12._4_4_ * fVar4 + (float)uStack_12 * fVar13 + uStack_11._4_4_ * fVar6) -
       (float)uStack_11 * fVar5;
  __return_storage_ptr__->w =
       ((uStack_12._4_4_ * fVar13 - (float)uStack_11 * fVar6) - uStack_11._4_4_ * fVar5) -
       (float)uStack_12 * fVar4;
  return __return_storage_ptr__;
}


/* Single GetPitch() */

float Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitch
                (GhostEye_RandomEyeRoll *this,MethodInfo *method)

{
  fVar1 = (float)FUN_?((this->fields)._.wrappedTime);
  return fVar1 * (this->fields)._.radiusPitch;
}


/* Quaternion GetPitchRotation() */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_GetPitchRotation
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,MethodInfo *method)

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


/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+RandomEyeRoll::GhostEye_RandomEyeRoll_Update
          (Quaternion *__return_storage_ptr__,GhostEye_RandomEyeRoll *this,GhostEye *ghostEye,
          MethodInfo *method)

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

