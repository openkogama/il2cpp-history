
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_Initialize(CollectTheItemDropoffSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>);
    func_?(&TypeInfo__MVBlueprintBase);
    func_?(&StringLiteral_doOnce);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_01 == (MVWorldObjectClientManager *)0x0) || (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject(this_01,woID,(MethodInfo *)0x0), pMVar1 == (MVWorldObject *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    bVar2 = (TypeInfo__MVBlueprintBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) || ((MVBlueprintBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVBlueprintBase)) goto code_?;
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar1->fields).data;
    if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) || (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item(this_00,(Object *)StringLiteral_BlueprintData,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_), TVar3.m_Index == 0)) goto code_?;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).naturalAligment;
    if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) < bVar2) || (*(Dictionary_2_System_Object_System_Object___Class **)(*(int *)(*(int *)TVar3.m_Index + 100) + -4 + (uint)bVar2 * 4) != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) goto code_?;
    dictionary = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item(TVar3.m_Index,(Object *)StringLiteral_ChildrenMap,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (dictionary.m_Index == 0) {
      dictionary.m_Index = 0;
code_?:
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object___ctor_1(this_02,(IDictionary_2_System_Object_System_Object_ *)dictionary.m_Index,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_);
      _UNK_? = this_02;
                    /* WARNING: Read-only address (ram,0xADDR) is written */
      func_?();
      SettingsBase::SettingsBase_Initialize((SettingsBase *)0x8b28ebc9,0xADDR,(GameObject *)&UNK_?,MVWorldObjectDocumentationType__Enum_CollectTheItem,(MethodInfo *)0x0);
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item(TVar3.m_Index,(Object *)StringLiteral_doOnce,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar4 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize((SettingsToggle *)0xb88a8a06,StringLiteral_doOnce,*pbVar4,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).naturalAligment;
    if ((bVar2 <= *(byte *)(*(int *)dictionary.m_Index + 0xb8)) && (*(Dictionary_2_System_Object_System_Object___Class **)(*(int *)(*(int *)dictionary.m_Index + 100) + -4 + (uint)bVar2 * 4) == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CollectTheItemDropoffSettings::CollectTheItemDropoffSettings_OnSettingChanged(CollectTheItemDropoffSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)func_?(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor(this_01,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__);
  if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)key,value,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__Add((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_ChildrenMap,(Object *)(this->fields).childMap,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_);
    this_00 = (this->fields).settingsBase;
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,StringLiteral_BlueprintData,(Object *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

