
/* Void Destroy() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  TypeInfo__ResolutionManager->static_fields->canvasScaler = (CanvasScaler *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__ResolutionManager->static_fields->canvasScaler >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 0;
  return;
}


/* Single GetScreenDpiScale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_GetScreenDpiScale
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStackX_10[0].x = 0.0;
  aVStackX_10[0].y = 0.0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  fVar3 = _UNK_?;
  if (fVar4 != 0.0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
  }
  pSVar5 = TypeInfo__ScreenSizeOptimizer->static_fields;
  fVar4 = (pSVar5->originalSize).x;
  fVar6 = (pSVar5->originalSize).y;
  aVStackX_10[0] = pSVar5->originalSize;
  fVar7 = (float)FUN_?(aVStackX_10);
  if (fVar7 == 0.0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    pcRam_? = pcVar1;
    iVar8 = (*pcRam_?)();
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)iVar8;
    iVar8 = (*pcRam_?)();
    fVar6 = (float)iVar8;
  }
  fVar4 = fVar4 * fVar4 + fVar6 * fVar6;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_?(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar6 = _UNK_?;
  if (_UNK_? <= fVar4 / fVar3) {
    fVar6 = (fVar4 / fVar3) / _UNK_?;
  }
  return fVar6;
}


/* Void Init(CanvasScaler) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_Init
               (CanvasScaler *canvasScaler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = 1;
  fVar1 = ResolutionManager_GetScreenDpiScale((MethodInfo *)0x0);
  TypeInfo__ResolutionManager->static_fields->dpiScale = fVar1;
  TypeInfo__ResolutionManager->static_fields->canvasScaler = canvasScaler;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__ResolutionManager->static_fields->canvasScaler >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pUVar7 = TypeInfo__ResolutionManager->static_fields->OnReferenceResolution;
  if (pUVar7 == (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    return;
  }
  if (canvasScaler == (CanvasScaler *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pUVar7->fields)._._.invoke_impl)
            ((pUVar7->fields)._._.method_code,(canvasScaler->fields).m_ReferenceResolution,
             (pUVar7->fields)._._.method);
  return;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnReferenceResolution_still_have);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  if (TypeInfo__ResolutionManager->static_fields->OnReferenceResolution !=
      (UnityAction_1_UnityEngine_Vector2_ *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_OnReferenceResolution_still_have,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ResolutionManager);
    }
    TypeInfo__ResolutionManager->static_fields->OnReferenceResolution =
         (UnityAction_1_UnityEngine_Vector2_ *)0x0;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)TypeInfo__ResolutionManager->static_fields >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  return;
}


/* ResolutionManager() */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__ResolutionManager->static_fields->canvasScaler = (CanvasScaler *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__ResolutionManager->static_fields->canvasScaler >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  TypeInfo__ResolutionManager->static_fields->dpiScale = 1.0;
  return;
}


/* Boolean get_Initialized() */

bool Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_Initialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  return TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField;
}


/* Single get_InverseScale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_InverseScale(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar1 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    fVar4 = (float)(*pcVar2)();
    return fVar4;
  }
  pcRam_? = pcVar2;
  iVar5 = (*pcRam_?)();
  fStackX_10 = VVar1.x;
  return fStackX_10 / (float)iVar5;
}


/* Vector2 get_PhysicalDistanceToPixels() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PhysicalDistanceToPixels
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar1 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    VVar1 = (Vector2)(*pcVar2)();
    return VVar1;
  }
  pcRam_? = pcVar2;
  iVar4 = (*pcRam_?)();
  fVar5 = TypeInfo__ResolutionManager->static_fields->dpiScale;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  pCVar6 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar6 == (CanvasScaler *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    VVar1 = (Vector2)(*pcVar2)();
    return VVar1;
  }
  fVar7 = (pCVar6->fields).m_ReferenceResolution.y;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    VVar1 = (Vector2)(*pcVar2)();
    return VVar1;
  }
  pcRam_? = pcVar2;
  iVar8 = (*pcRam_?)();
  fStackX_10 = VVar1.x;
  VVar1.y = (fVar7 / (float)iVar8) * TypeInfo__ResolutionManager->static_fields->dpiScale;
  VVar1.x = (fStackX_10 / (float)iVar4) * fVar5;
  return VVar1;
}


/* Vector2 get_PixelsToPhysicalDistance() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_PixelsToPhysicalDistance
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar3 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  fVar5 = TypeInfo__ResolutionManager->static_fields->dpiScale;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    VVar3 = (Vector2)(*pcVar1)();
    return VVar3;
  }
  pcRam_? = pcVar1;
  iVar6 = (*pcRam_?)();
  VVar7 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  fStackX_10 = VVar3.x;
  VVar3.x = ((float)iVar4 / fStackX_10) / fVar5;
  fStackX_1c = VVar7.y;
  VVar3.y = ((float)iVar6 / fStackX_1c) / TypeInfo__ResolutionManager->static_fields->dpiScale;
  return VVar3;
}


/* Vector2 get_ReferenceResolution() */

Vector2 Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_ReferenceResolution
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  pCVar1 = TypeInfo__ResolutionManager->static_fields->canvasScaler;
  if (pCVar1 != (CanvasScaler *)0x0) {
    return (pCVar1->fields).m_ReferenceResolution;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar2)();
  return VVar3;
}


/* Single get_Scale() */

float Assembly-CSharp.dll::ResolutionManager::ResolutionManager_get_Scale(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  VVar5 = ResolutionManager_get_ReferenceResolution((MethodInfo *)0x0);
  fStackX_10 = VVar5.x;
  return (float)iVar4 / fStackX_10;
}


/* Void set_Initialized(Boolean) */

void Assembly-CSharp.dll::ResolutionManager::ResolutionManager_set_Initialized
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ResolutionManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__ResolutionManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ResolutionManager);
  }
  TypeInfo__ResolutionManager->static_fields->_Initialized_k__BackingField = value;
  return;
}

