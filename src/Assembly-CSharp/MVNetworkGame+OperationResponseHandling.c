
/* Void ExecuteOperationResponse(MVOperationCodes, Dictionary`2[System.Byte,System.Object], Int16)
    */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,MVOperationCodes__Enum opCode,
               Dictionary_2_System_Byte_System_Object_ *returnValues,int16_t returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__ThemeSelection__CallbackHandler);
    func_?(0x5c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__IEditModeUI);
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
    func_?(&TypeInfo__ScreenshotUploadedEventArgs);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__UnityEngine__WWWForm);
    func_?(0x28);
    func_?(&StringLiteral_Failed_to_fetch_actors_planet_ow);
    func_?(&StringLiteral_Unhandled_returnCode);
    func_?(&StringLiteral_token);
    func_?(&StringLiteral_Failed_to_claim_gold);
    func_?(&StringLiteral_Unhandled_operation_code_);
    func_?(&StringLiteral_Successfully_published_planet);
    func_?(&StringLiteral_You_are_not_authorized_to_publis);
    func_?(&StringLiteral_Failed_to_unregister_worldObject);
    func_?(&StringLiteral_Gold_claimed__Marcus__Handle_thi);
    func_?(&StringLiteral_SetAvatarAccessorySlot_operation);
    func_?(&StringLiteral_UpdateWorldObjectData_FAILED_on_);
    func_?(&StringLiteral_profile_id);
    func_?(&StringLiteral_s_gamePublishedURL_is_null_or_em);
    func_?(&StringLiteral_planet_id);
    func_?(&StringLiteral_Undefined_fail_);
    func_?(0xf8);
    func_?(&StringLiteral_Failed_to_add_item_to_shop);
    cRam_? = '\x01';
  }
  uVar1 = SUB41(TypeInfo__UnityEngine__Debug,0);
  pMVar2 = (MVNetworkGame *)returnValues;
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_CloneTempWorldObjectWithOriginalReference) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
      if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
        if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
          pMVar2 = (this->fields).networkGame;
          if (pMVar2 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                      (pMVar2,returnValues,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
          pSVar3 = StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) || (pSVar3 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (pSVar3 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar2 = (this->fields).networkGame;
            unaff_ESI = (MVNetworkGame *)this;
            if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar2->fields).isPublished = 1;
          }
          pMVar2 = (this->fields).networkGame;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar2 != (MVNetworkGame *)0x0) {
            if ((pMVar2->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              pUVar4 = (pMVar2->fields).OnPublishedPlanet;
              (*(pUVar4->fields)._._.invoke_impl)
                        ((char)(pUVar4->fields)._._.method_code,pSVar3,(pUVar4->fields)._._.method)
              ;
            }
            iVar5 = func_?(0);
            unaff_ESI = (MVNetworkGame *)this;
            if (iVar5 != 0) {
              bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 (*(String **)(iVar5 + 0x3c),(MethodInfo *)0x0);
              if (bVar6 != 0) {
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
              iVar5 = func_?();
              unaff_ESI = (MVNetworkGame *)this;
              if ((iVar5 != 0) &&
                 (unaff_ESI = (MVNetworkGame *)this, unaff_EDI != (MVNetworkGame *)0x0)) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar5 + 0x24),
                           (MethodInfo *)0x0);
                iVar5 = func_?(0);
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar5 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_profile_id,
                             *(int32_t *)(iVar5 + 0xc),(MethodInfo *)0x0);
                  iVar5 = func_?(0);
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar5 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                               *(int32_t *)(iVar5 + 0x10),(MethodInfo *)0x0);
                    iVar5 = func_?(0);
                    unaff_ESI = (MVNetworkGame *)this;
                    if (iVar5 != 0) {
                      pSVar3 = *(String **)(iVar5 + 0x3c);
                      this_04 = (PostRequest *)func_?(TypeInfo__PostRequest);
                      PostRequest::PostRequest__ctor
                                (this_04,pSVar3,(WWWForm *)unaff_EDI,
                                 (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0
                                );
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
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_RequestFriendshipByProfileID)
          goto code_?;
          pMVar2 = (this->fields).networkGame;
          if (pMVar2 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                      (pMVar2,(int)returnCode,(MethodInfo *)0x0);
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
            func_?(uVar1);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(uVar1);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_unregister_worldObject,(MethodInfo *)0x0);
        return;
      }
      unaff_ESI = (this->fields).networkGame;
      if (((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
          (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (returnValues,0x16,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               ), unaff_ESI == (MVNetworkGame *)0x0)) || (pOVar7 == (Object *)0x0))
      goto code_?;
      pIVar8 = TypeInfo__System__Int32;
      pMVar2 = unaff_ESI;
      if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar9 = (int32_t *)func_?(pOVar7);
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (unaff_ESI,*piVar9,(MethodInfo *)0x0);
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
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x16,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pOVar7 == (Object *)0x0)) goto code_?;
      pIVar8 = TypeInfo__System__Int32;
      pMVar2 = unaff_ESI;
      if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar9 = (int32_t *)func_?(pOVar7);
        pMVar2 = (this->fields).networkGame;
        if (((pMVar2 != (MVNetworkGame *)0x0) &&
            (pWVar10 = (pMVar2->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) &&
           (pMVar11 = (pWVar10->fields)._.worldObjectClientManager,
           pMVar11 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                    (pMVar11,returnCode == 0,*piVar9,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
code_?:
      func_?(pOVar7,pIVar8);
      pSVar12 = extraout_ECX;
      goto code_?;
    }
    switch(opCode & MVOperationCodes__Enum_Join) {
    case MVOperationCodes__Enum_LockHierarchy:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar2,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar2 = (this->fields).networkGame;
      unaff_EBX = (MVNetworkGame *)this;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pEVar13 = (pMVar2->fields).ScreenshotUploaded;
        if (pEVar13 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)
                  func_?((char)TypeInfo__ScreenshotUploadedEventArgs);
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar13->fields)._._.invoke_impl)
                  ((pEVar13->fields)._._.method_code,this,this_02,(pEVar13->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                  (pMVar2,returnValues,(MethodInfo *)0x0);
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
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar2 = (this->fields).networkGame;
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pWVar10 = (pMVar2->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) &&
         (pMVar11 = (pWVar10->fields)._.worldObjectClientManager,
         pMVar11 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                  (pMVar11,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      unaff_ESI = (MVNetworkGame *)0x0;
      unaff_EDI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      if (((bVar6 == 0) ||
          (unaff_ESI = (MVNetworkGame *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (returnValues,0x5f,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 ), unaff_ESI == (MVNetworkGame *)0x0)) ||
         ((unaff_EBX = (MVNetworkGame *)unaff_ESI->klass, pMVar2 = unaff_ESI,
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment <= *(byte *)&(unaff_EBX->fields).worldNetwork &&
          (*(Dictionary_2_System_Object_System_Object___Class **)
            ((unaff_EBX->fields)._MarketPlaceLevel_k__BackingField + -4 +
            (uint)(
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment * 4) ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
        pMVar2 = (this->fields).networkGame;
        if (pMVar2 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar2,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = _returnCode;
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar14 == (MVLocalPlayer *)0x0)) break;
        unaff_ESI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((unaff_ESI == (MVNetworkGame *)0x0) || (pOVar7 == (Object *)0x0)) break;
        pIVar8 = TypeInfo__System__Int32;
        pMVar2 = unaff_ESI;
        if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        puVar15 = (undefined4 *)func_?();
        (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
             (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar15;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar14 == (MVLocalPlayer *)0x0)) break;
        if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           pMVar14 == (MVLocalPlayer *)0x0)) break;
        pAVar16 = (pMVar14->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 == (MVNetworkGame *)0x0) break;
      if ((pMVar2->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar17 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar2->fields).OnItemAddedToWorld;
      bVar18 = returnCode == -1;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar2,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar2 = (this->fields).networkGame;
      unaff_EDI = (MVNetworkGame *)this;
      if (pMVar2 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar2,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar2 = (this->fields).networkGame;
      unaff_EBX = _returnCode;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      unaff_EDI = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      unaff_ESI = pMVar2;
      if ((pMVar2 == (MVNetworkGame *)0x0) || (pOVar7 == (Object *)0x0)) break;
      pIVar8 = TypeInfo__System__Int32;
      if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar9 = (int32_t *)func_?();
      itemID = *piVar9;
      if (unaff_EDI == (MVNetworkGame *)0x0) break;
      pIVar8 = TypeInfo__System__Int32;
      if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar9 = (int32_t *)func_?(unaff_EDI);
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar2,(int)returnCode,*piVar9,itemID,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) break;
      if ((pMVar2->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) break;
      pAVar16 = (pMVar2->fields).OnActiveAvatarSet;
code_?:
      if (pAVar16 != (Action *)0x0) {
code_?:
        (*(pAVar16->fields)._._.invoke_impl)
                  ((pAVar16->fields)._._.method_code,(pAVar16->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      unaff_EDI = _returnCode;
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(uVar1);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar2 = (this->fields).networkGame;
        if (pMVar2 == (MVNetworkGame *)0x0) break;
        pMVar17 = (pMVar2->fields).OnMarketPlaceActionComplete;
        if (pMVar17 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar18 = returnCode == 0;
        goto code_?;
      }
      unaff_ESI = (MVNetworkGame *)returnValues;
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x28,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI = (MVNetworkGame *)returnValues, pOVar7 == (Object *)0x0
         )) break;
      pIVar8 = TypeInfo__System__Int32;
      if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar15 = (undefined4 *)func_?(pOVar7);
        unaff_EBX = (MVNetworkGame *)*puVar15;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar7 == (Object *)0x0) break;
        pIVar8 = TypeInfo__System__Int32;
        if ((pOVar7->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          puVar15 = (undefined4 *)func_?(pOVar7);
          unaff_ESI = (MVNetworkGame *)*puVar15;
          iVar5 = func_?(0);
          if ((iVar5 == 0) ||
             (this_03 = (PlayerShopInventoryRepository *)
                        func_?(4,TypeInfo__IEditModeUI,iVar5),
             this_03 == (PlayerShopInventoryRepository *)0x0)) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pMVar17 = (pMVar2->fields).OnMarketPlaceActionComplete;
        if (pMVar17 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar18 = returnCode == 0;
        goto code_?;
      }
      break;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pAVar19 = (pMVar2->fields).OnSetAvatarAccessoryResponse;
        if (pAVar19 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar19->fields)._._.invoke_impl)
                    ((pAVar19->fields)._._.method_code,returnCode == 0,
                     (char)(pAVar19->fields)._._.method);
        }
        if (returnCode == 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?((char)TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SetAvatarAccessorySlot_operation,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AttachWorldObjectToSeat:
    case MVOperationCodes__Enum_SpawnVehicleWithDriver:
      pMVar2 = (this->fields).networkGame;
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar20 = (pMVar2->fields)._PlayerController_k__BackingField,
         pMVar20 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar20,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar2 = (this->fields).networkGame;
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar20 = (pMVar2->fields)._PlayerController_k__BackingField,
         pMVar20 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar20,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
      goto code_?;
code_?:
      pMVar2 = (this->fields).networkGame;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        if ((pMVar2->fields).OnMarketPlaceActionComplete ==
            (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        pMVar17 = (pMVar2->fields).OnMarketPlaceActionComplete;
        bVar18 = returnCode == 0;
code_?:
        (*(((Action_1_Boolean___Fields *)&pMVar17->fields)->_)._.invoke_impl)
                  ((((Action_1_Boolean___Fields *)&pMVar17->fields)->_)._.method_code,bVar18,
                   (((Action_1_Boolean___Fields *)&pMVar17->fields)->_)._.method);
        return;
      }
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
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar14 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar14,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar6 == 0) {
          return;
        }
        pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar21 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar21,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar14 == (MVLocalPlayer *)0x0))
        goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((unaff_EDI == (MVNetworkGame *)0x0) ||
           (unaff_ESI = (MVNetworkGame *)returnValues, pOVar7 == (Object *)0x0))
        goto code_?;
        pIVar8 = TypeInfo__System__Int32;
        if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var17 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data = *p_Var17;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar14 == (MVLocalPlayer *)0x0))
        goto code_?;
        if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar14 == (MVLocalPlayer *)0x0))
        goto code_?;
        pAVar16 = (pMVar14->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar2 = (this->fields).networkGame;
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             (pMVar20 = (pMVar2->fields)._PlayerController_k__BackingField,
             pMVar20 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                      (pMVar20,returnCode == 0,returnValues,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar2 = (this->fields).networkGame;
          if (pMVar2 != (MVNetworkGame *)0x0) {
            (pMVar2->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar6 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar6 != 0)) {
                return;
              }
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0)
              ;
              this_00 = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
              QuitConnectionError::QuitConnectionError__ctor(this_00,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                        ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
              return;
            }
            pMVar2 = (this->fields).networkGame;
            if (pMVar2 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar2,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar5 = func_?(0);
        if ((iVar5 == 0) || (iVar5 = func_?(4,TypeInfo__IEditModeUI,iVar5), iVar5 == 0)
           ) goto code_?;
        if (*(int *)(iVar5 + 0x10) == 0) {
          return;
        }
        iVar5 = func_?(0);
        if ((iVar5 == 0) || (iVar5 = func_?(4,TypeInfo__IEditModeUI,iVar5), iVar5 == 0)
           ) goto code_?;
        pAVar16 = *(Action **)(iVar5 + 0x10);
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar2 = (this->fields).networkGame;
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar2->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar16 = (pMVar2->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pMVar2 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xcf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pMVar21 = (MVNetworkGame *)0x0;
        if (pMVar2 != (MVNetworkGame *)0x0) {
          if ((String__Class *)pMVar2->klass == TypeInfo__System__String) {
            pMVar21 = pMVar2;
          }
          pSVar12 = TypeInfo__System__String;
          if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
        }
        this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               ((String *)pMVar21,
                                System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                               );
        if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
            (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
          return;
        }
        unaff_ESI = (MVNetworkGame *)
                    TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        if (this_01 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(code *)(unaff_ESI->fields).ReceivedItemFromQuery)
                    (*(undefined4 *)&(unaff_ESI->fields).isPublished);
          return;
        }
        goto code_?;
      }
      if (returnCode == -1) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(uVar1);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
        return;
      }
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pMVar2 = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xf5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pMVar21 = (MVNetworkGame *)0x0;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar2->klass == TypeInfo__System__String) {
          pMVar21 = pMVar2;
        }
        pSVar12 = TypeInfo__System__String;
        if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
      }
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar21,
                             MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                            );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pAVar22 = (pMVar2->fields).ReceivedPlanetOwnershipData;
        if (pAVar22 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          return;
        }
        (*(pAVar22->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) {
      if ((undefined1)opCode == MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold) {
        if (returnCode != -1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(uVar1);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(uVar1);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar2 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    unaff_ESI = pMVar2;
    if (pOVar7 == (Object *)0x0) goto code_?;
    pIVar8 = (Int32__Class *)TypeInfo__System__Byte;
    if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    puVar23 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar23);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    pSVar12 = (String__Class *)TypeInfo__System__Int32;
    if ((pMVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pFVar24 = (FirstTimeEvent__Enum *)func_?(pMVar2);
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar24,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?(pMVar2,pSVar12);
code_?:
    func_?();
    pIVar8 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar8);
    unaff_ESI = pMVar2;
  }
code_?:
  uVar25 = func_?();
  pcVar26 = (char *)uVar25;
  bVar27 = (byte)(uVar25 >> 8);
  bVar18 = (uVar25 & 0x100) != 0;
  bVar28 = (byte)uVar25;
  bVar29 = (byte)(uVar25 >> 0x28);
  bVar30 = bVar29 + bVar28;
  bVar31 = CARRY1(bVar29,bVar28) || CARRY1(bVar30,bVar18);
  bVar32 = (byte)(uVar25 >> 0x20);
  bVar30 = bVar30 + bVar18;
  pbVar33 = (byte *)CONCAT22((short)(uVar25 >> 0x30),CONCAT11(bVar30,bVar32));
  pbVar34 = (byte *)segment(in_DS,0x674d);
  bVar18 = CARRY1(*pbVar34,bVar32) || CARRY1(*pbVar34 + bVar32,bVar31);
  *pbVar34 = *pbVar34 + bVar32 + bVar31;
  bVar35 = (byte)((uint)extraout_ECX_01 >> 8);
  bVar31 = CARRY1(*pbVar33,bVar35) || CARRY1(*pbVar33 + bVar35,bVar18);
  *pbVar33 = *pbVar33 + bVar35 + bVar18;
  pbVar34 = (byte *)segment(in_DS,(short)unaff_ESI + 0x4d);
  bVar18 = CARRY1(*pbVar34,bVar28) || CARRY1(*pbVar34 + bVar28,bVar31);
  *pbVar34 = *pbVar34 + bVar28 + bVar31;
  sVar36 = (short)unaff_EDI;
  pbVar34 = (byte *)segment(in_DS,(short)unaff_EBX + sVar36 + 0x674d);
  bVar29 = (byte)extraout_ECX_01;
  bVar31 = CARRY1(*pbVar34,bVar29) || CARRY1(*pbVar34 + bVar29,bVar18);
  *pbVar34 = *pbVar34 + bVar29 + bVar18;
  bVar18 = CARRY1(*extraout_ECX_01,bVar32) || CARRY1(*extraout_ECX_01 + bVar32,bVar31);
  *extraout_ECX_01 = *extraout_ECX_01 + bVar32 + bVar31;
  sVar37 = (short)unaff_ESI + -1;
  pbVar34 = (byte *)segment(in_SS,(short)&stack0xfffffffc + sVar37 + 0x4f);
  bVar31 = CARRY1(*pbVar34,bVar30) || CARRY1(*pbVar34 + bVar30,bVar18);
  *pbVar34 = *pbVar34 + bVar30 + bVar18;
  pbVar34 = (byte *)segment(in_DS,sVar36 + 0x674f);
  bVar30 = (byte)unaff_EBX;
  bVar18 = CARRY1(*pbVar34,bVar30) || CARRY1(*pbVar34 + bVar30,bVar31);
  *pbVar34 = *pbVar34 + bVar30 + bVar31;
  bVar31 = CARRY1(bVar30,bVar28) || CARRY1(bVar30 + bVar28,bVar18);
  bVar30 = bVar30 + bVar28 + bVar18;
  pbVar34 = (byte *)segment(in_DS,sVar36 + 0x674f);
  bVar18 = CARRY1(*pbVar34,bVar28) || CARRY1(*pbVar34 + bVar28,bVar31);
  *pbVar34 = *pbVar34 + bVar28 + bVar31;
  bVar31 = CARRY1(bVar29,bVar28) || CARRY1(bVar29 + bVar28,bVar18);
  bVar32 = bVar29 + bVar28 + bVar18;
  bVar18 = CARRY1(bVar35,bVar30) || CARRY1(bVar35 + bVar30,bVar31);
  pbVar38 = (byte *)CONCAT22((short)((uint)extraout_ECX_01 >> 0x10),
                             CONCAT11(bVar35 + bVar30 + bVar31,bVar32));
  sVar39 = (short)CONCAT31((int3)((uint)unaff_EBX >> 8),bVar30);
  pbVar34 = (byte *)segment(in_DS,sVar39 + sVar37);
  bVar31 = CARRY1(*pbVar34,bVar28) || CARRY1(*pbVar34 + bVar28,bVar18);
  *pbVar34 = *pbVar34 + bVar28 + bVar18;
  pbVar34 = (byte *)segment(in_DS,sVar39 + 0x52);
  bVar18 = CARRY1(*pbVar34,bVar27) || CARRY1(*pbVar34 + bVar27,bVar31);
  *pbVar34 = *pbVar34 + bVar27 + bVar31;
  pbVar34 = (byte *)segment(in_DS,sVar39 + sVar36 + 0x6751);
  bVar30 = *pbVar34;
  bVar29 = *pbVar34;
  *pbVar34 = bVar29 + bVar27 + bVar18;
  *pcVar26 = *pcVar26 + bVar28 + (CARRY1(bVar30,bVar27) || CARRY1(bVar29 + bVar27,bVar18));
  *(char **)pbVar33 = pcVar26 + *(int *)pbVar33;
  *pbVar38 = *pbVar38 | bVar32;
  FastExitMediaState();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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

