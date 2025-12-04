
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_Initialize
               (SkyboxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fogDensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sunAngle);
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
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Skybox,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar1 != (MVWorldObjectClient *)0x0))
       && (this_01 = (pMVar1->fields)._.data,
          this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_color,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pSVar3 = TypeInfo__System__Single;
      if (pOVar2 == (Object *)0x0) {
        (this->fields).color = (Single__Array *)0x0;
      }
      else {
        pSVar4 = (Single__Array *)FUN_?(pOVar2,TypeInfo__System__Single);
        if (pSVar4 == (Single__Array *)0x0) {
          FUN_?(pOVar2,pSVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields).color = pSVar4;
        pSVar3 = TypeInfo__System__Single;
        lVar6 = FUN_?(pOVar2,TypeInfo__System__Single);
        if (lVar6 == 0) {
          FUN_?(pOVar2,pSVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(this->fields).color >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      maxValue = _UNK_?;
      pSVar4 = (this->fields).color;
      pSVar12 = (this->fields).colorR;
      if (pSVar4 != (Single__Array *)0x0) {
        if ((int)pSVar4->max_length == 0) goto code_?;
        if (pSVar12 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar12,StringLiteral_colorR,pSVar4->vector[0],0.0,_UNK_?,
                     (MethodInfo *)0x0);
          pSVar4 = (this->fields).color;
          pSVar12 = (this->fields).colorG;
          if (pSVar4 != (Single__Array *)0x0) {
            if ((uint)pSVar4->max_length < 2) goto code_?;
            if (pSVar12 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar12,StringLiteral_colorG,pSVar4->vector[1],0.0,maxValue,
                         (MethodInfo *)0x0);
              pSVar4 = (this->fields).color;
              pSVar12 = (this->fields).colorB;
              if (pSVar4 != (Single__Array *)0x0) {
                if ((uint)pSVar4->max_length < 3) goto code_?;
                if (pSVar12 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar12,StringLiteral_colorB,pSVar4->vector[2],0.0,maxValue,
                             (MethodInfo *)0x0);
                  pSVar12 = (this->fields).angle;
                  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (this_01,(Object *)StringLiteral_sunAngle,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if ((pSVar12 != (SettingsSlider *)0x0) && (pOVar2 != (Object *)0x0)) {
                    if ((pOVar2->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar2,lRam_?);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar12,StringLiteral_sunAngle,*(float *)&pOVar2[1].klass,0.0,
                               _UNK_?,(MethodInfo *)0x0);
                    pSVar12 = (this->fields).fog;
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (this_01,(Object *)StringLiteral_fogDensity,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if ((pSVar12 != (SettingsSlider *)0x0) && (pOVar2 != (Object *)0x0)) {
                      if ((pOVar2->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar2,lRam_?);
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      SettingsSlider::SettingsSlider_Initialize
                                (pSVar12,StringLiteral_fogDensity,*(float *)&pOVar2[1].klass,
                                 _UNK_?,_UNK_?,(MethodInfo *)0x0);
                      pSVar4 = (this->fields).color;
                      pIVar13 = (this->fields).preview;
                      if (pSVar4 != (Single__Array *)0x0) {
                        if (((int)pSVar4->max_length == 0) ||
                           (fStack_14 = pSVar4->vector[0], (uint)pSVar4->max_length < 2)) {
code_?:
                          FUN_?();
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        fStack_15 = pSVar4->vector[1];
                        if (pSVar4 != (Single__Array *)0x0) {
                          if ((uint)pSVar4->max_length < 3) goto code_?;
                          fStack_16 = pSVar4->vector[2];
                          if (pIVar13 != (Image *)0x0) {
                            uStack_17 = 0x3f800000;
                            (*(pIVar13->klass->vtable).set_color.methodPtr)
                                      (pIVar13,&fStack_14,(pIVar13->klass->vtable).set_color.method);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnColorChange() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnColorChange
               (SkyboxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (this_00,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar1 = (this->fields).color;
    pIVar2 = (this->fields).preview;
    if (pSVar1 != (Single__Array *)0x0) {
      if (((int)pSVar1->max_length == 0) ||
         (fStack_3 = pSVar1->vector[0], (uint)pSVar1->max_length < 2)) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fStack_5 = pSVar1->vector[1];
      if (pSVar1 != (Single__Array *)0x0) {
        if ((uint)pSVar1->max_length < 3) goto code_?;
        fStack_6 = pSVar1->vector[2];
        if (pIVar2 != (Image *)0x0) {
          uStack_7 = 0x3f800000;
          (*(pIVar2->klass->vtable).set_color.methodPtr)
                    (pIVar2,&fStack_3,(pIVar2->klass->vtable).set_color.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings_OnSettingChanged
               (SkyboxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unknown_key__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fogDensity);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_sunAngle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
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
    if ((int)pSVar2->max_length == 0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
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
  else if ((key == StringLiteral_colorB) ||
          ((((key != (String *)0x0 && (StringLiteral_colorB != (String *)0x0)) &&
            ((key->fields)._stringLength == (StringLiteral_colorB->fields)._stringLength)) &&
           (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(key->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_colorB->fields)._firstChar,
                               (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar1 != 0)))) {
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
  else {
    if ((key != StringLiteral_sunAngle) &&
       (((key == (String *)0x0 || (StringLiteral_sunAngle == (String *)0x0)) ||
        (((key->fields)._stringLength != (StringLiteral_sunAngle->fields)._stringLength ||
         (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_sunAngle->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar1 == 0)))))) {
      if ((key != StringLiteral_fogDensity) &&
         ((((key == (String *)0x0 || (StringLiteral_fogDensity == (String *)0x0)) ||
           ((key->fields)._stringLength != (StringLiteral_fogDensity->fields)._stringLength)) ||
          (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_fogDensity->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar1 == 0)))) {
        mscorlib.dll::System::String::String_Concat_4
                  (StringLiteral_Unknown_key__,key,(MethodInfo *)0x0);
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
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0);
          return;
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar5 = (this->fields).settingsBase;
      if (pSVar5 != (SettingsBase *)0x0) {
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
        if ((((pSVar5->fields).woID != -1) && (key != (String *)0x0)) &&
           ((key->fields)._stringLength != 0)) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClientManager *)0x0) {
            wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_01,(pSVar5->fields).woID,(MethodInfo *)0x0);
            if (wo == (MVWorldObjectClient *)0x0) {
              return;
            }
            if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar6 = 0;
            WorldObjectDataValidator::WorldObjectDataValidator_Validate
                      (wo,key,value,(MethodInfo *)0x0);
            this_00 = (pSVar5->fields).result;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)FUN_?(
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                        );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                        (this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                        );
              if (this_02 !=
                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
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
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar5 = (this->fields).settingsBase;
    if (pSVar5 == (SettingsBase *)0x0) goto code_?;
    SettingsBase::SettingsBase_OnSettingChanged(pSVar5,key,value,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_color,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar5 = (this->fields).settingsBase;
  if (pSVar5 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_OnSettingChanged
              (pSVar5,StringLiteral_color,(Object *)(this->fields).color,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SkyboxSettings() */

void Assembly-CSharp.dll::SkyboxSettings::SkyboxSettings__ctor
               (SkyboxSettings *this,MethodInfo *method)

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
                while (ppMVar20 = ppMVar19 + 0x30529dd4,
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

