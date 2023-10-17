
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_Initialize
               (WindTurbineSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  pWVar1 = this;
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
    func_?(&StringLiteral_windSize);
    func_?(&StringLiteral_windPitch);
    cRam_? = '\x01';
  }
  iVar2 = woID;
  this_00 = (pWVar1->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_WindTurbine,(MethodInfo *)0x0);
  if (iVar2 == -1) {
    this_02 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (WindTurbineSettings *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)StringLiteral_windPitch,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    root = (GameObject *)0xa;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&root);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_02,(Object *)StringLiteral_windSize,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar4 = (pWVar1->fields).pitchSlider;
  }
  else {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this = (WindTurbineSettings *)0x0;
    pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,iVar2,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObject *)0x0) goto code_?;
    this_02 = (pMVar5->fields).data;
    pSVar4 = (pWVar1->fields).pitchSlider;
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  woID = (int32_t)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_02,(Object *)StringLiteral_windPitch,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32((Object *)woID,(MethodInfo *)0x0);
  if (pSVar4 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_Initialize_1
              (pSVar4,StringLiteral_windPitch,iVar2,0,0xb4,(MethodInfo *)0x0);
    pSVar6 = (pWVar1->fields).pitchInputField;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_02,(Object *)StringLiteral_windPitch,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
    if (pSVar6 != (SettingsInputFieldSlider *)0x0) {
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                (pSVar6,StringLiteral_windPitch,iVar2,(MethodInfo *)0x0);
      pSVar4 = (pWVar1->fields).powerSlider;
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_02,(Object *)StringLiteral_windSize,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
      if (pSVar4 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize_1
                  (pSVar4,StringLiteral_windSize,iVar2,1,0x14,(MethodInfo *)0x0);
        pSVar6 = (pWVar1->fields).powerInputField;
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_02,(Object *)StringLiteral_windSize,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        iVar2 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar3,(MethodInfo *)0x0);
        if (pSVar6 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                    (pSVar6,StringLiteral_windSize,iVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_OnSettingChanged
               (WindTurbineSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__Single);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Setting_changed_);
    cRam_? = '\x01';
  }
  str2 = ::StringLiteral__;
  pSVar1 = StringLiteral_Setting_changed_;
  if (value == (Object *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    str3 = (String *)
           (*(value->klass->vtable).ToString.methodPtr)
                     (value,(value->klass->vtable).ToString.method);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_5(pSVar1,key,str2,str3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  this_00 = (this->fields).settingsBase;
  if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToSingle
            (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  key_00 = TypeInfo__System__Single;
  value_00 = (Object *)func_?();
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,(String *)key_00,value_00,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

