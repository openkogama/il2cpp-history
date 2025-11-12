
/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Destroy
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).spawnStateWrapper == (SpawnStateWrapper *)0x0) {
    return;
  }
  pSVar1 = (this->fields).spawnStateWrapper;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar2 != 0) {
    bVar3 = iRam_? != 0;
    *(SpawnStateWrapper **)(lVar2 + 0x10) = pSVar1;
    if (bVar3) {
      uVar4 = (uint)(lVar2 + 0x10U >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    uVar4 = 0;
    lVar8 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar9 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar9 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar9->max_length <= (int)uVar4) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar9 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar9 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar9->max_length <= uVar4) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar2 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar9->vector + lVar8 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar2);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar2 + 0x18)
             = match;
        func_?(lVar2 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 8;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Int32 GetDataByKey(String, Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_GetDataByKey
                  (MVWorldObjectSpawner *this,String *key,int32_t defaultValue,MethodInfo *method)

{
  aIStackX_18[0].m_value = defaultValue;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__defined__falling_back_to_defaul);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVWorldObjectSpawner_with_type_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__without_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._._.data;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)(this->fields)._.blueprintData;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar1,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          values = (String__Array *)FUN_?(TypeInfo__System__String,6);
          if (values != (String__Array *)0x0) {
            FUN_?(values,0,StringLiteral_MVWorldObjectSpawner_with_type_);
            plVar3 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
            uVar4 = 0;
            if (plVar3 != (longlong *)0x0) {
              uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            }
            FUN_?(values,1,uVar4);
            FUN_?(values,2,StringLiteral__without_);
            FUN_?(values,3,key);
            FUN_?(values,4,StringLiteral__defined__falling_back_to_defaul);
            pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
            FUN_?(values,5,pSVar5);
            pSVar5 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar5,(MethodInfo *)0x0);
            return defaultValue;
          }
        }
        else {
          pDVar6 = (this->fields)._.blueprintData;
          if ((pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
             (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar6,(Object *)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 ), pOVar7 != (Object *)0x0)) {
            if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar7,lRam_?);
              pcVar8 = (code *)swi(3);
              iVar2 = (*pcVar8)();
              return iVar2;
            }
            goto code_?;
          }
        }
      }
    }
    else {
      pDVar6 = (this->fields)._._._._.data;
      if ((pDVar6 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar6,(Object *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar7 != (Object *)0x0)) {
        if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar7,lRam_?);
          pcVar8 = (code *)swi(3);
          iVar2 = (*pcVar8)();
          return iVar2;
        }
code_?:
        return *(int32_t *)&pOVar7[1].klass;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar2 = (*pcVar8)();
  return iVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<SpawnState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SpawnStateWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_triggerBoxEvents);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UseTime);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnWorldObjectID);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_spawnWorldObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  SVar1 = MVWorldObjectSpawner_ReadRespawnStateConfiguration(this,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar3 = Extensions::Extensions_GetObscuredType(pDVar2,StringLiteral_UseTime,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar3 != (Object *)0x0) {
    if ((pOVar3->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
      FUN_?(pOVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    OStack_5.currentCryptoKey = *(int32_t *)&pOVar3[1].klass;
    OStack_5.hiddenValue = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
    OStack_5.fakeValue = *(int32_t *)&pOVar3[1].monitor;
    OStack_5._12_4_ = *(undefined4 *)((longlong)&pOVar3[1].monitor + 4);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_InternalDecrypt(&OStack_5,(MethodInfo *)0x0);
    this_02 = (UnityAction_1_System_Int32Enum_ *)FUN_?(TypeInfo__System__Action<SpawnState>)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,(this->klass->vtable).OnSpawnStateChange.method,
               (MethodInfo *)0x0);
    obj = (SpawnStateWrapper *)FUN_?(TypeInfo__SpawnStateWrapper);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UpdateController);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar7 = iRam_? != 0;
    iStackX_c = SVar1.respawnCount;
    (obj->fields).stateChangeCallback = (Action_1_SpawnState_ *)this_02;
    (obj->fields).respawnCount = iStackX_c;
    (obj->fields).respawnInterval = SVar1.respawnInterval;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).stateChangeCallback >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (obj->fields).takenTime = iVar6;
    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
      FUN_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)obj,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1
               ,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).spawnStateWrapper = obj;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).spawnStateWrapper >> 0xc);
      lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar11 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)(this->fields)._.childIdMap;
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (this_00,(Object *)StringLiteral_spawnWorldObjectID,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         ->klass->rgctx_data[0x21].method);
      if (iVar6 < 0) {
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
        pIVar12 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar12 != (ILogger_1 *)0x0) {
          FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar12,0);
          return;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pDVar2 = (this->fields)._.childIdMap;
      if ((pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (pDVar2,(Object *)StringLiteral_spawnWorldObjectID,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar3 != (Object *)0x0)) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (this->fields)._._._.gameObject;
        (this->fields).spawnWorldObjectID = *(int32_t *)&pOVar3[1].klass;
        pMVar13 = 
        TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
        ;
        if (this_01 != (GameObject *)0x0) {
          if ((
              TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(
                         TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
                         );
          }
          pTVar14 = (TriggerBoxEvents *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_GetComponentInChildren_3
                              (this_01,0,((pMVar13->field7_0x38).rgctx_data)->method);
          bVar7 = iRam_? != 0;
          (this->fields).triggerBoxEvents = pTVar14;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).triggerBoxEvents >> 0xc);
            lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
            do {
              uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
              puVar11 = (ulonglong *)(lVar9 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          pTVar14 = (this->fields).triggerBoxEvents;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
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
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pTVar14 != (TriggerBoxEvents *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pTVar14->fields)._._._._.m_CachedPtr != (void *)0x0) {
              return;
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Did_not_find_triggerBoxEvents,(MethodInfo *)0x0);
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


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_OnDataUpdate
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  SVar1 = MVWorldObjectSpawner_ReadRespawnStateConfiguration(this,(MethodInfo *)0x0);
  pSVar2 = (this->fields).spawnStateWrapper;
  if (pSVar2 != (SpawnStateWrapper *)0x0) {
    (pSVar2->fields).respawnInterval = SVar1.respawnInterval;
    (pSVar2->fields).respawnCount = SVar1.respawnCount;
    (pSVar2->fields).takenCounter = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_OnSpawnStateChange
               (MVWorldObjectSpawner *this,SpawnState__Enum spawnState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SpawnState_is_none);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Switch_to_listening);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Switch_to_taken);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_SpawnState_is_none;
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
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
    return;
  }
  if (spawnState == SpawnState__Enum_Listening) {
    pSVar1 = StringLiteral_Switch_to_listening;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar1 = StringLiteral_Switch_to_listening;
    }
  }
  else {
    if (spawnState != SpawnState__Enum_Taken) {
      return;
    }
    pSVar1 = StringLiteral_Switch_to_taken;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      pSVar1 = StringLiteral_Switch_to_taken;
    }
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
  pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar2 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,3,pSVar1);
  return;
}


