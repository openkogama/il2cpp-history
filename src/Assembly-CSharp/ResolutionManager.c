
/* Void Destroy() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  TypeInfo__ResolutionManager->static_fields->canvasScaler = (CanvasScaler *)0x0;
  func_?(&TypeInfo__ResolutionManager->static_fields->canvasScaler,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 0;
  return;
}


/* Single GetScreenDpiScale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_GetScreenDpiScale
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
  if (fVar1 != 0.0) {
    unaff_EBP = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
  }
  fVar1 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fVar2 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar3 = (double)(fVar2 * fVar2 + fVar1 * fVar1);
  if (dVar3 < 0.0) {
    func_?();
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  if ((float)dVar3 == 0.0) {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar2 = (float)iVar4;
  }
  dVar3 = (double)(fVar1 * fVar1 + fVar2 * fVar2);
  if (dVar3 < 0.0) {
    func_?();
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  if ((float)dVar3 / unaff_EBP < _UNK_?) {
    return 1.0;
  }
  return ((float)dVar3 / unaff_EBP) / _UNK_?;
}


/* Void Init(CanvasScaler) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Init
               (CanvasScaler *canvasScaler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 1;
  if (bVar1) {
    func_?(&TypeInfo__ScreenSizeOptimizer);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
  if (fVar2 != 0.0) {
    fStack_3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
  }
  fVar2 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).x;
  fVar4 = (TypeInfo__ScreenSizeOptimizer->static_fields->originalSize).y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar5 = (double)(fVar4 * fVar4 + fVar2 * fVar2);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if ((float)dVar5 == 0.0) {
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    fVar4 = (float)iVar6;
  }
  dVar5 = (double)(fVar2 * fVar2 + fVar4 * fVar4);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar2 = _UNK_?;
  if (_UNK_? <= (float)dVar5 / fStack_3) {
    fVar2 = ((float)dVar5 / fStack_3) / _UNK_?;
  }
  TypeInfo__ResolutionManager->static_fields->dpiScale = fVar2;
  TypeInfo__ResolutionManager->static_fields->canvasScaler = canvasScaler;
  func_?(&TypeInfo__ResolutionManager->static_fields->canvasScaler,canvasScaler);
  pUVar7 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
  if (pUVar7 != (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    if (canvasScaler == (CanvasScaler *)0x0) {
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (*(pUVar7->fields)._._.invoke_impl)
              ((pUVar7->fields)._._.method_code,(canvasScaler->fields).m_ReferenceResolution.x,
               (canvasScaler->fields).m_ReferenceResolution.y,(pUVar7->fields)._._.method);
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
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  if (TypeInfo__ResolutionManager->static_fields->OnReferenceResolution !=
      (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReferenceResolution_still_have,(MethodInfo *)0x0);
    if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    func_?();
  }
  return;
}


/* ResolutionManager() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->canvasScaler = (CanvasScaler *)0x0;
  func_?(&TypeInfo__ResolutionManager->static_fields->canvasScaler,0);
  TypeInfo__ResolutionManager->static_fields->dpiScale = 1.0;
  return;
}


/* Boolean get_Initialized() */

bool Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_Initialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
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
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar1 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  fStack_3 = VVar1.x;
  return fStack_3 / (float)iVar2;
}


/* Vector2 get_PhysicalDistanceToPixels() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PhysicalDistanceToPixels
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar1 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  fVar3 = TypeInfo__ResolutionManager->static_fields->dpiScale;
  VVar4 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar4.y = (VVar4.y / (float)iVar5) * TypeInfo__ResolutionManager->static_fields->dpiScale;
  VVar4.x = (VVar1.x / (float)iVar2) * fVar3;
  return VVar4;
}


/* Vector2 get_PixelsToPhysicalDistance() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar2 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  fVar3 = TypeInfo__ResolutionManager->static_fields->dpiScale;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  VVar5 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  VVar5.y = ((float)iVar4 / VVar5.y) / TypeInfo__ResolutionManager->static_fields->dpiScale;
  VVar5.x = ((float)iVar1 / VVar2.x) / fVar3;
  return VVar5;
}


/* Vector2 get_ReferenceResolution() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_ReferenceResolution
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
  }
  VVar2 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  fStack_3 = VVar2.x;
  return (float)iVar1 / fStack_3;
}


/* Void set_Initialized(Boolean) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_set_Initialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ResolutionManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ResolutionManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ResolutionManager);
    TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = value;
    return;
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = value;
  return;
}

