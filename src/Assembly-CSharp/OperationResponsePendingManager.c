
/* Boolean AddOperationCodeToPending(MVOperationCodes, Dictionary`2[System.Byte,System.Object]) */

bool Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_AddOperationCodeToPending
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                   );
    func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    func_?(&StringLiteral_Operation_is_already_pending_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar1,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Operation_is_already_pending_,(MethodInfo *)0x0);
      return 0;
    }
    pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
    if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__System_Collections_Generic_ICollection_T__Add
                (pHVar1,operationCode,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Add_MV__Common__MVOperationCodes_
                );
      pPVar3 = (this->fields).peer;
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (pPVar3 != (PhotonPeer *)0x0) {
        (*(code *)(pPVar3->klass->vtable).SendOperation.method)(pPVar3,operationCode,data);
        return 1;
      }
    }
  }
  func_?();
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (this_00 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (this_00,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    return bVar1 != 0;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void TryRemovePendingOperation(MVOperationCodes) */

void Assembly-CSharp.dll::OperationResponsePendingManager::
     OperationResponsePendingManager_TryRemovePendingOperation
               (OperationResponsePendingManager *this,MVOperationCodes__Enum operationCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
  if (pHVar1 != (HashSet_1_System_ByteEnum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
            HashSet_1_System_ByteEnum__Contains
                      (pHVar1,operationCode,
                       MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Contains_MV__Common__MVOperationCodes_
                      );
    if (bVar2 != 0) {
      pHVar1 = (HashSet_1_System_ByteEnum_ *)(this->fields).pendingOperations;
      if (pHVar1 == (HashSet_1_System_ByteEnum_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
      HashSet_1_System_ByteEnum__Remove
                (pHVar1,operationCode,
                 MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__Remove_MV__Common__MVOperationCodes_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* OperationResponsePendingManager(PhotonPeer) */

void Assembly-CSharp.dll::OperationResponsePendingManager::OperationResponsePendingManager__ctor
               (OperationResponsePendingManager *this,PhotonPeer *peer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
                   );
    func_?(&TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_ByteEnum_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::ByteEnum]::
  HashSet_1_System_ByteEnum___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__HashSet<MV::Common::MVOperationCodes>__HashSet__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((OperationResponsePendingManager__Fields *)method_00)->pendingOperations =
       (HashSet_1_MV_Common_MVOperationCodes_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  ppPVar1 = &(this->fields).peer;
  *ppPVar1 = peer;
  func_?(ppPVar1,peer);
  return;
}

