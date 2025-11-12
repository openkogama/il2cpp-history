
/* Void Destroy() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_Destroy
               (SpawnStateWrapper *this,MethodInfo *method)

{
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
  lVar1 = FUN_?(TypeInfo__UpdateController____c__DisplayClass6_0);
  if (lVar1 != 0) {
    bVar2 = iRam_? != 0;
    *(SpawnStateWrapper **)(lVar1 + 0x10) = this;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
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
    uVar3 = 0;
    lVar7 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar8->max_length <= (int)uVar3) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar8 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar8 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((uint)pLVar8->max_length <= uVar3) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar1 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar8->vector + lVar7 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        FUN_?(match,lVar1);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar1 + 0x18)
             = match;
        func_?(lVar1 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + 8;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateConfiguration(SpawnStateWrapper+SpawnStateConfiguration) */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateConfiguration
               (SpawnStateWrapper *this,
               SpawnStateWrapper_SpawnStateConfiguration spawnStateConfiguration,MethodInfo *method)

{
  (this->fields).respawnInterval = spawnStateConfiguration.respawnInterval;
  (this->fields).respawnCount = spawnStateConfiguration.respawnCount;
  (this->fields).takenCounter = 0;
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerFixedUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotImplementedException);
  this_00 = (NotImplementedException *)func_?(uVar1);
  mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__SpawnStateWrapper__UpdateControllerFixedUpdate__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper_UpdateControllerUpdate
               (SpawnStateWrapper *this,MethodInfo *method)

{
  iVar1 = (this->fields).takenTime;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar2->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    if ((this->fields).respawnInterval < iVar3 - iVar1) {
      iVar1 = (this->fields).respawnCount;
      uVar4 = 0;
      if (-1 < iVar1) {
        uVar4 = (uint)(iVar1 <= (this->fields).takenCounter);
      }
    }
    else {
      uVar4 = 1;
    }
    iVar1 = uVar4 + 1;
    (this->fields)._SpawnState_k__BackingField = iVar1;
    if ((this->fields).prevSpawnState != iVar1) {
      if (iVar1 == 2) {
        piVar5 = &(this->fields).takenCounter;
        *piVar5 = *piVar5 + 1;
      }
      pAVar6 = (this->fields).stateChangeCallback;
      if (pAVar6 == (Action_1_SpawnState_ *)0x0) goto code_?;
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,(this->fields)._SpawnState_k__BackingField,
                 (pAVar6->fields)._._.method);
    }
    (this->fields).prevSpawnState = (this->fields)._SpawnState_k__BackingField;
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SpawnStateWrapper(Int32, Int32, Int32, Action`1[SpawnState]) */

void Assembly-CSharp.dll::SpawnStateWrapper::SpawnStateWrapper__ctor
               (SpawnStateWrapper *this,int32_t respawnInterval,int32_t respawnCount,
               int32_t takenTime,Action_1_SpawnState_ *stateChangeCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).stateChangeCallback = stateChangeCallback;
  (this->fields).respawnInterval = respawnInterval;
  (this->fields).respawnCount = respawnCount;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).stateChangeCallback >> 0xc);
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
  (this->fields).takenTime = takenTime;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&uStack_6 >> 0xc);
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
  uStack_7 = 2;
  uStack_8 = 1;
  uStack_6 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar9 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar9 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if ((uint)pLVar9->max_length < 3) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (pLVar9->vector[2] != (List_1_PriorityDataUpdate_ *)0x0) {
      uStack_11 = (undefined4)uStack_6;
      uStack_12 = uStack_6._4_4_;
      uStack_13 = uStack_7;
      uStack_14 = uStack_8;
      FUN_?(pLVar9->vector[2],&uStack_11,
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