/* SpawnStateWrapper+SpawnStateConfiguration ReadRespawnStateConfiguration() */

SpawnStateWrapper_SpawnStateConfiguration
Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_ReadRespawnStateConfiguration
          (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_RespawnInterval);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RespawnCount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = MVWorldObjectSpawner_GetDataByKey
                    (this,StringLiteral_RespawnInterval,10000,(MethodInfo *)0x0);
  iVar2 = MVWorldObjectSpawner_GetDataByKey(this,StringLiteral_RespawnCount,-1,(MethodInfo *)0x0);
  SVar3.respawnCount = iVar2;
  SVar3.respawnInterval = iVar1;
  return SVar3;
}


/* Void RollbackPrediction() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_RollbackPrediction
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UseTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (-1 < (this->fields).predictTakeTime) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(this->klass->vtable).get_RunTimeData.methodPtr)
                       (this,(this->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = Extensions::Extensions_ContainsObscuredKey
                      (pDVar1,StringLiteral_UseTime,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
               (*(this->klass->vtable).get_RunTimeData.methodPtr)
                         (this,(this->klass->vtable).get_RunTimeData.method);
      if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar3 = Extensions::Extensions_GetObscuredType
                         (pDVar1,StringLiteral_UseTime,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      if (pOVar3 == (Object *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pOVar3->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        FUN_?(pOVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      OStack_5.currentCryptoKey = *(int32_t *)&pOVar3[1].klass;
      OStack_5.hiddenValue = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
      OStack_5.fakeValue = *(int32_t *)&pOVar3[1].monitor;
      OStack_5._12_4_ = *(undefined4 *)((longlong)&pOVar3[1].monitor + 4);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      takeTime = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_InternalDecrypt(&OStack_5,(MethodInfo *)0x0);
      MVWorldObjectSpawner_Take(this,takeTime,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Take(Int32) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Take
               (MVWorldObjectSpawner *this,int32_t takeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UseTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = this->klass;
  (this->fields).predictTakeTime = -1;
  uVar2 = (*(pMVar1->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(takeTime,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_4._0_5_ = CONCAT14(1,(int32_t)uStack_4);
  uStack_3 = CONCAT44(iVar5,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar5 = 0;
  if (bVar6 != 0) {
    iVar5 = takeTime;
  }
  uStack_4._0_4_ = iVar5;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar2,StringLiteral_UseTime,&uStack_3);
  pSVar7 = (this->fields).spawnStateWrapper;
  if (pSVar7 != (SpawnStateWrapper *)0x0) {
    (pSVar7->fields).takenTime = takeTime;
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TakePrediction(Int32) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_TakePrediction
               (MVWorldObjectSpawner *this,int32_t takeTime,MethodInfo *method)

{
  pSVar1 = (this->fields).spawnStateWrapper;
  (this->fields).predictTakeTime = takeTime;
  if (pSVar1 != (SpawnStateWrapper *)0x0) {
    (pSVar1->fields).takenTime = takeTime;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectSpawner(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner__ctor
               (MVWorldObjectSpawner *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).spawnWorldObjectID = -1;
  (this->fields).predictTakeTime = -1;
  if (cRam_? == '\0') {
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    auStack_1._8_8_ = &UNK_?;
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1._8_8_ = &UNK_?;
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  auStack_1._8_8_ = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields)._.idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.idChildMap >> 0xc);
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
  auStack_1._8_8_ = &UNK_?;
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar8 = (this->fields)._._._._.data;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields)._.blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->fields)._.blueprintData = pDVar8;
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.blueprintData >> 0xc);
        lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar4 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar2 = uVar6 == *puVar4;
          if (bVar2) {
            *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pDVar8 = (this->fields)._.blueprintData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields)._.childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (this->fields)._.childIdMap = pDVar8;
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&(this->fields)._.childIdMap >> 0xc);
          lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
            puVar4 = (ulonglong *)(lVar11 + 0xADDR);
            LOCK();
            bVar2 = uVar6 == *puVar4;
            if (bVar2) {
              *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pDVar8 = (this->fields)._.childIdMap;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uStack_12 = 0;
          uStack_13 = 0;
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&pDStack_14 >> 0xc);
            lVar11 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar4 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar2 = uVar6 == *puVar4;
              if (bVar2) {
                *puVar4 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          puStack_15 = (undefined *)(ulonglong)(uint)(pDVar8->fields)._version;
          uStack_16 = 2;
          auStack_1._8_8_ = puStack_15;
          pOStack_17 = (Object *)0x0;
          pOStack_18 = (Object *)0x0;
          uStack_19._0_4_ = 2;
          uStack_19._4_4_ = 0;
          pDStack_14 = pDVar8;
          auStack_1._0_8_ = pDVar8;
          while( true ) {
            bVar20 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               auStack_1,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar20 == 0) {
              return;
            }
            this_01 = (this->fields)._.idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,pOStack_18,pOStack_17,(InsertionBehavior__Enum)pDVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectSpawner(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner__ctor_1
               (MVWorldObjectSpawner *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).spawnWorldObjectID = -1;
  (this->fields).predictTakeTime = -1;
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._.idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_02;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.idChildMap >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._._.children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_03;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.children >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._._._.interactionFlags;
  *piVar6 = *piVar6 | 0x82101;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
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
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ChildrenMap);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_blueprint_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar7 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_No_blueprint_data,(MethodInfo *)0x0);
      return;
    }
    pDVar8 = (this->fields)._._._._.data;
    if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar8,(Object *)StringLiteral_BlueprintData,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        (this->fields)._.blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->fields)._.blueprintData = pDVar8;
        bVar9 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pDVar8);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(this->fields)._.blueprintData >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pDVar8 = (this->fields)._.blueprintData;
      if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar8,(Object *)StringLiteral_ChildrenMap,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pDVar8 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          (this->fields)._.childIdMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
        }
        else {
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (this->fields)._.childIdMap = pDVar8;
          bVar9 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar8->klass->_1).naturalAligment < bVar9) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar8);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(this->fields)._.childIdMap >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pDVar8 = (this->fields)._.childIdMap;
        if (pDVar8 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          puStack_11 = (undefined *)0x0;
          uStack_12 = 0;
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&pDStack_13 >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar1 = uVar4 == *puVar5;
              if (bVar1) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar1);
          }
          uStack_14 = (ulonglong)(uint)(pDVar8->fields)._version;
          uStack_15 = 2;
          uStack_16 = uStack_14;
          value = (Object *)0x0;
          pDStack_13 = pDVar8;
          pDStack_17 = pDVar8;
          while( true ) {
            bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &pDStack_17,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              );
            if (bVar18 == 0) {
              return;
            }
            this_01 = (this->fields)._.idChildMap;
            if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pDVar8 = (Dictionary_2_System_Object_System_Object_ *)
                     CONCAT71((int7)((ulonglong)pDVar8 >> 8),1);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      (this_01,(Object *)0x0,value,(InsertionBehavior__Enum)pDVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          goto code_?;
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

