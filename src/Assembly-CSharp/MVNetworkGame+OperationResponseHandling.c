
/* Void ExecuteOperationResponse(MVOperationCodes, Dictionary`2[System.Byte,System.Object], Int16)
    */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,MVOperationCodes__Enum opCode,
               Dictionary_2_System_Byte_System_Object_ *returnValues,int16_t returnCode,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    ppIStack_2 = &TypeInfo__System__Int32;
    func_?();
    ppMStack_3 = &
                  System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
    ;
    func_?();
    ppMStack_4 = &
                  MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
    ;
    func_?();
    ppJStack_5 = &TypeInfo__Newtonsoft__Json__JsonConvert;
    func_?();
    ppMStack_6 = &
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
    ;
    func_?();
    ppMStack_7 = &TypeInfo__MV__Common__MVOperationCodes;
    func_?();
    ppPStack_8 = &TypeInfo__PostRequest;
    func_?();
    ppQStack_9 = &TypeInfo__QuitConnectionError;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    ppIStack_2 = (Int32__Class **)&StringLiteral_Unhandled_operation_code_;
    func_?();
    ppMStack_3 = (MethodInfo **)&StringLiteral_Successfully_published_planet;
    func_?();
    ppMStack_4 = (MethodInfo **)&StringLiteral_You_are_not_authorized_to_publis;
    func_?();
    ppJStack_5 = (JsonConvert__Class **)&StringLiteral_Failed_to_unregister_worldObject;
    func_?();
    ppMStack_6 = (MethodInfo **)&StringLiteral_Gold_claimed__Marcus__Handle_thi;
    func_?();
    ppMStack_7 = (MVOperationCodes__Enum__Class **)&StringLiteral_SetAvatarAccessorySlot_operation;
    func_?();
    ppPStack_8 = (PostRequest__Class **)&StringLiteral_UpdateWorldObjectData_FAILED_on_;
    func_?();
    ppQStack_9 = (QuitConnectionError__Class **)&StringLiteral_profile_id;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_CloneTempWorldObjectWithOriginalReference) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
      if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
        if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
          pMVar10 = (this->fields).networkGame;
          if (pMVar10 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                      (pMVar10,returnValues,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
          pSVar11 = StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) || (pSVar11 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (pSVar11 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            TM::TM__(pSVar11,(MethodInfo *)0x0);
          }
          else {
            TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar10 = (this->fields).networkGame;
            if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar10->fields).isPublished = 1;
          }
          pMVar10 = (this->fields).networkGame;
          if (pMVar10 != (MVNetworkGame *)0x0) {
            if ((pMVar10->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              (*(((pMVar10->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
            }
            iVar12 = func_?();
            if (iVar12 != 0) {
              bVar13 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 (*(String **)(iVar12 + 0x3c),(MethodInfo *)0x0);
              if (bVar13 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,
                           (MethodInfo *)0x0);
                return;
              }
              this_04 = (WWWForm *)func_?();
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        (this_04,(MethodInfo *)0x0);
              iVar12 = func_?();
              if ((iVar12 != 0) && (this_04 != (WWWForm *)0x0)) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_04,StringLiteral_token,*(String **)(iVar12 + 0x24),(MethodInfo *)0x0
                          );
                iVar12 = func_?();
                if (iVar12 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_profile_id,*(int32_t *)(iVar12 + 0xc),
                             (MethodInfo *)0x0);
                  iVar12 = func_?();
                  if (iVar12 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_04,StringLiteral_planet_id,*(int32_t *)(iVar12 + 0x10),
                               (MethodInfo *)0x0);
                    iVar12 = func_?();
                    if (iVar12 != 0) {
                      pSVar11 = *(String **)(iVar12 + 0x3c);
                      this_05 = (PostRequest *)func_?();
                      PostRequest::PostRequest__ctor
                                (this_05,pSVar11,this_04,
                                 (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0
                                );
                      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      AsyncWWWManager::AsyncWWWManager_WWWRequest
                                ((AsyncWebRequest *)this_05,(MethodInfo *)0x0);
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
          pMVar10 = (this->fields).networkGame;
          if (pMVar10 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                      (pMVar10,(int)returnCode,(MethodInfo *)0x0);
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
      pMVar10 = (this->fields).networkGame;
      if (((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
          (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (returnValues,0x16,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               ), pMVar10 == (MVNetworkGame *)0x0)) || (pOVar14 == (Object *)0x0))
      goto code_?;
      if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (pMVar10,*piVar15,(MethodInfo *)0x0);
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
         (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x16,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pOVar14 == (Object *)0x0)) goto code_?;
      if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar15 = (int32_t *)func_?();
        pMVar10 = (this->fields).networkGame;
        if (((pMVar10 != (MVNetworkGame *)0x0) &&
            (pWVar16 = (pMVar10->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) &&
           (pMVar17 = (pWVar16->fields)._.worldObjectClientManager,
           pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                    (pMVar17,returnCode == 0,*piVar15,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
code_?:
      func_?();
      goto code_?;
    }
    switch(opCode & MVOperationCodes__Enum_Join) {
    case MVOperationCodes__Enum_LockHierarchy:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar10,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 != (MVNetworkGame *)0x0) {
        pEVar18 = (pMVar10->fields).ScreenshotUploaded;
        if (pEVar18 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)func_?();
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar18->fields)._._.invoke_impl)();
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                  (pMVar10,returnValues,(MethodInfo *)0x0);
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
      pSVar11 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar11,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar11,(MethodInfo *)0x0);
      return;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar10 = (this->fields).networkGame;
      if (((pMVar10 != (MVNetworkGame *)0x0) &&
          (pWVar16 = (pMVar10->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) &&
         (pMVar17 = (pWVar16->fields)._.worldObjectClientManager,
         pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                  (pMVar17,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      if (bVar13 == 0) {
code_?:
        pMVar10 = (this->fields).networkGame;
        if (pMVar10 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar10,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 == (MVNetworkGame *)0x0) ||
           (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
           pMVar19 == (MVLocalPlayer *)0x0)) break;
        pUVar20 = (pMVar19->fields)._._UserProfileData_k__BackingField;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((pUVar20 == (UserProfileData *)0x0) || (pOVar14 == (Object *)0x0)) break;
        if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar15 = (int32_t *)func_?();
          (pUVar20->fields).Gold = *piVar15;
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 == (MVNetworkGame *)0x0) ||
             (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
             pMVar19 == (MVLocalPlayer *)0x0)) break;
          if ((pMVar19->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 == (MVNetworkGame *)0x0) ||
             (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
             pMVar19 == (MVLocalPlayer *)0x0)) break;
          pAVar21 = (pMVar19->fields)._.OnGoldAmountChange;
          goto code_?;
        }
        goto code_?;
      }
      purchaseResponseData =
           (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
           Dictionary_2_System_Byte_System_Object__get_Item
                     (returnValues,0x5f,
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                     );
      if (purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
        goto code_?;
      }
      bVar22 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar22 <= (purchaseResponseData->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (purchaseResponseData->klass->_1).typeHierarchy[bVar22 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      if ((pMVar10->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar23 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar10->fields).OnItemAddedToWorld;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar10,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar10,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar10 = (this->fields).networkGame;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((pMVar10 == (MVNetworkGame *)0x0) || (pOVar24 == (Object *)0x0)) break;
      if ((pOVar24->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar15 = (int32_t *)func_?();
      iVar25 = *piVar15;
      if (pOVar14 == (Object *)0x0) break;
      if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar15 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar10,(int)returnCode,*piVar15,iVar25,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      if ((pMVar10->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      pAVar21 = (pMVar10->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar10 = (this->fields).networkGame;
        if (pMVar10 == (MVNetworkGame *)0x0) break;
        pMVar23 = (pMVar10->fields).OnMarketPlaceActionComplete;
        goto joined_?;
      }
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x28,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pOVar14 == (Object *)0x0)) break;
      if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar15 = (int32_t *)func_?();
        iVar25 = *piVar15;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if (pOVar14 == (Object *)0x0) break;
        if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar15 = (int32_t *)func_?();
          shopInventoryID = *piVar15;
          iVar12 = func_?();
          if ((iVar12 == 0) ||
             (this_03 = (PlayerShopInventoryRepository *)func_?(),
             this_03 == (PlayerShopInventoryRepository *)0x0)) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,iVar25,shopInventoryID,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      pMVar23 = (pMVar10->fields).OnMarketPlaceActionComplete;
joined_?:
      if (pMVar23 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar23->fields)->_)._.invoke_impl)();
      return;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 != (MVNetworkGame *)0x0) {
        pAVar26 = (pMVar10->fields).OnSetAvatarAccessoryResponse;
        if (pAVar26 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar26->fields)._._.invoke_impl)();
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
      pMVar10 = (this->fields).networkGame;
      if ((pMVar10 != (MVNetworkGame *)0x0) &&
         (pMVar27 = (pMVar10->fields)._PlayerController_k__BackingField,
         pMVar27 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar27,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar10 = (this->fields).networkGame;
      if ((pMVar10 != (MVNetworkGame *)0x0) &&
         (pMVar27 = (pMVar10->fields)._PlayerController_k__BackingField,
         pMVar27 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar27,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
      goto code_?;
code_?:
      pMVar10 = (this->fields).networkGame;
      if (pMVar10 == (MVNetworkGame *)0x0) break;
      if ((pMVar10->fields).OnMarketPlaceActionComplete ==
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      pMVar23 = (pMVar10->fields).OnMarketPlaceActionComplete;
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
          pMVar19 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar19 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar19,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar13 == 0) {
          return;
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 == (MVNetworkGame *)0x0) ||
           (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
           pMVar19 == (MVLocalPlayer *)0x0)) goto code_?;
        pUVar20 = (pMVar19->fields)._._UserProfileData_k__BackingField;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((pUVar20 == (UserProfileData *)0x0) || (pOVar14 == (Object *)0x0)) goto code_?;
        if ((pOVar14->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar15 = (int32_t *)func_?();
        (pUVar20->fields).Gold = *piVar15;
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 == (MVNetworkGame *)0x0) ||
           (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
           pMVar19 == (MVLocalPlayer *)0x0)) goto code_?;
        if ((pMVar19->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar10 == (MVNetworkGame *)0x0) ||
           (pMVar19 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0),
           pMVar19 == (MVLocalPlayer *)0x0)) goto code_?;
        pAVar21 = (pMVar19->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar10 = (this->fields).networkGame;
          if ((pMVar10 != (MVNetworkGame *)0x0) &&
             (pMVar27 = (pMVar10->fields)._PlayerController_k__BackingField,
             pMVar27 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                      (pMVar27,returnCode == 0,returnValues,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar10 = (this->fields).networkGame;
          if (pMVar10 != (MVNetworkGame *)0x0) {
            (pMVar10->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar13 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar13 != 0)) {
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
            pMVar10 = (this->fields).networkGame;
            if (pMVar10 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar10,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar12 = func_?();
        if ((iVar12 == 0) || (iVar12 = func_?(), iVar12 == 0)) goto code_?;
        if (*(int *)(iVar12 + 0x10) == 0) {
          return;
        }
        iVar12 = func_?();
        if ((iVar12 == 0) || (iVar12 = func_?(), iVar12 == 0)) goto code_?;
        pAVar21 = *(Action **)(iVar12 + 0x10);
      }
code_?:
      if (pAVar21 != (Action *)0x0) {
code_?:
        (*(pAVar21->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar10 = (this->fields).networkGame;
          if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar10->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar21 = (pMVar10->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pSVar11 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xcf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar28 = (String *)0x0;
        if (pSVar11 != (String *)0x0) {
          if (pSVar11->klass == TypeInfo__System__String) {
            pSVar28 = pSVar11;
          }
          if (pSVar28 == (String *)0x0) goto code_?;
        }
        this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               (pSVar28,
                                System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                               );
        pAVar29 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        if (pAVar29 == (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
          return;
        }
        if (this_01 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(pAVar29->fields)._._.invoke_impl)();
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
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pSVar11 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xf5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar28 = (String *)0x0;
      if (pSVar11 != (String *)0x0) {
        if (pSVar11->klass == TypeInfo__System__String) {
          pSVar28 = pSVar11;
        }
        if (pSVar28 == (String *)0x0) goto code_?;
      }
      Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                (pSVar28,
                 MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                );
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar10 != (MVNetworkGame *)0x0) {
        pAVar30 = (pMVar10->fields).ReceivedPlanetOwnershipData;
        if (pAVar30 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          return;
        }
        (*(pAVar30->fields)._._.invoke_impl)();
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
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    if (pOVar24 == (Object *)0x0) goto code_?;
    if ((pOVar24->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    puVar31 = (undefined1 *)func_?();
    uVar32 = *puVar31;
    if (pOVar14 == (Object *)0x0) goto code_?;
    if ((pOVar14->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pFVar33 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar33,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar32),(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
code_?:
  func_?();
  puVar34 = (undefined4 *)&stack0xffffffec;
  puVar35 = (undefined4 *)&stack0xffffffec;
  cVar36 = '\x04';
  do {
    puVar1 = puVar1 + -1;
    puVar34 = puVar34 + -1;
    *puVar34 = *puVar1;
    cVar36 = cVar36 + -1;
  } while ('\0' < cVar36);
  puVar1 = auStack_37 + 1;
  cVar36 = '\x18';
  do {
    puVar35 = puVar35 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar35;
    cVar36 = cVar36 + -1;
  } while ('\0' < cVar36);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

