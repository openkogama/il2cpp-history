
/* Void Shake(Single) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
               (MVPlaymodeCameraBase *this,float speed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).shakeFactorSpeedCurve;
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (this_00,speed,(MethodInfo *)0x0);
  fVar2 = (this->fields).shakeMaxFactor;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (this->fields).shakeOffset.x = (pVVar3->zeroVector).x;
  fVar6 = _UNK_?;
  (this->fields).shakeOffset.y = fVar4;
  (this->fields).shakeOffset.z = fVar5;
  if (fVar6 < fVar1 * fVar2) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).shakeTimeFactor;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
    fVar1 = pVVar8->x;
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       (fVar2 * 0.0,fVar1,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,method_00);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar7,(MethodInfo *)0x0);
    fVar5 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       ((float)pTVar7 * (float)method_00,pVVar8->y,(MethodInfo *)0x0);
    uVar9._0_4_ = (this->fields).shakeOffset.x;
    uVar9._4_4_ = (this->fields).shakeOffset.y;
    fVar1 = (this->fields).shakeOffset.z;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
    uVar10 = pVVar8->x;
    uVar11 = pVVar8->y;
    fVar2 = (fVar2 + fVar2) - _UNK_?;
    fVar4 = (float)uVar10 * fVar2;
    fVar6 = pVVar8->z * fVar2;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
    uVar12 = pVVar8->x;
    uVar13 = pVVar8->y;
    fVar14 = pVVar8->z;
    fVar5 = (fVar5 + fVar5) - _UNK_?;
    (this->fields).shakeOffset.x =
         (float)uVar9 + (fVar4 + (float)uVar12 * fVar5) * (float)&stack0xffffffd8;
    (this->fields).shakeOffset.y =
         SUB84(uVar9,4) + ((float)uVar13 * fVar5 + (float)uVar11 * fVar2) * (float)&stack0xffffffd8
    ;
    (this->fields).shakeOffset.z = fVar1 + (fVar14 * fVar5 + fVar6) * (float)&stack0xffffffd8;
  }
  fVar2 = (this->fields).shakeStrength;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = (this->fields).shakeStrengthFadeSpeed;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar6 * fVar1 + fVar4 * fVar5;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (_UNK_? < fVar1) {
    fVar1 = _UNK_?;
  }
  (this->fields).shakeStrength = (0.0 - fVar2) * fVar1 + fVar2;
  if ((this->fields).shakeDuration <= 0.0) {
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).shakeTimeFactor;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar7 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
    fVar1 = pVVar8->x;
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
              (fVar2 * fVar1,fVar1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar15 = this;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
      fVar1 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                         ((float)&stack0xffffffcc * (float)pTVar7,pVVar8->y,(MethodInfo *)0x0);
      uVar16._0_4_ = (this->fields).shakeOffset.x;
      uVar16._4_4_ = (this->fields).shakeOffset.y;
      fVar2 = (this->fields).shakeOffset.z;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
        uVar17 = pVVar8->x;
        uVar18 = pVVar8->y;
        fVar5 = ((float)pMVar15 + (float)pMVar15) - _UNK_?;
        fVar4 = (float)uVar18 * fVar5;
        fVar6 = pVVar8->z * fVar5;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
          uVar19 = pVVar8->x;
          uVar20 = pVVar8->y;
          fVar21 = pVVar8->z;
          fVar22 = (fVar1 + fVar1) - _UNK_?;
          fVar1 = (this->fields).shakeStrength;
          fVar14 = (this->fields).shakeDuration;
          (this->fields).shakeOffset.x =
               (float)uVar16 + ((float)uVar17 * fVar5 + (float)uVar19 * fVar22) * fVar1;
          (this->fields).shakeOffset.y =
               (float)((ulonglong)uVar16 >> 0x20) + ((float)uVar20 * fVar22 + fVar4) * fVar1;
          (this->fields).shakeOffset.z = fVar2 + (fVar21 * fVar22 + fVar6) * fVar1;
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          (this->fields).shakeDuration = fVar14 - fVar2;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
               (MVPlaymodeCameraBase *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    if (targetTransform != (ProtectedTransform *)0x0) {
      ProtectedTransform::ProtectedTransform_set_position(targetTransform,*pVVar2,(MethodInfo *)0x0)
      ;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
        fStack4 = pQVar3->z;
        fStack5 = pQVar3->w;
        ProtectedTransform::ProtectedTransform_set_rotation
                  (targetTransform,*pQVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVPlaymodeCameraBase() */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor
               (MVPlaymodeCameraBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).shakeOffset.x = (pVVar1->zeroVector).x;
  (this->fields).shakeOffset.y = fVar2;
  (this->fields).shakeOffset.z = fVar3;
  (this->fields).shakeMaxFactor = 1.0;
  (this->fields).shakeTimeFactor = 6.3;
  (this->fields).shakeStrengthFadeSpeed = 1.0;
  (this->fields)._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

