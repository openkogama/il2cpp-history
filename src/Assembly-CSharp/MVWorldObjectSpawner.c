
/* Void Destroy() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Destroy
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).spawnStateWrapper != (SpawnStateWrapper *)0x0) {
    obj = (this->fields).spawnStateWrapper;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UpdateController);
      cRam_? = '\x01';
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    UpdateController::UpdateController_RemoveUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Int32 GetDataByKey(String, Int32) */

int32_t Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_GetDataByKey
                  (MVWorldObjectSpawner *this,String *key,int32_t defaultValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__defined__falling_back_to_defaul);
    func_?(&StringLiteral_MVWorldObjectSpawner_with_type_);
    func_?(&StringLiteral__without_);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 != 0) {
      pDVar3 = (this->fields)._._._._.data;
      if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
code_?:
          piVar5 = (int32_t *)func_?();
          return *piVar5;
        }
        goto code_?;
      }
      goto code_?;
    }
    pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             (this->fields)._.blueprintData;
    if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 != 0) {
      pDVar3 = (this->fields)._.blueprintData;
      if ((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar3,(Object *)key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             ), pOVar4 != (Object *)0x0)) {
        if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_MVWorldObjectSpawner_with_type_ != (String *)0x0) &&
       (iVar6 = func_?(), iVar6 == 0)) goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_MVWorldObjectSpawner_with_type_;
    func_?();
    pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if (pTVar7 != (Type *)0x0) {
      pSVar8 = (String *)(*(pTVar7->klass->vtable).ToString.methodPtr)();
      if ((pSVar8 == (String *)0x0) || (iVar6 = func_?(), iVar6 != 0))
      goto code_?;
      goto code_?;
    }
    pSVar8 = (String *)0x0;
code_?:
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar8;
    func_?();
    if ((StringLiteral__without_ != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__without_;
    func_?();
    if ((key != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0)) goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = key;
    func_?();
    if ((StringLiteral__defined__falling_back_to_defaul != (String *)0x0) &&
       (iVar6 = func_?(), iVar6 == 0)) goto code_?;
    if (4 < values->max_length) {
      values->vector[4] = StringLiteral__defined__falling_back_to_defaul;
      func_?();
      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&defaultValue,(MethodInfo *)0x0)
      ;
      if ((pSVar8 == (String *)0x0) || (iVar6 = func_?(), iVar6 != 0)) {
        if (5 < values->max_length) {
          values->vector[5] = pSVar8;
          func_?();
          pSVar8 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
            defaultValue = (int32_t)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)0x0;
          defaultValue = (int32_t)pSVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          return defaultValue;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Initialize
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<SpawnState>);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__SpawnStateWrapper);
    func_?(&StringLiteral_Did_not_find_triggerBoxEvents);
    func_?(&StringLiteral_UseTime);
    func_?(&StringLiteral_spawnWorldObjectID);
    func_?(&StringLiteral_No_spawnWorldObject);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  SVar1 = MVWorldObjectSpawner_ReadRespawnStateConfiguration(this,(MethodInfo *)0x0);
  iVar2 = SVar1.respawnCount;
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions,iVar2);
  }
  value = (SpawnStateWrapper *)
          Extensions::Extensions_GetObscuredType(pDVar3,StringLiteral_UseTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (value == (SpawnStateWrapper *)0x0) goto code_?;
  if ((value->klass->_0).element_class !=
      (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
  goto code_?;
  pOVar4 = (ObscuredInt *)func_?();
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
  ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
  this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
  if (this_01 == (UnityAction_1_System_Int32Enum_ *)0x0) {
code_?:
    pOVar5 = (Object *)func_?();
  }
  else {
    pUVar6 = this_01;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,(this->klass->vtable).OnSpawnStateChange.method,
               (MethodInfo *)0x0);
    value = (SpawnStateWrapper *)func_?();
    if (value == (SpawnStateWrapper *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    puVar7 = &UNK_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)SVar1.respawnInterval);
    (value->fields).respawnInterval = SVar1.respawnInterval;
    (value->fields).respawnCount = (int32_t)puVar7;
    (value->fields).stateChangeCallback = (Action_1_SpawnState_ *)this_01;
    func_?(&(value->fields).stateChangeCallback);
    (value->fields).takenTime = (int32_t)pUVar6;
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)value,UpdatePriority__Enum_UPDATEBUCKET_STANDARD
               ,1,(MethodInfo *)0x0);
    (this->fields).spawnStateWrapper = value;
    func_?();
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.childIdMap;
    if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)StringLiteral_spawnWorldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar8 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_No_spawnWorldObject,(MethodInfo *)0x0);
      return;
    }
    pDVar3 = (this->fields)._.childIdMap;
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar3,(Object *)StringLiteral_spawnWorldObjectID,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int32_t *)func_?();
      (this->fields).spawnWorldObjectID = *piVar9;
      source = (this->fields)._._._.gameObject;
      if (source != (GameObject *)0x0) {
        pTVar10 = (TriggerBoxEvents *)
                 Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                           ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                            TriggerBoxEvents_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<TriggerBoxEvents>__
                           );
        (this->fields).triggerBoxEvents = pTVar10;
        func_?(&(this->fields).triggerBoxEvents);
        pTVar10 = (this->fields).triggerBoxEvents;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pTVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_Did_not_find_triggerBoxEvents,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
  }
  func_?(pOVar5);
