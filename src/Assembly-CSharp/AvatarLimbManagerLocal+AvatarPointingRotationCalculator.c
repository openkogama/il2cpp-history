
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
          (AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *pointingDirection,
          MethodInfo *method)

{
  (__return_storage_ptr__->YawRotation).x = 0.0;
  (__return_storage_ptr__->YawRotation).y = 0.0;
  (__return_storage_ptr__->YawRotation).z = 0.0;
  (__return_storage_ptr__->YawRotation).w = 0.0;
  (__return_storage_ptr__->PitchRotation).x = 0.0;
  (__return_storage_ptr__->PitchRotation).y = 0.0;
  (__return_storage_ptr__->PitchRotation).z = 0.0;
  (__return_storage_ptr__->PitchRotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->ShouldPoint = 0;
  auStack_1._0_4_ = pointingDirection->x;
  auStack_1._4_4_ = pointingDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,pointingDirection->z);
  fVar3 = MathFunctions::MathFunctions_SignedYawFromLocalDirection
                    ((Vector3 *)auStack_1,(MethodInfo *)0x0);
  fVar4 = _UNK_?;
  if (((((_UNK_? <= fVar3) &&
        (fVar4 = fVar3, fVar5 = _UNK_?, _UNK_? < fVar3)) ||
       (fVar5 = fVar4, _UNK_? <= fVar4)) ||
      (fVar4 = (this->fields).previousYawRotation, fVar4 <= _UNK_?)) &&
     ((fVar4 = fVar5, _UNK_? < fVar4 &&
      ((this->fields).previousYawRotation <= _UNK_? &&
       _UNK_? != (this->fields).previousYawRotation)))) {
    fVar4 = (this->fields).previousYawRotation;
  }
  bVar6 = cRam_? == '\0';
  (this->fields).previousYawRotation = fVar4;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_1._0_4_ = (pVVar7->upVector).x;
  auStack_1._4_4_ = (pVVar7->upVector).y;
  uStack_2 = CONCAT44(uStack_2._4_4_,(pVVar7->upVector).z);
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    pAVar12 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(*pcVar10)();
    return pAVar12;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(fVar4,auStack_1,&uStack_8);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = pointingDirection->x;
  auStack_1._4_4_ = pointingDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,pointingDirection->z);
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_13._0_4_ = (pVVar7->upVector).x;
  uStack_13._4_4_ = (pVVar7->upVector).y;
  fStack_14 = (pVVar7->upVector).z;
  fVar3 = (float)FUN_?(&uStack_13,auStack_1);
  fVar3 = fVar3 - _UNK_?;
  fVar4 = _UNK_?;
  if ((_UNK_? <= fVar3) && (fVar4 = fVar3, _UNK_? < fVar3)) {
    fVar4 = _UNK_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_13._0_4_ = (pVVar7->rightVector).x;
  uStack_13._4_4_ = (pVVar7->rightVector).y;
  fStack_14 = (pVVar7->rightVector).z;
  auStack_1._0_4_ = 0.0;
  auStack_1._4_4_ = 0.0;
  uStack_2 = 0;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    pAVar12 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(*pcVar10)();
    return pAVar12;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(fVar4,&uStack_13,auStack_1);
  (__return_storage_ptr__->YawRotation).x = (float)(undefined4)uStack_8;
  (__return_storage_ptr__->YawRotation).y = (float)uStack_8._4_4_;
  (__return_storage_ptr__->YawRotation).z = (float)(undefined4)uStack_9;
  (__return_storage_ptr__->YawRotation).w = (float)uStack_9._4_4_;
  __return_storage_ptr__->ShouldPoint = 1;
  (__return_storage_ptr__->PitchRotation).x = (float)auStack_1._0_4_;
  (__return_storage_ptr__->PitchRotation).y = (float)auStack_1._4_4_;
  (__return_storage_ptr__->PitchRotation).z = (float)(undefined4)uStack_2;
  (__return_storage_ptr__->PitchRotation).w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = localDirection->x;
  uStack_1._4_4_ = localDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,localDirection->z);
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_1);
  fVar6 = fVar6 - _UNK_?;
  fVar7 = _UNK_?;
  if ((_UNK_? <= fVar6) && (fVar7 = fVar6, _UNK_? < fVar6)) {
    fVar7 = _UNK_?;
  }
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
  uStack_1 = 0;
  uStack_2 = 0;
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
  (*pcRam_?)(fVar7,&uStack_4,&uStack_1);
  __return_storage_ptr__->x = (float)(undefined4)uStack_1;
  __return_storage_ptr__->y = (float)uStack_1._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_2;
  __return_storage_ptr__->w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *localDirection,
          MethodInfo *method)

{
  VStack_1.x = localDirection->x;
  VStack_1.y = localDirection->y;
  VStack_1.z = localDirection->z;
  fVar2 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(&VStack_1,(MethodInfo *)0x0);
  fVar3 = _UNK_?;
  if (((((_UNK_? <= fVar2) &&
        (fVar3 = fVar2, fVar4 = _UNK_?, _UNK_? < fVar2)) ||
       (fVar4 = fVar3, _UNK_? <= fVar3)) ||
      (fVar3 = (this->fields).previousYawRotation, fVar3 <= _UNK_?)) &&
     ((fVar3 = fVar4, _UNK_? < fVar3 &&
      ((this->fields).previousYawRotation <= _UNK_? &&
       _UNK_? != (this->fields).previousYawRotation)))) {
    fVar3 = (this->fields).previousYawRotation;
  }
  bVar5 = cRam_? == '\0';
  (this->fields).previousYawRotation = fVar3;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_1.x = (pVVar6->upVector).x;
  VStack_1.y = (pVVar6->upVector).y;
  VStack_1.z = (pVVar6->upVector).z;
  uStack_7 = 0;
  uStack_8 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    pQVar11 = (Quaternion *)(*pcVar9)();
    return pQVar11;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(fVar3,&VStack_1,&uStack_7);
  __return_storage_ptr__->x = (float)(undefined4)uStack_7;
  __return_storage_ptr__->y = (float)uStack_7._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_8;
  __return_storage_ptr__->w = (float)uStack_8._4_4_;
  return __return_storage_ptr__;
}

