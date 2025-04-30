
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation(AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 pointingDirection,MethodInfo *method)

{
  pAVar1 = __return_storage_ptr__;
  (__return_storage_ptr__->YawRotation).x = 0.0;
  (__return_storage_ptr__->YawRotation).y = 0.0;
  (__return_storage_ptr__->YawRotation).z = 0.0;
  (__return_storage_ptr__->YawRotation).w = 0.0;
  (__return_storage_ptr__->PitchRotation).x = 0.0;
  (__return_storage_ptr__->PitchRotation).y = 0.0;
  (__return_storage_ptr__->PitchRotation).z = 0.0;
  (__return_storage_ptr__->PitchRotation).w = 0.0;
  *(undefined4 *)&__return_storage_ptr__->ShouldPoint = 0;
  fVar2 = pointingDirection.x;
  pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)MathFunctions::MathFunctions_SignedYawFromLocalDirection(pointingDirection,(MethodInfo *)0x0);
  pAVar4 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)0xc2a00000;
  if (((float)pAVar3 < -80.0) || (__return_storage_ptr__ = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)0x43020000, pAVar4 = pAVar3, (float)pAVar3 <= 130.0)) {
    if (((float)pAVar4 < -79.5) && (pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(this->fields).previousYawRotation, 129.5 < (float)pAVar3)) goto code_?;
    __return_storage_ptr__ = pAVar4;
    if (129.5 < (float)pAVar4) goto code_?;
  }
  else {
code_?:
    pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(this->fields).previousYawRotation;
    if ((float)pAVar3 < -79.5) goto code_?;
  }
  pAVar3 = __return_storage_ptr__;
code_?:
  __return_storage_ptr__ = pAVar3;
  (this->fields).previousYawRotation = (float)__return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar5 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis((Quaternion *)&stack0xffffffec,(float)__return_storage_ptr__,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  angle = (undefined *)MVGroundState::MVGroundState_GetGradientAngle(pointingDirection,(MethodInfo *)pQVar5->w);
  puVar6 = (undefined *)0xc2b40000;
  if (((float)angle < -90.0) || (puVar6 = (undefined *)0x42b40000, 90.0 < (float)angle)) {
    angle = puVar6;
  }
  if (cRam_? == '\0') {
    angle = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar7->rightVector).x;
  uVar9 = (pVVar7->rightVector).y;
  __return_storage_ptr__ = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(pVVar7->rightVector).z;
  fVar10 = (float)uVar9;
  pQVar5 = (Quaternion *)&stack0xffffffdc;
  puVar6 = &UNK_?;
  axis.x = (float)uVar8;
  axis = (Vector3)CONCAT84(uVar11,axis.x);
  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis(pQVar5,(float)angle,axis,(MethodInfo *)0x0);
  pAVar1->ShouldPoint = 1;
  (pAVar1->YawRotation).x = fVar2;
  (pAVar1->YawRotation).y = (float)puVar6;
  (pAVar1->YawRotation).z = (float)pQVar5;
  (pAVar1->YawRotation).w = (float)angle;
  fVar2 = pQVar12->y;
  fVar13 = pQVar12->z;
  fVar14 = pQVar12->w;
  (pAVar1->PitchRotation).x = pQVar12->x;
  (pAVar1->PitchRotation).y = fVar2;
  (pAVar1->PitchRotation).z = fVar13;
  (pAVar1->PitchRotation).w = fVar14;
  return pAVar1;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedPitchRotation(Quaternion *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,MethodInfo *method)

{
  localDirection.z = MVGroundState::MVGroundState_GetGradientAngle(localDirection,(MethodInfo *)0x0);
  fVar1 = -90.0;
  if ((localDirection.z < -90.0) || (fVar1 = 90.0, 90.0 < localDirection.z)) {
    localDirection.z = fVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis((Quaternion *)&stack0xffffffec,localDirection.z,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion * Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation(Quaternion *__return_storage_ptr__,AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,MethodInfo *method)

{
  pAVar1 = this;
  pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0);
  pAVar3 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0xc2a00000;
  if (((float)pAVar2 < -80.0) || (this = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)0x43020000, pAVar3 = pAVar2, (float)pAVar2 <= 130.0)) {
    if (((float)pAVar3 < -79.5) && (pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)(pAVar1->fields).previousYawRotation, 129.5 < (float)pAVar2)) goto code_?;
    this = pAVar3;
    if (129.5 < (float)pAVar3) goto code_?;
  }
  else {
code_?:
    pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)(pAVar1->fields).previousYawRotation;
    if ((float)pAVar2 < -79.5) goto code_?;
  }
  pAVar2 = this;
code_?:
  this = pAVar2;
  (pAVar1->fields).previousYawRotation = (float)this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis((Quaternion *)&stack0xffffffec,(float)this,TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar5 = pQVar4->y;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  __return_storage_ptr__->x = pQVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  __return_storage_ptr__->w = fVar7;
  return __return_storage_ptr__;
}

