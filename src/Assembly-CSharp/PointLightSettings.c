
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_Initialize
               (PointLightSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
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
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hide);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_intensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_halo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  if (pSVar1 != (SettingsBase *)0x0) {
    uVar2 = 0;
    SettingsBase::SettingsBase_Initialize
              (pSVar1,woID,root,MVWorldObjectDocumentationType__Enum_PointLight,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar3 != (MVWorldObjectClient *)0x0))
       && (this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(pMVar3->fields)._.data,
          this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0)) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_hide,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar4 < 0) {
        auStackX_10[0]._0_1_ = 1;
        pOVar5 = (Object *)FUN_?(lRam_?,auStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_hide
                   ,pOVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pSVar1 = (this->fields).settingsBase;
        auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,1);
        pOVar5 = (Object *)FUN_?(lRam_?,auStackX_10);
        if (pSVar1 == (SettingsBase *)0x0) goto code_?;
        uVar2 = 0;
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar1,StringLiteral_hide,pOVar5,(MethodInfo *)0x0);
      }
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_halo,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar4 < 0) {
        auStackX_10[0] = 1;
        pOVar5 = (Object *)FUN_?(lRam_?,auStackX_10);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_halo
                   ,pOVar5,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pSVar1 = (this->fields).settingsBase;
        auStackX_10[0] = 1;
        pOVar5 = (Object *)FUN_?(lRam_?,auStackX_10);
        if (pSVar1 == (SettingsBase *)0x0) goto code_?;
        SettingsBase::SettingsBase_OnSettingChanged
                  (pSVar1,StringLiteral_halo,pOVar5,(MethodInfo *)0x0);
      }
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_color,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pSVar6 = TypeInfo__System__Single;
      if (pOVar5 == (Object *)0x0) {
        (this->fields).color = (Single__Array *)0x0;
      }
      else {
        pSVar7 = (Single__Array *)FUN_?(pOVar5,TypeInfo__System__Single);
        if (pSVar7 == (Single__Array *)0x0) {
          FUN_?(pOVar5,pSVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (this->fields).color = pSVar7;
        pSVar6 = TypeInfo__System__Single;
        lVar9 = FUN_?(pOVar5,TypeInfo__System__Single);
        if (lVar9 == 0) {
          FUN_?(pOVar5,pSVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(this->fields).color >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      maxValue = _UNK_?;
      pSVar7 = (this->fields).color;
      pSVar15 = (this->fields).colorR;
      if (pSVar7 != (Single__Array *)0x0) {
        if ((int)pSVar7->max_length == 0) goto code_?;
        if (pSVar15 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar15,StringLiteral_colorR,pSVar7->vector[0],0.0,_UNK_?,
                     (MethodInfo *)0x0);
          pSVar7 = (this->fields).color;
          pSVar15 = (this->fields).colorG;
          if (pSVar7 != (Single__Array *)0x0) {
            if ((uint)pSVar7->max_length < 2) goto code_?;
            if (pSVar15 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar15,StringLiteral_colorG,pSVar7->vector[1],0.0,maxValue,
                         (MethodInfo *)0x0);
              pSVar7 = (this->fields).color;
              pSVar15 = (this->fields).colorB;
              if (pSVar7 != (Single__Array *)0x0) {
                if ((uint)pSVar7->max_length < 3) goto code_?;
                if (pSVar15 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar15,StringLiteral_colorB,pSVar7->vector[2],0.0,maxValue,
                             (MethodInfo *)0x0);
                  pSVar15 = (this->fields).range;
                  pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,System::Object]::
                            Dictionary_2_System_Object_System_Object__get_Item
                                      ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                       (Object *)StringLiteral_range,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                  if ((pSVar15 != (SettingsSlider *)0x0) && (pOVar5 != (Object *)0x0)) {
                    if ((pOVar5->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar5,lRam_?);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar15,StringLiteral_range,*(float *)&pOVar5[1].klass,maxValue,
                               _UNK_?,(MethodInfo *)0x0);
                    pSVar15 = (this->fields).intensity;
                    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__get_Item
                                        ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                         (Object *)StringLiteral_intensity,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                    if ((pSVar15 != (SettingsSlider *)0x0) && (pOVar5 != (Object *)0x0)) {
                      if ((pOVar5->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar5,lRam_?);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      SettingsSlider::SettingsSlider_Initialize
                                (pSVar15,StringLiteral_intensity,*(float *)&pOVar5[1].klass,maxValue
                                 ,_UNK_?,(MethodInfo *)0x0);
                      pSVar15 = (this->fields).HaloTextures;
                      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__get_Item
                                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                           (Object *)StringLiteral_halo,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                      if ((pSVar15 != (SettingsSlider *)0x0) && (pOVar5 != (Object *)0x0)) {
                        if ((pOVar5->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar5,lRam_?);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        SettingsSlider::SettingsSlider_Initialize_1
                                  (pSVar15,StringLiteral_halo,*(int32_t *)&pOVar5[1].klass,1,3,
                                   (MethodInfo *)0x0);
                        this_01 = (this->fields).hide;
                        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            ((Dictionary_2_System_Object_System_Object_ *)this_00,
                                             (Object *)StringLiteral_hide,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            );
                        if ((this_01 != (SettingsToggle *)0x0) && (pOVar5 != (Object *)0x0)) {
                          if ((pOVar5->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar5,lRam_?);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          SettingsToggle::SettingsToggle_Initialize
                                    (this_01,StringLiteral_hide,*(bool *)&pOVar5[1].klass,
                                     (MethodInfo *)0x0);
                          pSVar7 = (this->fields).color;
                          pIVar16 = (this->fields).preview;
                          if (pSVar7 != (Single__Array *)0x0) {
                            if (((int)pSVar7->max_length == 0) ||
                               (fStack_17 = pSVar7->vector[0], (uint)pSVar7->max_length < 2)) {
code_?:
                              FUN_?();
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            fStack_18 = pSVar7->vector[1];
                            if (pSVar7 != (Single__Array *)0x0) {
                              if ((uint)pSVar7->max_length < 3) goto code_?;
                              fStack_19 = pSVar7->vector[2];
                              if (pIVar16 != (Image *)0x0) {
                                uStack_20 = 0x3f800000;
                                (*(pIVar16->klass->vtable).set_color.methodPtr)
                                          (pIVar16,&fStack_17,
                                           (pIVar16->klass->vtable).set_color.method);
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
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings_OnSettingChanged
               (PointLightSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_halo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Setting_changed_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key == StringLiteral_colorR) ||
     ((((key != (String *)0x0 && (StringLiteral_colorR != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_colorR->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(key->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_colorR->fields)._firstChar,
                          (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0))
     )) {
    pSVar2 = (this->fields).color;
    if ((pSVar2 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((int)pSVar2->max_length == 0) goto code_?;
    pSVar2->vector[0] = *(float *)&value[1].klass;
  }
  else if ((key == StringLiteral_colorG) ||
          (((key != (String *)0x0 && (StringLiteral_colorG != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_colorG->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_colorG->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar1 != 0)))))) {
    pSVar2 = (this->fields).color;
    if ((pSVar2 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)pSVar2->max_length < 2) goto code_?;
    pSVar2->vector[1] = *(float *)&value[1].klass;
  }
  else {
    if ((key != StringLiteral_colorB) &&
       ((((key == (String *)0x0 || (StringLiteral_colorB == (String *)0x0)) ||
         ((key->fields)._stringLength != (StringLiteral_colorB->fields)._stringLength)) ||
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_colorB->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 == 0
        )))) {
      if ((key == StringLiteral_halo) ||
         (((key != (String *)0x0 && (StringLiteral_halo != (String *)0x0)) &&
          (((key->fields)._stringLength == (StringLiteral_halo->fields)._stringLength &&
           (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(key->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_halo->fields)._firstChar,
                               (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar1 != 0)))))) {
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
        pSVar4 = (this->fields).settingsBase;
        (this->fields).intType = aiStackX_10[0];
        value_00 = (Object *)FUN_?(uRam_?,aiStackX_10);
        key_00 = StringLiteral_halo;
        if (pSVar4 != (SettingsBase *)0x0) {
          if (cRam_? == '\0') {
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
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((((pSVar4->fields).woID != -1) && (key_00 != (String *)0x0)) &&
             ((key_00->fields)._stringLength != 0)) {
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_01,(pSVar4->fields).woID,(MethodInfo *)0x0);
              if (wo == (MVWorldObjectClient *)0x0) {
                return;
              }
              if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
                FUN_?();
              }
              uVar5 = 0;
              WorldObjectDataValidator::WorldObjectDataValidator_Validate
                        (wo,key_00,value_00,(MethodInfo *)0x0);
              this_00 = (pSVar4->fields).result;
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (this_00,(Object *)key_00,value_00,(InsertionBehavior__Enum)uVar5,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                           *)FUN_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                          );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                if (this_02 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key_00,
                             value_00,(InsertionBehavior__Enum)
                                      CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                            (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                  return;
                }
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          return;
        }
      }
      else {
        pSVar4 = (this->fields).settingsBase;
        if (pSVar4 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged(pSVar4,key,value,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar6 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3);
            return;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      goto code_?;
    }
    pSVar2 = (this->fields).color;
    if ((pSVar2 == (Single__Array *)0x0) || (value == (Object *)0x0)) goto code_?;
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)pSVar2->max_length < 3) goto code_?;
    pSVar2->vector[2] = *(float *)&value[1].klass;
  }
  pSVar4 = (this->fields).settingsBase;
  if (pSVar4 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (pSVar4,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar2 = (this->fields).color;
    pIVar7 = (this->fields).preview;
    if (pSVar2 != (Single__Array *)0x0) {
      if (((int)pSVar2->max_length == 0) || ((uint)pSVar2->max_length < 2)) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pSVar2 != (Single__Array *)0x0) {
        if ((uint)pSVar2->max_length < 3) goto code_?;
        if (pIVar7 != (Image *)0x0) {
          (*(pIVar7->klass->vtable).set_color.methodPtr)
                    (pIVar7,&stack0xffffffffffffffe8,(pIVar7->klass->vtable).set_color.method);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* PointLightSettings() */

void Assembly-CSharp.dll::PointLightSettings::PointLightSettings__ctor
               (PointLightSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)FUN_?(TypeInfo__System__Single,3);
  bVar2 = iRam_? != 0;
  (this->fields).color = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).color >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar7 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar8 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar9 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar10 = ppMVar8;
  if (lVar9 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar9 = lRam_?;
  }
  else {
    do {
      uVar3 = (uint)ppMVar10;
      LOCK();
      bVar2 = uVar3 != uRam_?;
      uVar11 = uVar3;
      uVar12 = uVar3 + 1;
      if (bVar2) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar2) && (ppMVar10 = (MethodInfo **)(ulonglong)uVar11, uVar3 = uVar11, uVar11 != 2)
            );
    while (uVar3 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar3 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar9;
  puVar13 = &(pOVar7->_1).field_0x1c;
  LOCK();
  bVar2 = *(int *)puVar13 == 1;
  if (bVar2) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar3 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar7->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar2 = *puVar14 == 1;
  if (bVar2) {
    *puVar14 = 1;
  }
  uVar3 = uRam_?;
  UNLOCK();
  if (bVar2) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar3 = GetCurrentThreadId();
    psVar15 = &(pOVar7->_1).cctor_thread;
    LOCK();
    bVar2 = (ulonglong)uVar3 == *psVar15;
    if (bVar2) {
      *psVar15 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (bVar2) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar7->_1).field_0x1c;
      LOCK();
      bVar2 = *(int *)puVar13 == 1;
      if (bVar2) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar2) break;
      LOCK();
      lVar9._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
      lVar9._4_4_ = (pOVar7->_1).cctor_started;
      if (lVar9 == 0) {
        (pOVar7->_1).initializationExceptionGCHandle = 0;
        (pOVar7->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar9 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar7->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar3 = GetCurrentThreadId();
    LOCK();
    (pOVar7->_1).cctor_thread = (ulonglong)uVar3;
    UNLOCK();
    LOCK();
    (pOVar7->_1).cctor_finished_or_no_cctor = 1;
    uVar3 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar3 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar7->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar7);
      ppMVar10 = ppMVar8;
      pIVar17 = (Il2CppClass *)pOVar7;
code_?:
      do {
        if (ppMVar10 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar10 = pIVar17->methods;
            pMVar18 = *ppMVar10;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar8;
                while (ppMVar20 = ppMVar19 + 0x3052a1b1,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar10 = ppMVar10 + 1;
          if (ppMVar10 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar10;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar10 = ppMVar8;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar7->_1).cctor_thread = 0;
    uVar6 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar7->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar7->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_24 < 0x10) {
code_?:
      lVar9 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar6;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar9 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar9;
        if (iRam_? != 0) {
          uVar3 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      FUN_?(pOVar7,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17))))
        goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      uVar21 = _UNK_?;
      uVar6 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar7->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar7->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}

