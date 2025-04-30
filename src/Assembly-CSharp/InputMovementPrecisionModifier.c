
/* Vector3 GetPrecisionInput(Vector3) */

Vector3 * Assembly-CSharp.dll::InputMovementPrecisionModifier::
          InputMovementPrecisionModifier_GetPrecisionInput
                    (Vector3 *__return_storage_ptr__,InputMovementPrecisionModifier *this,
                    Vector3 input,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)(input.x * input.x + input.y * input.y + input.z * input.z);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if ((float)dVar1 < _UNK_?) {
    __return_storage_ptr__->x = (float)(int)input._0_8_;
    __return_storage_ptr__->y = (float)(int)((ulonglong)input._0_8_ >> 0x20);
    __return_storage_ptr__->z = input.z;
    return __return_storage_ptr__;
  }
  fVar2 = (float)dVar1 / (this->fields).maxMagnitude;
  if (fVar2 < 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = _UNK_?;
    if (fVar2 <= _UNK_?) goto code_?;
  }
  fVar2 = fVar3;
code_?:
  this_00 = (this->fields).inputMovementModificationCurve;
  if (this_00 == (AnimationCurve *)0x0) {
    func_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,fVar2,(MethodInfo *)0x0);
  fVar2 = fVar2 * (_UNK_? / 0.0);
  __return_storage_ptr__->x = fVar2 * 0.0;
  __return_storage_ptr__->y = input.y * fVar2;
  __return_storage_ptr__->z = input.z * fVar2;
  return __return_storage_ptr__;
}


/* Void SetReferenceResolution(Vector2) */

void Assembly-CSharp.dll::InputMovementPrecisionModifier::
     InputMovementPrecisionModifier_SetReferenceResolution
               (InputMovementPrecisionModifier *this,Vector2 referenceResolution,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                   );
    func_?(&TypeInfo__ResolutionManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)(referenceResolution.y * referenceResolution.y +
                  referenceResolution.x * referenceResolution.x);
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  (this->fields).maxMagnitude = (float)dVar1 * _UNK_?;
  pUVar2 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,
             MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
             ,(MethodInfo *)0x0);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
code_?:
    func_?(TypeInfo__ResolutionManager->static_fields);
    return;
  }
  pUVar2 = (UnityAction_1_UnityEngine_Vector2_ *)func_?(pDVar3);
  if (pUVar2 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar2;
    iVar4 = func_?(pDVar3);
    if (iVar4 != 0) goto code_?;
  }
  func_?(pDVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::InputMovementPrecisionModifier::InputMovementPrecisionModifier_Start
               (InputMovementPrecisionModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                   );
    func_?(&TypeInfo__ResolutionManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField == 0) {
    pUVar1 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
    pUVar2 = (UnityAction_1_UnityEngine_Vector2_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (pUVar2,(Object *)this,
               MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    if (pDVar3 != (Delegate *)0x0) {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)
               func_?(pDVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      if (pUVar1 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        func_?(pDVar3,pUVar4);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
      pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
      iVar6 = func_?(pDVar3,
                              TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      if (iVar6 == 0) goto code_?;
      goto code_?;
    }
  }
  else {
    VVar7 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                     );
      func_?(&TypeInfo__ResolutionManager);
      func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar8 = (double)(VVar7.y * VVar7.y + VVar7.x * VVar7.x);
    if (dVar8 < 0.0) {
      func_?();
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    (this->fields).maxMagnitude = (float)dVar8 * _UNK_?;
    pUVar1 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
    pUVar2 = (UnityAction_1_UnityEngine_Vector2_ *)
             func_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (pUVar2,(Object *)this,
               MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
               ,(MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    if (pDVar3 != (Delegate *)0x0) {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)
               func_?(pDVar3,
                               TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      if (pUVar1 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
        pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
        iVar6 = func_?(pDVar3,
                                TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
        if (iVar6 != 0) goto code_?;
      }
      goto code_?;
    }
  }
  TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
       (UnityAction_1_UnityEngine_Vector2_ *)0x0;
  iVar6 = 0;
code_?:
  func_?(TypeInfo__ResolutionManager->static_fields,iVar6);
  return;
}

