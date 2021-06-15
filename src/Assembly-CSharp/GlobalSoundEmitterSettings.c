
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GlobalSoundEmitterSettings::GlobalSoundEmitterSettings_Initialize
               (GlobalSoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter,
               (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_02 = (PrefabPool *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,woID,(MethodInfo *)0x0);
    if (this_02 == (PrefabPool *)0x0) goto code_?;
    this_03 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab(this_02,(MethodInfo *)0x0);
    pGVar1 = (this->fields).keys;
    pSVar2 = (this->fields).volumeSlider;
    if ((pGVar1 == (GlobalSoundEmitterSettings_Keys *)0x0) ||
       (pSVar3 = (pGVar1->fields).keys, pSVar3 == (String__Array *)0x0)) goto code_?;
    if (pSVar3->max_length == 0) goto code_?;
    pSVar4 = pSVar3->vector[0];
    if (((pGVar1 == (GlobalSoundEmitterSettings_Keys *)0x0) || (pSVar3 == (String__Array *)0x0)) ||
       (this_03 == (Dictionary_2_System_Type_Pool_ *)0x0)) goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)pSVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar2 == (SettingsSlider *)0x0) || (pPVar5 == (Pool *)0x0)) goto code_?;
    if ((pPVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar6 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize(pSVar2,pSVar4,*pfVar6,0.0,1.0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).keys;
    pSVar2 = (this->fields).pitchSlider;
    if ((pGVar1 == (GlobalSoundEmitterSettings_Keys *)0x0) ||
       (pSVar3 = (pGVar1->fields).keys, pSVar3 == (String__Array *)0x0)) goto code_?;
    if (1 < pSVar3->max_length) {
      pSVar4 = pSVar3->vector[1];
      if ((pGVar1 != (GlobalSoundEmitterSettings_Keys *)0x0) && (pSVar3 != (String__Array *)0x0)) {
        pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_03,(Type *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((pSVar2 != (SettingsSlider *)0x0) && (pPVar5 != (Pool *)0x0)) {
          if ((pPVar5->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar6 = (float *)func_?();
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar2,pSVar4,*pfVar6,0.5,2.0,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?();
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__GlobalSoundEmitterSettings__Keys);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__System__String,2);
  if (piVar1 == (int *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if ((StringLiteral_volume != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_volume,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0))
    goto code_?;
    if (piVar1[3] == 0) goto code_?;
    piVar1[4] = (int)StringLiteral_volume;
    if ((StringLiteral_pitch == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_pitch,*(undefined4 *)(*piVar1 + 0x20)), iVar3 != 0)) {
      if (1 < (uint)piVar1[3]) {
        piVar1[5] = (int)StringLiteral_pitch;
        (this_00->fields)._._._._.m_CachedPtr = piVar1;
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
        (this->fields).keys = (GlobalSoundEmitterSettings_Keys *)this_00;
        uStack4 = 0;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

