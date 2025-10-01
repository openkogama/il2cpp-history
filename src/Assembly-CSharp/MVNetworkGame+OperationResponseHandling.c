
/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
    func_?(&TypeInfo__ThemeSelection__CallbackHandler);
    func_?(&TypeInfo__UnityEngine__Debug);
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
    func_?();
    func_?();
    func_?(&TypeInfo__UnityEngine__WWWForm);
    func_?(&StringLiteral_Quiting_from_join_because_of_of_);
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
    func_?();
    func_?();
    func_?(&StringLiteral_Undefined_fail_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Failed_to_add_item_to_shop);
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame *)returnValues;
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_CloneTempWorldObjectWithOriginalReference) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
      if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
        if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                      (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
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
            pMVar1 = (this->fields).networkGame;
            bVar2 = 0;
            unaff_ESI = (MVNetworkGame *)this;
            if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar1->fields).isPublished = 1;
          }
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              pUVar4 = (pMVar1->fields).OnPublishedPlanet;
              (*(pUVar4->fields)._._.invoke_impl)((pUVar4->fields)._._.method_code,pSVar3);
            }
            iVar5 = func_?();
            bVar2 = 0;
            unaff_ESI = (MVNetworkGame *)this;
            if (iVar5 != 0) {
              bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 (*(String **)(iVar5 + 0x44),(MethodInfo *)0x0);
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
              bVar2 = 0;
              unaff_ESI = (MVNetworkGame *)this;
              if ((iVar5 != 0) &&
                 (bVar2 = 0, unaff_ESI = (MVNetworkGame *)this, unaff_EDI != (MVNetworkGame *)0x0))
              {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar5 + 0x24),
                           (MethodInfo *)0x0);
                iVar5 = func_?();
                bVar2 = 0;
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar5 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_profile_id,
                             *(int32_t *)(iVar5 + 0xc),(MethodInfo *)0x0);
                  iVar5 = func_?();
                  bVar2 = 0;
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar5 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                               *(int32_t *)(iVar5 + 0x10),(MethodInfo *)0x0);
                    iVar5 = func_?();
                    bVar2 = 0;
                    unaff_ESI = (MVNetworkGame *)this;
                    if (iVar5 != 0) {
                      pSVar3 = *(String **)(iVar5 + 0x44);
                      this_04 = (PostRequest *)func_?();
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
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
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
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_unregister_worldObject,(MethodInfo *)0x0);
        return;
      }
      unaff_ESI = (this->fields).networkGame;
      bVar2 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      if ((unaff_ESI == (MVNetworkGame *)0x0) || (bVar2 = 0, pOVar7 == (Object *)0x0))
      goto code_?;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar8 < pIVar9;
      pMVar1 = unaff_ESI;
      if (pIVar8 == pIVar9) {
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (unaff_ESI,*piVar10,(MethodInfo *)0x0);
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
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      if (pOVar7 == (Object *)0x0) goto code_?;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar8 < pIVar9;
      pMVar1 = unaff_ESI;
      if (pIVar8 == pIVar9) {
        piVar10 = (int32_t *)func_?();
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pWVar11 = (pMVar1->fields).worldNetwork;
          bVar2 = 0;
          if (pWVar11 != (WorldNetwork *)0x0) {
            pMVar12 = (pWVar11->fields)._.worldObjectClientManager;
            bVar2 = 0;
            if (pMVar12 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar12,returnCode == 0,*piVar10,(MethodInfo *)0x0);
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
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      unaff_EBX = (MVNetworkGame *)this;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pEVar13 = (pMVar1->fields).ScreenshotUploaded;
        if (pEVar13 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)
                  func_?(TypeInfo__ScreenshotUploadedEventArgs);
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
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
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
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar11 = (pMVar1->fields).worldNetwork;
        bVar2 = 0;
        if (pWVar11 != (WorldNetwork *)0x0) {
          pMVar12 = (pWVar11->fields)._.worldObjectClientManager;
          bVar2 = 0;
          if (pMVar12 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                      (pMVar12,returnCode == 0,(MethodInfo *)0x0);
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
      unaff_EDI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      if ((bVar6 == 0) ||
         (unaff_ESI = (MVNetworkGame *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0x5f,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                ), unaff_ESI == (MVNetworkGame *)0x0)) {
code_?:
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = _returnCode;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar14 == (MVLocalPlayer *)0x0) break;
        unaff_ESI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        if ((unaff_ESI == (MVNetworkGame *)0x0) || (bVar2 = 0, pOVar7 == (Object *)0x0)) break;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar8 < pIVar9;
        pMVar1 = unaff_ESI;
        if (pIVar8 == pIVar9) {
          puVar15 = (undefined4 *)func_?();
          (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar15;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar14 == (MVLocalPlayer *)0x0) break;
          if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar14 == (MVLocalPlayer *)0x0) break;
          pAVar16 = (pMVar14->fields)._.OnGoldAmountChange;
          goto code_?;
        }
        goto code_?;
      }
      unaff_EBX = (MVNetworkGame *)unaff_ESI->klass;
      bVar2 = *(byte *)&(unaff_EBX->fields).worldNetwork <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      pMVar1 = unaff_ESI;
      if ((!(bool)bVar2) &&
         (pDVar17 = *(Dictionary_2_System_Object_System_Object___Class **)
                     ((unaff_EBX->fields)._MarketPlaceLevel_k__BackingField + -4 +
                     (uint)(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           ->_1).naturalAligment * 4),
         bVar2 = pDVar17 < 
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
         , pDVar17 ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar18 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      unaff_EDI = (MVNetworkGame *)this;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
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
      bVar2 = 0;
      unaff_ESI = pMVar1;
      if ((pMVar1 == (MVNetworkGame *)0x0) || (bVar2 = 0, pOVar7 == (Object *)0x0)) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar8 < pIVar9;
      if (pIVar8 != pIVar9) goto code_?;
      piVar10 = (int32_t *)func_?();
      itemID = *piVar10;
      bVar2 = 0;
      if (unaff_EDI == (MVNetworkGame *)0x0) break;
      pIVar8 = (Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar8 < pIVar9;
      if (pIVar8 == pIVar9) {
        piVar10 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar1,(int)returnCode,*piVar10,itemID,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pAVar16 = (pMVar1->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      unaff_EDI = _returnCode;
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar1 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar18 = (pMVar1->fields).OnMarketPlaceActionComplete;
        goto joined_?;
      }
      bVar2 = 0;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar7 == (Object *)0x0) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar8 < pIVar9;
      if (pIVar8 == pIVar9) {
        puVar15 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar15;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar7 == (Object *)0x0) break;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar8 < pIVar9;
        if (pIVar8 == pIVar9) {
          puVar15 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar15;
          iVar5 = func_?();
          bVar2 = 0;
          if (iVar5 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?(4);
          bVar2 = 0;
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
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pMVar18 = (pMVar1->fields).OnMarketPlaceActionComplete;
joined_?:
      if (pMVar18 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar18->fields)->_)._.invoke_impl)
                ((((Action_1_Boolean___Fields *)&pMVar18->fields)->_)._.method_code);
      return;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar19 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
        if (pAVar19 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar19->fields)._._.invoke_impl)
                    ((pAVar19->fields)._._.method_code,returnCode == 0,(pAVar19->fields)._._.method)
          ;
        }
        if (returnCode == 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
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
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar20 = (pMVar1->fields)._PlayerController_k__BackingField;
        bVar2 = 0;
        if (pMVar20 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                    (pMVar20,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar1 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar20 = (pMVar1->fields)._PlayerController_k__BackingField;
        bVar2 = 0;
        if (pMVar20 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                    (pMVar20,returnCode == 0,(MethodInfo *)0x0);
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
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnMarketPlaceActionComplete ==
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      pMVar18 = (pMVar1->fields).OnMarketPlaceActionComplete;
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
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar14 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar14,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        bVar2 = 0;
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
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar21,(MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar14 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((unaff_EDI == (MVNetworkGame *)0x0) ||
           (bVar2 = 0, unaff_ESI = (MVNetworkGame *)returnValues, pOVar7 == (Object *)0x0))
        goto code_?;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar8 < pIVar9;
        if (pIVar8 != pIVar9) goto code_?;
        p_Var25 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data = *p_Var25;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar14 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar2 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar14 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar16 = (pMVar14->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar20 = (pMVar1->fields)._PlayerController_k__BackingField;
            bVar2 = 0;
            if (pMVar20 != (MVLocalObjectController *)0x0) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar20,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            (pMVar1->fields).connState = 4;
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
            pMVar1 = (this->fields).networkGame;
            bVar2 = 0;
            if (pMVar1 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar1,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar5 = func_?(0);
        bVar2 = 0;
        if (iVar5 == 0) goto code_?;
        iVar5 = func_?(4);
        bVar2 = 0;
        if (iVar5 == 0) goto code_?;
        if (*(int *)(iVar5 + 0x10) == 0) {
          return;
        }
        iVar5 = func_?();
        bVar2 = 0;
        if (iVar5 == 0) goto code_?;
        iVar5 = func_?(4);
        bVar2 = 0;
        if (iVar5 == 0) goto code_?;
        pAVar16 = *(Action **)(iVar5 + 0x10);
      }
code_?:
      bVar2 = 0;
      if (pAVar16 != (Action *)0x0) {
code_?:
        (*(pAVar16->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar1 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar16 = (pMVar1->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        bVar2 = 0;
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
        pMVar21 = (MVNetworkGame *)0x0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
            pMVar21 = pMVar1;
          }
          bVar2 = 0;
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
        bVar2 = 0;
        if (this_01 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
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
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
        return;
      }
      bVar2 = 0;
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
      pMVar21 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar21 = pMVar1;
        }
        bVar2 = 0;
        if (pMVar21 == (MVNetworkGame *)0x0) goto code_?;
      }
      unaff_ESI = (MVNetworkGame *)
                  Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                  JsonConvert_DeserializeObject_2
                            ((String *)pMVar21,
                             MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                            );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar22 = (pMVar1->fields).ReceivedPlanetOwnershipData;
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
        if (returnCode == -1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    bVar2 = 0;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar1 = (MVNetworkGame *)
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
    bVar2 = 0;
    unaff_ESI = pMVar1;
    if (pOVar7 == (Object *)0x0) goto code_?;
    pIVar8 = (pOVar7->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Byte->_0).element_class;
    bVar2 = pIVar8 < pIVar9;
    if (pIVar8 != pIVar9) goto code_?;
    puVar23 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar23);
    bVar2 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar8 = (pMVar1->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar8 < pIVar9;
    if (pIVar8 == pIVar9) {
      pFVar24 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar24,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
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
  uVar25 = func_?();
  pIVar26 = (Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery;
  puVar23 = (pIVar26->data).dummy;
  uVar27 = (int)(pIVar26->data).dummy - (int)&stack0xffffffec;
  (pIVar26->data).dummy = (void *)(uVar27 - bVar2);
  pIVar26 = (Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery;
  uVar27 = (uint)(puVar23 < &stack0xffffffec || uVar27 < bVar2);
  uVar28 = (int)(pIVar26->data).dummy - (int)&stack0xffffffec;
  bVar29 = (pIVar26->data).dummy < &stack0xffffffec || uVar28 < uVar27;
  (pIVar26->data).dummy = (void *)(uVar28 - uVar27);
  LOCK();
  bVar2 = *extraout_ECX;
  *extraout_ECX = (byte)unaff_EBX;
  iVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar2);
  UNLOCK();
  sVar30 = (short)unaff_ESI;
  pbVar31 = (byte *)segment(in_SS,(short)&stack0xfffffffc + sVar30 + 0x6718);
  bVar32 = CARRY1(*pbVar31,bVar2) || CARRY1(*pbVar31 + bVar2,bVar29);
  *pbVar31 = *pbVar31 + bVar2 + bVar29;
  pbVar31 = extraout_ECX + iVar5 + 0x19f91067;
  bVar33 = (byte)((ulonglong)uVar25 >> 0x28);
  bVar29 = CARRY1(*pbVar31,bVar33) || CARRY1(*pbVar31 + bVar33,bVar32);
  *pbVar31 = *pbVar31 + bVar33 + bVar32;
  sVar34 = (short)iVar5;
  pbVar31 = (byte *)segment(in_DS,sVar34 + (short)unaff_EDI + 0x671a);
  bVar35 = *pbVar31 + (byte)uVar25;
  bVar32 = CARRY1(*pbVar31,(byte)uVar25) || CARRY1(bVar35,bVar29);
  *pbVar31 = bVar35 + bVar29;
  bVar36 = (byte)((ulonglong)uVar25 >> 8);
  bVar37 = (byte)((ulonglong)uVar25 >> 0x20);
  bVar35 = bVar37 + bVar36;
  bVar38 = bVar35 + bVar32;
  piVar39 = (int *)CONCAT31((int3)((ulonglong)uVar25 >> 0x28),bVar38);
  iVar40 = -0x14 - (((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data).
                   __klassIndex;
  iVar5 = -(uint)(CARRY1(bVar37,bVar36) || CARRY1(bVar35,bVar32));
  uVar27 = (uint)uVar25 | 0x3310671c;
  bVar36 = (byte)uVar27;
  bVar37 = (byte)((uint)extraout_ECX >> 8);
  bVar35 = bVar37 + bVar33;
  bVar29 = CARRY1(bVar37,bVar33) || CARRY1(bVar35,bVar36 < 0x67);
  pbVar41 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                             CONCAT11(bVar35 + (bVar36 < 0x67),(byte)extraout_ECX));
  bVar32 = (byte)(bVar36 + 0x99) < 0x67 || (byte)(bVar36 + 0x32) < bVar29;
  uVar42 = CONCAT31((int3)(uVar27 >> 8),(bVar36 + 0x32) - bVar29);
  bVar35 = *pbVar41;
  bVar36 = *pbVar41;
  *pbVar41 = bVar36 + bVar33 + bVar32;
  uVar27 = (uint)(CARRY1(bVar35,bVar33) || CARRY1(bVar36 + bVar33,bVar32));
  uVar28 = uVar42 + 0xe1b2ef99;
  bVar29 = uVar42 < 0x1e4d1067 || uVar28 < uVar27;
  iVar43 = uVar28 - uVar27;
  pbVar31 = (byte *)segment(in_DS,sVar34 + sVar30 + 0x1e);
  bVar32 = CARRY1(*pbVar31,bVar33) || CARRY1(*pbVar31 + bVar33,bVar29);
  *pbVar31 = *pbVar31 + bVar33 + bVar29;
  bVar36 = (byte)((uint)unaff_EBX >> 8);
  bVar35 = bVar36 + bVar38;
  bVar29 = CARRY1(bVar36,bVar38) || CARRY1(bVar35,bVar32);
  sVar34 = CONCAT11(bVar35 + bVar32,bVar2);
  *(undefined2 *)(&stack0xffffffe8 + iVar5 + iVar40 + 0x14) = in_DS;
  pbVar31 = (byte *)segment(in_DS,sVar34 + (short)unaff_EDI);
  bVar2 = *pbVar31;
  bVar35 = *pbVar31;
  *pbVar31 = bVar35 + bVar38 + bVar29;
  pcVar44 = (char *)segment(*(undefined2 *)(&stack0xffffffe8 + iVar5 + iVar40 + 0x14),
                           sVar34 + sVar30);
  *pcVar44 = *pcVar44 + (char)iVar43 + (CARRY1(bVar2,bVar38) || CARRY1(bVar35 + bVar38,bVar29));
  *piVar39 = *piVar39 + iVar43;
  *pbVar41 = *pbVar41 | (byte)extraout_ECX;
  *(undefined2 *)(&stack0xffffffec + iVar5 + iVar40 + 0x14) = in_CS;
  FastExitMediaState();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
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

