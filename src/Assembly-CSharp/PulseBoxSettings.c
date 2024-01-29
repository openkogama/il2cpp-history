
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PulseBoxSettings::PulseBoxSettings_Initialize
               (PulseBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
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
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_intervalOff);
    func_?(&StringLiteral_intervalOn);
    cRam_? = '\x01';
  }
  id = woID;
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PulseBox,(MethodInfo *)0x0);
    if (id == -1) {
      this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      root = (GameObject *)0x3f000000;
      value = (GameObject *)func_?(TypeInfo__System__Single,&root);
      if (this_02 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) goto code_?;
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
      ;
      woID = (int32_t)StringLiteral_intervalOn;
      root = value;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_intervalOn,(Object *)value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      method = (MethodInfo *)&woID;
      root = (GameObject *)TypeInfo__System__Single;
      woID = (int32_t)&UNK_?;
      value_00 = (Object *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_02,
                 (Object *)StringLiteral_intervalOff,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
    }
    else {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_01 == (MVWorldObjectClientManager *)0x0) ||
          (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,id,(MethodInfo *)0x0), pMVar1 == (MVWorldObject *)0x0)) ||
         (this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)(pMVar1->fields).data,
         this_02 ==
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         0x0)) goto code_?;
    }
    method = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    root = (GameObject *)StringLiteral_intervalOn;
    woID = (int32_t)this_02;
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_intervalOn,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      in_stack_3 = TypeInfo__System__Globalization__CultureInfo;
      in_stack_4 = (Il2CppClass *)&UNK_?;
      func_?();
    }
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    value_01 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                         ((Object *)TVar2.m_Index,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       (Object *)StringLiteral_intervalOff,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                       ((MethodInfo *)0x0);
    root = (GameObject *)
           mscorlib.dll::System::Convert::Convert_ToSingle_1
                     ((Object *)TVar2.m_Index,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
    pSVar6 = (this->fields).enabledSlider;
    if (pSVar6 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar6,StringLiteral_intervalOn,value_01,0.1,1000.0,(MethodInfo *)0x0);
      pSVar7 = (this->fields).enabledInputField;
      if (pSVar7 != (SettingsInputFieldSlider *)0x0) {
        SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                  (pSVar7,StringLiteral_intervalOn,value_01,(MethodInfo *)0x0);
        pSVar6 = (this->fields).disabledSlider;
        if (pSVar6 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar6,StringLiteral_intervalOff,(float)root,0.1,1000.0,(MethodInfo *)0x0);
          pSVar7 = (this->fields).disabledInputField;
          if (pSVar7 != (SettingsInputFieldSlider *)0x0) {
            method = (MethodInfo *)0x0;
            woID = (int32_t)StringLiteral_intervalOff;
            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
                      (pSVar7,StringLiteral_intervalOff,(float)root,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

