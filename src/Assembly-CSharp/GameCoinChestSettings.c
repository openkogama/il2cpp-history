
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
    this_03 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (GameCoinChestSettings *)0x5;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_03,(Object *)StringLiteral_gameCoinAmount,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    this_04 = (pGVar1->fields).slider;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (GameCoinChestSettings *)0x0;
    pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,iVar2,(MethodInfo *)0x0);
    if (pMVar4 == (MVWorldObject *)0x0) goto code_?;
    this_03 = (pMVar4->fields).data;
    this_04 = (pGVar1->fields).slider;
    if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  root = (GameObject *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
         Dictionary_2_System_Object_System_Object__get_Item
                   (this_03,(Object *)StringLiteral_gameCoinAmount,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32((Object *)root,(MethodInfo *)0x0);
  if (this_04 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize_1
              (this_04,StringLiteral_gameCoinAmount,iVar2,0xfa,5000,(MethodInfo *)0x0);
    this_01 = (pGVar1->fields).inputField;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_03,(Object *)StringLiteral_gameCoinAmount,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
    if (this_01 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                (this_01,StringLiteral_gameCoinAmount,iVar2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

