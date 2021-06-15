
/* Void UpdateCameraRotation() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera_UpdateCameraRotation
               (DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  func_?(&stack0xffffffe8,(uint)fVar2 ^ _UNK_?);
  (this->fields)._.targetRotation.x =
       (this->fields)._.pitchSensitivity * (float)uVar1 + (this->fields)._.targetRotation.x;
  (this->fields)._.targetRotation.y =
       (this->fields)._.yawSensitivity * (float)((ulonglong)uVar1 >> 0x20) +
       (this->fields)._.targetRotation.y;
  fVar2 = MathFunctions::MathFunctions_NormalizeAngle
                    ((this->fields)._.targetRotation.x,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x = fVar2;
  fVar2 = MathFunctions::MathFunctions_NormalizeAngle
                    ((this->fields)._.targetRotation.y,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.y = fVar2;
  fVar2 = (this->fields)._.targetRotation.x;
  if (_UNK_? < fVar2) {
    fVar2 = fVar2 - _UNK_?;
    (this->fields)._.targetRotation.x = fVar2;
  }
  fVar3 = (this->fields)._.maxLookAngleDownward;
  max = (this->fields)._.maxLookAngleUpward;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (fVar2,(float)((uint)fVar3 ^ _UNK_?),max,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x = fVar2;
  pTVar4 = (this->fields)._.smoothRotation;
  if (pTVar4 != (TargetRotation *)0x0) {
    TargetRotation::TargetRotation_SetTargetRotation_1
              (pTVar4,(this->fields)._.targetRotation.x,(this->fields)._.targetRotation.y,
               (MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar4 = (this->fields)._.smoothRotation;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
      if (pTVar4 != (TargetRotation *)0x0) {
        pQVar5 = TargetRotation::TargetRotation_GetLerpRotation
                           ((Quaternion *)&stack0xffffffd8,pTVar4,*pQVar5,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (this_00,*pQVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DesktopFirstPersonCamera() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera__ctor
               (DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields)._.cameraHeight = 2.0;
  (this->fields)._.maxLookAngleDownward = 60.0;
  (this->fields)._.maxLookAngleUpward = 60.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x40000000,0,0);
  (this->fields)._.cameraOffset.x = (float)(undefined4)uStack_2;
  (this->fields)._.cameraOffset.y = (float)uStack_2._4_4_;
  (this->fields)._.cameraOffset.z = fStack_1;
  (this->fields)._.pitchSensitivity = 0.5;
  (this->fields)._.yawSensitivity = 0.5;
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>)
  ;
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,0x20,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_);
  (this->fields)._.vehiclesHiddenMeshRenderers = (List_1_UnityEngine_MeshRenderer_ *)this_00;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}

