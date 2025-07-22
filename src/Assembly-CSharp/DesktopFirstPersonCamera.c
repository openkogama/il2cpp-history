
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
                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  fVar2 = MVInputWrapper::MVInputWrapper_GetAxisRaw(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  (this->fields)._.targetRotation.x =
       fVar1 * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
  (this->fields)._.targetRotation.y =
       fVar2 * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
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
                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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


/* DesktopFirstPersonCamera() */

void Assembly-CSharp.dll::DesktopFirstPersonCamera::DesktopFirstPersonCamera__ctor
               (DesktopFirstPersonCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>);
    cRam_? = '\x01';
  }
  uVar1 = (ulonglong)_UNK_?;
  (this->fields)._.cameraOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields)._.cameraOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields)._.cameraHeight = 2.0;
  (this->fields)._.maxLookAngleDownward = 60.0;
  (this->fields)._.maxLookAngleUpward = 60.0;
  (this->fields)._.cameraOffset.z = 0.0;
  (this->fields)._.pitchSensitivity = 0.5;
  (this->fields)._.yawSensitivity = 0.5;
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0x20,
             MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__List_int_);
  (this->fields)._.vehiclesHiddenMeshRenderers = (List_1_UnityEngine_MeshRenderer_ *)this_00;
  func_?(&(this->fields)._.vehiclesHiddenMeshRenderers,this_00);
  (this->fields)._._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

