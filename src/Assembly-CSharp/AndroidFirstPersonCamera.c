
/* Single DegreesBetween(Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_DegreesBetween(AndroidFirstPersonCamera *this,float eulerA,float eulerB,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)(eulerA / 360.0));
  fVar2 = eulerA - (float)fVar1 * 360.0;
  eulerA = 0.0;
  if ((0.0 <= fVar2) && (eulerA = fVar2, 360.0 < fVar2)) {
    eulerA = 360.0;
  }
  fVar1 = (float10)func_?((double)(eulerB / 360.0));
  fVar2 = eulerB - (float)fVar1 * 360.0;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (360.0 < fVar2) {
    fVar2 = 360.0;
  }
  fVar2 = ABS(eulerA - fVar2);
  if (fVar2 <= 180.0) {
    return fVar2;
  }
  return 360.0 - fVar2;
}


/* Single EulerClamp(Single, Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_EulerClamp(AndroidFirstPersonCamera *this,float a,float min,float max,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)(a / 360.0));
  fVar2 = a - (float)fVar1 * 360.0;
  a = 0.0;
  if ((0.0 <= fVar2) && (a = fVar2, 360.0 < fVar2)) {
    a = 360.0;
  }
  fVar2 = a;
  fVar1 = (float10)func_?((double)(min / 360.0));
  fVar3 = min - (float)fVar1 * 360.0;
  fStack_4 = 0.0;
  if ((0.0 <= fVar3) && (fStack_4 = fVar3, 360.0 < fVar3)) {
    fStack_4 = 360.0;
  }
  fVar1 = (float10)func_?((double)(max / 360.0));
  fVar3 = max - (float)fVar1 * 360.0;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (360.0 < fVar3) {
    fVar3 = 360.0;
  }
  if ((a < fStack_4) && (fVar3 < a)) {
    fVar2 = AndroidFirstPersonCamera_DegreesBetween(this,a,fStack_4,(MethodInfo *)0x0);
    fVar5 = 0.0;
    fVar3 = AndroidFirstPersonCamera_DegreesBetween(this,a,fVar3,(MethodInfo *)0x0);
    if (fVar3 <= fVar2) {
      return fVar5;
    }
    return fStack_4;
  }
  return fVar2;
}


/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_UpdateCameraRotation(AndroidFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    cVar2 = func_?(5,TypeInfo__IPlayModeUI,pIVar1);
    if (cVar2 != '\0') {
      return;
    }
    if (((this->fields)._._.ignoreInputTypes & 1) != 0) {
      return;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    fVar4 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity(StringLiteral_Mouse_X,(MethodInfo *)0x0);
    this_00 = (this->fields).inputMovementPrecisionModifier;
    if (this_00 != (InputMovementPrecisionModifier *)0x0) {
      input.y = fVar4;
      input.x = fVar3;
      input.z = 0.0;
      pVVar5 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput((Vector3 *)&stack0xffffffe4,this_00,input,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      inputVector.y = (float)uVar7;
      inputVector.x = (float)uVar6;
      this_01 = (this->fields).axisBias;
      if (this_01 != (AxisBias *)0x0) {
        inputVector.z = 0.0;
        pVVar5 = AxisBias::AxisBias_GetBiasedVector((Vector3 *)&stack0xffffffe4,this_01,inputVector,(MethodInfo *)0x0);
        uVar8 = pVVar5->x;
        uVar9 = pVVar5->y;
        (this->fields)._.targetRotation.x = (float)uVar8 * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
        (this->fields)._.targetRotation.y = (float)uVar9 * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
        fVar3 = (this->fields)._.maxLookAngleDownward;
        fVar10 = (float10)func_?();
        fVar11 = (this->fields)._.targetRotation.x - (float)fVar10 * 360.0;
        fVar4 = 0.0;
        if ((0.0 <= fVar11) && (fVar4 = fVar11, 360.0 < fVar11)) {
          fVar4 = 360.0;
        }
        fVar10 = (float10)func_?();
        fVar3 = -fVar3 - (float)fVar10 * 360.0;
        fStack_12 = 0.0;
        if ((0.0 <= fVar3) && (fStack_12 = fVar3, 360.0 < fVar3)) {
          fStack_12 = 360.0;
        }
        fVar10 = (float10)func_?();
        fVar3 = (this->fields)._.maxLookAngleUpward - (float)fVar10 * 360.0;
        if (fVar3 < 0.0) {
          fVar3 = 0.0;
        }
        else if (360.0 < fVar3) {
          fVar3 = 360.0;
        }
        if ((fVar4 < fStack_12) && (fVar3 < fVar4)) {
          fVar11 = fVar4;
          fVar13 = AndroidFirstPersonCamera_DegreesBetween(this,fVar4,fStack_12,(MethodInfo *)0x0);
          fVar4 = fVar3;
          fVar3 = AndroidFirstPersonCamera_DegreesBetween(this,fVar11,fVar3,(MethodInfo *)0x0);
          if (fVar13 < fVar3) {
            fVar4 = fStack_12;
          }
        }
        (this->fields)._.targetRotation.x = fVar4;
        pTVar14 = (this->fields)._.smoothRotation;
        if (pTVar14 != (TargetRotation *)0x0) {
          TargetRotation::TargetRotation_SetTargetRotation_1(pTVar14,fVar4,(this->fields)._.targetRotation.y,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          pTVar14 = (this->fields)._.smoothRotation;
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
          if (((this_03 != (Transform *)0x0) && (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation((Quaternion *)&stack0xffffffd4,this_03,(MethodInfo *)0x0), pTVar14 != (TargetRotation *)0x0)) && (pQVar15 = TargetRotation::TargetRotation_GetLerpRotation((Quaternion *)&stack0xffffffd4,pTVar14,*pQVar15,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
            fStack16 = pQVar15->w;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(this_02,*pQVar15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

