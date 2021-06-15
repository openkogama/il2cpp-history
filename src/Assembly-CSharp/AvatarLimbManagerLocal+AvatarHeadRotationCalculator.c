
/* AvatarLimbManagerLocal+HeadRotationCalculationResult CalculateHeadRotation(Vector3) */

AvatarLimbManagerLocal_HeadRotationCalculationResult *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_CalculateHeadRotation
          (AvatarLimbManagerLocal_HeadRotationCalculationResult *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localLookDirection,
          MethodInfo *method)

{
  pAVar1 = this;
  (this->fields).shouldLean = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = localLookDirection.z;
  localDirection.y = localLookDirection.y;
  localDirection.x = localLookDirection.x;
  localDirection.z = localLookDirection.z;
  pAVar3 = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)
           MathFunctions::MathFunctions_SignedYawFromLocalDirection
                     (localDirection,(MethodInfo *)0x0);
  pMVar4 = (Mathf__Class *)0x0;
  if (((float)pAVar3 < _UNK_?) || (_UNK_? < (float)pAVar3)) {
    (this->fields).shouldLean = 0;
    this = (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *)0x0;
    pAVar3 = this;
  }
  this = pAVar3;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                     ((float)this,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
            ((Quaternion *)&puStack_7,fVar5,*pVVar6,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  localDirection_00.y = localLookDirection.y;
  localDirection_00.x = localLookDirection.x;
  localDirection_00.z = fVar2;
  pMVar8 = (Mathf__Class *)
            MathFunctions::MathFunctions_PitchFromLocalDirection
                      (localDirection_00,(MethodInfo *)0x0);
  value = pMVar8;
  if ((0.0 < (float)pMVar8) &&
     (((float)pMVar8 <= 0.0 || (value = pMVar4, _UNK_? <= (float)pMVar8)))) {
    value = (Mathf__Class *)((float)pMVar8 - _UNK_?);
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    value = TypeInfo__UnityEngine__Mathf;
    func_?();
  }
  fVar5 = 45.0;
  fVar2 = -45.0;
  puVar9 = &UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
            ((float)value,-45.0,45.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     (&localLookDirection,(MethodInfo *)0x0);
  uVar10 = pVVar6->x;
  angle = pVVar6->y;
  localLookDirection.x = pVVar6->z;
  localLookDirection.y = 0.0;
  pQVar11 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&puStack_7,(float)angle,*pVVar6,(MethodInfo *)0x0);
  fVar12 = pQVar11->x;
  fVar13 = pQVar11->y;
  fVar14 = pQVar11->z;
  fVar15 = pQVar11->w;
  uStack_16 = (uint)(pAVar1->fields).shouldLean;
  ((Quaternion *)uVar10)->x = (float)puVar9;
  ((Quaternion *)uVar10)->y = (float)value;
  ((Quaternion *)uVar10)->z = fVar2;
  ((Quaternion *)uVar10)->w = fVar5;
  ((Quaternion *)(uVar10 + 0x10))->x = fVar12;
  ((Quaternion *)(uVar10 + 0x10))->y = fVar13;
  ((Quaternion *)(uVar10 + 0x10))->z = fVar14;
  ((Quaternion *)(uVar10 + 0x10))->w = fVar15;
  *(uint *)(uVar10 + 0x20) = uStack_16;
  return (AvatarLimbManagerLocal_HeadRotationCalculationResult *)uVar10;
}


/* Quaternion GetClampedPitchRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedPitchRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = MathFunctions::MathFunctions_PitchFromLocalDirection(localDirection,(MethodInfo *)0x0);
  localDirection.z = 0.0;
  fVar2 = fVar1;
  if ((0.0 < fVar1) && ((fVar1 <= 0.0 || (fVar2 = localDirection.z, _UNK_? <= fVar1)))) {
    fVar2 = fVar1 - _UNK_?;
  }
  localDirection.z = fVar2;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (localDirection.z,-45.0,45.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_right
                     ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
  uVar4 = pVVar3->y;
  pQVar5 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffe8,fVar2,*pVVar3,(MethodInfo *)0x0);
  fVar2 = pQVar5->y;
  fVar1 = pQVar5->z;
  fVar6 = pQVar5->w;
  *(float *)uVar4 = pQVar5->x;
  *(float *)(uVar4 + 4) = fVar2;
  *(float *)(uVar4 + 8) = fVar1;
  *(float *)(uVar4 + 0xc) = fVar6;
  return (Quaternion *)uVar4;
}


/* Quaternion GetClampedYawRotation(Vector3) */

Quaternion *
Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
AvatarLimbManagerLocal_AvatarHeadRotationCalculator_GetClampedYawRotation
          (Quaternion *__return_storage_ptr__,
          AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,Vector3 localDirection,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  localDirection.z =
       MathFunctions::MathFunctions_SignedYawFromLocalDirection(localDirection,(MethodInfo *)0x0);
  if ((localDirection.z < _UNK_?) || (_UNK_? < localDirection.z)) {
    localDirection.z = 0.0;
    (this->fields).shouldLean = 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (localDirection.z,-90.0,90.0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  uVar3 = pVVar2->x;
  pQVar4 = MathFunctions::MathFunctions_QuaternionFromAngleAndAxis
                     ((Quaternion *)&stack0xffffffec,fVar1,*pVVar2,(MethodInfo *)0x0);
  fVar1 = pQVar4->y;
  fVar5 = pQVar4->z;
  fVar6 = pQVar4->w;
  *(float *)uVar3 = pQVar4->x;
  *(float *)(uVar3 + 4) = fVar1;
  *(float *)(uVar3 + 8) = fVar5;
  *(float *)(uVar3 + 0xc) = fVar6;
  return (Quaternion *)uVar3;
}


/* Single HandleCameraPitchOffset(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleCameraPitchOffset
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float pitch,
                MethodInfo *method)

{
  if (pitch <= 0.0) {
    return pitch;
  }
  if ((0.0 < pitch) && (pitch < _UNK_?)) {
    return 0.0;
  }
  return pitch - _UNK_?;
}


/* Single HandleYawDeadZone(Single) */

float Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarHeadRotationCalculator::
      AvatarLimbManagerLocal_AvatarHeadRotationCalculator_HandleYawDeadZone
                (AvatarLimbManagerLocal_AvatarHeadRotationCalculator *this,float yaw,
                MethodInfo *method)

{
  if ((yaw < _UNK_?) || (_UNK_? < yaw)) {
    yaw = 0.0;
    (this->fields).shouldLean = 0;
  }
  return yaw;
}

