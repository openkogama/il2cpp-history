
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation(AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *pointingDirection,MethodInfo *method)

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
  fVar3 = MathFunctions::MathFunctions_SignedYawFromLocalDirection((Vector3 *)auStack_1,(MethodInfo *)0x0);
  if (fVar3 < -80.0) {
    fVar3 = -80.0;
code_?:
    if ((fVar3 < -79.5) && (fVar4 = (this->fields).previousYawRotation, 129.5 < fVar4)) goto code_?;
  }
  else {
    if (fVar3 <= 130.0) goto code_?;
    fVar3 = 130.0;
  }
  fVar4 = fVar3;
  if ((129.5 < fVar4) && ((this->fields).previousYawRotation <= -79.5 && (this->fields).previousYawRotation != -79.5)) {
    fVar4 = (this->fields).previousYawRotation;
  }
code_?:
  bVar5 = cRam_? == '\0';
  (this->fields).previousYawRotation = fVar4;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_1._0_4_ = (pVVar6->upVector).x;
  auStack_1._4_4_ = (pVVar6->upVector).y;
  uStack_2 = CONCAT44(uStack_2._4_4_,(pVVar6->upVector).z);
  uStack_7 = 0;
  uStack_8 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    pAVar11 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(*pcVar9)();
    return pAVar11;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(fVar4,auStack_1,&uStack_7);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._0_4_ = pointingDirection->x;
  auStack_1._4_4_ = pointingDirection->y;
  uStack_2 = CONCAT44(uStack_2._4_4_,pointingDirection->z);
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar6->upVector).x;
  uStack_12._4_4_ = (pVVar6->upVector).y;
  fStack_13 = (pVVar6->upVector).z;
  fVar3 = (float)FUN_?(&uStack_12,auStack_1);
  fVar3 = fVar3 - 90.0;
  if (fVar3 < -90.0) {
    fVar3 = -90.0;
  }
  else if (90.0 < fVar3) {
    fVar3 = 90.0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar6->rightVector).x;
  uStack_12._4_4_ = (pVVar6->rightVector).y;
  fStack_13 = (pVVar6->rightVector).z;
  auStack_1._0_4_ = 0.0;
  auStack_1._4_4_ = 0.0;
  uStack_2 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    pAVar11 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(*pcVar9)();
    return pAVar11;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(fVar3,&uStack_12,auStack_1);
  (__return_storage_ptr__->YawRotation).x = (float)(undefined4)uStack_7;
  (__return_storage_ptr__->YawRotation).y = (float)uStack_7._4_4_;
  (__return_storage_ptr__->YawRotation).z = (float)(undefined4)uStack_8;
  (__return_storage_ptr__->YawRotation).w = (float)uStack_8._4_4_;
  __return_storage_ptr__->ShouldPoint = 1;
  (__return_storage_ptr__->PitchRotation).x = (float)auStack_1._0_4_;
  (__return_storage_ptr__->PitchRotation).y = (float)auStack_1._4_4_;
  (__return_storage_ptr__->PitchRotation).z = (float)(undefined4)uStack_2;
  (__return_storage_ptr__->PitchRotation).w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedPitchRotation(Quaternion *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *localDirection,MethodInfo *method)

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
  fVar6 = fVar6 - 90.0;
  if (fVar6 < -90.0) {
    fVar6 = -90.0;
  }
  else if (90.0 < fVar6) {
    fVar6 = 90.0;
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
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar6,&uStack_4,&uStack_1);
  __return_storage_ptr__->x = (float)(undefined4)uStack_1;
  __return_storage_ptr__->y = (float)uStack_1._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_2;
  __return_storage_ptr__->w = (float)uStack_2._4_4_;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation(Quaternion *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 *localDirection,MethodInfo *method)

{
  VStack_1.x = localDirection->x;
  VStack_1.y = localDirection->y;
  VStack_1.z = localDirection->z;
  fVar2 = MathFunctions::MathFunctions_SignedYawFromLocalDirection(&VStack_1,(MethodInfo *)0x0);
  if (fVar2 < -80.0) {
    fVar2 = -80.0;
code_?:
    if ((fVar2 < -79.5) && (fVar3 = (this->fields).previousYawRotation, 129.5 < fVar3)) goto code_?;
  }
  else {
    if (fVar2 <= 130.0) goto code_?;
    fVar2 = 130.0;
  }
  fVar3 = fVar2;
  if ((129.5 < fVar3) && ((this->fields).previousYawRotation <= -79.5 && (this->fields).previousYawRotation != -79.5)) {
    fVar3 = (this->fields).previousYawRotation;
  }
code_?:
  bVar4 = cRam_? == '\0';
  (this->fields).previousYawRotation = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_1.x = (pVVar5->upVector).x;
  VStack_1.y = (pVVar5->upVector).y;
  VStack_1.z = (pVVar5->upVector).z;
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
  (*pcRam_?)(fVar3,&VStack_1,&uStack_6);
  __return_storage_ptr__->x = (float)(undefined4)uStack_6;
  __return_storage_ptr__->y = (float)uStack_6._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_7;
  __return_storage_ptr__->w = (float)uStack_7._4_4_;
  return __return_storage_ptr__;
}

