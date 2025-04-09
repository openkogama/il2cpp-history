
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
    func_?(&TypeInfo__ScreenshotUploadedEventArgs);
    func_?(&TypeInfo__System__String);
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
    func_?(&StringLiteral_s_gamePublishedURL_is_null_or_em);
    func_?(&StringLiteral_planet_id);
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
          cVar2 = '\0';
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
            cVar2 = '\0';
            if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar1->fields).isPublished = 1;
          }
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          if (pMVar1 != (MVNetworkGame *)0x0) {
            if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              pUVar4 = (pMVar1->fields).OnPublishedPlanet;
              (*(pUVar4->fields)._._.invoke_impl)
                        ((pUVar4->fields)._._.method_code,pSVar3,(pUVar4->fields)._._.method);
            }
            iVar5 = func_?(0);
            cVar2 = '\0';
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
              this_04 = (WWWForm *)func_?();
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        (this_04,(MethodInfo *)0x0);
              in_stack_7 = (Enum__Class *)0x0;
              iVar5 = func_?();
              cVar2 = '\0';
              if ((iVar5 != 0) && (cVar2 = '\0', this_04 != (WWWForm *)0x0)) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_04,StringLiteral_token,*(String **)(iVar5 + 0x24),(MethodInfo *)0x0
                          );
                iVar5 = func_?(0);
                cVar2 = '\0';
                if (iVar5 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_profile_id,*(int32_t *)(iVar5 + 0xc),
                             (MethodInfo *)0x0);
                  iVar5 = func_?(0);
                  cVar2 = '\0';
                  if (iVar5 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_04,StringLiteral_planet_id,*(int32_t *)(iVar5 + 0x10),
                               (MethodInfo *)0x0);
                    iVar5 = func_?(0);
                    cVar2 = '\0';
                    if (iVar5 != 0) {
                      pSVar3 = *(String **)(iVar5 + 0x3c);
                      this_05 = (PostRequest *)func_?(TypeInfo__PostRequest);
                      PostRequest::PostRequest__ctor
                                (this_05,pSVar3,this_04,
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
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
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
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if ((pMVar1 == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar8 == (Object *)0x0))
      goto code_?;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar9 < pIVar10;
      pIVar11 = TypeInfo__System__Int32;
      unaff_EDI = unaff_EDI;
      if (pIVar9 == pIVar10) {
        piVar12 = (int32_t *)func_?(pOVar8);
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (pMVar1,*piVar12,(MethodInfo *)0x0);
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
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if (pOVar8 == (Object *)0x0) goto code_?;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar9 < pIVar10;
      pIVar11 = TypeInfo__System__Int32;
      pMVar1 = unaff_ESI;
      unaff_EDI = unaff_EDI;
      if (pIVar9 == pIVar10) {
        piVar12 = (int32_t *)func_?(pOVar8);
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pWVar13 = (pMVar1->fields).worldNetwork;
          cVar2 = '\0';
          if (pWVar13 != (WorldNetwork *)0x0) {
            pMVar14 = (pWVar13->fields)._.worldObjectClientManager;
            cVar2 = '\0';
            if (pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0) {
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
      func_?(pOVar8,pIVar11);
      pSVar15 = extraout_ECX;
      goto code_?;
    }
    switch(opCode & MVOperationCodes__Enum_Join) {
    case MVOperationCodes__Enum_LockHierarchy:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pEVar16 = (pMVar1->fields).ScreenshotUploaded;
        if (pEVar16 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)
                  func_?(TypeInfo__ScreenshotUploadedEventArgs);
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar16->fields)._._.invoke_impl)
                  ((pEVar16->fields)._._.method_code,this,this_02,(pEVar16->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
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
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar13 = (pMVar1->fields).worldNetwork;
        cVar2 = '\0';
        if (pWVar13 != (WorldNetwork *)0x0) {
          pMVar14 = (pWVar13->fields)._.worldObjectClientManager;
          cVar2 = '\0';
          if (pMVar14 != (MVWorldObjectClientManagerNetwork *)0x0) {
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
      purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      if (bVar6 == 0) {
code_?:
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar17 == (MVLocalPlayer *)0x0) break;
        pMVar1 = (MVNetworkGame *)(pMVar17->fields)._._UserProfileData_k__BackingField;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        if ((pMVar1 == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar8 == (Object *)0x0)) break;
        pIVar9 = (pOVar8->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar9 < pIVar10;
        pIVar11 = TypeInfo__System__Int32;
        unaff_EDI = returnValues;
        if (pIVar9 == pIVar10) {
          puVar18 = (undefined4 *)func_?();
          (pMVar1->fields).ReceivedAvatarBodiesFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar18;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar17 == (MVLocalPlayer *)0x0) break;
          if ((pMVar17->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar17 == (MVLocalPlayer *)0x0) break;
          pAVar19 = (pMVar17->fields)._.OnGoldAmountChange;
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
      bVar20 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      cVar2 = (purchaseResponseData->klass->_1).naturalAligment < bVar20;
      unaff_EDI = returnValues;
      if ((!(bool)cVar2) &&
         (pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                    (purchaseResponseData->klass->_1).typeHierarchy[bVar20 - 1],
         cVar2 = pDVar21 < 
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
         , pDVar21 ==
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar22 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      bVar23 = returnCode == -1;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      unaff_EDI = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      in_stack_7 =
           (Enum__Class *)
           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
      ;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if ((pMVar1 == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar8 == (Object *)0x0)) break;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar9 < pIVar10;
      pIVar11 = TypeInfo__System__Int32;
      if (pIVar9 != pIVar10) goto code_?;
      piVar12 = (int32_t *)func_?();
      iVar24 = *piVar12;
      cVar2 = '\0';
      if (unaff_EDI == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pIVar9 = (unaff_EDI->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar9 < pIVar10;
      pIVar11 = TypeInfo__System__Int32;
      if (pIVar9 == pIVar10) {
        piVar12 = (int32_t *)func_?(unaff_EDI);
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar1,(int)returnCode,*piVar12,iVar24,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar2 = '\0';
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar2 = '\0';
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pAVar19 = (pMVar1->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
        if (pMVar22 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar23 = returnCode == 0;
        goto code_?;
      }
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if (pOVar8 == (Object *)0x0) break;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar9 < pIVar10;
      pIVar11 = TypeInfo__System__Int32;
      unaff_EDI = _returnCode;
      if (pIVar9 == pIVar10) {
        piVar12 = (int32_t *)func_?(pOVar8);
        iVar24 = *piVar12;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        if (pOVar8 == (Object *)0x0) break;
        pIVar9 = (pOVar8->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar9 < pIVar10;
        pIVar11 = TypeInfo__System__Int32;
        unaff_EDI = _returnCode;
        if (pIVar9 == pIVar10) {
          piVar12 = (int32_t *)func_?(pOVar8);
          shopInventoryID = *piVar12;
          iVar5 = func_?(0);
          cVar2 = '\0';
          if (iVar5 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,iVar5)
          ;
          cVar2 = '\0';
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,iVar24,shopInventoryID,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
        if (pMVar22 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar23 = returnCode == 0;
        goto code_?;
      }
      break;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar25 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
        if (pAVar25 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar25->fields)._._.invoke_impl)
                    ((pAVar25->fields)._._.method_code,returnCode == 0,(pAVar25->fields)._._.method)
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
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar26 = (pMVar1->fields)._PlayerController_k__BackingField;
        cVar2 = '\0';
        if (pMVar26 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                    (pMVar26,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar26 = (pMVar1->fields)._PlayerController_k__BackingField;
        cVar2 = '\0';
        if (pMVar26 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                    (pMVar26,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    default:
      if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
      goto code_?;
code_?:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((pMVar1->fields).OnMarketPlaceActionComplete ==
            (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        pMVar22 = (pMVar1->fields).OnMarketPlaceActionComplete;
        bVar23 = returnCode == 0;
code_?:
        (*(((Action_1_Boolean___Fields *)&pMVar22->fields)->_)._.invoke_impl)
                  ((((Action_1_Boolean___Fields *)&pMVar22->fields)->_)._.method_code,bVar23,
                   (((Action_1_Boolean___Fields *)&pMVar22->fields)->_)._.method);
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
          pMVar17 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar17 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar17,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        cVar2 = '\0';
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar6 == 0) {
          return;
        }
        pMVar27 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_7 = (Enum__Class *)0x0;
        pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar27,(MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Byte_System_Object_ *)
                    (pMVar17->fields)._._UserProfileData_k__BackingField;
        in_stack_7 = (Enum__Class *)returnValues;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        if ((unaff_EDI == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
           (cVar2 = '\0', pOVar8 == (Object *)0x0)) goto code_?;
        pIVar9 = (pOVar8->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar9 < pIVar10;
        pIVar11 = TypeInfo__System__Int32;
        if (pIVar9 != pIVar10) goto code_?;
        piVar12 = (int32_t *)func_?();
        (unaff_EDI->fields)._count = *piVar12;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar17->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar17 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar17 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar19 = (pMVar17->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar26 = (pMVar1->fields)._PlayerController_k__BackingField;
            cVar2 = '\0';
            if (pMVar26 != (MVLocalObjectController *)0x0) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar26,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
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
            cVar2 = '\0';
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
        cVar2 = '\0';
        if (iVar5 == 0) goto code_?;
        iVar5 = func_?(4,TypeInfo__IEditModeUI,iVar5);
        cVar2 = '\0';
        if (iVar5 == 0) goto code_?;
        if (*(int *)(iVar5 + 0x10) == 0) {
          return;
        }
        iVar5 = func_?(0);
        cVar2 = '\0';
        if (iVar5 == 0) goto code_?;
        iVar5 = func_?(4,TypeInfo__IEditModeUI,iVar5);
        cVar2 = '\0';
        if (iVar5 == 0) goto code_?;
        pAVar19 = *(Action **)(iVar5 + 0x10);
      }
code_?:
      cVar2 = '\0';
      if (pAVar19 != (Action *)0x0) {
code_?:
        (*(pAVar19->fields)._._.invoke_impl)
                  ((pAVar19->fields)._._.method_code,(pAVar19->fields)._._.method);
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar19 = (pMVar1->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        cVar2 = '\0';
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pMVar1 = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xcf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pMVar27 = (MVNetworkGame *)0x0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
            pMVar27 = pMVar1;
          }
          cVar2 = '\0';
          pSVar15 = TypeInfo__System__String;
          if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
        }
        this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               ((String *)pMVar27,
                                System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                               );
        pAVar28 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        if (pAVar28 == (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
          return;
        }
        cVar2 = '\0';
        if (this_01 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(pAVar28->fields)._._.invoke_impl)((pAVar28->fields)._._.method_code);
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
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pMVar1 = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xf5,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
      }
      pMVar27 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar27 = pMVar1;
        }
        cVar2 = '\0';
        pSVar15 = TypeInfo__System__String;
        if (pMVar27 == (MVNetworkGame *)0x0) goto code_?;
      }
      Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                ((String *)pMVar27,
                 MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar29 = (pMVar1->fields).ReceivedPlanetOwnershipData;
        if (pAVar29 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          return;
        }
        (*(pAVar29->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) {
      if ((undefined1)opCode == MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold) {
        if (returnCode != -1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    cVar2 = '\0';
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar1 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    cVar2 = '\0';
    if (pOVar8 == (Object *)0x0) goto code_?;
    pIVar9 = (pOVar8->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Byte->_0).element_class;
    cVar2 = pIVar9 < pIVar10;
    pIVar11 = (Int32__Class *)TypeInfo__System__Byte;
    unaff_EDI = returnValues;
    if (pIVar9 != pIVar10) goto code_?;
    puVar30 = (undefined1 *)func_?();
    uVar31 = *puVar30;
    cVar2 = '\0';
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar9 = (pMVar1->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    cVar2 = pIVar9 < pIVar10;
    pSVar15 = (String__Class *)TypeInfo__System__Int32;
    if (pIVar9 == pIVar10) {
      pFVar32 = (FirstTimeEvent__Enum *)func_?(pMVar1);
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar32,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar31),(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?(pMVar1,pSVar15);
code_?:
    in_stack_7 = (Enum__Class *)&UNK_?;
    func_?();
    pIVar11 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar11);
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(0x65);
  cVar34 = (*pcVar33)();
  pcVar35 = (char *)((int)&in_stack_7[-0x1d8c1e].vtable.ToString_2.methodPtr + 1);
  *pcVar35 = *pcVar35 + cVar34 + cVar2;
  pcVar33 = (code *)swi(0x65);
  (*pcVar33)();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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

