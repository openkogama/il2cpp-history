
/* AvatarLimbManagerLocal+PointingRotationCalculationResult CalculateRotation(Vector3) */

AvatarLimbManagerLocal_PointingRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_CalculateRotation
          (AvatarLimbManagerLocal_PointingRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 pointingDirection,
          MethodInfo *method)

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
  pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
            MathFunctions::MathFunctions_SignedYawFromLocalDirection
                      (pointingDirection,(MethodInfo *)0x0);
  pAVar4 = _UNK_?;
  if (((float)pAVar3 < (float)_UNK_?) ||
     (pAVar4 = pAVar3, pAVar5 = _UNK_?, (float)pAVar3 <= (float)_UNK_?)) {
    if (((float)pAVar4 < _UNK_?) &&
       (__return_storage_ptr__ =
             (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
             (this->fields).previousYawRotation, _UNK_? < (float)__return_storage_ptr__))
    goto code_?;
    pAVar5 = pAVar4;
    if (_UNK_? < (float)pAVar4) goto code_?;
  }
  else {
code_?:
    __return_storage_ptr__ =
         (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
         (this->fields).previousYawRotation;
    pAVar4 = pAVar5;
    if ((float)__return_storage_ptr__ < _UNK_?) goto code_?;
  }
  __return_storage_ptr__ = pAVar4;
code_?:
  (this->fields).previousYawRotation = (float)__return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar6 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,(float)__return_storage_ptr__,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  angle = (undefined *)
          MVGroundState::MVGroundState_GetGradientAngle(pointingDirection,(MethodInfo *)pQVar6->w);
  puVar7 = _UNK_?;
  if (((float)angle < (float)_UNK_?) ||
     (puVar7 = _UNK_?, (float)_UNK_? < (float)angle)) {
    angle = puVar7;
  }
  if (cRam_? == '\0') {
    angle = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar8->rightVector).x;
  uVar10 = (pVVar8->rightVector).y;
  __return_storage_ptr__ =
       (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(pVVar8->rightVector).z;
  fVar11 = (float)uVar10;
  pQVar6 = (Quaternion *)&stack0xffffffdc;
  puVar7 = &UNK_?;
  axis.x = (float)uVar9;
  axis = (Vector3)CONCAT84(uVar12,axis.x);
  pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (pQVar6,(float)angle,axis,(MethodInfo *)0x0);
  pAVar1->ShouldPoint = 1;
  (pAVar1->YawRotation).x = fVar2;
  (pAVar1->YawRotation).y = (float)puVar7;
  (pAVar1->YawRotation).z = (float)pQVar6;
  (pAVar1->YawRotation).w = (float)angle;
  fVar2 = pQVar13->y;
  fVar14 = pQVar13->z;
  fVar15 = pQVar13->w;
  (pAVar1->PitchRotation).x = pQVar13->x;
  (pAVar1->PitchRotation).y = fVar2;
  (pAVar1->PitchRotation).z = fVar14;
  (pAVar1->PitchRotation).w = fVar15;
  return pAVar1;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  localDirection.z = MVGroundState::MVGroundState_GetGradientAngle(localDirection,(MethodInfo *)0x0)
  ;
  fVar1 = _UNK_?;
  if ((localDirection.z < _UNK_?) ||
     (fVar1 = _UNK_?, _UNK_? < localDirection.z)) {
    localDirection.z = fVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffec,localDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
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

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarPointingRotationCalculator::
AvatarLimbManagerLocal_AvatarPointingRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarPointingRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  pAVar1 = this;
  pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
           MathFunctions::MathFunctions_SignedYawFromLocalDirection
                     (localDirection,(MethodInfo *)0x0);
  pAVar3 = _UNK_?;
  if (((float)pAVar2 < (float)_UNK_?) ||
     (this = _UNK_?, pAVar3 = pAVar2, (float)pAVar2 <= (float)_UNK_?)) {
    if (((float)pAVar3 < _UNK_?) &&
       (pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
                 (pAVar1->fields).previousYawRotation, _UNK_? < (float)pAVar2))
    goto code_?;
    this = pAVar3;
    if (_UNK_? < (float)pAVar3) goto code_?;
  }
  else {
code_?:
    pAVar2 = (AvatarLimbManagerLocal_AvatarPointingRotationCalculator *)
             (pAVar1->fields).previousYawRotation;
    if ((float)pAVar2 < _UNK_?) goto code_?;
  }
  pAVar2 = this;
code_?:
  this = pAVar2;
  (pAVar1->fields).previousYawRotation = (float)this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,(float)this,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar5 = pQVar4->y;
  fVar6 = pQVar4->z;
  fVar7 = pQVar4->w;
  __return_storage_ptr__->x = pQVar4->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  __return_storage_ptr__->w = fVar7;
  return __return_storage_ptr__;
}

