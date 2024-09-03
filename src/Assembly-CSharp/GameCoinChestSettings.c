
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GameCoinChestSettings::GameCoinChestSettings_Initialize
               (GameCoinChestSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
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
    func_?(&StringLiteral_gameCoinAmount);
    cRam_? = '\x01';
  }
  iVar2 = woID;
  this_00 = (pGVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CoinChest,(MethodInfo *)0x0);
  if (iVar2 == -1) {
    this_03 = (MethodInfo *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (GameCoinChestSettings *)0x5;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_03 == (MethodInfo *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_gameCoinAmount,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_04 = (pGVar1->fields).slider;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (GameCoinChestSettings *)0x0;
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,iVar2,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) goto code_?;
    this_03 = (MethodInfo *)(pMVar3->fields).data;
    this_04 = (pGVar1->fields).slider;
    if (this_03 == (MethodInfo *)0x0) goto code_?;
  }
  this = (GameCoinChestSettings *)
         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
  ;
  root = (GameObject *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
         UIElements::TextureId]::
         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                   ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                    (Object *)StringLiteral_gameCoinAmount,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)TypeInfo__System__Convert;
    root = (GameObject *)&UNK_?;
    func_?();
  }
  method = (MethodInfo *)0x0;
  woID = (int32_t)&UNK_?;
  value_00 = (GameObject *)
             mscorlib.dll::System::Convert::Convert_ToInt32((Object *)root,(MethodInfo *)0x0);
  if (this_04 != (SettingsSlider *)0x0) {
    method = (MethodInfo *)0xfa;
    woID = (int32_t)StringLiteral_gameCoinAmount;
    this = (GameCoinChestSettings *)this_04;
    root = value_00;
    SettingsSlider::SettingsSlider_Initialize_1
              (this_04,StringLiteral_gameCoinAmount,(int32_t)value_00,0xfa,5000,(MethodInfo *)0x0);
    this_01 = (pGVar1->fields).inputField;
    root = (GameObject *)&UNK_?;
    method = this_03;
    value_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_03,
                          (Object *)StringLiteral_gameCoinAmount,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    method = (MethodInfo *)&UNK_?;
    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(value_01.m_Index,(MethodInfo *)0x0);
    if (this_01 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                (this_01,StringLiteral_gameCoinAmount,iVar2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GameCoinChestSettings::GameCoinChestSettings_OnSettingChanged
               (GameCoinChestSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  this = (GameCoinChestSettings *)
         mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

