
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
               (GlobalSoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    uVar1 = func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter,
               (MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
    this_01 = (pMVar2->fields).data;
    pGVar3 = (this->fields).keys;
    pSVar4 = (this->fields).volumeSlider;
    if ((pGVar3 == (GlobalSoundEmitterSettings_Keys *)0x0) ||
       (pSVar5 = (pGVar3->fields).keys, pSVar5 == (String__Array *)0x0)) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    pSVar5 = (((this->fields).keys)->fields).keys;
    if (pSVar5 == (String__Array *)0x0) goto code_?;
    if (pSVar5->max_length == 0) goto code_?;
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)pSVar5->vector[0],
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Single,pOVar6);
    if ((pSVar4 == (SettingsSlider *)0x0) || (pOVar6 == (Object *)0x0)) goto code_?;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                (pSVar4,(String *)&UNK_?,*pfVar7,0.0,1.0,(MethodInfo *)0x0);
      pGVar3 = (this->fields).keys;
      pSVar4 = (this->fields).pitchSlider;
      if ((pGVar3 != (GlobalSoundEmitterSettings_Keys *)0x0) &&
         (pSVar5 = (pGVar3->fields).keys, pSVar5 != (String__Array *)0x0)) {
        if (pSVar5->max_length < 2) goto code_?;
        key = pSVar5->vector[1];
        pSVar5 = (((this->fields).keys)->fields).keys;
        if (pSVar5 != (String__Array *)0x0) {
          if (pSVar5->max_length < 2) goto code_?;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)pSVar5->vector[1],
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar1 = CONCAT44(TypeInfo__System__Single,pOVar6);
          if ((pSVar4 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
            if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar7 = (float *)func_?(pOVar6);
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar4,key,*pfVar7,0.5,2.0,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(uVar1);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Int32) */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_OnSettingChanged_1
               (GlobalSoundEmitterSettings *this,String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  this = (GlobalSoundEmitterSettings *)value;
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


/* Void OnSettingChanged(String, Single) */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_OnSettingChanged_2
               (GlobalSoundEmitterSettings *this,String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pGVar1 = this;
  this = (GlobalSoundEmitterSettings *)value;
  this_00 = (pGVar1->fields).settingsBase;
  value_00 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GlobalSoundEmitterSettings() */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings__ctor
               (GlobalSoundEmitterSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GlobalSoundEmitterSettings__Keys);
    cRam_? = '\x01';
  }
  value = (GlobalSoundEmitterSettings_Keys *)
          func_?(TypeInfo__GlobalSoundEmitterSettings__Keys);
  if (value == (GlobalSoundEmitterSettings_Keys *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__String);
      func_?(&StringLiteral_pitch);
      func_?(&StringLiteral_volume);
      cRam_? = '\x01';
    }
    pSVar2 = (String__Array *)func_?(TypeInfo__System__String,2);
    if (pSVar2 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_volume != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_volume,(pSVar2->klass->_0).element_class), iVar3 == 0)
       ) goto code_?;
    pSVar4 = StringLiteral_volume;
    if (pSVar2->max_length == 0) goto code_?;
    pSVar2->vector[0] = StringLiteral_volume;
    func_?(pSVar2->vector,pSVar4);
    if ((StringLiteral_pitch == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_pitch,(pSVar2->klass->_0).element_class), iVar3 != 0))
    {
      pSVar4 = StringLiteral_pitch;
      if (1 < pSVar2->max_length) {
        pSVar2->vector[1] = StringLiteral_pitch;
        func_?(pSVar2->vector + 1,pSVar4);
        method_00 = (MethodInfo *)&value->fields;
        (value->fields).keys = pSVar2;
        func_?(method_00,pSVar2);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value,ExceptionArgument__Enum_obj,method_00);
        (this->fields).keys = value;
        func_?(&(this->fields).keys,value);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                  ((Transform *)this,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

