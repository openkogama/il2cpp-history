
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::FireSettings::FireSettings_Initialize
               (FireSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&_2C699A84B0526F49E282B1E6BCA03A337065953829C8A51594B9791894741925_Field);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_R);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_G);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_I);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_B);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_C);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    uVar1 = 0;
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Fire,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar2 != (MVWorldObjectClient *)0x0))
       && (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                      *)(pMVar2->fields)._.data,
          this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0)) {
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_01,(Object *)StringLiteral_I,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        auStackX_10[0] = 0x40a00000;
        pOVar4 = (Object *)FUN_?(lRam_?,auStackX_10);
        uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_I,
                   pOVar4,(InsertionBehavior__Enum)uVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_01,(Object *)StringLiteral_C,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar3 < 0) {
        array = (Array *)FUN_?(TypeInfo__System__Single,3);
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  (array,__2C699A84B0526F49E282B1E6BCA03A337065953829C8A51594B9791894741925_Field,
                   (MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_C,
                   (Object *)array,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,
                          (Object *)StringLiteral_C,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pSVar5 = TypeInfo__System__Single;
      if (pOVar4 == (Object *)0x0) {
        (this->fields).color = (Single__Array *)0x0;
      }
      else {
        pSVar6 = (Single__Array *)FUN_?(pOVar4,TypeInfo__System__Single);
        if (pSVar6 == (Single__Array *)0x0) {
          FUN_?(pOVar4,pSVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->fields).color = pSVar6;
        pSVar5 = TypeInfo__System__Single;
        lVar8 = FUN_?(pOVar4,TypeInfo__System__Single);
        if (lVar8 == 0) {
          FUN_?(pOVar4,pSVar5);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(this->fields).color >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      maxValue = _UNK_?;
      pSVar6 = (this->fields).color;
      pSVar14 = (this->fields).colorR;
      if (pSVar6 != (Single__Array *)0x0) {
        if ((int)pSVar6->max_length == 0) goto code_?;
        if (pSVar14 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar14,StringLiteral_R,pSVar6->vector[0],_UNK_?,_UNK_?,
                     (MethodInfo *)0x0);
          pSVar6 = (this->fields).color;
          pSVar14 = (this->fields).colorG;
          if (pSVar6 != (Single__Array *)0x0) {
            if ((uint)pSVar6->max_length < 2) goto code_?;
            if (pSVar14 != (SettingsSlider *)0x0) {
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar14,StringLiteral_G,pSVar6->vector[1],_UNK_?,maxValue,
                         (MethodInfo *)0x0);
              pSVar6 = (this->fields).color;
              pSVar14 = (this->fields).colorB;
              if (pSVar6 != (Single__Array *)0x0) {
                if ((uint)pSVar6->max_length < 3) goto code_?;
                if (pSVar14 != (SettingsSlider *)0x0) {
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar14,StringLiteral_B,pSVar6->vector[2],_UNK_?,maxValue,
                             (MethodInfo *)0x0);
                  pSVar14 = (this->fields).intensity;
                  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                      (Object *)StringLiteral_I,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if ((pSVar14 != (SettingsSlider *)0x0) && (pOVar4 != (Object *)0x0)) {
                    if ((pOVar4->klass->_0).element_class !=
                        *(Il2CppClass **)(lRam_? + 0x40)) {
                      FUN_?(pOVar4,lRam_?);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar14,StringLiteral_I,*(float *)&pOVar4[1].klass,maxValue,
                               _UNK_?,(MethodInfo *)0x0);
                    pSVar6 = (this->fields).color;
                    pIVar15 = (this->fields).preview;
                    if (pSVar6 != (Single__Array *)0x0) {
                      if (((int)pSVar6->max_length == 0) ||
                         (fStack_16 = pSVar6->vector[0], (uint)pSVar6->max_length < 2)) {
code_?:
                        FUN_?();
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                      fStack_17 = pSVar6->vector[1];
                      if (pSVar6 != (Single__Array *)0x0) {
                        if ((uint)pSVar6->max_length < 3) goto code_?;
                        fStack_18 = pSVar6->vector[2];
                        if (pIVar15 != (Image *)0x0) {
                          uStack_19 = 0x3f800000;
                          (*(pIVar15->klass->vtable).set_color.methodPtr)
                                    (pIVar15,&fStack_16,(pIVar15->klass->vtable).set_color.method);
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
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::FireSettings::FireSettings_OnSettingChanged
               (FireSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_R);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_G);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_B);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_C);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key == StringLiteral_R) ||
     ((((key != (String *)0x0 && (StringLiteral_R != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_R->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(key->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_R->fields)._firstChar,
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
  else if ((key == StringLiteral_G) ||
          (((key != (String *)0x0 && (StringLiteral_G != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_G->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_G->fields)._firstChar,
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
    if ((key != StringLiteral_B) &&
       ((((key == (String *)0x0 || (StringLiteral_B == (String *)0x0)) ||
         ((key->fields)._stringLength != (StringLiteral_B->fields)._stringLength)) ||
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_B->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 == 0
        )))) {
      pSVar4 = (this->fields).settingsBase;
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
        if ((((pSVar4->fields).woID != -1) && (key != (String *)0x0)) &&
           ((key->fields)._stringLength != 0)) {
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
                      (wo,key,value,(MethodInfo *)0x0);
            this_00 = (pSVar4->fields).result;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar5,
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
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
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
              (pSVar4,StringLiteral_C,(Object *)(this->fields).color,(MethodInfo *)0x0);
    pSVar2 = (this->fields).color;
    pIVar6 = (this->fields).preview;
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
        if (pIVar6 != (Image *)0x0) {
          (*(pIVar6->klass->vtable).set_color.methodPtr)
                    (pIVar6,&stack0xffffffffffffffe8,(pIVar6->klass->vtable).set_color.method);
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


/* FireSettings() */

void Assembly-CSharp.dll::FireSettings::FireSettings__ctor(FireSettings *this,MethodInfo *method)

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

