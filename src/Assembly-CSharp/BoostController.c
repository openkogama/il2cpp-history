
/* Void ActivateBoost(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_ActivateBoost
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__set_Item_BoostType__Boost_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Boost__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___Active_boosts__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_activate_boost__but_bo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = BoostController_IsBoostActive(this,type,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pDVar2 = (this->fields).activeBoosts;
    if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostController);
    }
    this_00 = TypeInfo__BoostController->static_fields->boosts;
    if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                         );
      if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,type,pOVar3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__set_Item_BoostType__Boost_
                   ->klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                        ,type,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar4 = (this->fields).onBoostTypeUpdate;
        if (pDVar4 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,type,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                             );
          if (pOVar3 == (Object *)0x0) {
code_?:
            if ((this->fields).BoostCountChanged != (Action *)0x0) {
              pAVar5 = (this->fields).BoostCountChanged;
              (*(pAVar5->fields)._._.invoke_impl)
                        ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
            }
            return;
          }
          pDVar4 = (this->fields).onBoostTypeUpdate;
          if (pDVar4 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar4,type,
                                MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                               );
            if (pOVar3 != (Object *)0x0) {
              (*(code *)pOVar3[1].monitor)(pOVar3[4].klass,pOVar3[2].monitor);
              goto code_?;
            }
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  else {
    EStack_7.klass = (Enum__Class *)TypeInfo__BoostType;
    EStack_7.monitor = (MonitorData *)0xffffffffffffffff;
    pSStack_8 = (String *)CONCAT44(pSStack_8._4_4_,type);
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
    pDVar2 = (this->fields).activeBoosts;
    if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      str3 = (String *)
             (*(pDVar2->klass->vtable).ToString.methodPtr)
                       (pDVar2,(pDVar2->klass->vtable).ToString.method);
      pSVar9 = mscorlib.dll::System::String::String_Concat_6
                         (StringLiteral_Boost__,pSVar9,StringLiteral___Active_boosts__,str3,
                          (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar9,(MethodInfo *)0x0);
      pSVar9 = StringLiteral_Trying_to_activate_boost__but_bo;
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
      pIVar10 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar10 != (ILogger_1 *)0x0) {
        pSStack_8 = pSVar9;
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar10,0);
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AllowBoost(BoostType, Boolean) */

void Assembly-CSharp.dll::BoostController::BoostController_AllowBoost
               (BoostController *this,BoostType__Enum boost,bool allowed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BoostController);
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
           TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (pDVar1,boost,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BoostController);
      }
      pDVar3 = TypeInfo__BoostController->static_fields->boosts;
      if ((pDVar3 == (Dictionary_2_BoostType_Boost_ *)0x0) ||
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar4 == (Object *)0x0)) goto code_?;
      *(bool *)&pOVar4[3].klass = allowed;
    }
    pDVar1 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (pDVar1,boost,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        return;
      }
      pDVar3 = (this->fields).activeBoosts;
      if ((pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar4 != (Object *)0x0)) {
        *(bool *)&pOVar4[3].klass = allowed;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void BoostUpdated(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_BoostUpdated
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).onBoostTypeUpdate;
  if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    if (pOVar2 == (Object *)0x0) {
code_?:
      if ((this->fields).BoostCountChanged != (Action *)0x0) {
        pAVar3 = (this->fields).BoostCountChanged;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
      }
      return;
    }
    pDVar1 = (this->fields).onBoostTypeUpdate;
    if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                         );
      if (pOVar2 != (Object *)0x0) {
        (*(code *)pOVar2[1].monitor)(pOVar2[4].klass,pOVar2[2].monitor);
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetActiveBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetActiveBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activeBoosts;
  if (pDVar1 == (Dictionary_2_BoostType_Boost_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar2)();
    return pDVar3;
  }
  if ((pDVar1->fields)._values != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)
  {
    return (pDVar1->fields)._values;
  }
  pvVar4 = MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__->
           klass->rgctx_data[0x1d].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)FUN_?(pvVar4);
  iVar5 = iRam_?;
  (pDVar3->fields)._dictionary = pDVar1;
  if (iVar5 != 0) {
    uVar6 = (uint)((ulonglong)&pDVar3->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar5 = iRam_?;
    } while (!bVar10);
  }
  (pDVar1->fields)._values = pDVar3;
  if (iVar5 == 0) {
    return pDVar3;
  }
  uVar6 = (uint)((ulonglong)&(pDVar1->fields)._values >> 0xc);
  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
  do {
    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
    LOCK();
    bVar10 = uVar8 == *puVar9;
    if (bVar10) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar10);
  return (pDVar1->fields)._values;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetAllBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetAllBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BoostController);
  }
  pDVar1 = TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 == (Dictionary_2_BoostType_Boost_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar2)();
    return pDVar3;
  }
  if ((pDVar1->fields)._values != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)
  {
    return (pDVar1->fields)._values;
  }
  pvVar4 = MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__->
           klass->rgctx_data[0x1d].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
    pvVar4 = (void *)FUN_?(pvVar4);
  }
  pDVar3 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)FUN_?(pvVar4);
  iVar5 = iRam_?;
  (pDVar3->fields)._dictionary = pDVar1;
  if (iVar5 != 0) {
    uVar6 = (uint)((ulonglong)&pDVar3->fields >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
      iVar5 = iRam_?;
    } while (!bVar10);
  }
  (pDVar1->fields)._values = pDVar3;
  if (iVar5 == 0) {
    return pDVar3;
  }
  uVar6 = (uint)((ulonglong)&(pDVar1->fields)._values >> 0xc);
  lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
  do {
    uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
    puVar9 = (ulonglong *)(lVar7 + 0xADDR);
    LOCK();
    bVar10 = uVar8 == *puVar9;
    if (bVar10) {
      *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
    }
    UNLOCK();
  } while (!bVar10);
  return (pDVar1->fields)._values;
}


