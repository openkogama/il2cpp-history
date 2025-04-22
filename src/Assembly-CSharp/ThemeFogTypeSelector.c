
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Constrain
                  (ThemeFogTypeSelector *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Fog_mode_is_outside_expected_ran);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).availableModes;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    uVar2 = value % (int)pTVar1->max_length;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    if (iVar4 != value) {
      iVar4 = 0;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Fog_mode_is_outside_expected_ran,(MethodInfo *)0x0);
    }
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Decrement() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Decrement
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  iVar1 = (this->fields).modeIndex + -1;
  (this->fields).modeIndex = iVar1;
  if (iVar1 < 0) {
    pTVar2 = (this->fields).availableModes;
    if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
    (this->fields).modeIndex = pTVar2->max_length + iVar1;
  }
  uVar3 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar4 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar3;
  if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if (pTVar2->max_length <= uVar3) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar2->vector[uVar3] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar4 != (Text *)0x0)) {
      (*(code *)(pTVar4->klass->vtable).set_text.method)();
      pTVar2 = (this->fields).availableModes;
      pAVar6 = (this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar3 = (this->fields).modeIndex;
        if (pTVar2->max_length <= uVar3) goto code_?;
        if ((pTVar2->vector[uVar3] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pAVar6 != (Action_1_Int32_ *)0x0)) {
          (*(pAVar6->fields)._._.invoke_impl)();
          return;
        }
      }
    }
  }
code_?:
  uVar7 = func_?(&stack0xfffffff4);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Increment() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Increment
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  pTVar1 = (this->fields).availableModes;
  iVar2 = (this->fields).modeIndex + 1;
  (this->fields).modeIndex = iVar2;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if ((int)pTVar1->max_length <= iVar2) {
      (this->fields).modeIndex = iVar2 - pTVar1->max_length;
    }
    uVar3 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
    pTVar1 = (this->fields).availableModes;
    pTVar4 = (this->fields).presetNameLabel;
    (this->fields).modeIndex = uVar3;
    if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
      if (pTVar1->max_length <= uVar3) {
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((pTVar1->vector[uVar3] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
         (pTVar4 != (Text *)0x0)) {
        (*(code *)(pTVar4->klass->vtable).set_text.method)();
        pTVar1 = (this->fields).availableModes;
        pAVar6 = (this->fields).onChange;
        if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
          uVar3 = (this->fields).modeIndex;
          if (pTVar1->max_length <= uVar3) goto code_?;
          if ((pTVar1->vector[uVar3] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
             (pAVar6 != (Action_1_Int32_ *)0x0)) {
            (*(pAVar6->fields)._._.invoke_impl)();
            return;
          }
        }
      }
    }
  }
  uVar7 = func_?(&stack0xfffffff4);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Initialize
               (ThemeFogTypeSelector *this,IntAttribute *attrib,Action_1_Int32_ *onChange,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<int>__get_Value__);
    cRam_? = '\x01';
  }
  (this->fields).onChange = onChange;
  func_?(&(this->fields).onChange,onChange);
  pTVar1 = (this->fields).availableModes;
  uVar2 = 0;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    iVar3 = 0x10;
    for (; (int)uVar2 < (int)pTVar1->max_length; uVar2 = uVar2 + 1) {
      if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
      if (pTVar1->max_length <= uVar2) goto code_?;
      iVar4 = *(int *)((int)pTVar1->vector + iVar3 + -0x10);
      if ((iVar4 == 0) || (attrib == (IntAttribute *)0x0)) goto code_?;
      if (*(int *)(iVar4 + 8) == (attrib->fields)._._.value) {
        (this->fields).modeIndex = uVar2;
      }
      iVar3 = iVar3 + 4;
    }
    iVar5 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
    (this->fields).modeIndex = iVar5;
    if ((attrib != (IntAttribute *)0x0) &&
       (pTVar6 = (this->fields).settingNameLabel, pTVar6 != (Text *)0x0)) {
      (*(code *)(pTVar6->klass->vtable).set_text.method)
                (pTVar6,(attrib->fields)._.name,
                 (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pTVar1 = (this->fields).availableModes;
      pTVar6 = (this->fields).presetNameLabel;
      if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar2 = (this->fields).modeIndex;
        if (pTVar1->max_length <= uVar2) goto code_?;
        if ((pTVar1->vector[uVar2] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pTVar6 != (Text *)0x0)) {
          (*(code *)(pTVar6->klass->vtable).set_text.method)
                    (pTVar6,(pTVar1->vector[uVar2]->fields)._Name_k__BackingField,
                     (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_OnSettingChanged
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  uVar1 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar3 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar1;
  if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if (pTVar2->max_length <= uVar1) goto code_?;
    if ((pTVar2->vector[uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar3 != (Text *)0x0)) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,(pTVar2->vector[uVar1]->fields)._Name_k__BackingField);
      pTVar2 = (this->fields).availableModes;
      pAVar4 = (this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar1 = (this->fields).modeIndex;
        if (pTVar2->max_length <= uVar1) goto code_?;
        if ((pTVar2->vector[uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pAVar4 != (Action_1_Int32_ *)0x0)) {
          (*(pAVar4->fields)._._.invoke_impl)
                    ((pAVar4->fields)._._.method_code,
                     (pTVar2->vector[uVar1]->fields)._Mode_k__BackingField);
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThemeFogTypeSelector() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector__ctor
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    func_?(&TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    func_?(&StringLiteral_Heavy);
    func_?(&StringLiteral_Light);
    cRam_? = '\x01';
  }
  (this->fields).modeIndex = -1;
  pTVar1 = (ThemeFogTypeSelector_NamedFogMode__Array *)
           func_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode,2);
  method_00 = TypeInfo__ThemeFogTypeSelector__NamedFogMode;
  pTVar2 = (ThemeFogTypeSelector_NamedFogMode *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pTVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    (pTVar2->fields)._Mode_k__BackingField = 2;
    pSVar4 = StringLiteral_Light;
    (pTVar2->fields)._Name_k__BackingField = StringLiteral_Light;
    func_?(&(pTVar2->fields)._Name_k__BackingField,pSVar4);
    if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
    iVar5 = func_?(pTVar2,(pTVar1->klass->_0).element_class);
    if (iVar5 == 0) goto code_?;
    if (pTVar1->max_length == 0) goto code_?;
    pTVar1->vector[0] = pTVar2;
    func_?(pTVar1->vector,pTVar2);
    pTVar2 = (ThemeFogTypeSelector_NamedFogMode *)
             func_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pTVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode *)0x0) goto code_?;
    (pTVar2->fields)._Mode_k__BackingField = 3;
    pSVar4 = StringLiteral_Heavy;
    (pTVar2->fields)._Name_k__BackingField = StringLiteral_Heavy;
    func_?(&(pTVar2->fields)._Name_k__BackingField,pSVar4);
    iVar5 = func_?(pTVar2,(pTVar1->klass->_0).element_class);
    if (iVar5 != 0) {
      if (1 < pTVar1->max_length) {
        pTVar1->vector[1] = pTVar2;
        func_?(pTVar1->vector + 1,pTVar2);
        (this->fields).availableModes = pTVar1;
        func_?(&(this->fields).availableModes,pTVar1);
        Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
        Singleton_1_System_Object___ctor((Singleton_1_System_Object_ *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

