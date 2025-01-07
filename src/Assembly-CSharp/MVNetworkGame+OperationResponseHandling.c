
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
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_Notification) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
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
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
          pSVar3 = StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) || (pSVar3 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (pSVar3 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            pSVar3 = TM::TM__(pSVar3,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar1 = (this->fields).networkGame;
            cVar2 = '\0';
            unaff_ESI = (MVNetworkGame *)this;
            if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar1->fields).isPublished = 1;
          }
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              pUVar4 = (pMVar1->fields).OnPublishedPlanet;
              (*(pUVar4->fields)._._.invoke_impl)
                        ((pUVar4->fields)._._.method_code,pSVar3,(pUVar4->fields)._._.method);
            }
            iVar5 = func_?(0);
            cVar2 = '\0';
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
              this_04 = (WWWForm *)func_?();
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        (this_04,(MethodInfo *)0x0);
              iVar5 = func_?();
              cVar2 = '\0';
              unaff_ESI = (MVNetworkGame *)this;
              if ((iVar5 != 0) &&
                 (cVar2 = '\0', unaff_ESI = (MVNetworkGame *)this, this_04 != (WWWForm *)0x0)) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_04,StringLiteral_token,*(String **)(iVar5 + 0x24),(MethodInfo *)0x0
                          );
                iVar5 = func_?(0);
                cVar2 = '\0';
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar5 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_profile_id,*(int32_t *)(iVar5 + 0xc),
                             (MethodInfo *)0x0);
                  iVar5 = func_?(0);
                  cVar2 = '\0';
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar5 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_04,StringLiteral_planet_id,*(int32_t *)(iVar5 + 0x10),
                               (MethodInfo *)0x0);
                    iVar5 = func_?(0);
                    cVar2 = '\0';
                    unaff_ESI = (MVNetworkGame *)this;
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
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if ((unaff_ESI == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar7 == (Object *)0x0))
      goto code_?;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar8 < pIVar9;
      pIVar10 = TypeInfo__System__Int32;
      pMVar1 = unaff_ESI;
      unaff_EDI = unaff_EDI;
      if (pIVar8 == pIVar9) {
        piVar11 = (int32_t *)func_?(pOVar7);
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (unaff_ESI,*piVar11,(MethodInfo *)0x0);
        return;
      }