/* Boolean HasAvailableBoosts() */

bool Assembly-CSharp.dll::BoostController::BoostController_HasAvailableBoosts
               (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    pDVar1 = BoostController_GetAllBoosts(this,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
      pDStack_2 = (pDVar1->fields)._dictionary;
      ppDStack_3 = (Dictionary_2_BoostType_Boost_ **)0x0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      if (pDStack_2 == (Dictionary_2_BoostType_Boost_ *)0x0) {
        pDStack_6 = pDStack_2;
        FUN_?();
        pcVar10 = (code *)swi(3);
        bVar11 = (*pcVar10)();
        return bVar11;
      }
      ppDStack_3 = (Dictionary_2_BoostType_Boost_ **)
                    ((ulonglong)(uint)(pDStack_2->fields)._version << 0x20);
      uStack_4 = 0;
      uStack_12 = (ulonglong)ppDStack_3;
      pBStack_13 = (Boost *)0x0;
      pDStack_6 = (Dictionary_2_BoostType_Boost_ *)0x0;
      ppDStack_3 = &pDStack_2;
      while (pDStack_2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        if (uStack_12._4_4_ != (pDStack_2->fields)._version) goto code_?;
        uVar9 = uStack_12 & 0xffffffff;
        do {
          if (pDStack_2 == (Dictionary_2_BoostType_Boost_ *)0x0) goto code_?;
          uVar5 = (uint)uVar9;
          if ((uint)(pDStack_2->fields)._count <= uVar5) {
            return 0;
          }
          pDVar14 = (pDStack_2->fields)._entries;
          uVar9 = (ulonglong)(uVar5 + 1);
          uStack_12 = CONCAT44(uStack_12._4_4_,uVar5 + 1);
          if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_BoostType_Boost___Array *)0x0)
          goto code_?;
          if ((uint)pDVar14->max_length <= uVar5) goto code_?;
        } while (pDVar14->vector[(int)uVar5].hashCode < 0);
        pBStack_13 = pDVar14->vector[(int)uVar5].value;
        func_?();
        pBVar15 = pBStack_13;
        if (this_01 == (MVGameOptionDataObject *)0x0) goto code_?;
        this_02 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                            (this_01,(MethodInfo *)0x0);
        if (this_02 == (GameBoosterSettingsManager *)0x0) goto code_?;
        pLVar16 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(this_02,(MethodInfo *)0x0);
        iVar17 = 0;
        if (pLVar16 ==
            (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
             *)0x0) goto code_?;
        for (; iVar17 < (pLVar16->fields)._size; iVar17 = iVar17 + 1) {
          if (pBVar15 == (Boost *)0x0) goto code_?;
          pSVar18 = (pBVar15->fields)._BoostKey_k__BackingField;
          lVar19 = FUN_?(pLVar16,iVar17);
          if (lVar19 == 0) goto code_?;
          pSVar20 = *(String **)(lVar19 + 0x18);
          if ((pSVar18 == pSVar20) ||
             ((((pSVar18 != (String *)0x0 && (pSVar20 != (String *)0x0)) &&
               ((pSVar18->fields)._stringLength == (pSVar20->fields)._stringLength)) &&
              (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar18->fields)._firstChar,
                                  (uint8_t *)&(pSVar20->fields)._firstChar,
                                  (longlong)(pSVar18->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar11 != 0)))) {
            return 1;
          }
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Boolean IsBoostActive(BoostType) */

bool Assembly-CSharp.dll::BoostController::BoostController_IsBoostActive
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void RemoveAllBoosts() */

void Assembly-CSharp.dll::BoostController::BoostController_RemoveAllBoosts
               (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Remove_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).activeBoosts;
  if ((pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) &&
     (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                TypeConverterRegistry+ConverterKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                          ),
     pDVar2 !=
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
      *)0x0)) {
    pDVar1 = (pDVar2->fields)._dictionary;
    ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_4 = 0;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) {
      pDStack_6 = pDVar1;
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
    }
    else {
      ppDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)((ulonglong)(uint)(pDVar1->fields)._version << 0x20);
      uStack_4 = 0;
      uStack_10 = (ulonglong)ppDStack_3;
      apOStack_11[0] = (Object *)0x0;
      pDStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_3 = &pDStack_12;
      pDStack_12 = pDVar1;
      while (pDStack_12 !=
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) {
        if (uStack_10._4_4_ != (pDStack_12->fields)._version) goto code_?;
        uVar9 = uStack_10 & 0xffffffff;
        do {
          if (pDStack_12 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          uVar5 = (uint)uVar9;
          if ((uint)(pDStack_12->fields)._count <= uVar5) {
            uStack_10 = CONCAT44(uStack_10._4_4_,(pDStack_12->fields)._count + 1);
            apOStack_11[0] = (Object *)0x0;
            uVar5 = 0;
            pLVar13 = (this->fields).removeList;
            if (pLVar13 == (List_1_Boost_ *)0x0) goto code_?;
            lVar14 = 0x20;
            goto code_?;
          }
          pDVar15 = (pDStack_12->fields)._entries;
          uVar9 = (ulonglong)(uVar5 + 1);
          uStack_10 = CONCAT44(uStack_10._4_4_,uVar5 + 1);
          if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar15->max_length <= uVar5) goto code_?;
        } while ((&pDVar15->vector[0].hashCode)[(longlong)(int)uVar5 * 6] < 0);
        apOStack_11[0] =
             *(Object **)((longlong)&pDVar15->vector[0].key + (longlong)(int)uVar5 * 0x18 + 8);
        func_?(apOStack_11);
        pMVar16 = MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_;
        pLVar13 = (this->fields).removeList;
        if (pLVar13 == (List_1_Boost_ *)0x0) goto code_?;
        piVar17 = &(pLVar13->fields)._version;
        *piVar17 = *piVar17 + 1;
        pBVar18 = (pLVar13->fields)._items;
        uVar5 = (pLVar13->fields)._size;
        if (pBVar18 == (Boost__Array *)0x0) goto code_?;
        if (uVar5 < (uint)pBVar18->max_length) {
          (pLVar13->fields)._size = uVar5 + 1;
          FUN_?(pBVar18,(longlong)(int)uVar5,apOStack_11[0]);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar13,apOStack_11[0],
                     pMVar16->klass->rgctx_data[0xe].method);
        }
      }
    }
    FUN_?();
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
code_?:
  if ((pLVar13->fields)._size <= (int)uVar5) {
    pLVar13 = (this->fields).removeList;
    if (pLVar13 != (List_1_Boost_ *)0x0) {
      piVar17 = &(pLVar13->fields)._version;
      *piVar17 = *piVar17 + 1;
      length = (pLVar13->fields)._size;
      (pLVar13->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar13->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
    goto code_?;
  }
  this_00 = (this->fields).activeBoosts;
  pLVar13 = (this->fields).removeList;
  if (pLVar13 == (List_1_Boost_ *)0x0) goto code_?;
  if ((uint)(pLVar13->fields)._size <= uVar5) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pBVar18 = (pLVar13->fields)._items;
  if (pBVar18 == (Boost__Array *)0x0) goto code_?;
  if ((uint)pBVar18->max_length <= uVar5) {
code_?:
    FUN_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  lVar20 = *(longlong *)((longlong)pBVar18->vector + lVar14 + -0x20);
  if ((lVar20 == 0) || (this_00 == (Dictionary_2_BoostType_Boost_ *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Remove
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
             *(Int32Enum__Enum *)(lVar20 + 0x10),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Remove_BoostType_
            );
  pLVar13 = (this->fields).removeList;
  if (pLVar13 == (List_1_Boost_ *)0x0) goto code_?;
  if ((uint)(pLVar13->fields)._size <= uVar5) goto code_?;
  pBVar18 = (pLVar13->fields)._items;
  if (pBVar18 == (Boost__Array *)0x0) goto code_?;
  if ((uint)pBVar18->max_length <= uVar5) goto code_?;
  lVar20 = *(longlong *)((longlong)pBVar18->vector + lVar14 + -0x20);
  if (lVar20 == 0) goto code_?;
  BoostController_BoostUpdated(this,*(BoostType__Enum *)(lVar20 + 0x10),(MethodInfo *)0x0);
  uVar5 = uVar5 + 1;
  lVar14 = lVar14 + 8;
  pLVar13 = (this->fields).removeList;
  if (pLVar13 == (List_1_Boost_ *)0x0) goto code_?;
  goto code_?;
}


/* Void SubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_SubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,CONCAT44(in_register_00000014,type),callback,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 == (Dictionary_2_BoostType_System_Action_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = (Delegate *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                     );
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar3,(Delegate *)callback,(MethodInfo *)0x0);
  pDVar3 = (Delegate *)0x0;
  if (pDVar4 != (Delegate *)0x0) {
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar3 = pDVar4;
    }
    if (pDVar3 == (Delegate *)0x0) {
      FUN_?(pDVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,(Object *)pDVar3,
             CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean TryGetActiveBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetActiveBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      bVar2 = iRam_? != 0;
      *boost = (Boost *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)boost >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return 0;
    }
    this_01 = (this->fields).activeBoosts;
    if (this_01 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar7 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      bVar2 = iRam_? != 0;
      *boost = pBVar7;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)boost >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return 1;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean TryGetBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BoostController);
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
            TypeInfo__BoostController->static_fields->boosts;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      bVar2 = iRam_? != 0;
      *boost = (Boost *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)boost >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return 0;
    }
    if (*(int *)&(TypeInfo__BoostController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostController);
    }
    this_01 = TypeInfo__BoostController->static_fields->boosts;
    if (this_01 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar7 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      bVar2 = iRam_? != 0;
      *boost = pBVar7;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)boost >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      return 1;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void UnSubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_UnSubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action,CONCAT44(in_register_00000014,type),callback,uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 == (Dictionary_2_BoostType_System_Action_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDVar3 = (Delegate *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                     );
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     (pDVar3,(Delegate *)callback,(MethodInfo *)0x0);
  pDVar3 = (Delegate *)0x0;
  if (pDVar4 != (Delegate *)0x0) {
    if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
      pDVar3 = pDVar4;
    }
    if (pDVar3 == (Delegate *)0x0) {
      FUN_?(pDVar4);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,(Object *)pDVar3,
             CONCAT31((int3)((uint)uVar1 >> 8),1),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Boost);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JumpPower);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0___Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_X_ray_vision);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0___Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Coins);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_XRayVision);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Poison_Resist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ammo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PoisonResist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ammo_Percentage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed_Percentage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0___HP);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x2_Ammo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x2_Gamecoins);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Jump_Percentage);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Coin_Percentage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HP_Percentage);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___0___Poison_Resist);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameCoinBoost);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__);
  pSVar1 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_XRayVision,StringLiteral_XRayVision,pSVar1,
                     ::StringLiteral__,pSVar2,1,(MethodInfo *)0x0);
  if (this == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,4,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_x2_Ammo,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Ammo_Percentage,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Ammo,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_AmmoIntMultiplier,StringLiteral_Ammo,pSVar1,pSVar2,
                     pSVar5,0,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral___0___Speed,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Speed_Percentage,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Speed,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_MovementSpeedFloatMultiplier,StringLiteral_Speed,pSVar1,
                     pSVar2,pSVar5,1,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral_x2_Gamecoins,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Coin_Percentage,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Coins,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_GameCoinsIntMultiplier,StringLiteral_GameCoinBoost,
                     pSVar1,pSVar2,pSVar5,0,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,2,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral___0___HP,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_HP_Percentage,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Health,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_ExtraHealthFloatMultiplier,StringLiteral_Health,pSVar1,
                     pSVar2,pSVar5,1,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,3,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral___0___Jump,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Jump_Percentage,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Jump,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_JumpPowerFloatMultiplier,StringLiteral_JumpPower,pSVar1,
                     pSVar2,pSVar5,1,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,5,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  pSVar1 = TM::TM__(StringLiteral___0___Poison_Resist,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
  pSVar5 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
  pBVar3 = (Boost *)FUN_?(TypeInfo__Boost);
  Boost::Boost__ctor(pBVar3,BoostType__Enum_PoisonResistPercentage,StringLiteral_PoisonResist,pSVar1
                     ,pSVar2,pSVar5,1,(MethodInfo *)0x0);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__TryInsert
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this,6,(Object *)pBVar3,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pSVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__BoostController->static_fields->boosts = (Dictionary_2_BoostType_Boost_ *)this;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__BoostController->static_fields >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__ctor
               (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Boost>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<BoostType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
            );
  if (pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,(Object *)0x0,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,(Object *)0x0,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
               ->klass->rgctx_data[0x22].method);
    bVar3 = iRam_? != 0;
    (this->fields).onBoostTypeUpdate = (Dictionary_2_BoostType_System_Action_ *)pDVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).onBoostTypeUpdate >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    this_00 = (List_1_System_UInt32Enum_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<BoostType>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    if (this_00 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,3,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,1,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,0,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 5;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,5,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 2;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,2,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar4 = (this_00->fields)._size;
    if (uVar4 < (uint)pUVar10->max_length) {
      (this_00->fields)._size = uVar4 + 1;
      if ((uint)pUVar10->max_length <= uVar4) goto code_?;
      pUVar10->vector[(int)uVar4] = 6;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(this_00,6,pMVar8->klass->rgctx_data[0xe].method);
    }
    pMVar8 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    piVar9 = &(this_00->fields)._version;
    *piVar9 = *piVar9 + 1;
    pUVar10 = (this_00->fields)._items;
    if (pUVar10 != (UInt32Enum__Enum__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pUVar10->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if ((uint)pUVar10->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar10->vector[(int)uVar4] = 4;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
        List_1_System_UInt32Enum__AddWithResize(this_00,4,pMVar8->klass->rgctx_data[0xe].method);
      }
      bVar3 = iRam_? != 0;
      (this->fields).boostPriorityList = (List_1_BoostType_ *)this_00;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).boostPriorityList >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
               FUN_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                );
      bVar3 = iRam_? != 0;
      (this->fields).activeBoosts = (Dictionary_2_BoostType_Boost_ *)pDVar1;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).activeBoosts >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      this_01 = (List_1_Boost_ *)FUN_?(TypeInfo__System__Collections__Generic__List<Boost>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<Boost>__List__);
      bVar3 = iRam_? != 0;
      (this->fields).removeList = this_01;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).removeList >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

