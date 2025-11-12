
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_Initialize
               (MessageBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_billboard);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  pSVar1 = (String *)0x0;
  uVar2 = 0;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_Text,(MethodInfo *)0x0);
  if (woID == -1) {
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_text,
               (Object *)StringLiteral_test,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pSStackX_10 = (String *)CONCAT44(pSStackX_10._4_4_,0x3e4ccccd);
    pOVar3 = (Object *)FUN_?(lRam_?,&pSStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_textSize
               ,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MessageBoxSettings);
    }
    uVar4 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_textColor,
               (Object *)TypeInfo__MessageBoxSettings->static_fields->defaultColor,
               (InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    lVar5 = lRam_?;
    pSStackX_10 = (String *)((ulonglong)pSStackX_10 & 0xffffffffffffff00);
    pSVar6 = pSStackX_10;
    if ((*(int *)(lRam_? + 0x28) < 0) &&
       ((*(longlong *)(lRam_? + 0x60) == 0 ||
        (pSVar6 = pSVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
      pSVar6 = (String *)FUN_?(lRam_?);
      FUN_?(&pSVar6->fields,&pSStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pSVar6->fields >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        uVar4 = (ulonglong)(uVar7 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar4;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
    behavior = (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2);
    pMVar12 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
    ;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar13 == (MVWorldObjectClient *)0x0)
       ) goto code_?;
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)(pMVar13->fields)._.data;
    pSStackX_10 = (String *)CONCAT44(pSStackX_10._4_4_,0x3e4ccccd);
    pOVar3 = (Object *)FUN_?(lRam_?,&pSStackX_10);
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_textSize
               ,pOVar3,InsertionBehavior__Enum_None,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MessageBoxSettings);
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_textColor,
               (Object *)TypeInfo__MessageBoxSettings->static_fields->defaultColor,
               InsertionBehavior__Enum_None,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    lVar5 = lRam_?;
    pSStackX_10 = (String *)((ulonglong)pSStackX_10 & 0xffffffffffffff00);
    pMVar12 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
    ;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar6 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar6->fields,&pSStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&pSVar6->fields >> 0xc);
          uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar8 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        behavior = InsertionBehavior__Enum_None;
        pMVar12 = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
        ;
      }
      else {
        behavior = InsertionBehavior__Enum_None;
        pSVar6 = pSVar1;
      }
    }
    else {
      behavior = InsertionBehavior__Enum_None;
      pSVar6 = pSStackX_10;
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_billboard,
             (Object *)pSVar6,behavior,pMVar12->klass->rgctx_data[0x22].method);
  pSVar14 = (this->fields).sizeSlider;
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_textSize,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if ((pSVar14 != (SettingsSlider *)0x0) && (pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    SettingsSlider::SettingsSlider_Initialize
              (pSVar14,StringLiteral_textSize,*(float *)&pOVar3[1].klass,_UNK_?,
               _UNK_?,(MethodInfo *)0x0);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,
                         (Object *)StringLiteral_textSize,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      MessageBoxSettings_SetTextSize(this,*(float *)&pOVar3[1].klass,(MethodInfo *)0x0);
      this_01 = (this->fields).inputField;
      pSVar6 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_03,
                           (Object *)StringLiteral_text,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (this_01 != (SettingsInputField *)0x0) {
        if (pSVar6 != (String *)0x0) {
          if (pSVar6->klass == pSRam0000000182db2460) {
            pSVar1 = pSVar6;
          }
          if (pSVar1 == (String *)0x0) {
            FUN_?(pSVar6);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        SettingsInputField::SettingsInputField_Initialize
                  (this_01,StringLiteral_text,pSVar1,(MethodInfo *)0x0);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)this_03,
                             (Object *)StringLiteral_textColor,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        pSVar16 = TypeInfo__System__Single;
        if (pOVar3 == (Object *)0x0) {
          (this->fields).color = (Single__Array *)0x0;
        }
        else {
          pSVar17 = (Single__Array *)FUN_?(pOVar3,TypeInfo__System__Single);
          if (pSVar17 == (Single__Array *)0x0) {
            FUN_?(pOVar3,pSVar16);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          (this->fields).color = pSVar17;
          pSVar16 = TypeInfo__System__Single;
          lVar5 = FUN_?(pOVar3,TypeInfo__System__Single);
          if (lVar5 == 0) {
            FUN_?(pOVar3,pSVar16);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&(this->fields).color >> 0xc);
          uVar4 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar8 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        maxValue = _UNK_?;
        pSVar17 = (this->fields).color;
        pSVar14 = (this->fields).colorR;
        if (pSVar17 != (Single__Array *)0x0) {
          if ((int)pSVar17->max_length == 0) goto code_?;
          if (pSVar14 != (SettingsSlider *)0x0) {
            SettingsSlider::SettingsSlider_Initialize
                      (pSVar14,StringLiteral_colorR,pSVar17->vector[0],0.0,_UNK_?,
                       (MethodInfo *)0x0);
            pSVar17 = (this->fields).color;
            pSVar14 = (this->fields).colorG;
            if (pSVar17 != (Single__Array *)0x0) {
              if ((uint)pSVar17->max_length < 2) goto code_?;
              if (pSVar14 != (SettingsSlider *)0x0) {
                SettingsSlider::SettingsSlider_Initialize
                          (pSVar14,StringLiteral_colorG,pSVar17->vector[1],0.0,maxValue,
                           (MethodInfo *)0x0);
                pSVar17 = (this->fields).color;
                pSVar14 = (this->fields).colorB;
                if (pSVar17 != (Single__Array *)0x0) {
                  if ((uint)pSVar17->max_length < 3) goto code_?;
                  if (pSVar14 != (SettingsSlider *)0x0) {
                    SettingsSlider::SettingsSlider_Initialize
                              (pSVar14,StringLiteral_colorB,pSVar17->vector[2],0.0,maxValue,
                               (MethodInfo *)0x0);
                    pSVar17 = (this->fields).color;
                    pIVar18 = (this->fields).preview;
                    if (pSVar17 != (Single__Array *)0x0) {
                      if (((int)pSVar17->max_length == 0) || ((uint)pSVar17->max_length < 2)) {
code_?:
                        FUN_?();
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      if (pSVar17 != (Single__Array *)0x0) {
                        if ((uint)pSVar17->max_length < 3) goto code_?;
                        if (pIVar18 != (Image *)0x0) {
                          uStack_19 = (undefined *)CONCAT44(0x3f800000,pSVar17->vector[2]);
                          fStack_20 = pSVar17->vector[0];
                          fStack_21 = pSVar17->vector[1];
                          (*(pIVar18->klass->vtable).set_color.methodPtr)
                                    (pIVar18,&fStack_20,(pIVar18->klass->vtable).set_color.method);
                          pSVar22 = (this->fields).billboardToggle;
                          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Object,System::Object]::
                                    Dictionary_2_System_Object_System_Object__get_Item
                                              ((Dictionary_2_System_Object_System_Object_ *)this_03,
                                               (Object *)StringLiteral_billboard,
                                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                              );
                          pSVar1 = StringLiteral_billboard;
                          if ((pSVar22 != (SettingsToggle *)0x0) && (pOVar3 != (Object *)0x0)) {
                            if ((pOVar3->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar3,lRam_?);
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            value = *(bool *)&pOVar3[1].klass;
                            if (cRam_? == '\0') {
                              FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_);
                              LOCK();
                              UNLOCK();
                              FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool>);
                              LOCK();
                              UNLOCK();
                              FUN_?(&
                                            MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            bVar11 = iRam_? != 0;
                            (pSVar22->fields).key = pSVar1;
                            if (bVar11) {
                              uVar7 = (uint)((ulonglong)&(pSVar22->fields).key >> 0xc);
                              puVar10 = (ulonglong *)
                                       ((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
                              do {
                                uVar8 = *puVar10;
                                LOCK();
                                uVar4 = *puVar10;
                                if (uVar8 == uVar4) {
                                  *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
                                }
                                UNLOCK();
                              } while (uVar8 != uVar4);
                            }
                            pTVar23 = (pSVar22->fields).toggle;
                            if (pTVar23 != (Toggle *)0x0) {
                              UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                                        (pTVar23,value,1,(MethodInfo *)0x0);
                              pTVar23 = (pSVar22->fields).toggle;
                              if (pTVar23 != (Toggle *)0x0) {
                                pTVar24 = (pTVar23->fields).onValueChanged;
                                uVar2 = FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction<bool>);
                                FUN_?(uVar2,pSVar22,
                                              MethodInfo__SettingsToggle__ValueChanged_bool_);
                                if (pTVar24 != (Toggle_ToggleEvent *)0x0) {
                                  pMVar12 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                                            ->klass->rgctx_data[2].method;
                                  pIVar25 = pMVar12->klass;
                                  if ((pIVar25->field_0x135 & 1) == 0) {
                                    pIVar25 = (Il2CppClass *)FUN_?(pIVar25);
                                  }
                                  pvVar26 = pIVar25->rgctx_data[5].rgctxDataDummy;
                                  if ((*(byte *)((longlong)pvVar26 + 0x135) & 1) == 0) {
                                    pvVar26 = (void *)FUN_?(pvVar26);
                                  }
                                  uVar27 = FUN_?(pvVar26);
                                  pIVar25 = pMVar12->klass;
                                  if ((pIVar25->field_0x135 & 1) == 0) {
                                    pIVar25 = (Il2CppClass *)FUN_?(pIVar25);
                                  }
                                  FUN_?(uVar27,uVar2,
                                                (pIVar25->rgctx_data[7].method)->klass->rgctx_data
                                                [4].rgctxDataDummy);
                                  if ((pTVar24 != (Toggle_ToggleEvent *)0x0) &&
                                     (pIVar28 = (pTVar24->fields)._._.m_Calls,
                                     pIVar28 != (InvokableCallList *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pLVar29 = (pIVar28->fields).m_RuntimeCalls;
                                    if (pLVar29 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)
                                                  0x0) {
                                      FUN_?(pLVar29,uVar27);
                                      (pIVar28->fields).m_NeedsUpdate = 1;
                                      return;
                                    }
                                  }
                                  FUN_?();
                                  pcVar15 = (code *)swi(3);
                                  (*pcVar15)();
                                  return;
                                }
                              }
                            }
                            FUN_?();
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
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
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_OnSettingChanged
               (MessageBoxSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textColor);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_colorG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_textSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((key == StringLiteral_textSize) ||
     ((((key != (String *)0x0 && (StringLiteral_textSize != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_textSize->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(key->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_textSize->fields)._firstChar,
                          (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0))
     )) {
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    pDVar2 = mscorlib.dll::System::Convert::Convert_ToDecimal
                       ((Decimal *)&fStackY_28,value,(MethodInfo *)0x0);
    fVar3 = (float)pDVar2->flags;
    uVar4 = pDVar2->hi;
    uVar5 = pDVar2->lo;
    uVar6 = pDVar2->mid;
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Decimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStackY_38._0_4_ = fVar3;
    auStackY_38._4_4_ = uVar4;
    auStackY_38._8_4_ = uVar5;
    auStackY_38._12_4_ = uVar6;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Decimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Decimal__DecCalc);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Decimal);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?();
    }
    uVar4 = ((int)fVar3 >> 0x10 & 0xffU) - 1;
    if (0 < (int)uVar4) {
      if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Decimal__DecCalc->_1).field_0x1c == 0) {
        FUN_?();
      }
      mscorlib.dll::System::Decimal+DecCalc::Decimal_DecCalc_InternalRound
                ((Decimal_DecCalc *)auStackY_38,uVar4,Decimal_DecCalc_RoundingMode__Enum_ToEven,
                 (MethodInfo *)0x0);
    }
    fStackY_28 = (float)auStackY_38._0_4_;
    fStackY_24 = (float)auStackY_38._4_4_;
    fStackY_20 = (float)auStackY_38._8_4_;
    uStackY_1c = auStackY_38._12_4_;
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = mscorlib.dll::System::Decimal::Decimal_op_Explicit_5
                       ((Decimal *)&fStackY_28,(MethodInfo *)0x0);
    MessageBoxSettings_SetTextSize(this,fVar3,(MethodInfo *)0x0);
    pSVar7 = (this->fields).settingsBase;
    uStackX_10 = CONCAT44(uStackX_10._4_4_,fVar3);
    value_00 = (Object *)FUN_?(lRam_?,&uStackX_10);
  }
  else {
    if ((key == StringLiteral_colorR) ||
       (((key != (String *)0x0 && (StringLiteral_colorR != (String *)0x0)) &&
        (((key->fields)._stringLength == (StringLiteral_colorR->fields)._stringLength &&
         (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_colorR->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar1 != 0)))))) {
      pSVar8 = (this->fields).color;
      if ((pSVar8 != (Single__Array *)0x0) && (value != (Object *)0x0)) {
        if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(value,lRam_?);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((int)pSVar8->max_length == 0) goto code_?;
        pSVar8->vector[0] = *(float *)&value[1].klass;
        pSVar7 = (this->fields).settingsBase;
        if (pSVar7 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar7,StringLiteral_textColor,(Object *)(this->fields).color,(MethodInfo *)0x0
                    );
          pSVar8 = (this->fields).color;
          pIVar10 = (this->fields).preview;
          if (pSVar8 != (Single__Array *)0x0) {
            if (((int)pSVar8->max_length == 0) || ((uint)pSVar8->max_length < 2)) {
code_?:
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (pSVar8 != (Single__Array *)0x0) {
              if ((uint)pSVar8->max_length < 3) goto code_?;
              if (pIVar10 != (Image *)0x0) {
                auStackY_38._12_4_ = 0x3f800000;
                uStackY_1c = 0x3f800000;
                fStackY_28 = pSVar8->vector[0];
                fStackY_24 = pSVar8->vector[1];
                fStackY_20 = pSVar8->vector[2];
                (*(pIVar10->klass->vtable).set_color.methodPtr)
                          (pIVar10,&fStackY_28,(pIVar10->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((key == StringLiteral_colorG) ||
       ((((key != (String *)0x0 && (StringLiteral_colorG != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_colorG->fields)._stringLength)) &&
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_colorG->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0
        )))) {
      pSVar8 = (this->fields).color;
      if ((pSVar8 != (Single__Array *)0x0) && (value != (Object *)0x0)) {
        if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(value,lRam_?);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((uint)pSVar8->max_length < 2) goto code_?;
        pSVar8->vector[1] = *(float *)&value[1].klass;
        pSVar7 = (this->fields).settingsBase;
        if (pSVar7 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar7,StringLiteral_textColor,(Object *)(this->fields).color,(MethodInfo *)0x0
                    );
          pSVar8 = (this->fields).color;
          pIVar10 = (this->fields).preview;
          if (pSVar8 != (Single__Array *)0x0) {
            if (((int)pSVar8->max_length == 0) || ((uint)pSVar8->max_length < 2))
            goto code_?;
            if (pSVar8 != (Single__Array *)0x0) {
              if ((uint)pSVar8->max_length < 3) goto code_?;
              if (pIVar10 != (Image *)0x0) {
                auStackY_38._12_4_ = 0x3f800000;
                uStackY_1c = 0x3f800000;
                fStackY_28 = pSVar8->vector[0];
                fStackY_24 = pSVar8->vector[1];
                fStackY_20 = pSVar8->vector[2];
                (*(pIVar10->klass->vtable).set_color.methodPtr)
                          (pIVar10,&fStackY_28,(pIVar10->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((key == StringLiteral_colorB) ||
       ((((key != (String *)0x0 && (StringLiteral_colorB != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_colorB->fields)._stringLength)) &&
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_colorB->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0
        )))) {
      pSVar8 = (this->fields).color;
      if ((pSVar8 != (Single__Array *)0x0) && (value != (Object *)0x0)) {
        if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(value,lRam_?);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((uint)pSVar8->max_length < 3) goto code_?;
        pSVar8->vector[2] = *(float *)&value[1].klass;
        pSVar7 = (this->fields).settingsBase;
        if (pSVar7 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (pSVar7,StringLiteral_textColor,(Object *)(this->fields).color,(MethodInfo *)0x0
                    );
          pSVar8 = (this->fields).color;
          pIVar10 = (this->fields).preview;
          if (pSVar8 != (Single__Array *)0x0) {
            if (((int)pSVar8->max_length == 0) || ((uint)pSVar8->max_length < 2))
            goto code_?;
            if (pSVar8 != (Single__Array *)0x0) {
              if ((uint)pSVar8->max_length < 3) goto code_?;
              if (pIVar10 != (Image *)0x0) {
                auStackY_38._12_4_ = 0x3f800000;
                uStackY_1c = 0x3f800000;
                fStackY_28 = pSVar8->vector[0];
                fStackY_24 = pSVar8->vector[1];
                fStackY_20 = pSVar8->vector[2];
                (*(pIVar10->klass->vtable).set_color.methodPtr)
                          (pIVar10,&fStackY_28,(pIVar10->klass->vtable).set_color.method);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (*(int *)&(TypeInfo__MessageBoxSettings->_1).field_0x1c == 0) {
      FUN_?();
    }
    value_00 = MessageBoxSettings_RemoveQuadFromText(key,value,(MethodInfo *)0x0);
    pSVar7 = (this->fields).settingsBase;
  }
  if (pSVar7 != (SettingsBase *)0x0) {
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
    if ((((pSVar7->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(pSVar7->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar11 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                  (wo,key,value_00,(MethodInfo *)0x0);
        this_00 = (pSVar7->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar11,
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
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar11 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Object RemoveQuadFromText(String, Object) */

Object * Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_RemoveQuadFromText
                   (String *key,Object *val,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__quad);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_text);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((key == StringLiteral_text) ||
      ((((key != (String *)0x0 && (StringLiteral_text != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_text->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_text->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ))) && (val != (Object *)0x0)) {
    pSVar2 = (String *)0x0;
    if (val->klass == pORam0000000182db2460) {
      pSVar2 = (String *)val;
    }
    if (pSVar2 != (String *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_ToLower(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 != (String *)0x0) {
        bVar1 = mscorlib.dll::System::String::String_Contains
                          (pSVar3,StringLiteral__quad,(MethodInfo *)0x0);
        pSVar4 = StringLiteral__quad;
        if (bVar1 == 0) {
          return val;
        }
        iVar5 = (pSVar3->fields)._stringLength;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Globalization__CompareInfo);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__Globalization__CultureInfo);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar4 == (String *)0x0) {
          uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
          pAVar7 = (ArgumentNullException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_value);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (pAVar7,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar7,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if ((pSVar3->fields)._stringLength < 0) {
          uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
          pSVar3 = (String *)func_?(&StringLiteral_startIndex);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar10,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if ((iVar5 < 0) || ((pSVar3->fields)._stringLength - iVar5 < 0)) {
          uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
          pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
          pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
          pSVar3 = (String *)func_?(&StringLiteral_count);
          mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                    (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
          uVar6 = func_?(&
                                      MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                     );
          FUN_?(pAVar10,uVar6);
          pcVar8 = (code *)swi(3);
          pOVar9 = (Object *)(*pcVar8)();
          return pOVar9;
        }
        if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__System__Globalization__CompareInfo);
        }
        pCVar11 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
        if (pCVar11 != (CompareInfo *)0x0) {
          startIndex = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                                 (pCVar11,pSVar3,pSVar4,0,iVar5,0,(MethodInfo *)0x0);
          pSVar4 = ::StringLiteral__;
          iVar5 = (pSVar3->fields)._stringLength - startIndex;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Globalization__CompareInfo);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Globalization__CultureInfo);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar4 == (String *)0x0) {
            uVar6 = func_?(&TypeInfo__System__ArgumentNullException);
            pAVar7 = (ArgumentNullException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_value);
            mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                      (pAVar7,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar7,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if ((startIndex < 0) || ((pSVar3->fields)._stringLength < startIndex)) {
            uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
            pSVar3 = (String *)func_?(&StringLiteral_startIndex);
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar10,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if ((iVar5 < 0) || ((pSVar3->fields)._stringLength - iVar5 < startIndex)) {
            uVar6 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
            pAVar10 = (ArgumentOutOfRangeException *)func_?(uVar6);
            pSVar2 = (String *)func_?(&StringLiteral_Count_must_be_positive_and_count);
            pSVar3 = (String *)func_?(&StringLiteral_count);
            mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_2
                      (pAVar10,pSVar3,pSVar2,(MethodInfo *)0x0);
            uVar6 = func_?(&
                                        MethodInfo__System__String__IndexOf_MethodInfo__System__String__int__int__System__StringComparison_
                                       );
            FUN_?(pAVar10,uVar6);
            pcVar8 = (code *)swi(3);
            pOVar9 = (Object *)(*pcVar8)();
            return pOVar9;
          }
          if (*(int *)&(TypeInfo__System__Globalization__CompareInfo->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__System__Globalization__CompareInfo);
          }
          pCVar11 = TypeInfo__System__Globalization__CompareInfo->static_fields->Invariant;
          if (pCVar11 != (CompareInfo *)0x0) {
            iVar12 = mscorlib.dll::System::Globalization::CompareInfo::CompareInfo_IndexOfOrdinal
                              (pCVar11,pSVar3,pSVar4,startIndex,iVar5,0,(MethodInfo *)0x0);
            if (-1 < iVar12) {
              pSVar3 = mscorlib.dll::System::String::String_Substring_1
                                 (pSVar2,0,startIndex,(MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::String::String_Substring_1
                                 (pSVar2,iVar12 + 1,(pSVar2->fields)._stringLength - (iVar12 + 1),
                                  (MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::String::String_Concat_4
                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
              return (Object *)pSVar2;
            }
            pSVar2 = mscorlib.dll::System::String::String_Substring_1
                               (pSVar2,0,startIndex,(MethodInfo *)0x0);
            return (Object *)pSVar2;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      pOVar9 = (Object *)(*pcVar8)();
      return pOVar9;
    }
  }
  return val;
}


/* Void SetTextSize(Single) */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings_SetTextSize
               (MessageBoxSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Mathf);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Large);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Huge);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Small);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Medium);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar1 = StringLiteral_Small;
  if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
      (float)((uint)(value - _UNK_?) & (uint)_UNK_?)) {
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Medium;
    if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
        (float)((uint)(value - _UNK_?) & (uint)_UNK_?)) {
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar1 = StringLiteral_Large;
      if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
          (float)((uint)(value - _UNK_?) & (uint)_UNK_?)) {
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar1 = StringLiteral_Huge;
        if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <=
            (float)((uint)(value - _UNK_?) & (uint)_UNK_?)) {
          return;
        }
      }
    }
  }
  pTVar2 = (this->fields).sizeLabel;
  pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar1,(pTVar2->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MessageBoxSettings);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  array = (Single__Array *)FUN_?(TypeInfo__System__Single,4);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,_F6BB1294DA2F78CD935B01C7656280DF5EAA0439E9D97BC03775825A41A508E4_Field,
             (MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__MessageBoxSettings->static_fields->defaultColor = array;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__MessageBoxSettings->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* MessageBoxSettings() */

void Assembly-CSharp.dll::MessageBoxSettings::MessageBoxSettings__ctor
               (MessageBoxSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (Single__Array *)FUN_?(TypeInfo__System__Single,4);
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
                while (ppMVar20 = ppMVar19 + 0x30528cee,
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

