
/* Void Destroy() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->canvasScaler = (CanvasScaler *)0x0;
  func_?(&TypeInfo__ResolutionManager->static_fields->canvasScaler,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 0;
  return;
}


/* Void Init(CanvasScaler) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Init
               (CanvasScaler *canvasScaler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 1;
  TypeInfo__ResolutionManager->static_fields->canvasScaler = canvasScaler;
  func_?(&TypeInfo__ResolutionManager->static_fields->canvasScaler,canvasScaler);
  pUVar1 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
  if (pUVar1 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    if (canvasScaler == (CanvasScaler *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(canvasScaler->fields).m_ReferenceResolution.x,
               (canvasScaler->fields).m_ReferenceResolution.y,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ResolutionManager);
    func_?(&StringLiteral_OnReferenceResolution_still_have);
    cRam_? = '\x01';
  }
  if (TypeInfo__ResolutionManager->static_fields->OnReferenceResolution !=
      (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReferenceResolution_still_have,(MethodInfo *)0x0);
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    func_?(TypeInfo__ResolutionManager->static_fields,0);
  }
  return;
}


/* Boolean get_Initialized() */

bool Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_Initialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  return TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField;
}


/* Single get_InverseScale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_InverseScale(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar1 != (CanvasScaler *)0x0) {
    fVar2 = (pCVar1->fields).m_ReferenceResolution.x;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    return fVar2 / (float)iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Vector2 get_PhysicalDistanceToPixels() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PhysicalDistanceToPixels
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar1 != (CanvasScaler *)0x0) {
    fVar2 = (pCVar1->fields).m_ReferenceResolution.x;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    fVar4 = ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ResolutionManager);
      cRam_? = '\x01';
    }
    pCVar1 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
    if (pCVar1 != (CanvasScaler *)0x0) {
      fVar5 = (pCVar1->fields).m_ReferenceResolution.y;
      iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      fVar7 = ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
      VVar8.y = fVar7 * (fVar5 / (float)iVar6);
      VVar8.x = (fVar2 / (float)iVar3) * fVar4;
      return VVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  VVar8 = (Vector2)(*pcVar9)();
  return VVar8;
}


/* Vector2 get_PixelsToPhysicalDistance() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScaleToPhysicalSize);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pCVar2 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar2 != (CanvasScaler *)0x0) {
    fVar3 = (pCVar2->fields).m_ReferenceResolution.x;
    if ((TypeInfo__ScaleToPhysicalSize->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ScaleToPhysicalSize);
    }
    ppRStack_4 = (ResolutionManager__Class **)
                  ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      ppRStack_4 = &TypeInfo__ResolutionManager;
      func_?();
      cRam_? = '\x01';
    }
    pCVar2 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
    if (pCVar2 != (CanvasScaler *)0x0) {
      fVar6 = (pCVar2->fields).m_ReferenceResolution.y;
      fVar7 = ScaleToPhysicalSize::ScaleToPhysicalSize_get_DpiScale((MethodInfo *)0x0);
      VVar8.y = ((float)iVar5 / fVar6) / fVar7;
      VVar8.x = ((float)iVar1 / fVar3) / (float)ppRStack_4;
      return VVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  VVar8 = (Vector2)(*pcVar9)();
  return VVar8;
}


/* Vector2 get_ReferenceResolution() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_ReferenceResolution
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar1 != (CanvasScaler *)0x0) {
    return (pCVar1->fields).m_ReferenceResolution;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Single get_Scale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_Scale(MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  pCVar2 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar2 != (CanvasScaler *)0x0) {
    return (float)iVar1 / (pCVar2->fields).m_ReferenceResolution.x;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar4 = (float10)(*pcVar3)();
  return (float)fVar4;
}


/* Void set_Initialized(Boolean) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_set_Initialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = value;
  return;
}

