
/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::
     FirstFrameUpdateActorReady_UpdateControllerUpdate
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).localPlayerIsReady == 0) || ((this->fields).firstFrameCallbackDone != 0)) {
    return;
  }
  if ((this->fields).callbacks != (Action *)0x0) {
    pAVar1 = (this->fields).callbacks;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  (this->fields).firstFrameCallbackDone = 1;
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
    *(FirstFrameUpdateActorReady **)(lVar2 + 0x10) = this;
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


/* FirstFrameUpdateActorReady() */

void Assembly-CSharp.dll::FirstFrameUpdateActorReady::FirstFrameUpdateActorReady__ctor
               (FirstFrameUpdateActorReady *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pAVar5 = (pMVar3->fields).OnLocalPlayerReady;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__FirstFrameUpdateActorReady__OnLocalPlayerReady__,
             (MethodInfo *)0x0);
  pAVar5 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar5 == (Action *)0x0) {
    (pMVar3->fields).OnLocalPlayerReady = (Action *)0x0;
  }
  else {
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?(pAVar5,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (pMVar3->fields).OnLocalPlayerReady = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar3->fields).OnLocalPlayerReady >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}

