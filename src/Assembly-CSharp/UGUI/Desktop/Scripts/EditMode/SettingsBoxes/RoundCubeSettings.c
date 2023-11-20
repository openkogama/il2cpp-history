
/* Int32 GetMinutes(String) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetMinutes(RoundCubeSettings *this,String *value,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    value = (String *)mscorlib.dll::System::Int32::Int32_Parse(value,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes
                      ((double)in_stack_3,(MethodInfo *)0x0);
    value = (String *)((ulonglong)TVar2._ticks >> 0x20);
    this = (RoundCubeSettings *)TVar2._ticks;
    iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours((TimeSpan *)&this,(MethodInfo *)0x0);
    iVar5 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes
                      ((TimeSpan *)&this,(MethodInfo *)0x0);
    return iVar5 + iVar4 * 0x3c;
  }
  return 0;
}


/* Int32 GetMinutes(Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetMinutes_1(RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  TStack_1 = mscorlib.dll::System::TimeSpan::TimeSpan_FromMinutes((double)value,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Hours(&TStack_1,(MethodInfo *)0x0);
  iVar3 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Minutes(&TStack_1,(MethodInfo *)0x0);
  return iVar3 + iVar2 * 0x3c;
}


/* Int32 GetSeconds(String) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetSeconds(RoundCubeSettings *this,String *value,MethodInfo *method)

{
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    value = (String *)mscorlib.dll::System::Int32::Int32_Parse(value,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds
                      ((double)in_stack_3,(MethodInfo *)0x0);
    value = (String *)((ulonglong)TVar2._ticks >> 0x20);
    this = (RoundCubeSettings *)TVar2._ticks;
    iVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Seconds
                      ((TimeSpan *)&this,(MethodInfo *)0x0);
    return iVar4;
  }
  return 0;
}


/* Int32 GetSeconds(Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetSeconds_1(RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__TimeSpan);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__TimeSpan);
  }
  TStack_1 = mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds((double)value,(MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_get_Seconds(&TStack_1,(MethodInfo *)0x0);
  return iVar2;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_Initialize
               (RoundCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_interval);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_RoundCube,(MethodInfo *)0x0);
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,woID,(MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObject *)0x0) &&
         (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                    (pMVar1->fields).data,
         this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_01,(Object *)StringLiteral_interval,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value_00 = mscorlib.dll::System::Convert::Convert_ToInt32(value.m_Index,(MethodInfo *)0x0);
        this_02 = (this->fields).slider;
        if (this_02 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize_1
                    (this_02,StringLiteral_interval,value_00,0x1e,0xe10,(MethodInfo *)0x0);
          pIVar2 = (this->fields).minutes;
          RoundCubeSettings_GetMinutes_1(this,value_00 / 0x3c,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (pIVar2 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar2,pSVar3,(MethodInfo *)0x0);
            pIVar2 = (this->fields).seconds;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__TimeSpan->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            TVar4 = mscorlib.dll::System::TimeSpan::TimeSpan_FromSeconds
                              ((double)value_00,(MethodInfo *)0x0);
            puStack_5 = (undefined *)TVar4._ticks;
            mscorlib.dll::System::TimeSpan::TimeSpan_get_Seconds
                      ((TimeSpan *)&puStack_5,(MethodInfo *)0x0);
            pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (pIVar2 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                        (pIVar2,pSVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnInputFieldChanged() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_OnInputFieldChanged(RoundCubeSettings *this,MethodInfo *method)

{
  this_00 = this;
  pIVar1 = (this->fields).seconds;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  pSVar2 = (pIVar1->fields).m_Text;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
    RoundCubeSettings_GetSeconds_1(this_00,iVar4,(MethodInfo *)0x0);
  }
  pIVar1 = (this_00->fields).minutes;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  value = (RoundCubeSettings *)(pIVar1->fields).m_Text;
  method = (MethodInfo *)0x0;
  this = value;
  bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty((String *)value,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    method = (MethodInfo *)&UNK_?;
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse((String *)value,(MethodInfo *)0x0);
    method = (MethodInfo *)this_00;
    this = (RoundCubeSettings *)&UNK_?;
    this = (RoundCubeSettings *)RoundCubeSettings_GetMinutes_1(this_00,iVar4,(MethodInfo *)0x0);
    if ((int)this < 0) goto code_?;
    if (0x3c < (int)this) {
      this = (RoundCubeSettings *)0x3c;
    }
  }
  else {
code_?:
    this = (RoundCubeSettings *)0x0;
  }
  pIVar1 = (this_00->fields).minutes;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
  if (pIVar1 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
              (pIVar1,pSVar2,(MethodInfo *)0x0);
    pIVar1 = (this_00->fields).seconds;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (pIVar1 != (InputField *)0x0) {
      IVar5.m_value = 0;
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar1,pSVar2,(MethodInfo *)0x0);
      pSVar6 = (this_00->fields).slider;
      if ((pSVar6 != (SettingsSlider *)0x0) &&
         (pSVar7 = (pSVar6->fields).slider, pSVar7 != (Slider *)0x0)) {
        pSVar8 = pSVar7->klass;
        method = (MethodInfo *)(pSVar8->vtable).SetValueWithoutNotify.methodPtr;
        this = (RoundCubeSettings *)(float)(IVar5.m_value + (int)this * 0x3c);
        (*(code *)(pSVar8->vtable).set_value.method)();
        return;
      }
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SliderChanged() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_SliderChanged(RoundCubeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_interval);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    pIVar4 = (this->fields).minutes;
    _uStack_10 = CONCAT44((int)fVar3,SUB84((double)fVar3,0));
    IStack_5.m_value = (int)fVar3 / 0x3c;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      iVar8 = mscorlib.dll::System::Int32::Int32_Parse(pSVar6,(MethodInfo *)0x0);
      IStack_5.m_value = RoundCubeSettings_GetMinutes_1(this,iVar8,(MethodInfo *)0x0);
    }
    else {
      IStack_5.m_value = 0;
    }
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
    if (pIVar4 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (pIVar4,pSVar6,(MethodInfo *)0x0);
      pIVar4 = (this->fields).seconds;
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
      bVar7 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        iVar8 = mscorlib.dll::System::Int32::Int32_Parse(pSVar6,(MethodInfo *)0x0);
        IStack_5.m_value = RoundCubeSettings_GetSeconds_1(this,iVar8,(MethodInfo *)0x0);
      }
      else {
        IStack_5.m_value = 0;
      }
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
      if (pIVar4 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar4,pSVar6,(MethodInfo *)0x0);
        this_00 = (this->fields).settingsBase;
        iStack_10 = IStack_9.m_value;
        value = (Object *)func_?(TypeInfo__System__Int32,&iStack_10);
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (this_00,StringLiteral_interval,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

