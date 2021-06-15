
/* Void Shake(Single) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_Shake
               (MVPlaymodeCameraBase *this,float speed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).shakeFactorSpeedCurve;
  if (this_00 == (AnimationCurve *)0x0) goto code_?;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (this_00,speed,(MethodInfo *)0x0);
  fVar1 = (this->fields).shakeMaxFactor * fVar1;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      ((Vector3 *)&stack0xffffffdc,(MethodInfo *)0x0);
  fVar3 = pVVar2->y;
  fVar4 = pVVar2->z;
  (this->fields).shakeOffset.x = pVVar2->x;
  (this->fields).shakeOffset.y = fVar3;
  (this->fields).shakeOffset.z = fVar4;
  if (0.0 < fVar1) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (this->fields).shakeTimeFactor;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&fStack_6,pTVar5,(MethodInfo *)0x0);
    fVar7 = pVVar2->x;
    if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
      func_?(TypeInfo__MathFunctions__PerlinSimplexNoise);
    }
    fVar3 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                      (fVar4 * fVar3,fVar7,(MethodInfo *)0x0);
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar4 = (this->fields).shakeTimeFactor;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
    yin_00 = pVVar2->y;
    fVar7 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                      (fVar4 * fVar7,(float)yin_00,(MethodInfo *)0x0);
    uVar8 = (this->fields).shakeOffset.x;
    uVar9 = (this->fields).shakeOffset.y;
    fVar4 = (this->fields).shakeOffset.z;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                        ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
    uVar10._0_4_ = pVVar2->x;
    uVar10._4_4_ = pVVar2->y;
    fVar11 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar11;
    a_00.x = (float)(int)uVar10;
    a_00.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd0,fVar3 * _UNK_? - _UNK_?,a_00,
                         (MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    fVar11 = pVVar2->y;
    uVar10._0_4_ = pVVar2->z;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                        ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd0,fVar7 * _UNK_? - _UNK_?,*pVVar2,
                         (MethodInfo *)0x0);
    a_01.y = fVar11;
    a_01.x = fVar3;
    a_01.z = (float)uVar10;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffd0,a_01,*pVVar2,(MethodInfo *)0x0);
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffd0,*pVVar2,fVar1,(MethodInfo *)0x0);
    a_02.y = (float)uVar9;
    a_02.x = (float)uVar8;
    a_02.z = fVar4;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffd0,a_02,*pVVar2,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar1 = pVVar2->z;
    (this->fields).shakeOffset.x = pVVar2->x;
    (this->fields).shakeOffset.y = fVar4;
    (this->fields).shakeOffset.z = fVar1;
  }
  fVar1 = (this->fields).shakeStrength;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar4 = (this->fields).shakeStrengthFadeSpeed;
  uVar10._0_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                     (fVar1,0.0,(float)uVar10 * fVar4 + fVar7 * fVar3,(MethodInfo *)0x0);
  (this->fields).shakeStrength = fVar1;
  if ((this->fields).shakeDuration <= 0.0) {
    return;
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = (this->fields).shakeTimeFactor;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar5 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
    yin = pVVar2->x;
    if ((((uint)(TypeInfo__MathFunctions__PerlinSimplexNoise->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__MathFunctions__PerlinSimplexNoise->_1).cctor_started == 0)) {
      func_?();
    }
    fVar4 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                      (fVar1 * fVar4,yin,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).shakeTimeFactor;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
      uVar12 = pVVar2->x;
      yin_01 = pVVar2->y;
      fStack_6 = (float)uVar12;
      puStack_13 = (undefined *)yin_01;
      fVar3 = MathFunctions+PerlinSimplexNoise::MathFunctions_PerlinSimplexNoise_noise_1
                        (fVar1 * fVar3,(float)yin_01,(MethodInfo *)0x0);
      fVar1 = (this->fields).shakeOffset.z;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                            ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
        uVar14._0_4_ = pVVar2->x;
        uVar14._4_4_ = pVVar2->y;
        fVar7 = pVVar2->z;
        puStack_13 = (undefined *)(undefined4)uVar14;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
          uVar14 = CONCAT44(uVar14._4_4_,puStack_13);
        }
        a_03.z = fVar7;
        a_03.x = (float)(int)uVar14;
        a_03.y = (float)(int)((ulonglong)uVar14 >> 0x20);
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                            ((Vector3 *)&stack0xffffffd0,fVar4 * _UNK_? - _UNK_?,a_03,
                             (MethodInfo *)0x0);
        fVar4 = pVVar2->x;
        fVar7 = pVVar2->z;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                              ((Vector3 *)&stack0xffffffd0,pTVar5,(MethodInfo *)0x0);
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                              ((Vector3 *)&stack0xffffffd0,fVar3 * _UNK_? - _UNK_?,
                               *pVVar2,(MethodInfo *)0x0);
          a_04.y = 0.0;
          a_04.x = fVar4;
          a_04.z = fVar7;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffd0,a_04,*pVVar2,(MethodInfo *)0x0);
          uVar15 = pVVar2->x;
          uVar16 = pVVar2->y;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffd0,*pVVar2,(this->fields).shakeStrength,
                               (MethodInfo *)0x0);
          a.y = (float)uVar16;
          a.x = (float)uVar15;
          a.z = fVar1;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffd0,a,*pVVar2,(MethodInfo *)0x0);
          fVar1 = pVVar2->y;
          fVar4 = pVVar2->z;
          (this->fields).shakeOffset.x = pVVar2->x;
          (this->fields).shakeOffset.y = fVar1;
          fVar1 = (this->fields).shakeDuration;
          (this->fields).shakeOffset.z = fVar4;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
          (this->fields).shakeDuration = fVar1 - fVar4;
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase_UpdateCamera
               (MVPlaymodeCameraBase *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  MVCameraBase::MVCameraBase_UpdateCamera
            ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)targetTransform,(MethodInfo *)0x0);
  return;
}


/* MVPlaymodeCameraBase() */

void Assembly-CSharp.dll::MVPlaymodeCameraBase::MVPlaymodeCameraBase__ctor
               (MVPlaymodeCameraBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).shakeOffset.x = pVVar1->x;
  (this->fields).shakeOffset.y = fVar3;
  (this->fields).shakeOffset.z = fVar4;
  (this->fields).shakeMaxFactor = 1.0;
  (this->fields).shakeTimeFactor = 6.3;
  (this->fields).shakeStrengthFadeSpeed = 1.0;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}

