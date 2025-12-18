
/* Void AttachAccessory(Int32, MVBody, Single, Single, Action) */

void Assembly-CSharp.dll::AccessoryAttacher::AccessoryAttacher_AttachAccessory
               (AccessoryAttacher *this,int32_t streamingAssetsId,MVBody *currentBody,float offset,
               float scale,Action *OnFinishedCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Reimplement__AttachAccessory);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Don_t_understand_ordering_of_thi);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Don_t_understand_ordering_of_thi,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_Reimplement__AttachAccessory,(MethodInfo *)0x0);
  (this->fields).OnFinishedCallback = OnFinishedCallback;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).OnFinishedCallback >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  iVar6 = iRam_?;
  (this->fields).avatarBody = currentBody;
  if (iVar6 != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).avatarBody >> 0xc);
    uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
    do {
      uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 != (MVGameControllerBase *)0x0) &&
     (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
    pAVar9 = (pMVar8->fields).OnSetAvatarAccessoryResponse;
    pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(pDVar10,this);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,pDVar10,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__System__Action<bool>;
    if (pDVar10 == (Delegate *)0x0) {
      (pMVar8->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar9 = (Action_1_Boolean_ *)FUN_?(pDVar10,TypeInfo__System__Action<bool>);
      if (pAVar9 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar8->fields).OnSetAvatarAccessoryResponse = pAVar9;
      pAVar11 = TypeInfo__System__Action<bool>;
      lVar13 = FUN_?(pDVar10,TypeInfo__System__Action<bool>);
      if (lVar13 == 0) {
        FUN_?(pDVar10,pAVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pMVar8->fields).OnSetAvatarAccessoryResponse >> 0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      in_R9 = (ulonglong)(uVar1 & 0x3f);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << in_R9;
        }
        UNLOCK();
      } while (!bVar5);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar7 != (MVGameControllerBase *)0x0) &&
         (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
        ((this->fields).avatarBody != (MVBody *)0x0)) &&
       (pMVar14 = (pMVar8->fields).operationRequests,
       pMVar14 != (MVNetworkGame_OperationRequests *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Set_accessory_slot);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Set_accessory_slot,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      pOVar15 = (Object *)FUN_?(uRam_?,&stack0x00000010);
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar16 = CONCAT71((int7)(in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x81,pOVar15,(InsertionBehavior__Enum)uVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pOVar15 = (Object *)FUN_?(uRam_?,&stack0x00000010);
        uVar16 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x6c,pOVar15,(InsertionBehavior__Enum)uVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pOVar15 = (Object *)FUN_?(uRam_?,&stack0x00000010);
        uVar17 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x75,pOVar15,(InsertionBehavior__Enum)uVar17,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pOVar15 = (Object *)FUN_?(uRam_?,&stack0x00000010);
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__set_Item_unsigned_char__System__Object_
                    ->klass->rgctx_data[0x22].method;
        uVar16 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x23);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x23,pOVar15,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar17 >> 8),1),method_00);
        pPVar18 = (pMVar14->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar18 != (PhotonPeer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pPVar18->klass->vtable).SendOperation.methodPtr)
                    (pPVar18,CONCAT71((int7)((ulonglong)uVar16 >> 8),0x2f),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable);
          return;
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Game_OnSetAvatarAccessorySlotResponseEquipHandler(Boolean) */

void Assembly-CSharp.dll::AccessoryAttacher::
     AccessoryAttacher_Game_OnSetAvatarAccessorySlotResponseEquipHandler
               (AccessoryAttacher *this,bool setSlotSuccess,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryAttacher__Game_OnSetAvatarAccessorySlotResponseEquipHandler_bool_
                  ,CONCAT71(in_register_00000011,setSlotSuccess));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).OnSetAvatarAccessoryResponse;
    pDVar4 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
    FUN_?(pDVar4,this);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,pDVar4,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<bool>;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnSetAvatarAccessoryResponse = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_Boolean_ *)FUN_?(pDVar4,TypeInfo__System__Action<bool>);
      if (pAVar3 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields).OnSetAvatarAccessoryResponse = pAVar3;
      pAVar5 = TypeInfo__System__Action<bool>;
      lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<bool>);
      if (lVar7 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnSetAvatarAccessoryResponse >> 0xc);
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
    pAVar12 = (this->fields).OnFinishedCallback;
    if (pAVar12 != (Action *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar12->fields)._._.invoke_impl)
                ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

