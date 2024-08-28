
/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera_UpdateCameraRotation
               (DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar1 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x =
       (this->fields)._.pitchSensitivity * fVar1 + (this->fields)._.targetRotation.x;
  (this->fields)._.targetRotation.y =
       (this->fields)._.yawSensitivity * fVar2 + (this->fields)._.targetRotation.y;
  fVar1 = MathFunctions::MathFunctions_NormalizeAngle
                    ((this->fields)._.targetRotation.x,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x = fVar1;
  fVar1 = MathFunctions::MathFunctions_NormalizeAngle
                    ((this->fields)._.targetRotation.y,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.y = fVar1;
  fVar1 = (this->fields)._.targetRotation.x;
  if (_UNK_? < fVar1) {
    (this->fields)._.targetRotation.x = fVar1 - _UNK_?;
  }
  fVar1 = (this->fields)._.targetRotation.x;
  fVar2 = (float)((uint)(this->fields)._.maxLookAngleDownward ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if ((fVar1 < fVar2) || (fVar2 = (this->fields)._.maxLookAngleUpward, fVar2 < fVar1)) {
    fVar1 = fVar2;
  }
  (this->fields)._.targetRotation.x = fVar1;
  pTVar3 = (this->fields)._.smoothRotation;
  if (pTVar3 != (TargetRotation *)0x0) {
    TargetRotation::TargetRotation_SetTargetRotation_1
              (pTVar3,(this->fields)._.targetRotation.x,(this->fields)._.targetRotation.y,
               (MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar3 = (this->fields)._.smoothRotation;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      if (pTVar3 != (TargetRotation *)0x0) {
        pQVar4 = TargetRotation::TargetRotation_GetLerpRotation
                           ((Quaternion *)&stack0xffffffe4,pTVar3,*pQVar4,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (this_00,*pQVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

