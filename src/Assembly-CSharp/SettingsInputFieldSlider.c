
/* Single GetInputFieldValue(Single) */

float Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                (SettingsInputFieldSlider *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).round != 0) {
    pSVar1 = (this->fields).settingsSlider;
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    fVar2 = (pSVar1->fields).interval;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar3 = (float10)func_?(value / fVar2);
    pSVar1 = (this->fields).settingsSlider;
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    value = (pSVar1->fields).interval * (float)fVar3;
  }
  pSVar1 = (this->fields).settingsSlider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar4 = (pSVar1->fields).slider, pSVar4 != (Slider *)0x0)) {
    ThemeSkybox::ThemeSkybox_get_MoonLightIntensity((ThemeSkybox *)pSVar4,(MethodInfo *)0x0);
    pSVar1 = (this->fields).settingsSlider;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar4 = (pSVar1->fields).slider, pSVar4 != (Slider *)0x0)) {
      this = (SettingsInputFieldSlider *)
             ThemeSkybox::ThemeSkybox_get_CloudsHeight((ThemeSkybox *)pSVar4,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        this = (SettingsInputFieldSlider *)TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                        (value,(float)pSVar4,(float)this,(MethodInfo *)0x0);
      return fVar2;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  fVar3 = (float10)(*pcVar5)();
  return (float)fVar3;
}


/* Void Initialize(String, Single) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
               (SettingsInputFieldSlider *this,String *key,float value,MethodInfo *method)

{
  this_00 = (this->fields).inputField;
  (this->fields).key = key;
  SettingsInputFieldSlider_GetInputFieldValue(this,value,(MethodInfo *)0x0);
  value_00 = (String *)func_?(&stack0xfffffff8,0);
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
               (SettingsInputFieldSlider *this,String *key,int32_t value,MethodInfo *method)

{
  this_00 = (this->fields).inputField;
  (this->fields).key = key;
  SettingsInputFieldSlider_GetInputFieldValue(this,(float)value,(MethodInfo *)0x0);
  value_00 = (String *)func_?(&stack0xfffffff8,0);
  if (this_00 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InputFieldValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_InputFieldValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  value = 0.0;
  pIVar1 = (this->fields).inputField;
  if (pIVar1 != (InputField *)0x0) {
    pSVar2 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1
              (pSVar2,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    SettingsInputFieldSlider_GetInputFieldValue(this,value,(MethodInfo *)0x0);
    pSVar2 = (String *)func_?();
    if (pIVar1 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar1,pSVar2,(MethodInfo *)0x0);
      pIVar1 = (this->fields).inputField;
      if (pIVar1 != (InputField *)0x0) {
        pSVar2 = (String *)
                 TriggerCube::TriggerCube_get_InputSignalReceiver
                           ((TriggerCube *)pIVar1,(MethodInfo *)0x0);
        SettingsInputFieldSlider_ValueChanged(this,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Reset
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  (this->fields).inputField = pIVar1;
  return;
}


/* Void SetText(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
               (SettingsInputFieldSlider *this,String *text,MethodInfo *method)

{
  this_00 = (this->fields).inputField;
  if ((this_00 == (InputField *)0x0) ||
     (UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                (this_00,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0),
     (this->fields).inputField == (InputField *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = (in_stack_3->fields).m_Text;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar4 = mscorlib.dll::System::String::String_op_Equality
                    (pSVar2,(String *)in_stack_5,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    return;
  }
  if (in_stack_5 == (InputField_OnValidateInput *)0x0) {
    in_stack_5 = (InputField_OnValidateInput *)::StringLiteral__;
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (in_stack_5 == (InputField_OnValidateInput *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pCVar6 = (Collection_1_VoxelHit_ *)
           mscorlib.dll::System::String::String_Replace_1
                     ((String *)in_stack_5,::StringLiteral__,
                      TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
  if ((in_stack_3->fields).m_LineType == 0) {
    if ((pCVar6 == (Collection_1_VoxelHit_ *)0x0) ||
       (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           ((String *)pCVar6,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0
                           ), pSVar2 == (String *)0x0)) goto code_?;
    pCVar6 = (Collection_1_VoxelHit_ *)
             mscorlib.dll::System::String::String_Replace_1
                       (pSVar2,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  in_stack_5 = (in_stack_3->fields).m_OnValidateInput;
  if ((in_stack_5 == (InputField_OnValidateInput *)0x0) &&
     ((in_stack_3->fields).m_CharacterValidation == 0)) {
    if (0 < (in_stack_3->fields).m_CharacterLimit) {
      if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
      pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
      iVar8 = (in_stack_3->fields).m_CharacterLimit;
      if (iVar8 < (int)pIVar7) {
        pCVar6 = (Collection_1_VoxelHit_ *)
                 mscorlib.dll::System::String::String_Substring_1
                           ((String *)pCVar6,0,iVar8,(MethodInfo *)0x0);
      }
    }
    (in_stack_3->fields).m_Text = (String *)pCVar6;
  }
  else {
    (in_stack_3->fields).m_Text = ::StringLiteral__;
    if (in_stack_5 == (InputField_OnValidateInput *)0x0) {
      in_stack_5 =
           (InputField_OnValidateInput *)
           func_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar9 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      (in_stack_5->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           methodPointer;
      (in_stack_5->fields)._._.method = pMVar9;
      (in_stack_5->fields)._._.m_target = (Object *)in_stack_3;
    }
    if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
    (in_stack_3->fields).m_CaretSelectPosition = (int32_t)pIVar7;
    (in_stack_3->fields).m_CaretPosition = (int32_t)pIVar7;
    iVar8 = (in_stack_3->fields).m_CharacterLimit;
    pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
    if (0 < iVar8) {
      pIVar7 = (IList_1_VoxelHit_ *)
               UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min_1
                         (iVar8,(int32_t)pIVar7,(MethodInfo *)0x0);
    }
    iVar8 = 0;
    if (0 < (int)pIVar7) {
      do {
        this_01 = (Collection_1_VoxelHit_ *)(in_stack_3->fields).m_Text;
        if (this_01 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
        pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        uVar10 = mscorlib.dll::System::String::String_get_Chars
                          ((String *)pCVar6,iVar8,(MethodInfo *)0x0);
        if (in_stack_5 == (InputField_OnValidateInput *)0x0) goto code_?;
        uVar10 = UnityEngine.UI.dll::UnityEngine::UI::InputField+OnValidateInput::
                InputField_OnValidateInput_Invoke
                          (in_stack_5,(String *)this_01,(int32_t)pIVar7,uVar10,
                           (MethodInfo *)0x0);
        if (uVar10 != 0) {
          pSVar2 = (in_stack_3->fields).m_Text;
          arg1 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar2 = mscorlib.dll::System::String::String_Concat
                             ((Object *)pSVar2,arg1,(MethodInfo *)0x0);
          (in_stack_3->fields).m_Text = pSVar2;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)pIVar7);
    }
  }
  this_02 = (ScaleAnimationBase *)(in_stack_3->fields).m_Keyboard;
  if (this_02 != (ScaleAnimationBase *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play
              (this_02,(float)(in_stack_3->fields).m_Text,(MethodInfo *)0x0);
  }
  pCVar6 = (Collection_1_VoxelHit_ *)(in_stack_3->fields).m_Text;
  iVar8 = (in_stack_3->fields).m_CaretPosition;
  if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
  pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
  pCVar6 = (Collection_1_VoxelHit_ *)(in_stack_3->fields).m_Text;
  if ((int)pIVar7 < iVar8) {
    if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
    (in_stack_3->fields).m_CaretPosition = (int32_t)pIVar7;
  }
  else {
    iVar8 = (in_stack_3->fields).m_CaretSelectPosition;
    if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
    if (iVar8 <= (int)pIVar7) goto code_?;
    pCVar6 = (Collection_1_VoxelHit_ *)(in_stack_3->fields).m_Text;
    if (pCVar6 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
    pIVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items(pCVar6,(MethodInfo *)0x0);
  }
  (in_stack_3->fields).m_CaretSelectPosition = (int32_t)pIVar7;
code_?:
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SendOnValueChangedAndUpdateLabel
            (in_stack_3,(MethodInfo *)0x0);
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SliderValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  pSVar2 = (this->fields).settingsSlider;
  pIVar3 = (this->fields).inputField;
  if ((pSVar2 != (SettingsSlider *)0x0) &&
     (pSVar4 = (pSVar2->fields).slider, pSVar4 != (Slider *)0x0)) {
    fVar5 = (float10)(*(code *)(pSVar4->klass->vtable).get_value.method)
                               (pSVar4,(pSVar4->klass->vtable).set_value.methodPtr);
    fStack_1 = SettingsInputFieldSlider_GetInputFieldValue(this,(float)fVar5,(MethodInfo *)0x0);
    pSVar6 = (String *)func_?(&fStack_1,0);
    if (pIVar3 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar3,pSVar6,(MethodInfo *)0x0);
      pIVar3 = (this->fields).inputField;
      if (pIVar3 != (InputField *)0x0) {
        pSVar6 = (String *)
                 TriggerCube::TriggerCube_get_InputSignalReceiver
                           ((TriggerCube *)pIVar3,(MethodInfo *)0x0);
        SettingsInputFieldSlider_ValueChanged(this,pSVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Update
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inputField;
  if (this_00 != (InputField *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_get_isFocused
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ValueChanged(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_ValueChanged
               (SettingsInputFieldSlider *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsInputFieldSlider___ValueChanged_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields).state = (int32_t)this;
    mscorlib.dll::System::Single::Single_TryParse_1
              (value,(float *)&this_01->fields,(MethodInfo *)0x0);
    this_02 = (Collection_1_VoxelHit_ *)func_?(&this_01->fields,0);
    if (this_02 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
      pPVar2 = (PrefabPool *)(this->fields).inputField;
      if (pPVar2 != (PrefabPool *)0x0) {
        pOVar3 = PrefabPool::PrefabPool_get_MVSpawnPointRedPrefab(pPVar2,(MethodInfo *)0x0);
        if ((int)pOVar3 < (int)pIVar1) {
          pPVar2 = (PrefabPool *)(this->fields).inputField;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pOVar3 = PrefabPool::PrefabPool_get_MVSpawnPointRedPrefab(pPVar2,(MethodInfo *)0x0);
          this_02 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::String::String_Remove
                              ((String *)this_02,(int32_t)pOVar3,(MethodInfo *)0x0);
        }
        this_00 = (this->fields).inputField;
        if (this_00 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (this_00,(String *)this_02,(MethodInfo *)0x0);
          pSVar4 = (this->fields).settingsSlider;
          if ((pSVar4 != (SettingsSlider *)0x0) &&
             (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
            (*(code *)(pSVar5->klass->vtable).set_value.method)
                      (pSVar5,(this_01->fields)._._._._.m_CachedPtr,
                       (pSVar5->klass->vtable).Rebuild_1.methodPtr);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                                        );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_01,
                       MethodInfo__SettingsInputFieldSlider___ValueChanged_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SettingsInputFieldSlider() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider__ctor
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  (this->fields).round = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

