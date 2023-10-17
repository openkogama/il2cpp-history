
/* Void HideEUseIcon() */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_HideEUseIcon
               (PlayModeControlsBase *this,MethodInfo *method)

{
  pJVar1 = (this->fields).joystickControllerStack;
  if (pJVar1 != (JoystickControllerStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
      func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (pJVar1->fields).controls;
    if (pLVar2 != (List_1_InGameControls_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (pJVar1->fields).controls,(pLVar2->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                          );
        if ((RVar3 == (RegexCharClass_SingleRange)0x0) ||
           (piVar4 = *(int **)((int)RVar3 + 0x14), piVar4 == (int *)0x0)) goto code_?;
        (**(code **)(*piVar4 + 0xe4))(piVar4,*(undefined4 *)(*piVar4 + 0xe8));
      }
      (*(this->klass->vtable).SetUseButtonVisible.methodPtr)
                (this,0,(this->klass->vtable).SetUseButtonVisible.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    if (this_00 == (WaitForTicks *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    WaitForTicks::WaitForTicks__ctor(this_00,5000,(MethodInfo *)0x0);
    (this->fields).waitForMs = this_00;
    func_?(&(this->fields).waitForMs,this_00);
    (this->fields).testForLowFPS = 0;
  }
  return;
}


/* Void SetUseButtonVisible(Boolean) */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_SetUseButtonVisible
               (PlayModeControlsBase *this,bool visible,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).useButtonLarge;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_visible;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_ShowEUseIcon
               (PlayModeControlsBase *this,ShowUseOption__Enum option,MethodInfo *method)

{
  pJVar1 = (this->fields).joystickControllerStack;
  if (pJVar1 != (JoystickControllerStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
      func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                     );
      cRam_? = '\x01';
    }
    pLVar2 = (pJVar1->fields).controls;
    if (pLVar2 != (List_1_InGameControls_ *)0x0) {
      if ((pLVar2->fields)._size != 0) {
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           (pJVar1->fields).controls,(pLVar2->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                          );
        if ((RVar3 == (RegexCharClass_SingleRange)0x0) ||
           (piVar4 = *(int **)((int)RVar3 + 0x14), piVar4 == (int *)0x0)) goto code_?;
        (**(code **)(*piVar4 + 0xdc))(piVar4,option,*(undefined4 *)(*piVar4 + 0xe0));
      }
      (*(this->klass->vtable).SetUseButtonVisible.methodPtr)
                (this,1,(this->klass->vtable).SetUseButtonVisible.method);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

