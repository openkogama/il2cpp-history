
/* Void HandleDisconnectMetric(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_HandleDisconnectMetric
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__ExitGames__Client__Photon__StatusCode);
    func_?(&StringLiteral_StatusCode_);
    func_?(&StringLiteral_Client_disconnected_);
    cRam_? = '\x01';
  }
  if (((this->fields).registeredFatalStatusCodeInStatHat == 0) &&
     (returnCode != StatusCode__Enum_Connect)) {
    if (returnCode == StatusCode__Enum_Disconnect) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVGameControllerBase);
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0) {
        return;
      }
    }
    (this->fields).registeredFatalStatusCodeInStatHat = 1;
    EStack_1.klass = (Enum__Class *)TypeInfo__ExitGames__Client__Photon__StatusCode;
    EStack_1.monitor = (MonitorData *)0xffffffff;
    SStack_2 = returnCode;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_StatusCode_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)0xffffffff,(MethodInfo *)returnCode);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Client_disconnected_,pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void OnStatusChanged(StatusCode) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling_OnStatusChanged
               (MVNetworkGame_StatusChangedHandling *this,StatusCode__Enum returnCode,
               MethodInfo *method)

{
  this_01 = (StatusCode__Enum__Class *)returnCode;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  message = (String **)TypeInfo__ExitGames__Client__Photon__StatusCode;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_PeerStatusCallback___,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar2 = (MVNetworkGame_OperationRequests *)this;
  pMVar3 = (this->fields).reconnectWithAlternatePortHandler;
  bVar4 = (POPCOUNT((uint)pMVar3 & 0xff) & 1U) == 0;
  if (pMVar3 != (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) {
    message = (String **)this_01;
    bVar5 = MVNetworkGame+ReconnectWithAlternatePortHandler::
             MVNetworkGame_ReconnectWithAlternatePortHandler_IsHandling
                       (pMVar3,(StatusCode__Enum)this_01,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      message = &StringLiteral_Client_disconnected_;
      func_?();
      cRam_? = '\x01';
    }
    if ((((MVNetworkGame_StatusChangedHandling *)pMVar2)->fields).
        registeredFatalStatusCodeInStatHat == 0) {
      if (this_01 != (StatusCode__Enum__Class *)0x400) {
        if (this_01 == (StatusCode__Enum__Class *)0x401) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (TypeInfo__MVGameControllerBase->static_fields->_DisconnectIsOk_k__BackingField != 0)
          goto code_?;
        }
        (((MVNetworkGame_StatusChangedHandling *)pMVar2)->fields).
        registeredFatalStatusCodeInStatHat = 1;
        pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)this_01,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_StatusCode_,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count(pSVar1,1,(MethodInfo *)0x0);
        uStack_6 = TypeInfo__ExitGames__Client__Photon__StatusCode;
        pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&uStack_6,(MethodInfo *)0x0);
        message = (String **)
                  mscorlib.dll::System::String::String_Concat_3
                            (StringLiteral_Client_disconnected_,pSVar1,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    else {
code_?:
      if (0x16 < (int)this_01 - StatusCode__Enum_SecurityExceptionOnConnect) goto code_?;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((&UNK_?)[(int)this_01]) {
    case 0:
      uStack_6 = TypeInfo__ExitGames__Client__Photon__StatusCode;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&uStack_6,(MethodInfo *)0x0);
      this_01 = (StatusCode__Enum__Class *)
                mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Disconnected_because__,pSVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      message = (String **)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)this_01,(MethodInfo *)0x0);
      pMVar7 = (((MVNetworkGame_StatusChangedHandling *)pMVar2)->fields).networkGame;
      bVar4 = (POPCOUNT((uint)pMVar7 & 0xff) & 1U) == 0;
      if (pMVar7 != (MVNetworkGame *)0x0) {
        if ((pMVar7->fields).connState == 1) {
          return;
        }
        (pMVar7->fields).connState = 0;
        if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        this_02 = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0;
        if (this_02 == (UnityAction *)0x0) {
          if ((TypeInfo__MVNetworkGame_StatusChangedHandling____c->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          object = TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9;
          this_02 = (UnityAction *)func_?();
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    ((NavMesh_OnNavMeshPreUpdate *)this_02,(Object *)object,
                     MethodInfo__MVNetworkGame_StatusChangedHandling____c___OnStatusChanged_b__5_0__
                     ,(MethodInfo *)0x0);
          TypeInfo__MVNetworkGame_StatusChangedHandling____c->static_fields->__9__5_0 = this_02;
          func_?();
        }
        coroutine = WaitForFrames::WaitForFrames_Frames(5,this_02,(MethodInfo *)0x0);
        Coroutines::Coroutines_Start(coroutine,(MethodInfo *)0x0);
        return;
      }
      break;
    case 1:
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__DebugLogHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__DebugLogHandler->static_fields->didConnectToGameServer = 1;
      pMVar7 = (((MVNetworkGame_StatusChangedHandling *)pMVar2)->fields).networkGame;
      bVar4 = (POPCOUNT((uint)pMVar7 & 0xff) & 1U) == 0;
      if (pMVar7 != (MVNetworkGame *)0x0) {
        pPVar8 = (pMVar7->fields)._Peer_k__BackingField;
        bVar4 = (POPCOUNT((uint)pPVar8 & 0xff) & 1U) == 0;
        if (pPVar8 != (PhotonPeer *)0x0) {
          (pPVar8->fields).DebugOut = (pMVar7->fields).photonLoggingConfig.defaultDebugLevel;
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          bVar4 = (POPCOUNT((uint)pMVar2 & 0xff) & 1U) == 0;
          if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
            if (cRam_? == '\0') {
              this = (MVNetworkGame_StatusChangedHandling *)
                     &
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              ;
              func_?();
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pMVar7 = (pMVar2->fields).networkGame;
            bVar4 = (POPCOUNT((uint)pMVar7 & 0xff) & 1U) == 0;
            if (pMVar7 != (MVNetworkGame *)0x0) {
              (pMVar7->fields).connState = 3;
              this_01 = (StatusCode__Enum__Class *)func_?();
              message = (String **)this_01;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        ((Dictionary_2_System_Byte_System_Object_ *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              pPVar8 = (pMVar2->fields).peer;
              if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              bVar4 = (POPCOUNT((uint)pPVar8 & 0xff) & 1U) == 0;
              pMVar2 = (MVNetworkGame_OperationRequests *)0x0;
              if (pPVar8 != (PhotonPeer *)0x0) {
                (*(code *)(pPVar8->klass->vtable).SendOperation.method)();
                return;
              }
            }
          }
        }
      }
      break;
    case 2:
      pMVar7 = (((MVNetworkGame_StatusChangedHandling *)pMVar2)->fields).networkGame;
      bVar4 = (POPCOUNT((uint)pMVar7 & 0xff) & 1U) == 0;
      if (pMVar7 != (MVNetworkGame *)0x0) {
        if ((pMVar7->fields).connState == 0) {
          return;
        }
        (pMVar7->fields).connState = 1;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Expecting_that_this_disconnect_i,(MethodInfo *)0x0);
        return;
      }
      break;
    case 3:
code_?:
      uStack_6 = TypeInfo__ExitGames__Client__Photon__StatusCode;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&uStack_6,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_PeerStatusCallback__re,pSVar1,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
  bVar9 = 0;
  value = (MVNetworkGame_StatusChangedHandling *)&UNK_?;
  func_?();
  pMVar10 = this;
  if (bVar4) {
    *(byte *)((int)(extraout_ECX + -0x130ef206) + (int)extraout_EDX) =
         *(byte *)((int)(extraout_ECX + -0x130ef206) + (int)extraout_EDX) -
         (char)((uint)extraout_EDX >> 8);
    unaff_EBX[0x15801abc] = unaff_EBX[0x15801abc] + -1;
  }
  else {
    bVar11 = (byte)unaff_EBX;
    bVar12 = (byte)((uint)unaff_EBX >> 8);
    bVar13 = bVar12 + bVar11;
    bVar4 = CARRY1(bVar12,bVar11) || CARRY1(bVar13,bVar9);
    cVar14 = bVar13 + bVar9;
    unaff_EBX = (int *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(cVar14,bVar11));
    uVar15 = (undefined3)((uint)this >> 8);
    bVar9 = (byte)this;
    bVar13 = (byte)extraout_EDX;
    if (cVar14 < '\0') {
      in_AF = 9 < (bVar9 & 0xf) | in_AF;
      uVar16 = CONCAT31(uVar15,bVar9 + in_AF * '\x06') & 0xffffff0f;
      cVar17 = (char)uVar16;
      pcVar18 = (char *)CONCAT22((short)(uVar16 >> 0x10),
                                 CONCAT11((char)((uint)this >> 8) + in_AF,cVar17));
      pMVar2 = (MVNetworkGame_OperationRequests *)*(undefined6 *)((int)unaff_EBX + 0x6af08bff);
      ppMVar19 = &pMVar2[-1].monitor;
      bVar9 = *(byte *)ppMVar19;
      cVar14 = *(char *)ppMVar19;
      *(byte *)ppMVar19 = *(char *)ppMVar19 + bVar13;
      if (SCARRY1(cVar14,bVar13) != *(char *)ppMVar19 < '\0') {
        unaff_EBX = (int *)0xc4e8dff;
        goto code_?;
      }
      *extraout_ECX = (int)&returnCode + (uint)CARRY1(bVar9,bVar13) + *extraout_ECX;
      *pcVar18 = *pcVar18 + cVar17;
      pcVar18[100] = pcVar18[100] + bVar13;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                       );
        func_?(&
                        MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&TypeInfo__System__Single);
        func_?(&TypeInfo__System__String);
        func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&this;
      pMVar3 = (this->fields).reconnectWithAlternatePortHandler;
      pMVar20 = this[1].klass;
      if (pMVar3 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x0) {
        pSRam00000000 = &returnCode;
        (this->fields).reconnectWithAlternatePortHandler =
             (MVNetworkGame_ReconnectWithAlternatePortHandler *)0xffffffff;
        pWVar21 = (WaitForSecondsRealtime *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::
        WaitForSecondsRealtime__ctor(pWVar21,0.1,(MethodInfo *)0x0);
        *(WaitForSecondsRealtime **)&(this->fields).registeredFatalStatusCodeInStatHat = pWVar21;
        func_?();
        (this->fields).reconnectWithAlternatePortHandler =
             (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x1;
        *unaff_FS_OFFSET = message;
        return;
      }
      pMVar22 = pMVar20;
      if (pMVar3 == (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x1) {
        pSRam00000000 = &returnCode;
        (this->fields).reconnectWithAlternatePortHandler =
             (MVNetworkGame_ReconnectWithAlternatePortHandler *)0xffffffff;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar23 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar23 != (PrefabPool *)0x0) {
          original = (pPVar23->fields).materialButtonTextureGenerator;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               MaterialButtonTextureGenerator_MethodInfo__UnityEngine__Object__Instantiate<MaterialButtonTextureGenerator>_MaterialButtonTextureGenerator_
                              );
          this[1].monitor = (MonitorData *)pOVar24;
          func_?();
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (((pMVar7 != (MVNetworkGame *)0x0) &&
              (pMVar25 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0),
              pMVar25 != (MVLocalPlayer *)0x0)) &&
             (this_00 = (pMVar25->fields)._._SubscriptionRules_k__BackingField,
             this_00 != (SubscriptionRulesWrapper *)0x0)) {
            bVar5 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                     SubscriptionRulesWrapper_HasBenefit
                               (this_00,SubscriptionBenefit__Enum_FreeBuildingMaterials,
                                (MethodInfo *)0x0);
            *(bool *)&this[1].fields.reconnectWithAlternatePortHandler = bVar5;
            pMVar7 = (this->fields).networkGame;
            if ((pMVar7 != (MVNetworkGame *)0x0) &&
               (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                          UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                                    ((Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                      *)pMVar7,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Keys__
                                    ),
               this_03 !=
               (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0)) {
              pDVar26 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::
                        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                                  ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                    *)&stack0xffffffa4,
                                   (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                                    *)this_03,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<System::Object,_System::Object>__GetEnumerator__
                                  );
              pMVar7 = (MVNetworkGame *)pDVar26->_index;
              pMVar27 = (MVNetworkGame_StatusChangedHandling__Class *)pDVar26->_version;
              pOVar24 = pDVar26->_currentValue;
              *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                **)&this[1].fields.registeredFatalStatusCodeInStatHat = pDVar26->_dictionary;
              this[1].fields.networkGame = pMVar7;
              this[2].klass = pMVar27;
              this[2].monitor = (MonitorData *)pOVar24;
              method_00 = (MethodInfo *)&UNK_?;
              func_?();
              (this->fields).reconnectWithAlternatePortHandler =
                   (MVNetworkGame_ReconnectWithAlternatePortHandler *)0xfffffffd;
              goto code_?;
            }
          }
        }
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
      }
      else {
        pSRam00000000 = &returnCode;
        if (pMVar3 != (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x2) goto code_?;
        pSRam00000000 = &returnCode;
        (this->fields).reconnectWithAlternatePortHandler =
             (MVNetworkGame_ReconnectWithAlternatePortHandler *)0xfffffffd;
code_?:
        bVar5 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                 Object,UnityEngine::UIElements::TextureId]::
                 Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId__MoveNext
                           ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Object_UnityEngine_UIElements_TextureId_
                             *)&this[1].fields.registeredFatalStatusCodeInStatHat,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                           );
        pMVar10 = this;
        if (bVar5 == 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (pMVar10->fields).reconnectWithAlternatePortHandler =
               (MVNetworkGame_ReconnectWithAlternatePortHandler *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pMVar10[1].fields.registeredFatalStatusCodeInStatHat,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          *(undefined4 *)&this[1].fields.registeredFatalStatusCodeInStatHat = 0;
          this[1].fields.networkGame = (MVNetworkGame *)0x0;
          this[2].klass = (MVNetworkGame_StatusChangedHandling__Class *)0x0;
          this[2].monitor = (MonitorData *)0x0;
          if ((Component *)this[1].monitor != (Component *)0x0) {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this[1].monitor,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
            if (((pMVar20 != (MVNetworkGame_StatusChangedHandling__Class *)0x0) &&
                (pMVar28 = (MVMaterialRepository *)(pMVar20->_1).thread_static_fields_size,
                pMVar28 != (MVMaterialRepository *)0x0)) &&
               (pMVar29 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (pMVar28,0x15,(MethodInfo *)0x0), pMVar29 != (MVMaterial *)0x0))
            {
              bVar5 = MVMaterial::MVMaterial_get_IsDestructible(pMVar29,(MethodInfo *)0x0);
              if (bVar5 != 0) goto code_?;
              pMVar28 = (MVMaterialRepository *)(pMVar20->_1).thread_static_fields_size;
              if ((pMVar28 != (MVMaterialRepository *)0x0) &&
                 (pMVar29 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                      (pMVar28,0x15,(MethodInfo *)0x0), pMVar29 != (MVMaterial *)0x0)
                 ) {
                if ((pMVar29->fields).isUnlocked != 0) {
                  MVGameControllerBase::MVGameControllerBase_RegisterOverrideMaterials
                            ((MethodInfo *)0x0);
code_?:
                  *unaff_FS_OFFSET = message;
                  return;
                }
                goto code_?;
              }
            }
          }
          goto code_?;
        }
        if (this[2].monitor == (MonitorData *)0x0) goto code_?;
        if (*(Il2CppClass **)(*(int *)this[2].monitor + 0x20) !=
            (TypeInfo__System__Byte->_0).element_class) goto code_?;
        func_?();
        pMVar7 = (this->fields).networkGame;
        pOVar24 = (Object *)func_?();
        if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
        TVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pMVar7,
                            pOVar24,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if ((TVar30.m_Index == 0) ||
           (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment <= *(byte *)(*(int *)TVar30.m_Index + 0xb8) &&
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(int *)(*(int *)TVar30.m_Index + 100) + -4 +
              (uint)(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment * 4) ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
        {
          pOVar24 = (Object *)func_?();
          if (TVar30.m_Index == 0) goto code_?;
          name = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (TVar30.m_Index,pOVar24,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
          if (name.m_Index == 0) {
code_?:
            pOVar24 = (Object *)func_?();
            TVar31 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (TVar30.m_Index,pOVar24,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar31.m_Index != 0) {
              TVar32.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar31.m_Index == TypeInfo__System__String) {
                TVar32 = TVar31;
              }
              TVar31.m_Index = TVar32.m_Index;
              if ((String *)TVar32.m_Index == (String *)0x0) goto code_?;
            }
            pOVar24 = (Object *)func_?();
            TVar32 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (TVar30.m_Index,pOVar24,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar32.m_Index != 0) {
              TVar33.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar32.m_Index == TypeInfo__System__String) {
                TVar33 = TVar32;
              }
              TVar32.m_Index = TVar33.m_Index;
              if ((String *)TVar33.m_Index == (String *)0x0) goto code_?;
            }
            uStack_6 = (StatusCode__Enum__Class *)CONCAT13(0x36,(undefined3)uStack_6);
            pOVar24 = (Object *)func_?();
            TVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               (TVar30.m_Index,pOVar24,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar33.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar33.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              pMVar34 = (MaterialSound__Enum *)func_?();
              materialSound = *pMVar34;
              uStack_6._0_3_ = CONCAT12(0x37,(undefined2)uStack_6);
              pOVar24 = (Object *)func_?();
              TVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (TVar30.m_Index,pOVar24,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar33.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar33.m_Index + 0x20) !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              pAVar35 = (AvatarModifierPackageType__Enum *)func_?();
              modifierPackageType = *pAVar35;
              uStack_6._0_2_ = CONCAT11(0x39,(undefined1)uStack_6);
              pOVar24 = (Object *)func_?();
              TVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (TVar30.m_Index,pOVar24,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar33.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar33.m_Index + 0x20) !=
                  (TypeInfo__System__Int32->_0).element_class) goto code_?;
              piVar36 = (int32_t *)func_?();
              priceGold = *piVar36;
              if (*(char *)&this[1].fields.reconnectWithAlternatePortHandler == '\0') {
                uStack_6 = (StatusCode__Enum__Class *)CONCAT31(uStack_6._1_3_,0x3a);
                pOVar24 = (Object *)func_?();
                TVar33 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,UnityEngine::UIElements::TextureId]::
                         Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                   (TVar30.m_Index,pOVar24,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (TVar33.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar33.m_Index + 0x20) !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pcVar18 = (char *)func_?();
                cVar14 = *pcVar18;
              }
              else {
                cVar14 = '\x01';
              }
              bVar5 = cVar14 != '\0';
              uStack_6 = (StatusCode__Enum__Class *)CONCAT31(uStack_6._1_3_,0x6f);
              pOVar24 = (Object *)func_?();
              TVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (TVar30.m_Index,pOVar24,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar30.m_Index == 0) {
                physicalProperties = (Single__Array *)0x0;
code_?:
                if ((pMVar22 != (MVNetworkGame_StatusChangedHandling__Class *)0x0) &&
                   (pMVar28 = (MVMaterialRepository *)(pMVar22->_1).thread_static_fields_size,
                   pMVar28 != (MVMaterialRepository *)0x0)) {
                  MVMaterialRepository::MVMaterialRepository_AddMaterial
                            (pMVar28,(String *)name.m_Index,(String *)TVar31.m_Index,
                             (String *)TVar32.m_Index,materialSound,modifierPackageType,priceGold,
                             bVar5,physicalProperties,
                             (MaterialButtonTextureGenerator *)this[1].monitor,(MethodInfo *)0x0);
                  pWVar21 = (WaitForSecondsRealtime *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::
                  WaitForSecondsRealtime__ctor(pWVar21,0.01,(MethodInfo *)0x0);
                  *(WaitForSecondsRealtime **)&(this->fields).registeredFatalStatusCodeInStatHat =
                       pWVar21;
                  func_?();
                  (this->fields).reconnectWithAlternatePortHandler =
                       (MVNetworkGame_ReconnectWithAlternatePortHandler *)0x2;
                  *unaff_FS_OFFSET = message;
                  return;
                }
                goto code_?;
              }
              physicalProperties = (Single__Array *)func_?();
              if (physicalProperties != (Single__Array *)0x0) goto code_?;
              goto code_?;
            }
            goto code_?;
          }
          TVar31.m_Index = (int32_t)(String *)0x0;
          if (*(String__Class **)name.m_Index == TypeInfo__System__String) {
            TVar31 = name;
          }
          name.m_Index = TVar31.m_Index;
          if ((String *)TVar31.m_Index != (String *)0x0) goto code_?;
          goto code_?;
        }
      }
      func_?();
code_?:
      func_?();
      this_04 = (Exception *)func_?();
      pSVar1 = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(this_04,pSVar1,(MethodInfo *)0x0);
      func_?();
      func_?();
      func_?();
      func_?();
      pcVar37 = (code *)swi(3);
      (*pcVar37)();
      return;
    }
    bVar38 = CARRY1(*extraout_EDX,bVar13) || CARRY1(*extraout_EDX + bVar13,bVar4);
    *extraout_EDX = *extraout_EDX + bVar13 + bVar4;
    if ((POPCOUNT(*extraout_EDX) & 1U) != 0) {
      pbVar39 = extraout_EDX + 0x7b;
      bVar13 = *pbVar39;
      bVar12 = *pbVar39;
      *pbVar39 = bVar12 + bVar11 + bVar38;
      *(byte *)&this->klass =
           *(char *)&this->klass + bVar9 +
           (CARRY1(bVar13,bVar11) || CARRY1(bVar12 + bVar11,bVar38));
      *(byte *)extraout_ECX = (char)*extraout_ECX + bVar9;
      piVar40 = (int *)(CONCAT31(uVar15,bVar9 + *(char *)&this->klass) + *unaff_EBX);
      pcVar18 = (char *)((int)piVar40 + *unaff_EBX + *unaff_EBX + *unaff_EBX + *unaff_EBX + *piVar40
                        );
      cVar14 = (char)pcVar18;
      *pcVar18 = *pcVar18 + cVar14;
      *pcVar18 = *pcVar18 + cVar14;
      *pcVar18 = *pcVar18 + cVar14;
      pcVar37 = (code *)swi(3);
      (*pcVar37)();
      return;
    }
    this = (MVNetworkGame_StatusChangedHandling *)0x0;
    pMVar2 = (MVNetworkGame_OperationRequests *)pMVar10;
    value = pMVar10;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,(ExceptionArgument__Enum)this,(MethodInfo *)returnCode);
code_?:
  (pMVar2->fields).networkGame = (MVNetworkGame *)this_01;
  this = (MVNetworkGame_StatusChangedHandling *)this_01;
  func_?();
  unaff_EBX[2] = (int)pMVar2;
  func_?();
  return;
}


/* MVNetworkGame+StatusChangedHandling(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGame+StatusChangedHandling::
     MVNetworkGame_StatusChangedHandling__ctor
               (MVNetworkGame_StatusChangedHandling *this,MVNetworkGame *networkGame,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).networkGame = networkGame;
  func_?(&(this->fields).networkGame,networkGame);
  method_00 = TypeInfo__MVNetworkGame__ReconnectWithAlternatePortHandler;
  value = (MVNetworkGame_ReconnectWithAlternatePortHandler *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).networkGame = networkGame;
  func_?(&(value->fields).networkGame,networkGame);
  (this->fields).reconnectWithAlternatePortHandler = value;
  func_?(&this->fields,value);
  return;
}

