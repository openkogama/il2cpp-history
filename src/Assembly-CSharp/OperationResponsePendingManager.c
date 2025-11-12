
/* Boolean AddOperationCodeToPending(MVOperationCodes, Dictionary`2[System.Byte,System.Object]) */

bool Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_AddOperationCodeToPending
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Operation_is_already_pending_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar1,operationCode & 0xff,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar2 != 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Operation_is_already_pending_,(MethodInfo *)0x0);
      return 0;
    }
    pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
    if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__AddIfNotPresent
                (pHVar1,operationCode & 0xff,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                 ->klass->rgctx_data[0x15].method);
      pPVar3 = (this->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(pPVar3->klass->vtable).SendOperation.methodPtr)
                  (pPVar3,(ulonglong)(byte)operationCode,data,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar3->klass->vtable).SendOperation.method);
        return 1;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean IsOperationPending(MVOperationCodes) */

bool Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_IsOperationPending
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,operationCode & 0xff,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    return bVar1 != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void TryRemovePendingOperation(MVOperationCodes) */

void Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_TryRemovePendingOperation
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar1,operationCode & 0xff,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar2 != 0) {
      pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
      if (pHVar1 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__Remove
                (pHVar1,operationCode & 0xff,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* OperationResponsePendingManager(PhotonPeer) */

void Assembly-CSharp.dll::OperationResponsePendingManager::OperationResponsePendingManager__ctor
               (OperationResponsePendingManager *this,PhotonPeer *peer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>
                         );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
            );
  iVar1 = iRam_?;
  (this->fields).pendingOperations = (HashSet_1_MV_Common_MVOperationCodes_ *)this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).peer = peer;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).peer >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

