
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_Initialize
               (OculusSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_u221E);
    func_?(&StringLiteral_Lives);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Oculus,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = (MVWorldObjectClient *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_02,woID,(MethodInfo *)0x0);
      ppMVar2 = &(this->fields).target;
      *ppMVar2 = pMVar1;
      func_?();
      pMVar1 = *ppMVar2;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                  (pMVar1->fields)._.data;
        pSVar3 = (this->fields).rangeSlider;
        if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (this_01,(Object *)StringLiteral_Radius,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          fVar6 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                            ((Object *)TVar4.m_Index,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
          if (pSVar3 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar3,StringLiteral_Radius,fVar6,5.0,40.0,(MethodInfo *)0x0);
            pSVar3 = (this->fields).aggresionSlider;
            TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (this_01,(Object *)StringLiteral_Speed,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            pCVar5 = mscorlib.dll::System::Globalization::CultureInfo::
                     CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
            fVar6 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                              ((Object *)TVar4.m_Index,(IFormatProvider *)pCVar5,(MethodInfo *)0x0);
            if (pSVar3 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar3,StringLiteral_Speed,fVar6,10.0,50.0,(MethodInfo *)0x0);
              value = 100;
              bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                (this_01,(Object *)StringLiteral_Lives,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                );
              if (bVar7 != 0) {
                TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  (this_01,(Object *)StringLiteral_Lives,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__System__Convert);
                }
                value = mscorlib.dll::System::Convert::Convert_ToInt32
                                  (TVar4.m_Index,(MethodInfo *)0x0);
              }
              pSVar3 = (this->fields).numOfLivesSlider;
              if (pSVar3 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar3,StringLiteral_Lives,value,1,100,(MethodInfo *)0x0);
                pSVar8 = (this->fields).numOfLivesInputSlider;
                if (pSVar8 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                            (pSVar8,StringLiteral_Lives,value,(MethodInfo *)0x0);
                  if (value == 100) {
                    pSVar8 = (this->fields).numOfLivesInputSlider;
                    if (pSVar8 == (SettingsInputFieldSlider *)0x0) goto code_?;
                    SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                              (pSVar8,StringLiteral_u221E,(MethodInfo *)0x0);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_OnSettingChanged
               (OculusSettings *this,String *key,Object *value,MethodInfo *method)

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
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_u221E);
    func_?(&StringLiteral_Lives);
    cRam_? = '\x01';
  }
  key_00 = key;
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_Lives,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pSVar2 = (this->fields).settingsBase;
    if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Globalization__CultureInfo);
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    key = (String *)
          mscorlib.dll::System::Convert::Convert_ToSingle_1
                    (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&key);
  }
  else {
    if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Convert);
    }
    pSVar4 = (String *)mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    if (pSVar4 == (String *)0x64) {
      this_00 = (this->fields).numOfLivesInputSlider;
      if (this_00 != (SettingsInputFieldSlider *)0x0) {
        SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
                  (this_00,StringLiteral_u221E,(MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (String *)0x64;
        pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&key);
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_01,
                     (Object *)StringLiteral_Lives,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          pMVar5 = (this->fields).target;
          if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
             (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
            MVNetworkGame+OperationRequests::
            MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                      (this_02,(pMVar5->fields)._.id,
                       (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
            pSVar2 = (this->fields).settingsBase;
            if (pSVar2 != (SettingsBase *)0x0) {
              SettingsBase::SettingsBase_RemoveData(pSVar2,key_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pSVar2 = (this->fields).settingsBase;
    key = pSVar4;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
  }
  if (pSVar2 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(pSVar2,key_00,pOVar3,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