code_?:
      func_?(pOVar7,pIVar10);
      pSVar12 = extraout_ECX;
      goto code_?;
    }
    if (MVOperationCodes__Enum_SpawnVehicleWithDriver < (byte)(undefined1)opCode) {
      if (((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory) &&
         ((undefined1)opCode != MVOperationCodes__Enum_DeleteAvatarFromShopInventory)) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UploadBytes) {
          DataUploadManager::DataUploadManager_OnUploadBytes((MethodInfo *)0x0);
          return;
        }
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
      }
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((pMVar1->fields).OnMarketPlaceActionComplete ==
            (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        pMVar13 = (pMVar1->fields).OnMarketPlaceActionComplete;
        bVar14 = returnCode == 0;
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                  (pMVar1,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
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
        pEVar15 = (pMVar1->fields).ScreenshotUploaded;
        if (pEVar15 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)
                  func_?(TypeInfo__ScreenshotUploadedEventArgs);
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar15->fields)._._.invoke_impl)
                  ((pEVar15->fields)._._.method_code,this,this_02,(pEVar15->fields)._._.method);
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
    default:
      goto code_?;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pWVar16 = (pMVar1->fields).worldNetwork;
        cVar2 = '\0';
        if (pWVar16 != (WorldNetwork *)0x0) {
          pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
          cVar2 = '\0';
          if (pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                      (pMVar17,returnCode == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      unaff_ESI = (MVNetworkGame *)0x0;
      cVar2 = '\0';
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
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = _returnCode;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar18 == (MVLocalPlayer *)0x0) break;
        unaff_ESI = (MVNetworkGame *)(pMVar18->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        if ((unaff_ESI == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar7 == (Object *)0x0)) break;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar8 < pIVar9;
        pIVar10 = TypeInfo__System__Int32;
        pMVar1 = unaff_ESI;
        unaff_EDI = (MVNetworkGame *)returnValues;
        if (pIVar8 == pIVar9) {
          puVar19 = (undefined4 *)func_?();
          (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar19;
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar18 == (MVLocalPlayer *)0x0) break;
          if ((pMVar18->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar1 == (MVNetworkGame *)0x0) break;
          pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar18 == (MVLocalPlayer *)0x0) break;
          pAVar20 = (pMVar18->fields)._.OnGoldAmountChange;
          goto code_?;
        }
        goto code_?;
      }
      cVar2 = (unaff_ESI->klass->_1).naturalAligment <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      pMVar1 = unaff_ESI;
      unaff_EDI = (MVNetworkGame *)returnValues;
      if ((!(bool)cVar2) &&
         (pDVar21 = (Dictionary_2_System_Object_System_Object___Class *)
                   (unaff_ESI->klass->_1).typeHierarchy
                   [(
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment - 1],
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
      pMVar13 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      bVar14 = returnCode == -1;
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
      cVar2 = '\0';
      unaff_ESI = pMVar1;
      if ((pMVar1 == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar7 == (Object *)0x0)) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar8 < pIVar9;
      pIVar10 = TypeInfo__System__Int32;
      if (pIVar8 != pIVar9) goto code_?;
      piVar11 = (int32_t *)func_?();
      iVar22 = *piVar11;
      cVar2 = '\0';
      if (unaff_EDI == (MVNetworkGame *)0x0) break;
      pIVar8 = (unaff_EDI->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar8 < pIVar9;
      pIVar10 = TypeInfo__System__Int32;
      if (pIVar8 == pIVar9) {
        piVar11 = (int32_t *)func_?(unaff_EDI);
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar1,(int)returnCode,*piVar11,iVar22,(MethodInfo *)0x0);
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
      pAVar20 = (pMVar1->fields).OnActiveAvatarSet;
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
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar13 = (pMVar1->fields).OnMarketPlaceActionComplete;
          if (pMVar13 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
            return;
          }
          bVar14 = returnCode == 0;
code_?:
          (*(pMVar13->fields)._._.invoke_impl)
                    ((pMVar13->fields)._._.method_code,bVar14,(pMVar13->fields)._._.method);
          return;
        }
        break;
      }
      cVar2 = '\0';
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar7 == (Object *)0x0) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar8 < pIVar9;
      pIVar10 = TypeInfo__System__Int32;
      unaff_EDI = _returnCode;
      if (pIVar8 == pIVar9) {
        piVar11 = (int32_t *)func_?(pOVar7);
        iVar22 = *piVar11;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar7 == (Object *)0x0) break;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar8 < pIVar9;
        pIVar10 = TypeInfo__System__Int32;
        unaff_EDI = _returnCode;
        if (pIVar8 == pIVar9) {
          puVar19 = (undefined4 *)func_?(pOVar7);
          unaff_ESI = (MVNetworkGame *)*puVar19;
          iVar5 = func_?(0);
          cVar2 = '\0';
          if (iVar5 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,iVar5)
          ;
          cVar2 = '\0';
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,iVar22,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar13 = (pMVar1->fields).OnMarketPlaceActionComplete;
        if (pMVar13 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar14 = returnCode == 0;
        goto code_?;
      }
      break;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar23 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
        if (pAVar23 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar23->fields)._._.invoke_impl)
                    ((pAVar23->fields)._._.method_code,returnCode == 0,(pAVar23->fields)._._.method)
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
        pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
        cVar2 = '\0';
        if (pMVar24 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                    (pMVar24,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
        cVar2 = '\0';
        if (pMVar24 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                    (pMVar24,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
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
          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          cVar2 = '\0';
          if (pMVar18 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar18,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        cVar2 = '\0';
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
        pMVar25 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar25 == (MVNetworkGame *)0x0) goto code_?;
        pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar25,(MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar18 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar18->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((unaff_EDI == (MVNetworkGame *)0x0) ||
           (cVar2 = '\0', unaff_ESI = (MVNetworkGame *)returnValues, pOVar7 == (Object *)0x0))
        goto code_?;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = pIVar8 < pIVar9;
        pIVar10 = TypeInfo__System__Int32;
        if (pIVar8 != pIVar9) goto code_?;
        puVar19 = (undefined4 *)func_?();
        (unaff_EDI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar19;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar18 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar18->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar18 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar18 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar20 = (pMVar18->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar24 = (pMVar1->fields)._PlayerController_k__BackingField;
            cVar2 = '\0';
            if (pMVar24 != (MVLocalObjectController *)0x0) {
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
        pAVar20 = *(Action **)(iVar5 + 0x10);
      }
code_?:
      cVar2 = '\0';
      if (pAVar20 != (Action *)0x0) {
code_?:
        (*(pAVar20->fields)._._.invoke_impl)
                  ((pAVar20->fields)._._.method_code,(pAVar20->fields)._._.method);
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_SetFirstTimeEvent < (byte)(undefined1)opCode) {
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
      if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar20 = (pMVar1->fields).OnAccessoryUnequipped;
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
      pMVar25 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar25 = pMVar1;
        }
        cVar2 = '\0';
        pSVar12 = TypeInfo__System__String;
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
        (*(code *)(unaff_ESI->fields).ReceivedAvatarBodiesFromQuery)
                  ((unaff_ESI->fields).gameDataQueryManager);
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition) {
code_?:
      cVar2 = '\0';
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if (pOVar7 == (Object *)0x0) goto code_?;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      cVar2 = pIVar8 < pIVar9;
      pIVar10 = TypeInfo__System__Int32;
      pMVar1 = unaff_ESI;
      unaff_EDI = unaff_EDI;
      if (pIVar8 == pIVar9) {
        piVar11 = (int32_t *)func_?(pOVar7);
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pWVar16 = (pMVar1->fields).worldNetwork;
          cVar2 = '\0';
          if (pWVar16 != (WorldNetwork *)0x0) {
            pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
            cVar2 = '\0';
            if (pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar17,returnCode == 0,*piVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    cVar2 = '\0';
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
    cVar2 = '\0';
    unaff_ESI = pMVar1;
    if (pOVar7 == (Object *)0x0) goto code_?;
    pIVar8 = (pOVar7->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Byte->_0).element_class;
    cVar2 = pIVar8 < pIVar9;
    pIVar10 = (Int32__Class *)TypeInfo__System__Byte;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (pIVar8 != pIVar9) goto code_?;
    puVar26 = (undefined1 *)func_?();
    uVar27 = *puVar26;
    cVar2 = '\0';
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar8 = (pMVar1->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    cVar2 = pIVar8 < pIVar9;
    pSVar12 = (String__Class *)TypeInfo__System__Int32;
    if (pIVar8 == pIVar9) {
      pFVar28 = (FirstTimeEvent__Enum *)func_?(pMVar1);
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar28,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar27),(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?(pMVar1,pSVar12);
code_?:
    func_?();
    pIVar10 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar10);
    unaff_ESI = pMVar1;
  }
code_?:
  func_?();
  pcVar29 = (char *)((int)&unaff_ESI[0x2b93e].fields._GameCoinManager_k__BackingField +
                   in_GS_OFFSET + 2);
  *pcVar29 = *pcVar29 + extraout_CH + cVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)returnValues)();
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

