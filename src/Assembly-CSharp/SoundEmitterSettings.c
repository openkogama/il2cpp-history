
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_Initialize
               (SoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
code_?:
    func_?();
    func_?();
  }
  else {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0
              );
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
    pSVar1 = (this->fields).keys;
    pSVar2 = (this->fields).volumeSlider;
    if ((pSVar1 == (SoundEmitterSettings_Keys *)0x0) ||
       (pSVar3 = (pSVar1->fields).keys, pSVar3 == (String__Array *)0x0)) goto code_?;
    if (pSVar3->max_length == 0) goto code_?;
    pSVar4 = pSVar3->vector[0];
    if (((pSVar1 == (SoundEmitterSettings_Keys *)0x0) || (pSVar3 == (String__Array *)0x0)) ||
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
    pSVar1 = (this->fields).keys;
    pSVar2 = (this->fields).pitchSlider;
    if ((pSVar1 == (SoundEmitterSettings_Keys *)0x0) ||
       (pSVar3 = (pSVar1->fields).keys, pSVar3 == (String__Array *)0x0)) goto code_?;
    if (pSVar3->max_length < 2) goto code_?;
    pSVar4 = pSVar3->vector[1];
    if ((pSVar1 == (SoundEmitterSettings_Keys *)0x0) || (pSVar3 == (String__Array *)0x0))
    goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_03,(Type *)pSVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((pSVar2 == (SettingsSlider *)0x0) || (pPVar5 == (Pool *)0x0)) goto code_?;
    if ((pPVar5->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar6 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize(pSVar2,pSVar4,*pfVar6,0.5,2.0,(MethodInfo *)0x0);
    pSVar1 = (this->fields).keys;
    pSVar2 = (this->fields).rangeSlider;
    if ((pSVar1 == (SoundEmitterSettings_Keys *)0x0) ||
       (pSVar3 = (pSVar1->fields).keys, pSVar3 == (String__Array *)0x0)) goto code_?;
    if (2 < pSVar3->max_length) {
      pSVar4 = pSVar3->vector[2];
      if ((pSVar1 != (SoundEmitterSettings_Keys *)0x0) && (pSVar3 != (String__Array *)0x0)) {
        pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_03,(Type *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((pSVar2 != (SettingsSlider *)0x0) && (pPVar5 != (Pool *)0x0)) {
          if ((pPVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar7 = (int32_t *)func_?();
            SettingsSlider::SettingsSlider_Initialize_1(pSVar2,pSVar4,*piVar7,0,2,(MethodInfo *)0x0)
            ;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged
               (SoundEmitterSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).keys;
  if ((pSVar1 != (SoundEmitterSettings_Keys *)0x0) &&
     (pSVar2 = (pSVar1->fields).keys, pSVar2 != (String__Array *)0x0)) {
    if (pSVar2->max_length < 3) goto code_?;
    b = pSVar2->vector[2];
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar3 = mscorlib.dll::System::String::String_op_Inequality(key,b,(MethodInfo *)0x0);
    this_00 = (this->fields).settingsBase;
    if (bVar3 == 0) {
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      mscorlib.dll::System::Convert::Convert_ToInt32_16(value,(MethodInfo *)0x0);
      value_01 = (Object *)func_?(TypeInfo__System__Int32);
    }
    else {
      if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
        func_?();
      }
      pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal_12
                         ((Decimal *)&stack0xffffffec,value,(MethodInfo *)0x0);
      uVar5 = pDVar4->flags;
      uVar6 = pDVar4->hi;
      puVar7 = (undefined *)pDVar4->lo;
      pDVar8 = (Decimal__Class *)pDVar4->mid;
      if ((((uint)(TypeInfo__System__Decimal->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Decimal->_1).cctor_started == 0)) {
        puVar7 = &UNK_?;
        pDVar8 = TypeInfo__System__Decimal;
        func_?();
      }
      value_00.hi = uVar6;
      value_00.flags = uVar5;
      value_00.lo = (uint32_t)puVar7;
      value_00.mid = (uint32_t)pDVar8;
      mscorlib.dll::System::Decimal::Decimal_op_Explicit_10(value_00,(MethodInfo *)0x0);
      value_01 = (Object *)func_?();
    }
    if (this_00 != (SettingsBase *)0x0) {
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSettingChanged(String, Int32) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged_1
               (SoundEmitterSettings *this,String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  this = (SoundEmitterSettings *)value;
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

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged_2
               (SoundEmitterSettings *this,String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (SoundEmitterSettings *)value;
  this_00 = (pSVar1->fields).settingsBase;
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


/* SoundEmitterSettings() */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings__ctor
               (SoundEmitterSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__SoundEmitterSettings__Keys);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  piVar1 = (int *)func_?(TypeInfo__System__String,3);
  if (piVar1 == (int *)0x0) {
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
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
    if ((StringLiteral_pitch != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_pitch,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0))
    goto code_?;
    if ((uint)piVar1[3] < 2) goto code_?;
    piVar1[5] = (int)StringLiteral_pitch;
    if ((StringLiteral_range == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_range,*(undefined4 *)(*piVar1 + 0x20)), iVar3 != 0)) {
      if (2 < (uint)piVar1[3]) {
        piVar1[6] = (int)StringLiteral_range;
        (this_00->fields)._._._._.m_CachedPtr = piVar1;
        ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,unaff_EDI);
        (this->fields).keys = (SoundEmitterSettings_Keys *)this_00;
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

