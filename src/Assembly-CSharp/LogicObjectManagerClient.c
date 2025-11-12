
/* Void Clear() */

void Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_Clear
               (LogicObjectManagerClient *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.logicWorldObjects;
  if (pDVar1 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 OnLinkAdded(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkAdded
                  (LogicObjectManagerClient *this,Link *link,IWorldObjectManager *worldObjectManager
                  ,MethodInfo *method)

{
  if (link == (Link *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  iVar2 = (link->fields).inputWOID;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (iVar2,resetNodes,worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return (resetNodes->fields)._count;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Int32 OnLinkRemoved(Link, IWorldObjectManager) */

int32_t Assembly-CSharp.dll::LogicObjectManagerClient::LogicObjectManagerClient_OnLinkRemoved
                  (LogicObjectManagerClient *this,Link *link,IWorldObjectManager *worldObjectManager
                  ,MethodInfo *method)

{
  if (link != (Link *)0x0) {
    iVar1 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).inputWOID,worldObjectManager,(MethodInfo *)0x0);
    iVar2 = MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                      ((link->fields).outputWOID,worldObjectManager,(MethodInfo *)0x0);
    return iVar2 + iVar1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar1 = (*pcVar3)();
  return iVar1;
}

