
/* Vector3 GetPrecisionInput(Vector3) */

Vector3 * Assembly-CSharp.dll::InputMovementPrecisionModifier::
          InputMovementPrecisionModifier_GetPrecisionInput
                    (Vector3 *__return_storage_ptr__,InputMovementPrecisionModifier *this,
                    Vector3 input,MethodInfo *method)

{
  fVar1 = (float10)func_?(&input,0);
  if ((float)fVar1 < _UNK_?) {
    __return_storage_ptr__->x = input.x;
    __return_storage_ptr__->y = input.y;
    __return_storage_ptr__->z = input.z;
    return __return_storage_ptr__;
  }
  time = (float)fVar1 / (this->fields).maxMagnitude;
  if (time < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = _UNK_?;
    if (time <= _UNK_?) goto code_?;
  }
  time = fVar2;
code_?:
  this_00 = (this->fields).inputMovementModificationCurve;
  if (this_00 == (AnimationCurve *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                    (this_00,time,(MethodInfo *)0x0);
  fVar2 = fVar2 * (_UNK_? / time);
  __return_storage_ptr__->x = input.x * fVar2;
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
  fVar1 = (float10)func_?(&referenceResolution,0);
  (this->fields).maxMagnitude = (float)(fVar1 * (float10)_UNK_?);
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
  pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    referenceResolution.x = 0.0;
code_?:
    func_?();
    return;
  }
  referenceResolution.x = (float)TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
  pUVar2 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
  if (pUVar2 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar2;
    pUVar4 = TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    referenceResolution.x = (float)TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>;
    referenceResolution.x = (float)func_?();
    if (referenceResolution.x != 0.0) goto code_?;
  }
  referenceResolution.x = (float)pUVar4;
  func_?();
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
    if (pDVar3 != (Delegate *)0x0) {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
      if (pUVar1 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
      goto code_?;
    }
  }
  else {
    VStack_6 = ResolutionManager::ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__InputMovementPrecisionModifier__SetReferenceResolution_UnityEngine__Vector2_
                     );
      func_?(&TypeInfo__ResolutionManager);
      func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::Vector2>);
      cRam_? = '\x01';
    }
    fVar7 = (float10)func_?(&VStack_6,0);
    (this->fields).maxMagnitude = (float)(fVar7 * (float10)_UNK_?);
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
    if (pDVar3 != (Delegate *)0x0) {
      pUVar1 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
      if (pUVar1 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
        TypeInfo__ResolutionManager->static_fields->OnReferenceResolution = pUVar1;
        iVar5 = func_?();
        if (iVar5 != 0) goto code_?;
      }
      goto code_?;
    }
  }
  TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
       (UnityAction_1_UnityEngine_Vector2_ *)0x0;
code_?:
  func_?();
  return;
}

