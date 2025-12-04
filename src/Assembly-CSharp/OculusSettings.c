
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_Initialize
               (OculusSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Radius);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u221E);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lives);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Oculus,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,woID,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).target = pMVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).target >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar1 = (this->fields).target;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(pMVar1->fields)._.data;
        pSVar7 = (this->fields).rangeSlider;
        if (this_01 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)this_01,
                              (Object *)StringLiteral_Radius,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Globalization__CultureInfo);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
            FUN_?();
          }
          provider = TypeInfo__System__Globalization__CultureInfo->static_fields->
                     invariant_culture_info;
          LOCK();
          UNLOCK();
          if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
            FUN_?();
          }
          fVar9 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                             (pOVar8,(IFormatProvider *)provider,(MethodInfo *)0x0);
          if (pSVar7 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar7,StringLiteral_Radius,fVar9,_UNK_?,_UNK_?,
                       (MethodInfo *)0x0);
            pSVar7 = (this->fields).aggresionSlider;
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                (Object *)StringLiteral_Speed,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Globalization__CultureInfo);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__System__Globalization__CultureInfo);
            }
            LOCK();
            UNLOCK();
            fVar9 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                               (pOVar8,(IFormatProvider *)
                                       TypeInfo__System__Globalization__CultureInfo->static_fields->
                                       invariant_culture_info,(MethodInfo *)0x0);
            if (pSVar7 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar7,StringLiteral_Speed,fVar9,_UNK_?,_UNK_?,
                         (MethodInfo *)0x0);
              value_00 = 100;
              iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                                (this_01,(Object *)StringLiteral_Lives,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                 ->klass->rgctx_data[0x21].method);
              if (-1 < iVar10) {
                pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                    (Object *)StringLiteral_Lives,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
                  FUN_?();
                }
                value_00 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar8,(MethodInfo *)0x0);
              }
              pSVar7 = (this->fields).numOfLivesSlider;
              if (pSVar7 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar7,StringLiteral_Lives,value_00,1,100,(MethodInfo *)0x0);
                pSVar11 = (this->fields).numOfLivesInputSlider;
                if (pSVar11 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                            (pSVar11,StringLiteral_Lives,(float)value_00,(MethodInfo *)0x0);
                  value = StringLiteral_u221E;
                  if (value_00 != 100) {
                    return;
                  }
                  pSVar11 = (this->fields).numOfLivesInputSlider;
                  if ((pSVar11 != (SettingsInputFieldSlider *)0x0) &&
                     (pIVar12 = (pSVar11->fields).inputField, pIVar12 != (InputField *)0x0)) {
                    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                              (pIVar12,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
                    pIVar12 = (pSVar11->fields).inputField;
                    if (pIVar12 != (InputField *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                                (pIVar12,value,1,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::OculusSettings::OculusSettings_OnSettingChanged
               (OculusSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u221E);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Lives);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key == StringLiteral_Lives) ||
     ((((key != (String *)0x0 && (StringLiteral_Lives != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_Lives->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(key->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_Lives->fields)._firstChar,
                          (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0))
     )) {
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = (float)mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    value_00 = StringLiteral_u221E;
    if (fVar2 == 1.4013e-43) {
      pSVar3 = (this->fields).numOfLivesInputSlider;
      if ((pSVar3 != (SettingsInputFieldSlider *)0x0) &&
         (pIVar4 = (pSVar3->fields).inputField, pIVar4 != (InputField *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                  (pIVar4,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
        pIVar4 = (pSVar3->fields).inputField;
        if (pIVar4 != (InputField *)0x0) {
          uVar5 = 0;
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                    (pIVar4,value_00,1,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          afStackX_10[0] = 1.4013e-43;
          pOVar6 = (Object *)FUN_?(uRam_?,afStackX_10);
          if (this_00 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                       (Object *)StringLiteral_Lives,pOVar6,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            pMVar7 = (this->fields).target;
            if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
               (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                        (this_01,(pMVar7->fields)._.id,
                         (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
              pSVar8 = (this->fields).settingsBase;
              if (pSVar8 != (SettingsBase *)0x0) {
                SettingsBase::SettingsBase_RemoveData(pSVar8,key,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pSVar8 = (this->fields).settingsBase;
    uVar5 = uRam_?;
    afStackX_10[0] = fVar2;
  }
  else {
    pSVar8 = (this->fields).settingsBase;
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    afStackX_10[0] =
         mscorlib.dll::System::Convert::Convert_ToSingle_1
                   (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    uVar5 = uRam_?;
  }
  pOVar6 = (Object *)FUN_?(uVar5,afStackX_10);
  if (pSVar8 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged(pSVar8,key,pOVar6,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

