
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_Initialize
               (CountingCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_reset);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_startingValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  uVar1 = 0;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_CountingCube,(MethodInfo *)0x0);
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
    pOVar2 = (Object *)FUN_?(lRam_?,&stack0x00000010);
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_startingValue,pOVar2,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pOVar2 = (Object *)FUN_?(lRam_?,&stack0x00000010);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_reset,
               pOVar2,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_04 = (this->fields).slider;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_02,woID,(MethodInfo *)0x0), pMVar3 == (MVWorldObjectClient *)0x0)
       ) goto code_?;
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)(pMVar3->fields)._.data;
    this_04 = (this->fields).slider;
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
  }
  pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_startingValue,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if ((this_04 != (SettingsSlider *)0x0) && (pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2,lRam_?);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SettingsSlider::SettingsSlider_Initialize_1
              (this_04,StringLiteral_startingValue,*(int32_t *)&pOVar2[1].klass,1,99,
               (MethodInfo *)0x0);
    this_01 = (this->fields).inputField;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,
                         (Object *)StringLiteral_startingValue,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if ((this_01 != (SettingsInputFieldSlider *)0x0) && (pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                (this_01,StringLiteral_startingValue,(float)*(int *)&pOVar2[1].klass,
                 (MethodInfo *)0x0);
      pSVar5 = (this->fields).toggle;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_03,
                           (Object *)StringLiteral_reset,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      pSVar6 = StringLiteral_reset;
      if ((pSVar5 != (SettingsToggle *)0x0) && (pOVar2 != (Object *)0x0)) {
        if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar2,lRam_?);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        value = *(bool *)&pOVar2[1].klass;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__SettingsToggle__ValueChanged_bool_,StringLiteral_reset,value,0,
                        unaff_RDI);
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
        bVar7 = iRam_? != 0;
        (pSVar5->fields).key = pSVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(pSVar5->fields).key >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        pTVar12 = (pSVar5->fields).toggle;
        if (pTVar12 != (Toggle *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(pTVar12,value,1,(MethodInfo *)0x0);
          pTVar12 = (pSVar5->fields).toggle;
          if (pTVar12 != (Toggle *)0x0) {
            pTVar13 = (pTVar12->fields).onValueChanged;
            uVar1 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool>);
            FUN_?(uVar1,pSVar5,MethodInfo__SettingsToggle__ValueChanged_bool_);
            if (pTVar13 != (Toggle_ToggleEvent *)0x0) {
              pMVar14 = MethodInfo__UnityEngine__Events__UnityEvent<bool>__AddListener_UnityEngine__Events__UnityAction<bool>_
                       ->klass->rgctx_data[2].method;
              pIVar15 = pMVar14->klass;
              if ((pIVar15->field_0x135 & 1) == 0) {
                pIVar15 = (Il2CppClass *)FUN_?(pIVar15);
              }
              pvVar16 = pIVar15->rgctx_data[5].rgctxDataDummy;
              if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
                pvVar16 = (void *)FUN_?(pvVar16);
              }
              uVar17 = FUN_?(pvVar16);
              pIVar15 = pMVar14->klass;
              if ((pIVar15->field_0x135 & 1) == 0) {
                pIVar15 = (Il2CppClass *)FUN_?(pIVar15);
              }
              FUN_?(uVar17,uVar1,
                            (pIVar15->rgctx_data[7].method)->klass->rgctx_data[4].rgctxDataDummy);
              if ((pTVar13 != (Toggle_ToggleEvent *)0x0) &&
                 (pIVar18 = (pTVar13->fields)._._.m_Calls, pIVar18 != (InvokableCallList *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar19 = (pIVar18->fields).m_RuntimeCalls;
                if (pLVar19 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                  FUN_?(pLVar19,uVar17);
                  (pIVar18->fields).m_NeedsUpdate = 1;
                  return;
                }
              }
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::CountingCubeSettings::CountingCubeSettings_OnSettingChanged
               (CountingCubeSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_startingValue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key == StringLiteral_startingValue) {
    pSVar1 = (this->fields).settingsBase;
  }
  else {
    if (((key == (String *)0x0) || (StringLiteral_startingValue == (String *)0x0)) ||
       ((key->fields)._stringLength != (StringLiteral_startingValue->fields)._stringLength)) {
      pSVar1 = (this->fields).settingsBase;
      goto joined_?;
    }
    bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(key->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_startingValue->fields)._firstChar,
                       (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
    pSVar1 = (this->fields).settingsBase;
    if (bVar2 == 0) goto joined_?;
  }
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  uStackX_10 = CONCAT44(uStackX_10._4_4_,iVar3);
  value = (Object *)FUN_?(uRam_?,&uStackX_10);
joined_?:
  if (pSVar1 == (SettingsBase *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
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
  if ((((pSVar1->fields).woID != -1) && (key != (String *)0x0)) &&
     ((key->fields)._stringLength != 0)) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar5 = 0;
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
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
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

