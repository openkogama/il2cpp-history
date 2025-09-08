
/* Single DegreesBetween(Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_DegreesBetween
                (AndroidFirstPersonCamera *this,float eulerA,float eulerB,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)(eulerA / _UNK_?));
  eulerA = eulerA - (float)fVar1 * _UNK_?;
  fVar2 = 0.0;
  if ((eulerA < 0.0) || (fVar2 = _UNK_?, _UNK_? < eulerA)) {
    eulerA = fVar2;
  }
  fVar1 = (float10)func_?((double)(eulerB / _UNK_?));
  fVar2 = eulerB - (float)fVar1 * _UNK_?;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  fVar2 = (float)((uint)(eulerA - fVar2) & _UNK_?);
  if (fVar2 <= _UNK_?) {
    return fVar2;
  }
  return _UNK_? - fVar2;
}


/* Single EulerClamp(Single, Single, Single) */

float Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_EulerClamp
                (AndroidFirstPersonCamera *this,float a,float min,float max,MethodInfo *method)

{
  fVar1 = (float10)func_?((double)(a / _UNK_?));
  a = a - (float)fVar1 * _UNK_?;
  fVar2 = 0.0;
  if ((a < 0.0) || (fVar2 = _UNK_?, _UNK_? < a)) {
    a = fVar2;
  }
  fVar3 = a;
  fVar1 = (float10)func_?((double)(min / _UNK_?));
  fStack_4 = min - (float)fVar1 * _UNK_?;
  fVar2 = 0.0;
  if ((fStack_4 < 0.0) || (fVar2 = _UNK_?, _UNK_? < fStack_4)) {
    fStack_4 = fVar2;
  }
  fVar1 = (float10)func_?((double)(max / _UNK_?));
  fVar2 = max - (float)fVar1 * _UNK_?;
  if (fVar2 < 0.0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = _UNK_?;
    if (fVar2 <= _UNK_?) goto code_?;
  }
  fVar2 = fVar5;
code_?:
  if ((a < fStack_4) && (fVar2 < a)) {
    fVar3 = AndroidFirstPersonCamera_DegreesBetween(this,a,fStack_4,(MethodInfo *)0x0);
    fVar5 = 0.0;
    fVar2 = AndroidFirstPersonCamera_DegreesBetween(this,a,fVar2,(MethodInfo *)0x0);
    if (fVar2 <= fVar3) {
      return fVar5;
    }
    return fStack_4;
  }
  return fVar3;
}


/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera_UpdateCameraRotation
               (AndroidFirstPersonCamera *this,MethodInfo *method)

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
    cVar2 = func_?(7,TypeInfo__IPlayModeUI,pIVar1);
    if (cVar2 != '\0') {
      return;
    }
    if (((this->fields)._._.ignoreInputTypes & 1) != 0) {
      return;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fStack_3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                         (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    VStack_4.z = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                            (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    this_00 = (this->fields).inputMovementPrecisionModifier;
    stack0xffffffe0 = CONCAT44(VStack_4.z,fStack_3);
    fStack_5 = 0.0;
    if (this_00 != (InputMovementPrecisionModifier *)0x0) {
      input.z = 0.0;
      input.x = fStack_3;
      input.y = VStack_4.z;
      pVVar6 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput
                         ((Vector3 *)(auStack_7 + 4),this_00,input,(MethodInfo *)0x0);
      auStack_7._4_4_ = pVVar6->x;
      unique0x0000a404 = pVVar6->y;
      VStack_4.z = pVVar6->z;
      this_01 = (this->fields).axisBias;
      fStack_5 = 0.0;
      VStack_4._0_8_ = unique0x0000a400;
      if (this_01 != (AxisBias *)0x0) {
        inputVector.z = 0.0;
        inputVector.x = (float)auStack_7._4_4_;
        inputVector.y = (float)unique0x0000a404;
        pVVar6 = AxisBias::AxisBias_GetBiasedVector
                           (&VStack_4,this_01,inputVector,(MethodInfo *)0x0);
        auStack_7._4_4_ = pVVar6->x;
        unique0x0000a404 = pVVar6->y;
        fStack_5 = pVVar6->z;
        (this->fields)._.targetRotation.x =
             (float)auStack_7._4_4_ * (this->fields)._.pitchSensitivity +
             (this->fields)._.targetRotation.x;
        (this->fields)._.targetRotation.y =
             (float)unique0x0000a404 * (this->fields)._.yawSensitivity +
             (this->fields)._.targetRotation.y;
        fVar8 = AndroidFirstPersonCamera_EulerClamp
                          (this,(this->fields)._.targetRotation.x,
                           (float)((uint)(this->fields)._.maxLookAngleDownward ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  ),(this->fields)._.maxLookAngleUpward,(MethodInfo *)0x0);
        (this->fields)._.targetRotation.x = fVar8;
        fVar8 = (this->fields)._.targetRotation.x;
        this_02 = (this->fields)._.smoothRotation;
        VStack_4.y = fVar8;
        VStack_4.z = (this->fields)._.targetRotation.y;
        if (this_02 != (TargetRotation *)0x0) {
          TargetRotation::TargetRotation_SetTargetRotation_1
                    (this_02,fVar8,VStack_4.z,(MethodInfo *)0x0);
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          VStack_4.z = (float)(this->fields)._.smoothRotation;
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (((this_04 != (Transform *)0x0) &&
              (pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)auStack_7,this_04,(MethodInfo *)0x0),
              (TargetRotation *)VStack_4.z != (TargetRotation *)0x0)) &&
             (pQVar9 = TargetRotation::TargetRotation_GetLerpRotation
                                 ((Quaternion *)auStack_7,(TargetRotation *)VStack_4.z,*pQVar9,
                                  (MethodInfo *)0x0), this_03 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (this_03,*pQVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

