
/* Void Activate() */

void Assembly-CSharp.dll::Theme::Theme_Activate(Theme *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields).overrideSkyboxManager != 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_01 == (SkyboxManager *)0x0) goto code_?;
    unaff_EDI = (MethodInfo *)0x0;
    SkyboxManager::SkyboxManager_Disable(this_01,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).components;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)LStack_6._current + 0xe0))
                (LStack_6._current,*(undefined4 *)(*(int *)LStack_6._current + 0xe4));
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Add(ThemeComponent) */

void Assembly-CSharp.dll::Theme::Theme_Add(Theme *this,ThemeComponent *component,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).components;
  if (this_00 != (List_1_ThemeComponent_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)component,
               MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::Theme::Theme_Deactivate(Theme *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields).overrideSkyboxManager != 0) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_SkyboxManager((MethodInfo *)0x0);
    if (this_01 == (SkyboxManager *)0x0) goto code_?;
    unaff_EDI = (MethodInfo *)0x0;
    GameCoinStringRenderer::GameCoinStringRenderer_Start
              ((GameCoinStringRenderer *)this_01,(MethodInfo *)0x0);
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).components;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<ThemeComponent>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      (**(code **)(*(int *)LStack_6._current + 0xe8))
                (LStack_6._current,*(undefined4 *)(*(int *)LStack_6._current + 0xec));
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Initialize(Theme *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSettings__SettingsSerialized);
    cRam_? = '\x01';
  }
  this_01 = (SettingsSerialized *)func_?(TypeInfo__ThemeSettings__SettingsSerialized);
  ThemeSettings::SettingsSerialized::SettingsSerialized__ctor(this_01,woid,(MethodInfo *)0x0);
  (this->fields)._Settings_k__BackingField = (SettingsWrapper *)this_01;
  func_?(&(this->fields)._Settings_k__BackingField,this_01);
  (*(code *)(this->klass->vtable).__unknown_4.method)
            (this,(this->klass->vtable).get_Controllers.methodPtr);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).__unknown_3.method)
              (this,(this->klass->vtable).__unknown_4.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void InitializeForPreview() */

void Assembly-CSharp.dll::Theme::Theme_InitializeForPreview(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeSettings__SettingsPreview);
    cRam_? = '\x01';
  }
  this_01 = (SettingsPreview *)func_?(TypeInfo__ThemeSettings__SettingsPreview);
  ThemeSettings::SettingsPreview::SettingsPreview__ctor(this_01,(MethodInfo *)0x0);
  (this->fields)._Settings_k__BackingField = (SettingsWrapper *)this_01;
  func_?(&(this->fields)._Settings_k__BackingField,this_01);
  (*(code *)(this->klass->vtable).__unknown_4.method)
            (this,(this->klass->vtable).get_Controllers.methodPtr);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).__unknown_3.method)
              (this,(this->klass->vtable).__unknown_4.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Theme::Theme_Initialize_1(Theme *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).__unknown_4.method)
            (this,(this->klass->vtable).get_Controllers.methodPtr);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).__unknown_3.method)
              (this,(this->klass->vtable).__unknown_4.methodPtr);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Purchase(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Purchase(Theme *this,int32_t id,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  pSVar1 = (this->fields)._Settings_k__BackingField;
  if ((pSVar1 != (SettingsWrapper *)0x0) && (this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseSwitchTheme
              (this_00,id,(pSVar1->fields).settingsData,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Theme() */

void Assembly-CSharp.dll::Theme::Theme__ctor(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeComponent>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeComponent_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  (this->fields).components = this_00;
  func_?(&(this->fields).components,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* List`1[UnityEngine.RectTransform] get_Controllers() */

List_1_UnityEngine_RectTransform_ *
Assembly-CSharp.dll::Theme::Theme_get_Controllers(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,0,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_);
  return (List_1_UnityEngine_RectTransform_ *)this_00;
}

