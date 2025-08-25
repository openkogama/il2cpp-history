
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
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter,
               (MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObject *)0x0) goto code_?;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(pMVar1->fields).data;
    pGVar2 = (this->fields).keys;
    pSVar3 = (this->fields).volumeSlider;
    if ((pGVar2 == (GlobalSoundEmitterSettings_Keys *)0x0) ||
       (pSVar4 = (pGVar2->fields).keys, pSVar4 == (String__Array *)0x0)) goto code_?;
    if (pSVar4->max_length == 0) goto code_?;
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_01,(Object *)((((this->fields).keys)->fields).keys)->vector[0],
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((pSVar3 == (SettingsSlider *)0x0) || (TVar5.m_Index == 0)) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      pfVar6 = (float *)func_?();
      SettingsSlider::SettingsSlider_Initialize
                (pSVar3,(String *)&UNK_?,*pfVar6,0.0,1.0,(MethodInfo *)0x0);
      pGVar2 = (this->fields).keys;
      pSVar3 = (this->fields).pitchSlider;
      if ((pGVar2 != (GlobalSoundEmitterSettings_Keys *)0x0) &&
         (pSVar4 = (pGVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
        if (pSVar4->max_length < 2) goto code_?;
        TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)((((this->fields).keys)->fields).keys)->vector[1],
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((pSVar3 != (SettingsSlider *)0x0) && (TVar5.m_Index != 0)) {
          if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
              (TypeInfo__System__Single->_0).element_class) {
            pfVar6 = (float *)func_?();
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar3,(String *)&UNK_?,*pfVar6,0.5,2.0,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_pitch);
    func_?(&StringLiteral_volume);
    cRam_? = '\x01';
  }
  pSVar1 = (String__Array *)func_?(TypeInfo__System__String,2);
  pSVar2 = StringLiteral_volume;
  if (pSVar1 == (String__Array *)0x0) {
    func_?();
  }
  else if (pSVar1->max_length != 0) {
    pSVar1->vector[0] = StringLiteral_volume;
    func_?(pSVar1->vector,pSVar2);
    pSVar2 = StringLiteral_pitch;
    if (1 < pSVar1->max_length) {
      pSVar1->vector[1] = StringLiteral_pitch;
      func_?(pSVar1->vector + 1,pSVar2);
      method_00 = (MethodInfo *)&value->fields;
      (value->fields).keys = pSVar1;
      func_?(method_00,pSVar1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value,ExceptionArgument__Enum_obj,method_00);
      (this->fields).keys = value;
      func_?(&(this->fields).keys,value);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                ((MonoBehaviour *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

