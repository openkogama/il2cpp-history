
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
  __return_storage_ptr__ =
       (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
       MathFunctions::MathFunctions_SignedYawFromLocalDirection(pointingDirection,(MethodInfo *)0x0)
  ;
  if ((float)__return_storage_ptr__ < (float)_UNK_?) {
    __return_storage_ptr__ = _UNK_?;
  }
  else if ((float)_UNK_? < (float)__return_storage_ptr__) {
    __return_storage_ptr__ = _UNK_?;
  }
  if ((((_UNK_? <= (float)__return_storage_ptr__) ||
       (pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
                 (this->fields).previousYawRotation, (float)pAVar3 <= _UNK_?)) &&
      (pAVar3 = __return_storage_ptr__, _UNK_? < (float)__return_storage_ptr__)) &&
     ((this->fields).previousYawRotation <= _UNK_? &&
      _UNK_? != (this->fields).previousYawRotation)) {
    pAVar3 = (AvatarLimbManagerLocal_PointingRotationCalculationResult *)
             (this->fields).previousYawRotation;
  }
  __return_storage_ptr__ = pAVar3;
  (this->fields).previousYawRotation = (float)__return_storage_ptr__;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,(float)__return_storage_ptr__,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  angle = (undefined *)
          MVGroundState::MVGroundState_GetGradientAngle(pointingDirection,(MethodInfo *)pQVar4->w);
  puVar5 = _UNK_?;
  if (((float)angle < (float)_UNK_?) ||
     (puVar5 = _UNK_?, (float)_UNK_? < (float)angle)) {
    angle = puVar5;
  }
  if (cRam_? == '\0') {
    angle = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->rightVector).x;
  uVar8 = (pVVar6->rightVector).y;
  __return_storage_ptr__ =
       (AvatarLimbManagerLocal_PointingRotationCalculationResult *)(pVVar6->rightVector).z;
  fVar9 = (float)uVar8;
  pQVar4 = (Quaternion *)&stack0xffffffdc;
  puVar5 = &UNK_?;
  axis.x = (float)uVar7;
  axis = (Vector3)CONCAT84(uVar10,axis.x);
  pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     (pQVar4,(float)angle,axis,(MethodInfo *)0x0);
  pAVar1->ShouldPoint = 1;
  (pAVar1->YawRotation).x = fVar2;
  (pAVar1->YawRotation).y = (float)puVar5;
  (pAVar1->YawRotation).z = (float)pQVar4;
  (pAVar1->YawRotation).w = (float)angle;
  fVar2 = pQVar11->y;
  fVar12 = pQVar11->z;
  fVar13 = pQVar11->w;
  (pAVar1->PitchRotation).x = pQVar11->x;
  (pAVar1->PitchRotation).y = fVar2;
  (pAVar1->PitchRotation).z = fVar12;
  (pAVar1->PitchRotation).w = fVar13;
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
  localDirection.z =
       MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if (localDirection.z < _UNK_?) {
    localDirection.z = _UNK_?;
  }
  else if (_UNK_? < localDirection.z) {
    localDirection.z = _UNK_?;
  }
  if ((((_UNK_? <= localDirection.z) ||
       (fVar1 = (this->fields).previousYawRotation, fVar1 <= _UNK_?)) &&
      (fVar1 = localDirection.z, _UNK_? < localDirection.z)) &&
     ((this->fields).previousYawRotation <= _UNK_? &&
      _UNK_? != (this->fields).previousYawRotation)) {
    fVar1 = (this->fields).previousYawRotation;
  }
  localDirection.z = fVar1;
  (this->fields).previousYawRotation = localDirection.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,localDirection.z,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar1 = pQVar2->y;
  fVar3 = pQVar2->z;
  fVar4 = pQVar2->w;
  __return_storage_ptr__->x = pQVar2->x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar3;
  __return_storage_ptr__->w = fVar4;
  return __return_storage_ptr__;
}

