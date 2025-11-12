
/* Void HideEUseIcon() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_HideEUseIcon
               (PlayModeControlsBase *this,MethodInfo *method)

{
  this_00 = (this->fields).useButtonLarge;
  if ((this_00 == (ShowUse *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_OnEnable
               (PlayModeControlsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__WaitForTicks);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).testForLowFPS != 0) {
    this_00 = (WaitForTicks *)FUN_?(TypeInfo__WaitForTicks);
    WaitForTicks::WaitForTicks__ctor(this_00,5000,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).waitForMs = this_00;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).waitForMs >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    (this->fields).testForLowFPS = 0;
  }
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_ShowEUseIcon
               (PlayModeControlsBase *this,ShowUseOption__Enum option,MethodInfo *method)

{
  pSVar1 = (this->fields).useButtonLarge;
  if (pSVar1 != (ShowUse *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).useButtonLarge;
      if (pSVar1 != (ShowUse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar1->klass->vtable).__unknown.methodPtr)
                  (pSVar1,(ulonglong)option,0,(pSVar1->klass->vtable).__unknown.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_Update
               (PlayModeControlsBase *this,MethodInfo *method)

{
  if ((this->fields).waitedUntilPlaying == 0) {
    this_00 = (this->fields).waitForMs;
    if (this_00 == (WaitForTicks *)0x0) goto code_?;
    bVar1 = WaitForTicks::WaitForTicks_get_TimeIsUp(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this->fields).waitedUntilPlaying = 1;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickupGUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField !=
      (this->fields).showingEquipableUI) {
    this_01 = (this->fields).crossHairGO;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_01 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 4) !=
                       0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PickupGUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    (this->fields).showingEquipableUI =
         TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  }
  return;
}

