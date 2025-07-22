
/* Void HideEUseIcon() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_HideEUseIcon
               (PlayModeControlsBase *this,MethodInfo *method)

{
  this_00 = (this->fields).useButtonLarge;
  if (this_00 != (ShowUse *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_OnEnable
               (PlayModeControlsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WaitForTicks);
    cRam_? = '\x01';
  }
  if ((this->fields).testForLowFPS != 0) {
    this_00 = (WaitForTicks *)func_?(TypeInfo__WaitForTicks);
    WaitForTicks::WaitForTicks__ctor(this_00,5000,(MethodInfo *)0x0);
    (this->fields).waitForMs = this_00;
    func_?(&(this->fields).waitForMs,this_00);
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
        (*(code *)(pSVar1->klass->vtable).__unknown.method)();
        return;
      }
    }
  }
  func_?();
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
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      (this->fields).waitedUntilPlaying = 1;
    }
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupGUI);
    cRam_? = '\x01';
  }
  if (TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField !=
      (this->fields).showingEquipableUI) {
    this_01 = (this->fields).crossHairGO;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PickupGUI);
      cRam_? = '\x01';
    }
    if (this_01 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,(TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField & 4) !=
                       0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    (this->fields).showingEquipableUI =
         TypeInfo__PickupGUI->static_fields->_ShowEquipableUI_k__BackingField;
  }
  return;
}


/* PlayModeControlsBase() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase__ctor
               (PlayModeControlsBase *this,MethodInfo *method)

{
  (this->fields).testForLowFPS = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

