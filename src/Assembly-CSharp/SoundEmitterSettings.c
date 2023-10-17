
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_Initialize
               (SoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
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
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) goto code_?;
    this_01 = (pMVar2->fields).data;
    pSVar3 = (this->fields).keys;
    pSVar4 = (this->fields).volumeSlider;
    if ((pSVar3 == (SoundEmitterSettings_Keys *)0x0) ||
       (pSVar5 = (pSVar3->fields).keys, pSVar5 == (String__Array *)0x0)) goto code_?;
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
    if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar7 = (float *)func_?();
    SettingsSlider::SettingsSlider_Initialize
              (pSVar4,(String *)&UNK_?,*pfVar7,0.0,1.0,(MethodInfo *)0x0);
    pSVar3 = (this->fields).keys;
    pSVar4 = (this->fields).pitchSlider;
    if ((pSVar3 == (SoundEmitterSettings_Keys *)0x0) ||
       (pSVar5 = (pSVar3->fields).keys, pSVar5 == (String__Array *)0x0)) goto code_?;
    if (pSVar5->max_length < 2) goto code_?;
    pSVar8 = pSVar5->vector[1];
    pSVar5 = (((this->fields).keys)->fields).keys;
    if (pSVar5 == (String__Array *)0x0) goto code_?;
    if (pSVar5->max_length < 2) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)pSVar5->vector[1],
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Single,pOVar6);
    if ((pSVar4 == (SettingsSlider *)0x0) || (pOVar6 == (Object *)0x0)) goto code_?;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pfVar7 = (float *)func_?(pOVar6);
      SettingsSlider::SettingsSlider_Initialize(pSVar4,pSVar8,*pfVar7,0.5,2.0,(MethodInfo *)0x0);
      pSVar3 = (this->fields).keys;
      pSVar4 = (this->fields).rangeSlider;
      if ((pSVar3 != (SoundEmitterSettings_Keys *)0x0) &&
         (pSVar5 = (pSVar3->fields).keys, pSVar5 != (String__Array *)0x0)) {
        if (pSVar5->max_length < 3) goto code_?;
        pSVar8 = pSVar5->vector[2];
        pSVar5 = (((this->fields).keys)->fields).keys;
        if (pSVar5 != (String__Array *)0x0) {
          if (pSVar5->max_length < 3) goto code_?;
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_01,(Object *)pSVar5->vector[2],
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar6);
          if ((pSVar4 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
            if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar9 = (int32_t *)func_?(pOVar6);
              SettingsSlider::SettingsSlider_Initialize_1
                        (pSVar4,pSVar8,*piVar9,0,2,(MethodInfo *)0x0);
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged
               (SoundEmitterSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Decimal);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).keys;
  if ((pSVar1 != (SoundEmitterSettings_Keys *)0x0) &&
     (pSVar2 = (pSVar1->fields).keys, pSVar2 != (String__Array *)0x0)) {
    if (pSVar2->max_length < 3) {
      func_?();
    }
    else {
      bVar3 = mscorlib.dll::System::String::String_op_Inequality
                        (key,pSVar2->vector[2],(MethodInfo *)0x0);
      this_00 = (this->fields).settingsBase;
      if (bVar3 == 0) {
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
        value_01 = (Object *)func_?(TypeInfo__System__Int32);
      }
      else {
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pDVar4 = mscorlib.dll::System::Convert::Convert_ToDecimal
                           ((Decimal *)&stack0xffffffec,value,(MethodInfo *)0x0);
        iVar5 = pDVar4->flags;
        iVar6 = pDVar4->hi;
        puVar7 = (undefined *)pDVar4->lo;
        pDVar8 = (Decimal__Class *)pDVar4->mid;
        if ((TypeInfo__System__Decimal->_1).cctor_finished_or_no_cctor == 0) {
          puVar7 = &UNK_?;
          pDVar8 = TypeInfo__System__Decimal;
          func_?();
        }
        value_00.hi = iVar6;
        value_00.flags = iVar5;
        value_00.lo = (int32_t)puVar7;
        value_00.mid = (int32_t)pDVar8;
        value_00.ulomidLE._0_4_ = 0;
        value_00.ulomidLE._4_4_ = unaff_EBP;
        mscorlib.dll::System::Decimal::Decimal_op_Explicit_2(value_00,unaff_retaddr);
        value_01 = (Object *)func_?();
      }
      if (this_00 != (SettingsBase *)0x0) {
        SettingsBase::SettingsBase_OnSettingChanged(this_00,key,value_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Int32) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged_1
               (SoundEmitterSettings *this,String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
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
    func_?(&TypeInfo__System__Single);
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
    func_?(&TypeInfo__SoundEmitterSettings__Keys);
    cRam_? = '\x01';
  }
  value = (SoundEmitterSettings_Keys *)func_?(TypeInfo__SoundEmitterSettings__Keys);
  if (value == (SoundEmitterSettings_Keys *)0x0) {
code_?:
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__String);
      func_?(&StringLiteral_range);
      func_?(&StringLiteral_pitch);
      func_?(&StringLiteral_volume);
      cRam_? = '\x01';
    }
    pSVar2 = (String__Array *)func_?(TypeInfo__System__String,3);
    if (pSVar2 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_volume != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_volume,(pSVar2->klass->_0).element_class), iVar3 == 0)
       ) goto code_?;
    pSVar4 = StringLiteral_volume;
    if (pSVar2->max_length == 0) goto code_?;
    pSVar2->vector[0] = StringLiteral_volume;
    func_?(pSVar2->vector,pSVar4);
    if ((StringLiteral_pitch != (String *)0x0) &&
       (iVar3 = func_?(StringLiteral_pitch,(pSVar2->klass->_0).element_class), iVar3 == 0))
    goto code_?;
    pSVar4 = StringLiteral_pitch;
    if (pSVar2->max_length < 2) goto code_?;
    pSVar2->vector[1] = StringLiteral_pitch;
    func_?(pSVar2->vector + 1,pSVar4);
    if ((StringLiteral_range == (String *)0x0) ||
       (iVar3 = func_?(StringLiteral_range,(pSVar2->klass->_0).element_class), iVar3 != 0))
    {
      pSVar4 = StringLiteral_range;
      if (2 < pSVar2->max_length) {
        pSVar2->vector[2] = StringLiteral_range;
        func_?(pSVar2->vector + 2,pSVar4);
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

