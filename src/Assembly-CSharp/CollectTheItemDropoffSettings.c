
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
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,woID,(MethodInfo *)0x0), pMVar1 == (MVWorldObject *)0x0))
  goto code_?;
  if (((pMVar1->klass->_1).typeHierarchyDepth < (TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth)
     || ((MVBlueprintBase__Class *)
         (pMVar1->klass->_1).typeHierarchy[(TypeInfo__MVBlueprintBase->_1).typeHierarchyDepth - 1]
         != TypeInfo__MVBlueprintBase)) goto code_?;
  pDVar2 = (pMVar1->fields).data;
  if ((pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0))
  goto code_?;
  if (((pDVar2->klass->_1).typeHierarchyDepth <
       (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (pDVar2->klass->_1).typeHierarchy
      [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
       typeHierarchyDepth - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
  goto code_?;
  dictionary = (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar2,(Object *)StringLiteral_ChildrenMap,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
  this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            func_?();
  if (this_02 ==
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    if (dictionary ==
        (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      dictionary = (IDictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)0x0;
    }
    else if (((dictionary->klass->_1).typeHierarchyDepth <
              (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth) ||
            ((Dictionary_2_System_Object_System_Object___Class *)
             (dictionary->klass->_1).typeHierarchy
             [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object___ctor_1
              (this_02,dictionary,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
              );
    _UNK_? = this_02;
    func_?();
    if (_UNK_? == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_Initialize
              (_UNK_?,0xADDR,(GameObject *)&UNK_?,
               MVWorldObjectDocumentationType__Enum_CollectTheItem,(MethodInfo *)0x0);
    this_00 = _UNK_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,(Object *)StringLiteral_doOnce,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_00 == (SettingsToggle *)0x0) || (pOVar3 == (Object *)0x0)) goto code_?;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?();
      SettingsToggle::SettingsToggle_Initialize
                (this_00,StringLiteral_doOnce,*pbVar4,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)StringLiteral_ChildrenMap,(Object *)(this->fields).childMap,
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

