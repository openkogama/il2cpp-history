
/* Void ExecuteOperationResponse(MVOperationCodes, Dictionary`2[System.Byte,System.Object], Int16)
    */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,MVOperationCodes__Enum opCode,
               Dictionary_2_System_Byte_System_Object_ *returnValues,int16_t returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                   );
    func_?(&
                    MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                   );
    func_?(&TypeInfo__MV__Common__MVOperationCodes);
    func_?(&TypeInfo__PostRequest);
    func_?(&TypeInfo__QuitConnectionError);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&StringLiteral_Unhandled_operation_code_);
    func_?(&StringLiteral_Successfully_published_planet);
    func_?(&StringLiteral_You_are_not_authorized_to_publis);
    func_?(&StringLiteral_Failed_to_unregister_worldObject);
    func_?(&StringLiteral_Gold_claimed__Marcus__Handle_thi);
    func_?(&StringLiteral_SetAvatarAccessorySlot_operation);
    func_?(&StringLiteral_UpdateWorldObjectData_FAILED_on_);
    func_?(&StringLiteral_profile_id);
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame *)returnValues;
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_CloneTempWorldObjectWithOriginalReference) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
      if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
        if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                      (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
          pSVar6 = StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) || (pSVar6 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (pSVar6 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            TM::TM__(pSVar6,(MethodInfo *)0x0);
          }
          else {
            TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar1 = (this->fields).networkGame;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar1 < 0;
            uVar5 = 1;
            unaff_ESI = (MVNetworkGame *)this;
            if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar1->fields).isPublished = 1;
          }
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVNetworkGame *)0x0;
          unaff_ESI = (MVNetworkGame *)this;
          if (!(bool)uVar5) {
            if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              (*(((pMVar1->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
            }
            iVar7 = func_?();
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = iVar7 < 0;
            uVar5 = iVar7 == 0;
            unaff_ESI = (MVNetworkGame *)this;
            if (!(bool)uVar5) {
              bVar8 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 (*(String **)(iVar7 + 0x3c),(MethodInfo *)0x0);
              if (bVar8 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,
                           (MethodInfo *)0x0);
                return;
              }
              unaff_EDI = (MVNetworkGame *)func_?();
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
              iVar7 = func_?();
              bVar2 = 0;
              cVar3 = '\0';
              cVar4 = iVar7 < 0;
              uVar5 = iVar7 == 0;
              unaff_ESI = (MVNetworkGame *)this;
              if (!(bool)uVar5) {
                bVar2 = 0;
                cVar3 = '\0';
                cVar4 = (int)unaff_EDI < 0;
                uVar5 = unaff_EDI == (MVNetworkGame *)0x0;
                unaff_ESI = (MVNetworkGame *)this;
                if (!(bool)uVar5) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                            ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar7 + 0x24),
                             (MethodInfo *)0x0);
                  iVar7 = func_?();
                  bVar2 = 0;
                  cVar3 = '\0';
                  cVar4 = iVar7 < 0;
                  uVar5 = iVar7 == 0;
                  unaff_ESI = (MVNetworkGame *)this;
                  if (!(bool)uVar5) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              ((WWWForm *)unaff_EDI,StringLiteral_profile_id,
                               *(int32_t *)(iVar7 + 0xc),(MethodInfo *)0x0);
                    iVar7 = func_?();
                    bVar2 = 0;
                    cVar3 = '\0';
                    cVar4 = iVar7 < 0;
                    uVar5 = iVar7 == 0;
                    unaff_ESI = (MVNetworkGame *)this;
                    if (!(bool)uVar5) {
                      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::
                      WWWForm_AddField_2((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                                         *(int32_t *)(iVar7 + 0x10),(MethodInfo *)0x0);
                      iVar7 = func_?();
                      bVar2 = 0;
                      cVar3 = '\0';
                      cVar4 = iVar7 < 0;
                      uVar5 = iVar7 == 0;
                      unaff_ESI = (MVNetworkGame *)this;
                      if (!(bool)uVar5) {
                        pSVar6 = *(String **)(iVar7 + 0x3c);
                        this_04 = (PostRequest *)func_?();
                        PostRequest::PostRequest__ctor
                                  (this_04,pSVar6,(WWWForm *)unaff_EDI,
                                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                                   (MethodInfo *)0x0);
                        if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        AsyncWWWManager::AsyncWWWManager_WWWRequest
                                  ((AsyncWebRequest *)this_04,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_RequestFriendshipByProfileID)
          goto code_?;
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                      (pMVar1,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_UnregisterWorldObject) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UpdateWorldObjectData) {
          if (returnCode == 0) {
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_unregister_worldObject,(MethodInfo *)0x0);
        return;
      }
      unaff_ESI = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)unaff_ESI < 0;
      uVar5 = 1;
      if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar9 < 0;
      uVar5 = 1;
      if (pOVar9 == (Object *)0x0) goto code_?;
      pIVar10 = (pOVar9->klass->_0).element_class;
      pIVar11 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar10 < pIVar11;
      cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
      cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
      uVar5 = false;
      pMVar1 = unaff_ESI;
      if (pIVar10 == pIVar11) {
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (unaff_ESI,*piVar12,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_AddAvatarToAvatarShopInventory < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_DeleteAvatarFromShopInventory)
      goto code_?;
      if ((undefined1)opCode == MVOperationCodes__Enum_UploadBytes) {
        DataUploadManager::DataUploadManager_OnUploadBytes((MethodInfo *)0x0);
        return;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition)
      goto code_?;
code_?:
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar9 < 0;
      uVar5 = 1;
      if (pOVar9 == (Object *)0x0) goto code_?;
      pIVar10 = (pOVar9->klass->_0).element_class;
      pIVar11 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar10 < pIVar11;
      cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
      cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
      uVar5 = false;
      pMVar1 = unaff_ESI;
      if (pIVar10 == pIVar11) {
        piVar12 = (int32_t *)func_?();
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = pMVar1 == (MVNetworkGame *)0x0;
        if (!(bool)uVar5) {
          pWVar13 = (pMVar1->fields).worldNetwork;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pWVar13 < 0;
          uVar5 = pWVar13 == (WorldNetwork *)0x0;
          if (!(bool)uVar5) {
            pMVar14 = (pWVar13->fields)._.worldObjectClientManager;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar14 < 0;
            uVar5 = pMVar14 == (MVWorldObjectClientManagerNetwork *)0x0;
            if (!(bool)uVar5) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar14,returnCode == 0,*piVar12,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
code_?:
      func_?();
      goto code_?;
    }
    switch(opCode & MVOperationCodes__Enum_Join) {
    case MVOperationCodes__Enum_LockHierarchy:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      unaff_EBX = (MVNetworkGame *)this;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pEVar15 = (pMVar1->fields).ScreenshotUploaded;
        if (pEVar15 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)func_?();
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar15->fields)._._.invoke_impl)();
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                  (pMVar1,returnValues,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_ReportCaptureFlag:
    case MVOperationCodes__Enum_ResetLogicChunk:
    case MVOperationCodes__Enum_UpdateWorldObjectRunTimeData:
    case MVOperationCodes__Enum_UpdateLineOfFire:
    case MVOperationCodes__Enum_WorldObjectRPCOperation:
    case MVOperationCodes__Enum_PostGameMsg:
    case MVOperationCodes__Enum_SetTeam:
    case MVOperationCodes__Enum_AddObjectLink:
    case MVOperationCodes__Enum_RemoveObjectLink:
    case MVOperationCodes__Enum_AddPlanetToPlanet:
    case MVOperationCodes__Enum_GetNextGameBatch:
    case MVOperationCodes__Enum_RequestBuiltInItem:
    case MVOperationCodes__Enum_ResetAvatar:
    case MVOperationCodes__Enum_GetMarketPlaceItem:
code_?:
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar6,(MethodInfo *)0x0);
      return;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        pWVar13 = (pMVar1->fields).worldNetwork;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pWVar13 < 0;
        uVar5 = pWVar13 == (WorldNetwork *)0x0;
        if (!(bool)uVar5) {
          pMVar14 = (pWVar13->fields)._.worldObjectClientManager;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar14 < 0;
          uVar5 = pMVar14 == (MVWorldObjectClientManagerNetwork *)0x0;
          if (!(bool)uVar5) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                      (pMVar14,returnCode == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      unaff_ESI = (MVNetworkGame *)0x0;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      unaff_EDI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      if ((bVar8 == 0) ||
         (unaff_ESI = (MVNetworkGame *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0x5f,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                ), unaff_ESI == (MVNetworkGame *)0x0)) {
code_?:
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        unaff_ESI = _returnCode;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar16 < 0;
        uVar5 = 1;
        if (pMVar16 == (MVLocalPlayer *)0x0) break;
        unaff_ESI = (MVNetworkGame *)(pMVar16->fields)._._UserProfileData_k__BackingField;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)unaff_ESI < 0;
        uVar5 = 1;
        if (unaff_ESI == (MVNetworkGame *)0x0) break;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pOVar9 < 0;
        uVar5 = 1;
        if (pOVar9 == (Object *)0x0) break;
        pIVar10 = (pOVar9->klass->_0).element_class;
        pIVar11 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar10 < pIVar11;
        cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
        cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
        uVar5 = false;
        pMVar1 = unaff_ESI;
        if (pIVar10 == pIVar11) {
          puVar17 = (undefined4 *)func_?();
          (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar17;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = 1;
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar16 < 0;
          uVar5 = 1;
          if (pMVar16 == (MVLocalPlayer *)0x0) break;
          if ((pMVar16->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = 1;
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar16 < 0;
          uVar5 = 1;
          if (pMVar16 == (MVLocalPlayer *)0x0) break;
          pAVar18 = (pMVar16->fields)._.OnGoldAmountChange;
          goto code_?;
        }
        goto code_?;
      }
      unaff_EBX = (MVNetworkGame *)unaff_ESI->klass;
      bVar19 = *(byte *)&(unaff_EBX->fields)._WinningConditionManager_k__BackingField;
      bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      bVar2 = bVar19 < bVar20;
      cVar3 = SBORROW1(bVar19,bVar20);
      cVar4 = (char)(bVar19 - bVar20) < '\0';
      uVar5 = bVar19 == bVar20;
      pMVar1 = unaff_ESI;
      if (!(bool)bVar2) {
        pDVar21 = *(Dictionary_2_System_Object_System_Object___Class **)
                   ((int)(unaff_EBX->fields)._XpKey_k__BackingField +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment * 4 + -4);
        bVar2 = pDVar21 < 
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        cVar3 = SBORROW4((int)pDVar21,
                          (int)
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
        cVar4 = (int)pDVar21 -
                 (int)
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 < 0;
        uVar5 = 0;
        if (pDVar21 ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
        goto code_?;
      }
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar22 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      unaff_EDI = (MVNetworkGame *)this;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      unaff_EBX = _returnCode;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      unaff_EDI = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      unaff_ESI = pMVar1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar9 < 0;
      uVar5 = 1;
      if (pOVar9 == (Object *)0x0) break;
      pIVar10 = (pOVar9->klass->_0).element_class;
      pIVar11 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar10 < pIVar11;
      cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
      cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
      uVar5 = pIVar10 == pIVar11;
      if (!(bool)uVar5) goto code_?;
      piVar12 = (int32_t *)func_?();
      itemID = *piVar12;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)unaff_EDI < 0;
      uVar5 = 1;
      if (unaff_EDI == (MVNetworkGame *)0x0) break;
      pIVar10 = (Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule;
      pIVar11 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar10 < pIVar11;
      cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
      cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
      uVar5 = 0;
      if (pIVar10 == pIVar11) {
        piVar12 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar1,(int)returnCode,*piVar12,itemID,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pAVar18 = (pMVar1->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      unaff_EDI = _returnCode;
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
        goto joined_?;
      }
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar9 < 0;
      uVar5 = 1;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar9 == (Object *)0x0) break;
      pIVar10 = (pOVar9->klass->_0).element_class;
      pIVar11 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar10 < pIVar11;
      cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
      cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
      uVar5 = false;
      if (pIVar10 == pIVar11) {
        puVar17 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar17;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pOVar9 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar9 == (Object *)0x0) break;
        pIVar10 = (pOVar9->klass->_0).element_class;
        pIVar11 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar10 < pIVar11;
        cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
        cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
        uVar5 = false;
        if (pIVar10 == pIVar11) {
          puVar17 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar17;
          iVar7 = func_?();
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = iVar7 < 0;
          uVar5 = 1;
          if (iVar7 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)this_03 < 0;
          uVar5 = 1;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
joined_?:
      if (pMVar22 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar22->fields)->_)._.invoke_impl)();
      return;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        pAVar23 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
        if (pAVar23 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar23->fields)._._.invoke_impl)();
        }
        if (returnCode == 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SetAvatarAccessorySlot_operation,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AttachWorldObjectToSeat:
    case MVOperationCodes__Enum_SpawnVehicleWithDriver:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar24 < 0;
        uVar5 = pMVar24 == (MVLocalObjectController *)0x0;
        if (!(bool)uVar5) {
          MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                    (pMVar24,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = pMVar1 == (MVNetworkGame *)0x0;
      if (!(bool)uVar5) {
        pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar24 < 0;
        uVar5 = pMVar24 == (MVLocalObjectController *)0x0;
        if (!(bool)uVar5) {
          MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                    (pMVar24,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    default:
      if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
      goto code_?;
code_?:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnMarketPlaceActionComplete ==
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
      goto code_?;
    }
  }
  else {
    if (MVOperationCodes__Enum_GetThemesData < (byte)(undefined1)opCode) {
      if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
        if ((undefined1)opCode != MVOperationCodes__Enum_UpdateGold) {
          if ((undefined1)opCode != MVOperationCodes__Enum_CreateSpawnRole) goto code_?;
          if (returnCode != -1) {
            return;
          }
          pMVar16 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar16 < 0;
          uVar5 = pMVar16 == (MVLocalPlayer *)0x0;
          if (!(bool)uVar5) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar16,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)returnValues < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar8 == 0) {
          return;
        }
        pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar25 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar25 == (MVNetworkGame *)0x0) goto code_?;
        pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar25,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar16 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar16 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar16->fields)._._UserProfileData_k__BackingField;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)unaff_EDI < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (unaff_EDI == (MVNetworkGame *)0x0) goto code_?;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pOVar9 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar9 == (Object *)0x0) goto code_?;
        pIVar10 = (pOVar9->klass->_0).element_class;
        pIVar11 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar10 < pIVar11;
        cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
        cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
        uVar5 = pIVar10 == pIVar11;
        if (!(bool)uVar5) goto code_?;
        p_Var21 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data = *p_Var21;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar16 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar16 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar16->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar16 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar16 < 0;
        uVar5 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar16 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar18 = (pMVar16->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar24 < 0;
            uVar5 = pMVar24 == (MVLocalObjectController *)0x0;
            if (!(bool)uVar5) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar24,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            (pMVar1->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar8 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar8 != 0)) {
                return;
              }
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0)
              ;
              this_00 = (QuitConnectionError *)func_?();
              QuitConnectionError::QuitConnectionError__ctor(this_00,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                        ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
              return;
            }
            pMVar1 = (this->fields).networkGame;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar1 < 0;
            uVar5 = pMVar1 == (MVNetworkGame *)0x0;
            if (!(bool)uVar5) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar1,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar7 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar7 < 0;
        uVar5 = 1;
        if (iVar7 == 0) goto code_?;
        iVar7 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar7 < 0;
        uVar5 = 1;
        if (iVar7 == 0) goto code_?;
        if (*(int *)(iVar7 + 0x10) == 0) {
          return;
        }
        iVar7 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar7 < 0;
        uVar5 = 1;
        if (iVar7 == 0) goto code_?;
        iVar7 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar7 < 0;
        uVar5 = 1;
        if (iVar7 == 0) goto code_?;
        pAVar18 = *(Action **)(iVar7 + 0x10);
      }
code_?:
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pAVar18 < 0;
      uVar5 = pAVar18 == (Action *)0x0;
      if (!(bool)uVar5) {
code_?:
        (*(pAVar18->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = 1;
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar18 = (pMVar1->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)returnValues < 0;
        uVar5 = 1;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pMVar1 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xcf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar25 = (MVNetworkGame *)0x0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
            pMVar25 = pMVar1;
          }
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar25 < 0;
          uVar5 = 1;
          if (pMVar25 == (MVNetworkGame *)0x0) goto code_?;
        }
        this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               ((String *)pMVar25,
                                System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                               );
        if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
            (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
          return;
        }
        unaff_ESI = (MVNetworkGame *)
                    TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)this_01 < 0;
        uVar5 = this_01 ==
                 (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)0x0;
        if (!(bool)uVar5) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(code *)(unaff_ESI->fields).ReceivedItemFromQuery)();
          return;
        }
        goto code_?;
      }
      if (returnCode == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
        return;
      }
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pMVar1 = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xf5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar25 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar25 = pMVar1;
        }
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar25 < 0;
        uVar5 = 1;
        if (pMVar25 == (MVNetworkGame *)0x0) goto code_?;
      }
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar25,
                             MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                            );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar26 = (pMVar1->fields).ReceivedPlanetOwnershipData;
        if (pAVar26 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          return;
        }
        (*(pAVar26->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) {
      if ((undefined1)opCode == MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold) {
        if (returnCode == -1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)returnValues < 0;
    uVar5 = 1;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar1 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pOVar9 < 0;
    uVar5 = 1;
    unaff_ESI = pMVar1;
    if (pOVar9 == (Object *)0x0) goto code_?;
    pIVar10 = (pOVar9->klass->_0).element_class;
    pIVar11 = (TypeInfo__System__Byte->_0).element_class;
    bVar2 = pIVar10 < pIVar11;
    cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
    cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
    uVar5 = pIVar10 == pIVar11;
    if (!(bool)uVar5) goto code_?;
    puVar27 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar27);
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar1 < 0;
    uVar5 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar10 = (pMVar1->klass->_0).element_class;
    pIVar11 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar10 < pIVar11;
    cVar3 = SBORROW4((int)pIVar10,(int)pIVar11);
    cVar4 = (int)pIVar10 - (int)pIVar11 < 0;
    uVar5 = 0;
    if (pIVar10 == pIVar11) {
      pFVar28 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar28,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    unaff_ESI = pMVar1;
  }
code_?:
  uVar29 = func_?();
  pbVar30 = (byte *)((ulonglong)uVar29 >> 0x20);
  if ((bool)uVar5 || cVar3 != cVar4) {
    pcVar31 = (code *)swi(3);
    (*pcVar31)();
    return;
  }
  ppGVar32 = &unaff_ESI[-0x897df].fields.gameStatCounterManager;
  bVar33 = (byte)((ulonglong)uVar29 >> 8);
  bVar34 = CARRY1(*(byte *)ppGVar32,bVar33) || CARRY1(*(char *)ppGVar32 + bVar33,bVar2);
  *(byte *)ppGVar32 = *(char *)ppGVar32 + bVar33 + bVar2;
  bVar35 = (byte)extraout_ECX;
  bVar36 = CARRY1(*pbVar30,bVar35) || CARRY1(*pbVar30 + bVar35,bVar34);
  *pbVar30 = *pbVar30 + bVar35 + bVar34;
  bVar34 = CARRY1(*extraout_ECX,bVar33) || CARRY1(*extraout_ECX + bVar33,bVar36);
  *extraout_ECX = *extraout_ECX + bVar33 + bVar36;
  pbVar37 = extraout_ECX + 0x61;
  bVar2 = *pbVar37;
  bVar20 = (byte)((uint)extraout_ECX >> 8);
  bVar19 = *pbVar37 + bVar20;
  *pbVar37 = bVar19 + bVar34;
  bVar38 = (byte)((ulonglong)uVar29 >> 0x28);
  bVar34 = CARRY1(bVar35,bVar38) ||
           CARRY1(bVar35 + bVar38,CARRY1(bVar2,bVar20) || CARRY1(bVar19,bVar34));
  pbVar37 = pbVar30 + 99;
  bVar2 = *pbVar37;
  bVar20 = (byte)((ulonglong)uVar29 >> 0x20);
  bVar19 = *pbVar37 + bVar20;
  *pbVar37 = bVar19 + bVar34;
  bVar38 = (byte)((uint)unaff_EBX >> 8);
  bVar34 = CARRY1(in_stack_39,bVar38) ||
           CARRY1(in_stack_39 + bVar38,CARRY1(bVar2,bVar20) || CARRY1(bVar19,bVar34));
  pbVar37 = (byte *)((int)&unaff_EBX[0x576821].fields.gameStatCounterManager + 3);
  bVar36 = CARRY1(*pbVar37,bVar33) || CARRY1(*pbVar37 + bVar33,bVar34);
  *pbVar37 = *pbVar37 + bVar33 + bVar34;
  pbVar37 = extraout_ECX + unaff_FS_OFFSET + -0x42ef999c;
  bVar34 = CARRY1(*pbVar37,bVar33) || CARRY1(*pbVar37 + bVar33,bVar36);
  *pbVar37 = *pbVar37 + bVar33 + bVar36;
  bVar20 = (byte)uVar29 + bVar33;
  bVar36 = CARRY1((byte)uVar29,bVar33) || CARRY1(bVar20,bVar34);
  bVar20 = bVar20 + bVar34;
  pbVar37 = (byte *)((int)&(unaff_EDI->fields)._XpKey_k__BackingField + in_GS_OFFSET + 2);
  bVar19 = *pbVar37;
  bVar2 = *pbVar37;
  *pbVar37 = bVar2 + bVar20 + bVar36;
  extraout_ECX[0x106666] =
       extraout_ECX[0x106666] + bVar20 + (CARRY1(bVar19,bVar20) || CARRY1(bVar2 + bVar20,bVar36));
  *(int *)pbVar30 = *(int *)pbVar30 + CONCAT31((int3)((ulonglong)uVar29 >> 8),bVar20);
  *extraout_ECX = *extraout_ECX | bVar35;
  FastExitMediaState();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void HandleOperationResponse(OperationResponse) */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_HandleOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,OperationResponse *operationResponse,
               MethodInfo *method)

{
  pOVar1 = operationResponse;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffc8;
  if (operationResponse != (OperationResponse *)0x0) {
    pOVar6 = &operationResponse->fields;
    operationResponse =
         (OperationResponse *)
         CONCAT31(operationResponse._1_3_,(operationResponse->fields).OperationCode);
    uStack_2 = 0;
    puStack_5 = &stack0xffffffc8;
    MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
              (this,(MVOperationCodes__Enum)operationResponse,(pOVar1->fields).Parameters,
               pOVar6->ReturnCode,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  auStack_7[0] = func_?();
  func_?(auStack_7,&UNK_?);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

