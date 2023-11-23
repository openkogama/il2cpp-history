
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize
               (CollectTheItemDropoffSettings *this,int32_t woID,GameObject *root,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MVBlueprintBase);
    func_?(&StringLiteral_doOnce);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) goto code_?;
    if (((pMVar1->klass->_1).naturalAligment < (TypeInfo__MVBlueprintBase->_1).naturalAligment) ||
       ((MVBlueprintBase__Class *)
        (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).naturalAligment - 1] !=
        TypeInfo__MVBlueprintBase)) goto code_?;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar1->fields).data;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) goto code_?;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)TVar2.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar2.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      dictionary = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (TVar2.m_Index,(Object *)StringLiteral_ChildrenMap,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      this_03 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if ((dictionary.m_Index == 0) ||
         (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= *(byte *)(*(int *)dictionary.m_Index + 0xb8) &&
          (*(Dictionary_2_System_Object_System_Object___Class **)
            (*(int *)(*(int *)dictionary.m_Index + 100) + -4 +
            (uint)(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment * 4) ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_1
                  (this_03,(IDictionary_2_System_Object_System_Object_ *)dictionary.m_Index,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                  );
        _UNK_? = this_03;
        func_?();
        if (_UNK_? == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_Initialize
                  (_UNK_?,0xADDR,(GameObject *)&UNK_?,
                   MVWorldObjectDocumentationType__Enum_CollectTheItem,(MethodInfo *)0x0);
        this_01 = _UNK_?;
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (TVar2.m_Index,(Object *)StringLiteral_doOnce,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((this_01 == (SettingsToggle *)0x0) || (TVar2.m_Index == 0)) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar3 = (bool *)func_?();
          SettingsToggle::SettingsToggle_Initialize
                    (this_01,StringLiteral_doOnce,*pbVar3,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?(pMVar1);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::
     CollectTheItemDropoffSettings_OnSettingChanged
               (CollectTheItemDropoffSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_ChildrenMap,(Object *)(this->fields).childMap,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_00 = (this->fields).settingsBase;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged
                (this_00,StringLiteral_BlueprintData,(Object *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

