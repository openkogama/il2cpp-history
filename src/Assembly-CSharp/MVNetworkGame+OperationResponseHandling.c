
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
    func_?();
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
    func_?();
    func_?(&::StringLiteral__);
    in_stack_1 = &StringLiteral_Failed_to_add_item_to_shop;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = unaff_ESI;
  pMVar3 = unaff_ESI;
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_CloneTempWorldObjectWithOriginalReference) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
      if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
        if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = pMVar4 == (MVNetworkGame *)0x0;
          if (!(bool)uVar8) {
            MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                      (pMVar4,returnValues,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
          in_stack_1 = (String **)StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) ||
              (in_stack_1 = (String **)StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (in_stack_1 = (String **)StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            TM::TM__((String *)in_stack_1,(MethodInfo *)0x0);
          }
          else {
            in_stack_1 = (String **)StringLiteral_Successfully_published_planet;
            TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar4 = (this->fields).networkGame;
            cVar5 = '\0';
            cVar6 = '\0';
            cVar7 = (int)pMVar4 < 0;
            uVar8 = 1;
            pMVar3 = (MVNetworkGame *)this;
            pMVar2 = unaff_ESI;
            if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
            (pMVar4->fields).isPublished = 1;
          }
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = pMVar4 == (MVNetworkGame *)0x0;
          pMVar3 = (MVNetworkGame *)this;
          pMVar2 = unaff_ESI;
          if (!(bool)uVar8) {
            if ((pMVar4->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
              pUVar9 = (pMVar4->fields).OnPublishedPlanet;
              in_stack_1 = (String **)&UNK_?;
              (*(pUVar9->fields)._._.invoke_impl)((pUVar9->fields)._._.method_code);
            }
            pMVar2 = (MVNetworkGame *)0x0;
            iVar10 = func_?();
            cVar5 = '\0';
            cVar6 = '\0';
            cVar7 = iVar10 < 0;
            uVar8 = iVar10 == 0;
            pMVar3 = (MVNetworkGame *)this;
            if (!(bool)uVar8) {
              bVar11 = mscorlib.dll::System::String::String_IsNullOrEmpty
                                 (*(String **)(iVar10 + 0x44),(MethodInfo *)0x0);
              if (bVar11 != 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                          ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,
                           (MethodInfo *)0x0);
                return;
              }
              unaff_EDI = (MVNetworkGame *)func_?();
              pMVar2 = (MVNetworkGame *)&UNK_?;
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
              in_stack_12 = (Enum__Class *)0x0;
              iVar10 = func_?();
              cVar5 = '\0';
              cVar6 = '\0';
              cVar7 = iVar10 < 0;
              uVar8 = iVar10 == 0;
              pMVar3 = (MVNetworkGame *)this;
              if (!(bool)uVar8) {
                cVar5 = '\0';
                cVar6 = '\0';
                cVar7 = (int)unaff_EDI < 0;
                uVar8 = unaff_EDI == (MVNetworkGame *)0x0;
                pMVar3 = (MVNetworkGame *)this;
                if (!(bool)uVar8) {
                  in_stack_1 = (String **)&UNK_?;
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                            ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar10 + 0x24),
                             (MethodInfo *)0x0);
                  pMVar2 = (MVNetworkGame *)&UNK_?;
                  iVar10 = func_?();
                  cVar5 = '\0';
                  cVar6 = '\0';
                  cVar7 = iVar10 < 0;
                  uVar8 = iVar10 == 0;
                  pMVar3 = (MVNetworkGame *)this;
                  if (!(bool)uVar8) {
                    in_stack_1 = (String **)&UNK_?;
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              ((WWWForm *)unaff_EDI,StringLiteral_profile_id,
                               *(int32_t *)(iVar10 + 0xc),(MethodInfo *)0x0);
                    pMVar2 = (MVNetworkGame *)&UNK_?;
                    iVar10 = func_?();
                    cVar5 = '\0';
                    cVar6 = '\0';
                    cVar7 = iVar10 < 0;
                    uVar8 = iVar10 == 0;
                    pMVar3 = (MVNetworkGame *)this;
                    if (!(bool)uVar8) {
                      in_stack_1 = (String **)&UNK_?;
                      UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::
                      WWWForm_AddField_2((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                                         *(int32_t *)(iVar10 + 0x10),(MethodInfo *)0x0);
                      pMVar2 = (MVNetworkGame *)&UNK_?;
                      iVar10 = func_?();
                      cVar5 = '\0';
                      cVar6 = '\0';
                      cVar7 = iVar10 < 0;
                      uVar8 = iVar10 == 0;
                      pMVar3 = (MVNetworkGame *)this;
                      if (!(bool)uVar8) {
                        pSVar13 = *(String **)(iVar10 + 0x44);
                        this_04 = (PostRequest *)func_?();
                        PostRequest::PostRequest__ctor
                                  (this_04,pSVar13,(WWWForm *)unaff_EDI,
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
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = pMVar4 == (MVNetworkGame *)0x0;
          if (!(bool)uVar8) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                      (pMVar4,(int)returnCode,(MethodInfo *)0x0);
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
      pMVar3 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      in_stack_1 = (String **)0x0;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar3 < 0;
      uVar8 = 1;
      pMVar2 = unaff_ESI;
      if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pOVar14 < 0;
      uVar8 = 1;
      if (pOVar14 == (Object *)0x0) goto code_?;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar5 = pIVar15 < pIVar16;
      cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = false;
      unaff_ESI = pMVar3;
      if (pIVar15 == pIVar16) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (pMVar3,*piVar17,(MethodInfo *)0x0);
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
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      in_stack_1 = (String **)0x0;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pOVar14 < 0;
      uVar8 = 1;
      if (pOVar14 == (Object *)0x0) goto code_?;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar5 = pIVar15 < pIVar16;
      cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = false;
      unaff_ESI = unaff_ESI;
      if (pIVar15 == pIVar16) {
        pMVar2 = (MVNetworkGame *)&UNK_?;
        piVar17 = (int32_t *)func_?();
        pMVar4 = (this->fields).networkGame;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = pMVar4 == (MVNetworkGame *)0x0;
        if (!(bool)uVar8) {
          pWVar18 = (pMVar4->fields).worldNetwork;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pWVar18 < 0;
          uVar8 = pWVar18 == (WorldNetwork *)0x0;
          if (!(bool)uVar8) {
            pMVar19 = (pWVar18->fields)._.worldObjectClientManager;
            cVar5 = '\0';
            cVar6 = '\0';
            cVar7 = (int)pMVar19 < 0;
            uVar8 = pMVar19 == (MVWorldObjectClientManagerNetwork *)0x0;
            if (!(bool)uVar8) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar19,returnCode == 0,*piVar17,(MethodInfo *)0x0);
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
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar4,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      unaff_EBX = (MVNetworkGame *)this;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pEVar20 = (pMVar4->fields).ScreenshotUploaded;
        if (pEVar20 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        this_02 = (ScreenshotUploadedEventArgs *)
                  func_?(TypeInfo__ScreenshotUploadedEventArgs);
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar20->fields)._._.invoke_impl)
                  ((pEVar20->fields)._._.method_code,this,this_02,(pEVar20->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                  (pMVar4,returnValues,(MethodInfo *)0x0);
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
      pSVar13 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar13,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar13,(MethodInfo *)0x0);
      return;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        pWVar18 = (pMVar4->fields).worldNetwork;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pWVar18 < 0;
        uVar8 = pWVar18 == (WorldNetwork *)0x0;
        if (!(bool)uVar8) {
          pMVar19 = (pWVar18->fields)._.worldObjectClientManager;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar19 < 0;
          uVar8 = pMVar19 == (MVWorldObjectClientManagerNetwork *)0x0;
          if (!(bool)uVar8) {
            MVWorldObjectClientManagerNetwork::
            MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                      (pMVar19,returnCode == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      purchaseResponseData = (MVNetworkGame *)0x0;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      pMVar3 = purchaseResponseData;
      unaff_EDI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      in_stack_1 = (String **)0x0;
      bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__ContainsKey
                         (returnValues,0x5f,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                         );
      pMVar2 = unaff_ESI;
      if (bVar11 == 0) {
code_?:
        pMVar4 = (this->fields).networkGame;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = purchaseResponseData;
        if (pMVar4 == (MVNetworkGame *)0x0) break;
        in_stack_1 = (String **)&UNK_?;
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar4,(int)returnCode,
                   (Dictionary_2_System_Object_System_Object_ *)purchaseResponseData,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = _returnCode;
        pMVar2 = purchaseResponseData;
        if (pMVar4 == (MVNetworkGame *)0x0) break;
        pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar21 < 0;
        uVar8 = 1;
        pMVar3 = _returnCode;
        pMVar2 = purchaseResponseData;
        if (pMVar21 == (MVLocalPlayer *)0x0) break;
        opCode = (MVOperationCodes__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        unaff_ESI = (MVNetworkGame *)(pMVar21->fields)._._UserProfileData_k__BackingField;
        this = (MVNetworkGame_OperationResponseHandling *)0x82;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)unaff_ESI < 0;
        uVar8 = 1;
        pMVar3 = unaff_ESI;
        pMVar2 = purchaseResponseData;
        if (unaff_ESI == (MVNetworkGame *)0x0) break;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pOVar14 < 0;
        uVar8 = 1;
        if (pOVar14 == (Object *)0x0) break;
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        cVar5 = pIVar15 < pIVar16;
        cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
        cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
        uVar8 = false;
        if (pIVar15 == pIVar16) {
          puVar22 = (undefined4 *)func_?();
          (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
               (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar22;
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = 1;
          pMVar2 = purchaseResponseData;
          if (pMVar4 == (MVNetworkGame *)0x0) break;
          pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar21 < 0;
          uVar8 = 1;
          pMVar2 = purchaseResponseData;
          if (pMVar21 == (MVLocalPlayer *)0x0) break;
          if ((pMVar21->fields)._.OnGoldAmountChange == (Action *)0x0) {
            return;
          }
          in_stack_1 = (String **)&UNK_?;
          pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = 1;
          pMVar2 = purchaseResponseData;
          if (pMVar4 == (MVNetworkGame *)0x0) break;
          in_stack_1 = (String **)&UNK_?;
          pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar21 < 0;
          uVar8 = 1;
          pMVar2 = purchaseResponseData;
          if (pMVar21 == (MVLocalPlayer *)0x0) break;
          pAVar23 = (pMVar21->fields)._.OnGoldAmountChange;
          goto code_?;
        }
        goto code_?;
      }
      pMVar2 = (MVNetworkGame *)0x5f;
      purchaseResponseData =
           (MVNetworkGame *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
           Dictionary_2_System_Byte_System_Object__get_Item
                     (returnValues,0x5f,
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                     );
      if (purchaseResponseData == (MVNetworkGame *)0x0) goto code_?;
      unaff_EBX = (MVNetworkGame *)purchaseResponseData->klass;
      bVar24 = *(byte *)&(unaff_EBX->fields).worldNetwork;
      bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      cVar5 = bVar24 < bVar25;
      cVar6 = SBORROW1(bVar24,bVar25);
      cVar7 = (char)(bVar24 - bVar25) < '\0';
      uVar8 = bVar24 == bVar25;
      unaff_ESI = purchaseResponseData;
      if (!(bool)cVar5) {
        pDVar26 = *(Dictionary_2_System_Object_System_Object___Class **)
                   ((unaff_EBX->fields)._MarketPlaceLevel_k__BackingField + -4 +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment * 4);
        cVar5 = pDVar26 < 
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        cVar6 = SBORROW4((int)pDVar26,
                          (int)
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
        cVar7 = (int)pDVar26 -
                 (int)
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 < 0;
        uVar8 = 0;
        if (pDVar26 ==
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
        goto code_?;
      }
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if ((pMVar4->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar27 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar4->fields).OnItemAddedToWorld;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      unaff_EDI = (MVNetworkGame *)this;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      in_stack_1 = (String **)_returnCode;
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
      unaff_ESI = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      unaff_EBX = _returnCode;
      pMVar3 = (MVNetworkGame *)returnValues;
      opCode = (MVOperationCodes__Enum)unaff_ESI;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      unaff_EDI = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      in_stack_12 =
           (Enum__Class *)
           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
      ;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)unaff_ESI < 0;
      uVar8 = 1;
      pMVar3 = unaff_ESI;
      pMVar2 = (MVNetworkGame *)returnValues;
      if (unaff_ESI == (MVNetworkGame *)0x0) break;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pOVar14 < 0;
      uVar8 = 1;
      pMVar2 = (MVNetworkGame *)returnValues;
      if (pOVar14 == (Object *)0x0) break;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar5 = pIVar15 < pIVar16;
      cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = pIVar15 == pIVar16;
      if (!(bool)uVar8) goto code_?;
      this = (MVNetworkGame_OperationResponseHandling *)&UNK_?;
      pMVar28 = (MVOperationCodes__Enum *)func_?();
      opCode = *pMVar28;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)unaff_EDI < 0;
      uVar8 = 1;
      pMVar2 = (MVNetworkGame *)returnValues;
      if (unaff_EDI == (MVNetworkGame *)0x0) break;
      pIVar15 = (Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar5 = pIVar15 < pIVar16;
      cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = 0;
      if (pIVar15 == pIVar16) {
        piVar17 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (unaff_ESI,(int)returnCode,*piVar17,opCode,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_SetActiveAvatar:
      in_stack_1 = (String **)&UNK_?;
      purchaseResponseData = unaff_ESI;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      pMVar2 = purchaseResponseData;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if ((pMVar4->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      pMVar2 = purchaseResponseData;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      pAVar23 = (pMVar4->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      unaff_EDI = _returnCode;
      if (returnCode != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        in_stack_1 = (String **)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
        pMVar4 = (this->fields).networkGame;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = unaff_ESI;
        if (pMVar4 == (MVNetworkGame *)0x0) break;
        pMVar27 = (pMVar4->fields).OnMarketPlaceActionComplete;
        goto joined_?;
      }
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      pMVar3 = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      in_stack_1 = (String **)0x0;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pOVar14 < 0;
      uVar8 = 1;
      pMVar3 = (MVNetworkGame *)returnValues;
      pMVar2 = unaff_ESI;
      if (pOVar14 == (Object *)0x0) break;
      pIVar15 = (pOVar14->klass->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar5 = pIVar15 < pIVar16;
      cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = false;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pIVar15 == pIVar16) {
        pMVar2 = (MVNetworkGame *)&UNK_?;
        puVar22 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar22;
        in_stack_1 =
             (String **)
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
        ;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pOVar14 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        if (pOVar14 == (Object *)0x0) break;
        pIVar15 = (pOVar14->klass->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        cVar5 = pIVar15 < pIVar16;
        cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
        cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
        uVar8 = false;
        if (pIVar15 == pIVar16) {
          puVar22 = (undefined4 *)func_?();
          pMVar2 = (MVNetworkGame *)0x0;
          unaff_ESI = (MVNetworkGame *)*puVar22;
          iVar10 = func_?();
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = iVar10 < 0;
          uVar8 = 1;
          pMVar3 = unaff_ESI;
          if (iVar10 == 0) break;
          pMVar2 = (MVNetworkGame *)TypeInfo__IEditModeUI;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)this_03 < 0;
          uVar8 = 1;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          in_stack_1 = (String **)&UNK_?;
          pMVar2 = unaff_ESI;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      pMVar27 = (pMVar4->fields).OnMarketPlaceActionComplete;
joined_?:
      if (pMVar27 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar27->fields)->_)._.invoke_impl)();
      return;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        pAVar29 = (pMVar4->fields).OnSetAvatarAccessoryResponse;
        if (pAVar29 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar29->fields)._._.invoke_impl)
                    ((pAVar29->fields)._._.method_code,returnCode == 0,(pAVar29->fields)._._.method)
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
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        pMVar30 = (pMVar4->fields)._PlayerController_k__BackingField;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar30 < 0;
        uVar8 = pMVar30 == (MVLocalObjectController *)0x0;
        if (!(bool)uVar8) {
          MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                    (pMVar30,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = pMVar4 == (MVNetworkGame *)0x0;
      if (!(bool)uVar8) {
        pMVar30 = (pMVar4->fields)._PlayerController_k__BackingField;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar30 < 0;
        uVar8 = pMVar30 == (MVLocalObjectController *)0x0;
        if (!(bool)uVar8) {
          MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                    (pMVar30,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    default:
      if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
      goto code_?;
code_?:
      pMVar4 = (this->fields).networkGame;
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if ((pMVar4->fields).OnMarketPlaceActionComplete ==
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      pMVar27 = (pMVar4->fields).OnMarketPlaceActionComplete;
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
          in_stack_1 = (String **)&UNK_?;
          pMVar21 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar21 < 0;
          uVar8 = pMVar21 == (MVLocalPlayer *)0x0;
          if (!(bool)uVar8) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar21,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)returnValues < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        in_stack_1 = (String **)0x0;
        bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar11 == 0) {
          return;
        }
        pMVar2 = (MVNetworkGame *)&UNK_?;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_12 = (Enum__Class *)0x0;
        purchaseResponseData = (MVNetworkGame *)&UNK_?;
        pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar21 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        pMVar2 = purchaseResponseData;
        if (pMVar21 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar21->fields)._._UserProfileData_k__BackingField;
        in_stack_12 = (Enum__Class *)returnValues;
        pMVar31 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)unaff_EDI < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        pMVar2 = purchaseResponseData;
        if (unaff_EDI == (MVNetworkGame *)0x0) goto code_?;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar31 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        if (pMVar31 == (MVNetworkGame_OperationResponseHandling *)0x0) goto code_?;
        pIVar15 = (((Object__Class *)pMVar31->klass)->_0).element_class;
        pIVar16 = (TypeInfo__System__Int32->_0).element_class;
        cVar5 = pIVar15 < pIVar16;
        cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
        cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
        uVar8 = pIVar15 == pIVar16;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (!(bool)uVar8) goto code_?;
        p_Var21 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data = *p_Var21;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        this = pMVar31;
        pMVar2 = purchaseResponseData;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar21 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        pMVar2 = purchaseResponseData;
        if (pMVar21 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar21->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        in_stack_1 = (String **)&UNK_?;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar4 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        pMVar2 = purchaseResponseData;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_1 = (String **)&UNK_?;
        pMVar21 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar21 < 0;
        uVar8 = 1;
        pMVar3 = (MVNetworkGame *)returnValues;
        pMVar2 = purchaseResponseData;
        if (pMVar21 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar23 = (pMVar21->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = pMVar4 == (MVNetworkGame *)0x0;
          if (!(bool)uVar8) {
            pMVar30 = (pMVar4->fields)._PlayerController_k__BackingField;
            cVar5 = '\0';
            cVar6 = '\0';
            cVar7 = (int)pMVar30 < 0;
            uVar8 = pMVar30 == (MVLocalObjectController *)0x0;
            if (!(bool)uVar8) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar30,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = pMVar4 == (MVNetworkGame *)0x0;
          if (!(bool)uVar8) {
            (pMVar4->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar11 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar11 != 0)) {
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
            pMVar4 = (this->fields).networkGame;
            cVar5 = '\0';
            cVar6 = '\0';
            cVar7 = (int)pMVar4 < 0;
            uVar8 = pMVar4 == (MVNetworkGame *)0x0;
            if (!(bool)uVar8) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar4,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        in_stack_1 = (String **)&UNK_?;
        iVar10 = func_?(0);
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = iVar10 < 0;
        uVar8 = 1;
        if (iVar10 == 0) goto code_?;
        pMVar2 = (MVNetworkGame *)TypeInfo__IEditModeUI;
        iVar10 = func_?();
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = iVar10 < 0;
        uVar8 = 1;
        if (iVar10 == 0) goto code_?;
        if (*(int *)(iVar10 + 0x10) == 0) {
          return;
        }
        pMVar2 = (MVNetworkGame *)&UNK_?;
        iVar10 = func_?();
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = iVar10 < 0;
        uVar8 = 1;
        if (iVar10 == 0) goto code_?;
        purchaseResponseData = (MVNetworkGame *)TypeInfo__IEditModeUI;
        iVar10 = func_?();
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = iVar10 < 0;
        uVar8 = 1;
        pMVar2 = purchaseResponseData;
        if (iVar10 == 0) goto code_?;
        pAVar23 = *(Action **)(iVar10 + 0x10);
      }
code_?:
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pAVar23 < 0;
      uVar8 = pAVar23 == (Action *)0x0;
      pMVar3 = unaff_ESI;
      pMVar2 = purchaseResponseData;
      if (!(bool)uVar8) {
code_?:
        (*(pAVar23->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold < (byte)(undefined1)opCode) {
      if ((undefined1)opCode != MVOperationCodes__Enum_GetPlanetOwnerships) {
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar4 = (this->fields).networkGame;
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar4 < 0;
          uVar8 = 1;
          if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
          if ((pMVar4->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar23 = (pMVar4->fields).OnAccessoryUnequipped;
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)returnValues < 0;
        uVar8 = 1;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        in_stack_1 = (String **)0x0;
        unaff_ESI = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xcf,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pMVar2 = (MVNetworkGame *)0x0;
        if (unaff_ESI != (MVNetworkGame *)0x0) {
          if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
            pMVar2 = unaff_ESI;
          }
          cVar5 = '\0';
          cVar6 = '\0';
          cVar7 = (int)pMVar2 < 0;
          uVar8 = 1;
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        }
        this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                   *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                     JsonConvert_DeserializeObject_2
                               ((String *)pMVar2,
                                System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                               );
        if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
            (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
          return;
        }
        pMVar3 = (MVNetworkGame *)
                  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)this_01 < 0;
        uVar8 = this_01 ==
                 (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)0x0;
        if (!(bool)uVar8) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(code *)(pMVar3->fields).ReceivedItemFromQuery)();
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
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)returnValues < 0;
      uVar8 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      in_stack_1 = (String **)0x0;
      unaff_ESI = (MVNetworkGame *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xf5,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar3 = (MVNetworkGame *)0x0;
      if (unaff_ESI != (MVNetworkGame *)0x0) {
        if ((String__Class *)unaff_ESI->klass == TypeInfo__System__String) {
          pMVar3 = unaff_ESI;
        }
        cVar5 = '\0';
        cVar6 = '\0';
        cVar7 = (int)pMVar3 < 0;
        uVar8 = 1;
        if (pMVar3 == (MVNetworkGame *)0x0) goto code_?;
      }
      pMVar3 = (MVNetworkGame *)
                Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                          ((String *)pMVar3,
                           MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                          );
      pMVar2 = (MVNetworkGame *)&UNK_?;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar5 = '\0';
      cVar6 = '\0';
      cVar7 = (int)pMVar4 < 0;
      uVar8 = 1;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pAVar32 = (pMVar4->fields).ReceivedPlanetOwnershipData;
        if (pAVar32 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
          return;
        }
        (*(pAVar32->fields)._._.invoke_impl)();
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
    cVar5 = '\0';
    cVar6 = '\0';
    cVar7 = (int)returnValues < 0;
    uVar8 = 1;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    unaff_ESI = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xbf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    in_stack_1 = (String **)0x0;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    cVar5 = '\0';
    cVar6 = '\0';
    cVar7 = (int)pOVar14 < 0;
    uVar8 = 1;
    pMVar3 = unaff_ESI;
    if (pOVar14 == (Object *)0x0) goto code_?;
    pIVar15 = (pOVar14->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Byte->_0).element_class;
    cVar5 = pIVar15 < pIVar16;
    cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
    cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
    uVar8 = pIVar15 == pIVar16;
    if (!(bool)uVar8) goto code_?;
    puVar33 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar33);
    cVar5 = '\0';
    cVar6 = '\0';
    cVar7 = (int)unaff_ESI < 0;
    uVar8 = 1;
    if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
    pIVar15 = (unaff_ESI->klass->_0).element_class;
    pIVar16 = (TypeInfo__System__Int32->_0).element_class;
    cVar5 = pIVar15 < pIVar16;
    cVar6 = SBORROW4((int)pIVar15,(int)pIVar16);
    cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
    uVar8 = 0;
    if (pIVar15 == pIVar16) {
      pFVar34 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar34,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    in_stack_12 = (Enum__Class *)&UNK_?;
    func_?();
code_?:
    pMVar2 = unaff_EDI;
    func_?();
    pMVar3 = unaff_ESI;
  }
code_?:
  while( true ) {
    uVar35 = func_?();
    if (!(bool)uVar8 && cVar6 == cVar7) break;
    in((short)(uVar35 % (ulonglong)*(uint *)((int)uVar35 + -0x17a9ae01)));
  }
  pcVar36 = (char *)((int)&pMVar3[-0x8b601].klass + 2);
  bVar37 = (byte)(uVar35 >> 8);
  *pcVar36 = *pcVar36 + bVar37 + cVar5;
  bVar38 = (byte)(uVar35 >> 0x28);
  iVar39 = CONCAT31((int3)((uint)unaff_EBX >> 8),(byte)unaff_EBX | bVar38);
  ppIVar40 = &((Il2CppClass_0 *)&unaff_EDI->klass)->image + iVar39 * 2;
  bVar24 = *(byte *)ppIVar40;
  *(byte *)ppIVar40 = *(byte *)ppIVar40 + bVar37;
  pbVar41 = (byte *)(extraout_ECX + -0x21);
  bVar42 = (byte)((uint)extraout_ECX >> 8);
  bVar25 = *pbVar41 + bVar42;
  bVar43 = CARRY1(*pbVar41,bVar42) || CARRY1(bVar25,CARRY1(bVar24,bVar37));
  *pbVar41 = bVar25 + CARRY1(bVar24,bVar37);
  bVar24 = (byte)extraout_ECX + bVar38;
  cVar5 = bVar24 + bVar43;
  iVar44 = CONCAT31((int3)((uint)extraout_ECX >> 8),cVar5);
  from_bcd(*(unkbyte10 *)&(pMVar3->fields).ReceivedAvatarBodiesFromQuery);
  iVar10 = iVar44 + -1;
  if (iVar10 == 0 || cVar5 != '\0') {
    bVar42 = (byte)((uint)in_stack_1 >> 8);
    bVar25 = (byte)((uint)unaff_EBX >> 8);
    bVar43 = CARRY1(bVar42,bVar25) ||
             CARRY1(bVar42 + bVar25,CARRY1((byte)extraout_ECX,bVar38) || CARRY1(bVar24,bVar43));
    pbVar41 = (byte *)(iVar39 + 0x651066e1);
    bVar24 = *pbVar41;
    bVar25 = *pbVar41;
    *pbVar41 = bVar25 + bVar37 + bVar43;
    if (iVar44 == 2) {
      cRam_? = cRam_? + bVar37 +
                     (CARRY1(bVar24,bVar37) || CARRY1(bVar25 + bVar37,bVar43));
      iVar10 = 0;
    }
    else {
      *(byte *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image =
           *(byte *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image | (byte)iVar10;
      iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),
                        CONCAT11((byte)((uint)iVar10 >> 8) | *(byte *)(uVar35 >> 0x20),(byte)iVar10)
                       );
    }
  }
  else {
    if (iVar10 == 0) {
      func_?();
      func_?();
      pcVar45 = (code *)swi(3);
      (*pcVar45)();
      return;
    }
    uVar35 = (ulonglong)CONCAT24(*(undefined2 *)(iVar44 + 9),(uint)*(byte *)(iVar44 + 7));
    pMVar2 = (MVNetworkGame *)0x0;
  }
  opCode = CONCAT31(opCode._1_3_,(char)uVar35);
  MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
            (this,opCode,*(Dictionary_2_System_Byte_System_Object_ **)(iVar10 + 0x10),
             (int16_t)(uVar35 >> 0x20),(MethodInfo *)pMVar2);
  *unaff_FS_OFFSET = in_stack_12;
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

