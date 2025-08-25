
/* Vector3 Shake(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::CameraShake::CameraShake_Shake(Vector3 *__return_storage_ptr__,CameraShake *this,Vector3 position,float speed,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::CameraShake::CameraShake_Shake_1(Vector3 *__return_storage_ptr__,CameraShake *this,float speed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MathFunctions__PerlinSimplexNoise);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).shakeFactorSpeedCurve;
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(this_00,speed,(MethodInfo *)0x0);
  fVar2 = (this->fields).shakeMaxFactor;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (this->fields).shakeOffset.x = (pVVar3->zeroVector).x;
  (this->fields).shakeOffset.y = fVar4;
  (this->fields).shakeOffset.z = fVar5;
  if (0.0 < fVar1 * fVar2) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).shakeTimeFactor;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
    fVar1 = pVVar7->x;
    if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1(fVar2 * 0.0,fVar1,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,method_00);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    __return_storage_ptr__ = (Vector3 *)&stack0xffffffd8;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(__return_storage_ptr__,pTVar6,(MethodInfo *)0x0);
    fVar5 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1((float)method_00 * 0.0,pVVar7->y,(MethodInfo *)0x0);
    uVar8._0_4_ = (this->fields).shakeOffset.x;
    uVar8._4_4_ = (this->fields).shakeOffset.y;
    fVar1 = (this->fields).shakeOffset.z;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffcc,pTVar9,(MethodInfo *)0x0);
    uVar10 = pVVar7->x;
    uVar11 = pVVar7->y;
    fVar2 = (fVar2 + fVar2) - 1.0;
    fVar4 = (float)uVar10 * fVar2;
    fVar12 = pVVar7->z * fVar2;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffcc,pTVar9,(MethodInfo *)0x0);
    uVar13 = pVVar7->x;
    uVar14 = pVVar7->y;
    fVar15 = pVVar7->z;
    fVar5 = (fVar5 + fVar5) - 1.0;
    (this->fields).shakeOffset.x = (float)uVar8 + (fVar4 + (float)uVar13 * fVar5) * (float)pTVar6;
    (this->fields).shakeOffset.y = SUB84(uVar8,4) + ((float)uVar14 * fVar5 + (float)uVar11 * fVar2) * (float)pTVar6;
    (this->fields).shakeOffset.z = fVar1 + (fVar15 * fVar5 + fVar12) * (float)pTVar6;
  }
  fVar2 = (this->fields).shakeStrength;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = (this->fields).shakeStrengthFadeSpeed;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar12 * fVar1 + fVar4 * fVar5;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  (this->fields).shakeStrength = (0.0 - fVar2) * fVar1 + fVar2;
  if (0.0 < (this->fields).shakeDuration) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).shakeTimeFactor;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&stack0xffffffcc,pTVar6,(MethodInfo *)0x0);
      fVar1 = pVVar7->x;
      if ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1(fVar2 * fVar1,fVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pCVar16 = this;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        __return_storage_ptr__ = (Vector3 *)&stack0xffffffcc;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(__return_storage_ptr__,pTVar6,(MethodInfo *)0x0);
        fVar1 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1((float)pTVar6 * 0.0,pVVar7->y,(MethodInfo *)0x0);
        uVar17._0_4_ = (this->fields).shakeOffset.x;
        uVar17._4_4_ = (this->fields).shakeOffset.y;
        fVar2 = (this->fields).shakeOffset.z;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right((Vector3 *)&stack0xffffffcc,pTVar6,(MethodInfo *)0x0);
          uVar18 = pVVar7->x;
          uVar19 = pVVar7->y;
          fVar5 = ((float)pCVar16 + (float)pCVar16) - 1.0;
          fVar4 = (float)uVar19 * fVar5;
          fVar12 = pVVar7->z * fVar5;
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up((Vector3 *)&stack0xffffffcc,pTVar6,(MethodInfo *)0x0);
            uVar20 = pVVar7->x;
            uVar21 = pVVar7->y;
            fVar22 = pVVar7->z;
            fVar23 = (fVar1 + fVar1) - 1.0;
            fVar1 = (this->fields).shakeStrength;
            fVar15 = (this->fields).shakeDuration;
            (this->fields).shakeOffset.x = (float)uVar17 + ((float)uVar20 * fVar23 + (float)uVar18 * fVar5) * fVar1;
            (this->fields).shakeOffset.y = (float)((ulonglong)uVar17 >> 0x20) + (fVar4 + (float)uVar21 * fVar23) * fVar1;
            (this->fields).shakeOffset.z = fVar2 + (fVar22 * fVar23 + fVar12) * fVar1;
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
            (this->fields).shakeDuration = fVar15 - fVar2;
            goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
    pcVar24 = (code *)swi(3);
    pVVar7 = (Vector3 *)(*pcVar24)();
    return pVVar7;
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

