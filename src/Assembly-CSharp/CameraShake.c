
/* Vector3 Shake(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraShake::CameraShake_Shake
                    (Vector3 *__return_storage_ptr__,CameraShake *this,Vector3 position,float speed,
                    MethodInfo *method)

{
  pVVar1 = CameraShake_Shake_1(&VStack_2,this,speed,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  __return_storage_ptr__->x = position.x + (float)uVar3;
  __return_storage_ptr__->y = position.y + (float)uVar4;
  __return_storage_ptr__->z = position.z + fVar5;
  return __return_storage_ptr__;
}


/* Vector3 Shake(Single) */

Vector3 * Assembly-CSharp.dll::CameraShake::CameraShake_Shake_1
                    (Vector3 *__return_storage_ptr__,CameraShake *this,float speed,
                    MethodInfo *method)

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
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (__return_storage_ptr__,pTVar7,(MethodInfo *)0x0);
    fVar5 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                       ((float)method_00 * 0.0,pVVar8->y,(MethodInfo *)0x0);
    uVar9._0_4_ = (this->fields).shakeOffset.x;
    uVar9._4_4_ = (this->fields).shakeOffset.y;
    fVar1 = (this->fields).shakeOffset.z;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffcc,pTVar10,(MethodInfo *)0x0);
    uVar11 = pVVar8->x;
    uVar12 = pVVar8->y;
    fVar2 = (fVar2 + fVar2) - _UNK_?;
    fVar4 = (float)uVar11 * fVar2;
    fVar6 = pVVar8->z * fVar2;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar10 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)&stack0xffffffcc,pTVar10,(MethodInfo *)0x0);
    uVar13 = pVVar8->x;
    uVar14 = pVVar8->y;
    fVar15 = pVVar8->z;
    fVar5 = (fVar5 + fVar5) - _UNK_?;
    (this->fields).shakeOffset.x = (float)uVar9 + (fVar4 + (float)uVar13 * fVar5) * (float)pTVar7
    ;
    (this->fields).shakeOffset.y =
         SUB84(uVar9,4) + ((float)uVar12 * fVar2 + (float)uVar14 * fVar5) * (float)pTVar7;
    (this->fields).shakeOffset.z = fVar1 + (fVar6 + fVar15 * fVar5) * (float)pTVar7;
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
  if (0.0 < (this->fields).shakeDuration) {
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
      pCVar16 = this;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        __return_storage_ptr__ = (Vector3 *)&stack0xffffffcc;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (__return_storage_ptr__,pTVar7,(MethodInfo *)0x0);
        fVar1 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                           ((float)pTVar7 * 0.0,pVVar8->y,(MethodInfo *)0x0);
        uVar17._0_4_ = (this->fields).shakeOffset.x;
        uVar17._4_4_ = (this->fields).shakeOffset.y;
        fVar2 = (this->fields).shakeOffset.z;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                              ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
          uVar18 = pVVar8->x;
          uVar19 = pVVar8->y;
          fVar5 = ((float)pCVar16 + (float)pCVar16) - _UNK_?;
          fVar4 = (float)uVar19 * fVar5;
          fVar6 = pVVar8->z * fVar5;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                                ((Vector3 *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
            uVar20 = pVVar8->x;
            uVar21 = pVVar8->y;
            fVar22 = pVVar8->z;
            fVar23 = (fVar1 + fVar1) - _UNK_?;
            fVar1 = (this->fields).shakeStrength;
            fVar15 = (this->fields).shakeDuration;
            (this->fields).shakeOffset.x =
                 (float)uVar17 + fVar1 * ((float)uVar18 * fVar5 + (float)uVar20 * fVar23);
            (this->fields).shakeOffset.y =
                 (float)((ulonglong)uVar17 >> 0x20) + fVar1 * (fVar4 + (float)uVar21 * fVar23);
            (this->fields).shakeOffset.z = fVar2 + fVar1 * (fVar6 + fVar22 * fVar23);
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            (this->fields).shakeDuration = fVar15 - fVar2;
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
    pcVar24 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar24)();
    return pVVar8;
  }
code_?:
  fVar1 = (this->fields).shakeOffset.y;
  fVar2 = (this->fields).shakeOffset.z;
  __return_storage_ptr__->x = (this->fields).shakeOffset.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* CameraShake() */

void Assembly-CSharp.dll::CameraShake::CameraShake__ctor(CameraShake *this,MethodInfo *method)

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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

