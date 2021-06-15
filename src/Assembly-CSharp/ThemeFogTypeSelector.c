
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Constrain
                  (ThemeFogTypeSelector *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).availableModes;
  if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Abs_1
                      (value % (int)pTVar1->max_length,(MethodInfo *)0x0);
    if (iVar2 != value) {
      iVar2 = 0;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Fog_mode_is_outside_expected_ran,(MethodInfo *)0x0);
    }
    return iVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Void Decrement() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Decrement
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  piVar1 = &(this->fields).modeIndex;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    pTVar2 = (this->fields).availableModes;
    if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar1 = &(this->fields).modeIndex;
    *piVar1 = *piVar1 + pTVar2->max_length;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar4 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar5 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar4;
  if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
code_?:
    func_?();
  }
  else if (uVar4 < pTVar2->max_length) {
    if ((pTVar2->vector[uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar5 != (Text *)0x0)) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)
                (pTVar5,(pTVar2->vector[uVar4]->fields)._Name_k__BackingField);
      pTVar2 = (this->fields).availableModes;
      this_00 = (Action_1_UIPushOption_ *)(this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar4 = (this->fields).modeIndex;
        if (pTVar2->max_length <= uVar4) goto code_?;
        if ((pTVar2->vector[uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (this_00 != (Action_1_UIPushOption_ *)0x0)) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,(pTVar2->vector[uVar4]->fields)._Mode_k__BackingField,
                     MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
    goto code_?;
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Increment() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Increment
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  pTVar1 = (this->fields).availableModes;
  iVar2 = (this->fields).modeIndex + 1;
  (this->fields).modeIndex = iVar2;
  if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((int)pTVar1->max_length <= iVar2) {
    if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
    (this->fields).modeIndex = iVar2 - pTVar1->max_length;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar4 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar1 = (this->fields).availableModes;
  pTVar5 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar4;
  if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
code_?:
    func_?();
  }
  else if (uVar4 < pTVar1->max_length) {
    if ((pTVar1->vector[uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar5 != (Text *)0x0)) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)
                (pTVar5,(pTVar1->vector[uVar4]->fields)._Name_k__BackingField);
      pTVar1 = (this->fields).availableModes;
      this_00 = (Action_1_UIPushOption_ *)(this->fields).onChange;
      if (pTVar1 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar4 = (this->fields).modeIndex;
        if (pTVar1->max_length <= uVar4) goto code_?;
        if ((pTVar1->vector[uVar4] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (this_00 != (Action_1_UIPushOption_ *)0x0)) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,(pTVar1->vector[uVar4]->fields)._Mode_k__BackingField,
                     MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
    goto code_?;
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(IntAttribute, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_Initialize
               (ThemeFogTypeSelector *this,IntAttribute *attrib,Action_1_Int32_ *onChange,
               MethodInfo *method)

{
  pAVar1 = onChange;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  onChange = (Action_1_Int32_ *)0x0;
  pTVar2 = (this->fields).availableModes;
  (this->fields).onChange = pAVar1;
  if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
    iVar3 = 0x10;
    while ((int)onChange < (int)pTVar2->max_length) {
      if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
      if ((Action_1_Int32_ *)pTVar2->max_length <= onChange) goto code_?;
      iVar4 = *(int *)((int)pTVar2->vector + iVar3 + -0x10);
      if ((iVar4 == 0) || (pIVar5 = *(IKogamaSetting **)(iVar4 + 8), attrib == (IntAttribute *)0x0))
      goto code_?;
      pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)attrib,
                          MethodInfo__ThemeAttributes__ThemeAttribute<int>__get_Value__);
      if (pIVar5 == pIVar6) {
        (this->fields).modeIndex = (int32_t)onChange;
      }
      pTVar2 = (this->fields).availableModes;
      onChange = (Action_1_Int32_ *)((int)&onChange->klass + 1);
      iVar3 = iVar3 + 4;
      if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
    }
    iVar7 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
    pTVar8 = (this->fields).settingNameLabel;
    (this->fields).modeIndex = iVar7;
    if ((attrib != (IntAttribute *)0x0) &&
       (JVar9 = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)attrib,
                           MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__get_Name__),
       pTVar8 != (Text *)0x0)) {
      (*(code *)(pTVar8->klass->vtable).set_text.method)(pTVar8,JVar9);
      pTVar2 = (this->fields).availableModes;
      pTVar8 = (this->fields).presetNameLabel;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar10 = (this->fields).modeIndex;
        if (pTVar2->max_length <= uVar10) goto code_?;
        if ((pTVar2->vector[uVar10] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (pTVar8 != (Text *)0x0)) {
          (*(code *)(pTVar8->klass->vtable).set_text.method)
                    (pTVar8,(pTVar2->vector[uVar10]->fields)._Name_k__BackingField,
                     (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  uVar11 = func_?(0,0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnSettingChanged() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector_OnSettingChanged
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = ThemeFogTypeSelector_Constrain(this,(this->fields).modeIndex,(MethodInfo *)0x0);
  pTVar2 = (this->fields).availableModes;
  pTVar3 = (this->fields).presetNameLabel;
  (this->fields).modeIndex = uVar1;
  if (pTVar2 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
code_?:
    func_?();
  }
  else if (uVar1 < pTVar2->max_length) {
    if ((pTVar2->vector[uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
       (pTVar3 != (Text *)0x0)) {
      (*(code *)(pTVar3->klass->vtable).set_text.method)
                (pTVar3,(pTVar2->vector[uVar1]->fields)._Name_k__BackingField);
      pTVar2 = (this->fields).availableModes;
      this_00 = (Action_1_UIPushOption_ *)(this->fields).onChange;
      if (pTVar2 != (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) {
        uVar1 = (this->fields).modeIndex;
        if (pTVar2->max_length <= uVar1) goto code_?;
        if ((pTVar2->vector[uVar1] != (ThemeFogTypeSelector_NamedFogMode *)0x0) &&
           (this_00 != (Action_1_UIPushOption_ *)0x0)) {
          mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                    (this_00,(pTVar2->vector[uVar1]->fields)._Mode_k__BackingField,
                     MethodInfo__System__Action<int>__Invoke_int_);
          return;
        }
      }
    }
    goto code_?;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
code_?:
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ThemeFogTypeSelector() */

void Assembly-CSharp.dll::ThemeFogTypeSelector::ThemeFogTypeSelector__ctor
               (ThemeFogTypeSelector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).modeIndex = -1;
  pTVar1 = (ThemeFogTypeSelector_NamedFogMode__Array *)
           func_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode,2);
  method_00 = TypeInfo__ThemeFogTypeSelector__NamedFogMode;
  pSVar2 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_00);
  if (pSVar2 == (ScaleAnimationBase *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x2;
    (pSVar2->fields).state = (int32_t)StringLiteral_Light;
    if (pTVar1 == (ThemeFogTypeSelector_NamedFogMode__Array *)0x0) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    iVar4 = func_?(pSVar2,(pTVar1->klass->_0).element_class);
    if (iVar4 == 0) goto code_?;
    if (pTVar1->max_length == 0) goto code_?;
    pTVar1->vector[0] = (ThemeFogTypeSelector_NamedFogMode *)pSVar2;
    pSVar2 = (ScaleAnimationBase *)func_?(TypeInfo__ThemeFogTypeSelector__NamedFogMode);
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,method_01);
    if (pSVar2 == (ScaleAnimationBase *)0x0) goto code_?;
    (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x3;
    (pSVar2->fields).state = (int32_t)StringLiteral_Heavy;
    iVar4 = func_?(pSVar2,(pTVar1->klass->_0).element_class);
    if (iVar4 != 0) {
      if (1 < pTVar1->max_length) {
        pTVar1->vector[1] = (ThemeFogTypeSelector_NamedFogMode *)pSVar2;
        (this->fields).availableModes = pTVar1;
        UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor
                  ((Canvas *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

