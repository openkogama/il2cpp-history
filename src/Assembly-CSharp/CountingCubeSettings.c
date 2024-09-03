
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_Initialize
               (CountingCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_reset);
    func_?(&StringLiteral_startingValue);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (pCVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CountingCube,(MethodInfo *)0x0);
  if (id == -1) {
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    root = (GameObject *)0x5;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&root);
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_startingValue,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this = (CountingCubeSettings *)CONCAT13(1,this._0_3_);
    pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_04,(Object *)StringLiteral_reset,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_05 = (pCVar1->fields).slider;
  }
  else {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (CountingCubeSettings *)0x0;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_03,id,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) goto code_?;
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(pMVar3->fields).data;
    this_05 = (pCVar1->fields).slider;
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) goto code_?;
  }
  TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                     (Object *)StringLiteral_startingValue,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if ((this_05 != (SettingsSlider *)0x0) && (TVar4.m_Index != 0)) {
    pIVar5 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar6 = (int32_t *)func_?(TVar4.m_Index);
      SettingsSlider::SettingsSlider_Initialize_1
                (this_05,StringLiteral_startingValue,*piVar6,1,99,(MethodInfo *)0x0);
      this_01 = (pCVar1->fields).inputField;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                         (Object *)StringLiteral_startingValue,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if ((this_01 == (SettingsInputFieldSlider *)0x0) || (TVar4.m_Index == 0))
      goto code_?;
      pIVar5 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar6 = (int32_t *)func_?(TVar4.m_Index);
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                  (this_01,StringLiteral_startingValue,*piVar6,(MethodInfo *)0x0);
        this_02 = (pCVar1->fields).toggle;
        TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_04,
                           (Object *)StringLiteral_reset,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((this_02 == (SettingsToggle *)0x0) || (TVar4.m_Index == 0)) goto code_?;
        pIVar5 = (Int32__Class *)TypeInfo__System__Boolean;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar7 = (bool *)func_?(TVar4.m_Index);
          SettingsToggle::SettingsToggle_Initialize
                    (this_02,StringLiteral_reset,*pbVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?(TVar4.m_Index,pIVar5);
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_OnSettingChanged
               (CountingCubeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_startingValue);
    cRam_? = '\x01';
  }
  key_00 = key;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_startingValue,(MethodInfo *)0x0);
  this_00 = (this->fields).settingsBase;
  if (bVar1 == 0) {
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    key = (String *)mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    value_00 = (Object *)func_?(TypeInfo__System__Int32,&key);
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