code_?:
  func_?(value);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_OnDataUpdate
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  SVar1 = MVWorldObjectSpawner_ReadRespawnStateConfiguration(this,(MethodInfo *)0x0);
  pSVar2 = (this->fields).spawnStateWrapper;
  if (pSVar2 != (SpawnStateWrapper *)0x0) {
    (pSVar2->fields).respawnInterval = SVar1.respawnInterval;
    (pSVar2->fields).respawnCount = SVar1.respawnCount;
    (pSVar2->fields).takenCounter = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSpawnStateChange(SpawnState) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_OnSpawnStateChange
               (MVWorldObjectSpawner *this,SpawnState__Enum spawnState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_SpawnState_is_none);
    func_?(&StringLiteral_Switch_to_listening);
    func_?(&StringLiteral_Switch_to_taken);
    cRam_? = '\x01';
  }
  if (spawnState == SpawnState__Enum_None) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_SpawnState_is_none,(MethodInfo *)0x0);
  }
  else {
    if (spawnState == SpawnState__Enum_Listening) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Switch_to_listening,(MethodInfo *)0x0);
      return;
    }
    if (spawnState == SpawnState__Enum_Taken) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Switch_to_taken,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* SpawnStateWrapper+SpawnStateConfiguration ReadRespawnStateConfiguration() */

SpawnStateWrapper_SpawnStateConfiguration
Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_ReadRespawnStateConfiguration
          (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_RespawnCount);
    cRam_? = '\x01';
  }
  SVar1.respawnInterval =
       MVWorldObjectSpawner_GetDataByKey(this,StringLiteral_RespawnInterval,10000,(MethodInfo *)0x0)
  ;
  iVar2 = MVWorldObjectSpawner_GetDataByKey(this,StringLiteral_RespawnCount,-1,(MethodInfo *)0x0);
  SVar1.respawnCount = iVar2;
  return SVar1;
}


/* Void RollbackPrediction() */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_RollbackPrediction
               (MVWorldObjectSpawner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_UseTime);
    cRam_? = '\x01';
  }
  if ((this->fields).predictTakeTime < 0) {
    return;
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_UseTime,(MethodInfo *)0x0)
  ;
  if (bVar2 == 0) {
    return;
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_UseTime,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?();
  }
  if (pOVar3 != (Object *)0x0) {
    if ((pOVar3->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
    goto code_?;
    pOVar4 = (ObscuredInt *)func_?();
    value_00 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
               ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pMVar5 = this->klass;
    (this->fields).predictTakeTime = -1;
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(pMVar5->vtable).get_RunTimeData.methodPtr)();
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
             ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,value_00,(MethodInfo *)0x0);
    iVar6 = pOVar4->currentCryptoKey;
    iVar7 = pOVar4->hiddenValue;
    iVar8 = pOVar4->fakeValue;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    value.hiddenValue = iVar7;
    value.currentCryptoKey = iVar6;
    value.fakeValue = iVar8;
    value.inited = pOVar4->inited;
    value._13_3_ = *(undefined3 *)&pOVar4->field_0xd;
    Extensions::Extensions_SetObscuredType_3
              (pDVar1,StringLiteral_UseTime,value,
               void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
              );
    pSVar9 = (this->fields).spawnStateWrapper;
    if (pSVar9 != (SpawnStateWrapper *)0x0) {
      (pSVar9->fields).takenTime = value_00;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Take(Int32) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_Take
               (MVWorldObjectSpawner *this,int32_t takeTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_UseTime);
    cRam_? = '\x01';
  }
  pMVar1 = this->klass;
  (this->fields).predictTakeTime = -1;
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(pMVar1->vtable).get_RunTimeData.methodPtr)
                        (this,(pMVar1->vtable).get_RunTimeData.method);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_3,takeTime,(MethodInfo *)0x0);
  OStack_3.currentCryptoKey = pOVar2->currentCryptoKey;
  OStack_3.hiddenValue = pOVar2->hiddenValue;
  OStack_3.fakeValue = pOVar2->fakeValue;
  OStack_3.inited = pOVar2->inited;
  OStack_3._13_3_ = *(undefined3 *)&pOVar2->field_0xd;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  value.hiddenValue = OStack_3.hiddenValue;
  value.currentCryptoKey = OStack_3.currentCryptoKey;
  value.fakeValue = OStack_3.fakeValue;
  value.inited = OStack_3.inited;
  value._13_3_ = OStack_3._13_3_;
  Extensions::Extensions_SetObscuredType_3
            (hashtable,StringLiteral_UseTime,value,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
            );
  pSVar4 = (this->fields).spawnStateWrapper;
  if (pSVar4 != (SpawnStateWrapper *)0x0) {
    (pSVar4->fields).takenTime = takeTime;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TakePrediction(Int32) */

void Assembly-CSharp.dll::MVWorldObjectSpawner::MVWorldObjectSpawner_TakePrediction
               (MVWorldObjectSpawner *this,int32_t takeTime,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  (this->fields).predictTakeTime = takeTime;
  pSVar2 = (this->fields).spawnStateWrapper;
  if (pSVar2 != (SpawnStateWrapper *)0x0) {
    (pSVar2->fields).takenTime = takeTime;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields)._.idChildMap = this_00;
    func_?(&(this->fields)._.idChildMap,this_00);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__MVWorldObjectClient);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields)._._.children = this_01;
      func_?(&(this->fields)._._.children,this_01);
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient__ctor_2
                ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
      uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      piVar2 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
      MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    (this->fields)._.idChildMap = this_00;
    func_?(&(this->fields)._.idChildMap,this_00);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                     );
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>)
      ;
      func_?(&TypeInfo__MVWorldObjectClient);
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                             );
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                );
      (this->fields)._._.children = this_01;
      func_?(&(this->fields)._._.children,this_01);
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVWorldObjectClient);
      }
      MVWorldObjectClient::MVWorldObjectClient__ctor_1
                ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
      uVar1 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
      piVar2 = &(this->fields)._._._.interactionFlags;
      *(uint *)piVar2 = (uint)*piVar2 | 0x82101;
      *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar1;
      MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

