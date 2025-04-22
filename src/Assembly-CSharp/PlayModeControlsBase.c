
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
           (piVar4 = *(int **)((int)RVar3 + 0x18), piVar4 == (int *)0x0)) goto code_?;
        (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
      }
      (*(code *)(this->klass->vtable).SetUseButtonVisible.method)
                (this,0,0,0,this->klass[1]._0.image);
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
    WaitForTicks::WaitForTicks__ctor(this_00,5000,(MethodInfo *)0x0);
    (this->fields).waitForMs = this_00;
    func_?(&(this->fields).waitForMs,this_00);
    (this->fields).testForLowFPS = 0;
  }
  return;
}


/* Void SetUseButtonVisible(Boolean, Nullable`1[ShowUseOption]) */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_SetUseButtonVisible
               (PlayModeControlsBase *this,bool visible,Nullable_1_ShowUseOption_ option,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<ShowUseOption>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<ShowUseOption>__get_Value__);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).useButtonLarge;
  if (pSVar1 != (ShowUse *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pSVar1,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,visible,(MethodInfo *)0x0);
      if (option.hasValue != 0) {
        pSVar1 = (this->fields).useButtonLarge;
        mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32__get_Value
                  ((Nullable_1_UInt32_ *)&option,
                   MethodInfo__System__Nullable<ShowUseOption>__get_Value__);
        if (pSVar1 == (ShowUse *)0x0) goto code_?;
        pSVar2 = pSVar1->klass;
        option.value = (int32_t)(pSVar2->vtable).__unknown_1.methodPtr;
        option.hasValue = 0;
        option._1_3_ = 0;
        (*(code *)(pSVar2->vtable).__unknown.method)();
      }
      return;
    }
  }
code_?:
  option.value = (int32_t)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::PlayModeControlsBase::PlayModeControlsBase_ShowEUseIcon
               (PlayModeControlsBase *this,ShowUseOption__Enum option,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Nullable<ShowUseOption>__Nullable_ShowUseOption_);
    cRam_? = '\x01';
  }
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
           (piVar4 = *(int **)((int)RVar3 + 0x18), piVar4 == (int *)0x0)) goto code_?;
        NStack_5._0_4_ = *(undefined4 *)(*piVar4 + 0xe4);
        (**(code **)(*piVar4 + 0xe0))(piVar4,option);
      }
      NStack_5.hasValue = 0;
      NStack_5._1_3_ = 0;
      NStack_5.value = 0;
      mscorlib.dll::System::Nullable`1[UInt32]::Nullable_1_UInt32___ctor
                (&NStack_5,option,
                 MethodInfo__System__Nullable<ShowUseOption>__Nullable_ShowUseOption_);
      (*(code *)(this->klass->vtable).SetUseButtonVisible.method)
                (this,1,NStack_5._0_4_,NStack_5.value,this->klass[1]._0.image);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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

