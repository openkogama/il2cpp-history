
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_Initialize
               (SoundEmitterSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 != (SettingsBase *)0x0) {
    SettingsBase::SettingsBase_Initialize
              (this_00,woID,root,MVWorldObjectDocumentationType__Enum_SoundEmitter,(MethodInfo *)0x0
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_02,woID,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        this_01 = (pMVar1->fields)._.data;
        pSVar2 = (this->fields).keys;
        pSVar3 = (this->fields).volumeSlider;
        if ((pSVar2 != (SoundEmitterSettings_Keys *)0x0) &&
           (pSVar4 = (pSVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
          if ((int)pSVar4->max_length == 0) goto code_?;
          pSVar5 = pSVar4->vector[0];
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)((((this->fields).keys)->fields).keys)->vector[0],
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if ((pSVar3 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
              if ((pOVar6->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar6);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              SettingsSlider::SettingsSlider_Initialize
                        (pSVar3,pSVar5,*(float *)&pOVar6[1].klass,0.0,_UNK_?,
                         (MethodInfo *)0x0);
              pSVar2 = (this->fields).keys;
              pSVar3 = (this->fields).pitchSlider;
              if ((pSVar2 != (SoundEmitterSettings_Keys *)0x0) &&
                 (pSVar4 = (pSVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
                if ((uint)pSVar4->max_length < 2) {
code_?:
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pSVar5 = pSVar4->vector[1];
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_01,(Object *)
                                            ((((this->fields).keys)->fields).keys)->vector[1],
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if ((pSVar3 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
                  if ((pOVar6->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar6);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  SettingsSlider::SettingsSlider_Initialize
                            (pSVar3,pSVar5,*(float *)&pOVar6[1].klass,_UNK_?,
                             TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
                  pSVar2 = (this->fields).keys;
                  pSVar3 = (this->fields).rangeSlider;
                  if ((pSVar2 != (SoundEmitterSettings_Keys *)0x0) &&
                     (pSVar4 = (pSVar2->fields).keys, pSVar4 != (String__Array *)0x0)) {
                    if ((uint)pSVar4->max_length < 3) goto code_?;
                    pSVar5 = pSVar4->vector[2];
                    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (this_01,(Object *)
                                                ((((this->fields).keys)->fields).keys)->vector[2],
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if ((pSVar3 != (SettingsSlider *)0x0) && (pOVar6 != (Object *)0x0)) {
                      if ((pOVar6->klass->_0).element_class ==
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        SettingsSlider::SettingsSlider_Initialize_1
                                  (pSVar3,pSVar5,*(int32_t *)&pOVar6[1].klass,0,2,(MethodInfo *)0x0)
                        ;
                        return;
                      }
                      FUN_?(pOVar6);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged
               (SoundEmitterSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Decimal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).keys;
  if ((pSVar1 == (SoundEmitterSettings_Keys *)0x0) ||
     (pSVar2 = (pSVar1->fields).keys, pSVar2 == (String__Array *)0x0)) goto code_?;
  if ((uint)pSVar2->max_length < 3) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = pSVar2->vector[2];
  if (key == pSVar4) {
    pSVar5 = (this->fields).settingsBase;
code_?:
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    afStackX_8[0] = (float)mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    uVar6 = uRam_?;
  }
  else {
    if (((key == (String *)0x0) || (pSVar4 == (String *)0x0)) ||
       ((key->fields)._stringLength != (pSVar4->fields)._stringLength)) {
      pSVar5 = (this->fields).settingsBase;
    }
    else {
      bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(key->fields)._firstChar,
                         (uint8_t *)&(pSVar4->fields)._firstChar,
                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
      pSVar5 = (this->fields).settingsBase;
      if (bVar7 != 0) goto code_?;
    }
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Decimal);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__IConvertible);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar8 = TypeInfo__System__IConvertible;
    if (value == (Object *)0x0) {
      if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
        FUN_?();
      }
      pDVar9 = TypeInfo__System__Decimal->static_fields;
    }
    else {
      lVar10 = FUN_?(value,TypeInfo__System__IConvertible);
      pIVar11 = TypeInfo__System__IConvertible;
      if (lVar10 == 0) {
        FUN_?(value,pIVar8);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar12 = (longlong *)FUN_?(value,TypeInfo__System__IConvertible);
      if (plVar12 == (longlong *)0x0) {
        FUN_?(value,pIVar11);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = *plVar12;
      uVar13 = 0;
      if (*(ushort *)(lVar10 + 0x12e) != 0) {
        do {
          if (*(IConvertible__Class **)(*(longlong *)(lVar10 + 0xb0) + (ulonglong)uVar13 * 0x10) ==
              TypeInfo__System__IConvertible) {
            puVar14 = (undefined8 *)
                      ((longlong)
                       (*(int *)(*(longlong *)(lVar10 + 0xb0) + 8 + (ulonglong)uVar13 * 0x10) + 0xd)
                       * 0x10 + 0x138 + lVar10);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar10 + 0x12e));
      }
      puVar14 = (undefined8 *)FUN_?(plVar12,TypeInfo__System__IConvertible,0xd);
code_?:
      pDVar9 = (Decimal__StaticFields *)(*(code *)*puVar14)(&DStackY_38,plVar12,0);
    }
    uVar6._0_4_ = (pDVar9->Zero).flags;
    uVar6._4_4_ = (pDVar9->Zero).hi;
    uVar15._0_4_ = (pDVar9->Zero).lo;
    uVar15._4_4_ = (pDVar9->Zero).mid;
    if (*(int *)&(TypeInfo__System__Decimal->_1).field_0x1c == 0) {
      FUN_?();
    }
    DStackY_38._0_8_ = uVar6;
    DStackY_38._8_8_ = uVar15;
    afStackX_8[0] =
         mscorlib.dll::System::Decimal::Decimal_op_Explicit_5(&DStackY_38,(MethodInfo *)0x0);
    uVar6 = uRam_?;
  }
  value_00 = (Object *)FUN_?(uVar6,afStackX_8);
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
                  (wo,key,value_00,(MethodInfo *)0x0);
        this_00 = (pSVar5->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar6,
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


/* Void OnSettingChanged(String, Int32) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged_1
               (SoundEmitterSettings *this,String *key,int32_t value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsBase;
  value_00 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  if (pSVar1 == (SettingsBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
      uVar3 = 0;
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value_00,(MethodInfo *)0x0)
      ;
      this_00 = (pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar3,
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
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                    (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void OnSettingChanged(String, Single) */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings_OnSettingChanged_2
               (SoundEmitterSettings *this,String *key,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsBase;
  value_00 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  if (pSVar1 == (SettingsBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
      uVar3 = 0;
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value_00,(MethodInfo *)0x0)
      ;
      this_00 = (pSVar1->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar3,
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
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                    (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* SoundEmitterSettings() */

void Assembly-CSharp.dll::SoundEmitterSettings::SoundEmitterSettings__ctor
               (SoundEmitterSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SoundEmitterSettings__Keys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SoundEmitterSettings_Keys *)FUN_?(TypeInfo__SoundEmitterSettings__Keys);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_range);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_volume);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = (String__Array *)FUN_?(TypeInfo__System__String,3);
  if (pSVar2 == (String__Array *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(pSVar2,0,StringLiteral_volume);
  FUN_?(pSVar2,1,StringLiteral_pitch);
  FUN_?(pSVar2,2,StringLiteral_range);
  iVar4 = iRam_?;
  (pSVar1->fields).keys = pSVar2;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar4 = iRam_?;
    } while (!bVar9);
  }
  (this->fields).keys = pSVar1;
  if (iVar4 != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).keys >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

