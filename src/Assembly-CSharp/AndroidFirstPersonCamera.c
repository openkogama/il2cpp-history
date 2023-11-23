
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
  if (pIVar1 == (IPlayModeUI *)0x0) goto code_?;
  cVar2 = func_?(3,TypeInfo__IPlayModeUI,pIVar1);
  if (cVar2 != '\0') {
    return;
  }
  if (((this->fields)._._.ignoreInputTypes & 1) != 0) {
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  fVar3 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                     (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
  fVar4 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                     (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  this_00 = (this->fields).inputMovementPrecisionModifier;
  if (this_00 == (InputMovementPrecisionModifier *)0x0) goto code_?;
  input.y = fVar4;
  input.x = fVar3;
  input.z = 0.0;
  pVVar5 = InputMovementPrecisionModifier::InputMovementPrecisionModifier_GetPrecisionInput
                     ((Vector3 *)&stack0xffffffe4,this_00,input,(MethodInfo *)0x0);
  uVar6 = pVVar5->x;
  uVar7 = pVVar5->y;
  inputVector.y = (float)uVar7;
  inputVector.x = (float)uVar6;
  this_01 = (this->fields).axisBias;
  if (this_01 == (AxisBias *)0x0) goto code_?;
  inputVector.z = 0.0;
  pVVar5 = AxisBias::AxisBias_GetBiasedVector
                     ((Vector3 *)&stack0xffffffe4,this_01,inputVector,(MethodInfo *)0x0);
  uVar8 = pVVar5->x;
  uVar9 = pVVar5->y;
  (this->fields)._.targetRotation.x =
       (float)uVar8 * (this->fields)._.pitchSensitivity + (this->fields)._.targetRotation.x;
  (this->fields)._.targetRotation.y =
       (float)uVar9 * (this->fields)._.yawSensitivity + (this->fields)._.targetRotation.y;
  fVar10 = (float)((uint)(this->fields)._.maxLookAngleDownward ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
  fVar11 = (float10)func_?();
  fVar3 = (this->fields)._.targetRotation.x - (float)fVar11 * _UNK_?;
  fVar4 = 0.0;
  if ((fVar3 < 0.0) || (fVar4 = _UNK_?, _UNK_? < fVar3)) {
    fVar3 = fVar4;
  }
  fVar11 = (float10)func_?();
  fVar10 = fVar10 - (float)fVar11 * _UNK_?;
  fVar4 = 0.0;
  if ((fVar10 < 0.0) || (fVar4 = _UNK_?, _UNK_? < fVar10)) {
    fVar10 = fVar4;
  }
  fVar11 = (float10)func_?();
  fVar4 = (this->fields)._.maxLookAngleUpward - (float)fVar11 * _UNK_?;
  if (fVar4 < 0.0) {
    fVar12 = 0.0;
code_?:
    fVar4 = fVar12;
  }
  else {
    fVar12 = _UNK_?;
    if (_UNK_? < fVar4) goto code_?;
  }
  if ((fVar3 < fVar10) && (fVar4 < fVar3)) {
    fVar12 = fVar3;
    fVar13 = AndroidFirstPersonCamera_DegreesBetween(this,fVar3,fVar10,(MethodInfo *)0x0);
    fVar3 = fVar4;
    fVar4 = AndroidFirstPersonCamera_DegreesBetween(this,fVar12,fVar4,(MethodInfo *)0x0);
    if (fVar13 < fVar4) {
      fVar3 = fVar10;
    }
  }
  (this->fields)._.targetRotation.x = fVar3;
  pTVar14 = (this->fields)._.smoothRotation;
  fVar4 = (this->fields)._.targetRotation.y;
  if (pTVar14 != (TargetRotation *)0x0) {
    (pTVar14->fields).eulerAngles.x = fVar3;
    (pTVar14->fields).eulerAngles.y = fVar4;
    (pTVar14->fields).eulerAngles.z = 0.0;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    pTVar14 = (this->fields)._.smoothRotation;
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (((this_03 != (Transform *)0x0) &&
        (pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&stack0xffffffd4,this_03,(MethodInfo *)0x0),
        pTVar14 != (TargetRotation *)0x0)) &&
       (pQVar15 = TargetRotation::TargetRotation_GetLerpRotation
                           ((Quaternion *)&stack0xffffffd4,pTVar14,*pQVar15,(MethodInfo *)0x0),
       this_02 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar15,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AndroidFirstPersonCamera() */

void Assembly-CSharp.dll::AndroidFirstPersonCamera::AndroidFirstPersonCamera__ctor
               (AndroidFirstPersonCamera *this,MethodInfo *method)

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

