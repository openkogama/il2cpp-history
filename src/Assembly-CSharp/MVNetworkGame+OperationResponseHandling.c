
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
    func_?();
    func_?();
    func_?();
    func_?();
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
    in_stack_1 = 0x98;
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = (MVNetworkGame *)returnValues;
  if (MVOperationCodes__Enum_UploadBytes < (byte)(undefined1)opCode) {
    if (MVOperationCodes__Enum_GetThemesData < (byte)(undefined1)opCode) {
      if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
        if ((undefined1)opCode != MVOperationCodes__Enum_UpdateGold) {
          if ((undefined1)opCode != MVOperationCodes__Enum_CreateSpawnRole) goto code_?;
          if (returnCode != -1) {
            return;
          }
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar3 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar3,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar4 == 0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar5 == (MVNetworkGame *)0x0) ||
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar3 == (MVLocalPlayer *)0x0))
        goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar3->fields)._._UserProfileData_k__BackingField;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((unaff_EDI == (MVNetworkGame *)0x0) ||
           (unaff_ESI = (MVNetworkGame *)returnValues, pOVar6 == (Object *)0x0))
        goto code_?;
        if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var15 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAccessoryData)->data = *p_Var15;
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar3 == (MVLocalPlayer *)0x0))
        goto code_?;
        if ((pMVar3->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar3 == (MVLocalPlayer *)0x0))
        goto code_?;
        pAVar7 = (pMVar3->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar2 = (this->fields).networkGame;
          if ((pMVar2 != (MVNetworkGame *)0x0) &&
             (pMVar8 = (pMVar2->fields)._PlayerController_k__BackingField,
             pMVar8 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                      (pMVar8,returnCode == 0,returnValues,(MethodInfo *)0x0);
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
                 (bVar4 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar4 != 0)) {
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
        iVar9 = func_?();
        if ((iVar9 == 0) || (iVar9 = func_?(), iVar9 == 0)) goto code_?;
        if (*(int *)(iVar9 + 0x10) == 0) {
          return;
        }
        iVar9 = func_?();
        if ((iVar9 == 0) || (iVar9 = func_?(), iVar9 == 0)) goto code_?;
        pAVar7 = *(Action **)(iVar9 + 0x10);
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_SetFirstTimeEvent < (byte)(undefined1)opCode) {
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
      if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
        pMVar2 = (this->fields).networkGame;
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar2->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar7 = (pMVar2->fields).OnAccessoryUnequipped;
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
        func_?();
      }
      pMVar5 = (MVNetworkGame *)0x0;
      if (pMVar2 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar2->klass == TypeInfo__System__String) {
          pMVar5 = pMVar2;
        }
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             ((String *)pMVar5,
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
        (*(code *)(unaff_ESI->fields).ReceivedAvatarBodiesFromQuery)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition) {
code_?:
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x16,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pOVar6 == (Object *)0x0)) goto code_?;
      pMVar2 = unaff_ESI;
      if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar10 = (int32_t *)func_?();
        pMVar2 = (this->fields).networkGame;
        if (((pMVar2 != (MVNetworkGame *)0x0) &&
            (pWVar11 = (pMVar2->fields).worldNetwork, pWVar11 != (WorldNetwork *)0x0)) &&
           (pMVar12 = (pWVar11->fields)._.worldObjectClientManager,
           pMVar12 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                    (pMVar12,returnCode == 0,*piVar10,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar2 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    unaff_ESI = pMVar2;
    if (pOVar6 == (Object *)0x0) goto code_?;
    if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    puVar13 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar13);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pFVar14 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar14,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    unaff_ESI = pMVar2;
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
    if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
        pMVar2 = (this->fields).networkGame;
        if (pMVar2 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar2,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar15 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar15 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar15 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar15,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar2 = (this->fields).networkGame;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar2->fields).isPublished = 1;
        }
        pMVar2 = (this->fields).networkGame;
        unaff_ESI = (MVNetworkGame *)this;
        if (pMVar2 != (MVNetworkGame *)0x0) {
          if ((pMVar2->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar2->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar9 = func_?();
          unaff_ESI = (MVNetworkGame *)this;
          if (iVar9 != 0) {
            bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar9 + 0x3c),(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0)
              ;
              return;
            }
            unaff_EDI = (MVNetworkGame *)func_?();
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                      ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
            iVar9 = func_?();
            unaff_ESI = (MVNetworkGame *)this;
            if ((iVar9 != 0) &&
               (unaff_ESI = (MVNetworkGame *)this, unaff_EDI != (MVNetworkGame *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar9 + 0x24),
                         (MethodInfo *)0x0);
              iVar9 = func_?();
              unaff_ESI = (MVNetworkGame *)this;
              if (iVar9 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          ((WWWForm *)unaff_EDI,StringLiteral_profile_id,*(int32_t *)(iVar9 + 0xc),
                           (MethodInfo *)0x0);
                iVar9 = func_?();
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar9 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                             *(int32_t *)(iVar9 + 0x10),(MethodInfo *)0x0);
                  iVar9 = func_?();
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar9 != 0) {
                    pSVar15 = *(String **)(iVar9 + 0x3c);
                    this_04 = (PostRequest *)func_?();
                    PostRequest::PostRequest__ctor
                              (this_04,pSVar15,(WWWForm *)unaff_EDI,
                               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
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
    if (((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
        (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (returnValues,0x16,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             ), unaff_ESI == (MVNetworkGame *)0x0)) || (pOVar6 == (Object *)0x0))
    goto code_?;
    pMVar2 = unaff_ESI;
    if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (unaff_ESI,*piVar10,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
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
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar15 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar15,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar15,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar2->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar16 = (pMVar2->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                (pMVar2,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
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
      pEVar17 = (pMVar2->fields).ScreenshotUploaded;
      if (pEVar17 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar17->fields)._._.invoke_impl)
                ((pEVar17->fields)._._.method_code,this,this_02,(pEVar17->fields)._._.method);
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
  default:
    goto code_?;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar2 = (this->fields).networkGame;
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (pWVar11 = (pMVar2->fields).worldNetwork, pWVar11 != (WorldNetwork *)0x0)) &&
       (pMVar12 = (pWVar11->fields)._.worldObjectClientManager,
       pMVar12 != (MVWorldObjectClientManagerNetwork *)0x0)) {
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                (pMVar12,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
    goto code_?;
  case MVOperationCodes__Enum_PurchaseProduct:
    unaff_ESI = (MVNetworkGame *)0x0;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if (((bVar4 == 0) ||
        (unaff_ESI = (MVNetworkGame *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (returnValues,0x5f,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               ), unaff_ESI == (MVNetworkGame *)0x0)) ||
       ((unaff_EBX = (MVNetworkGame *)unaff_ESI->klass, pMVar2 = unaff_ESI,
        (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment <= *(byte *)&(unaff_EBX->fields).OnWinningConditionFulfilled &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          ((int)(unaff_EBX->fields)._CustomTouristPromotionSettings_k__BackingField +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4 + -4) ==
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
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 == (MVLocalPlayer *)0x0)) break;
      unaff_ESI = (MVNetworkGame *)(pMVar3->fields)._._UserProfileData_k__BackingField;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((unaff_ESI == (MVNetworkGame *)0x0) || (pOVar6 == (Object *)0x0)) break;
      pMVar2 = unaff_ESI;
      if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar18 = (undefined4 *)func_?();
      (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar18;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 == (MVLocalPlayer *)0x0)) break;
      if ((pMVar3->fields)._.OnGoldAmountChange == (Action *)0x0) {
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 == (MVNetworkGame *)0x0) ||
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 == (MVLocalPlayer *)0x0)) break;
      pAVar7 = (pMVar3->fields)._.OnGoldAmountChange;
      goto code_?;
    }
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((pMVar2->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar16 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar2->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
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
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    unaff_ESI = pMVar2;
    if ((pMVar2 == (MVNetworkGame *)0x0) || (pOVar6 == (Object *)0x0)) break;
    if ((pOVar6->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar10 = (int32_t *)func_?();
    itemID = *piVar10;
    if (unaff_EDI == (MVNetworkGame *)0x0) break;
    if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar10 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar2,(int)returnCode,*piVar10,itemID,(MethodInfo *)0x0);
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
    pAVar7 = (pMVar2->fields).OnActiveAvatarSet;
code_?:
    if (pAVar7 != (Action *)0x0) {
code_?:
      (*(pAVar7->fields)._._.invoke_impl)();
      return;
    }
    break;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    unaff_EDI = _returnCode;
    if (returnCode == 0) {
      unaff_ESI = (MVNetworkGame *)returnValues;
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x28,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI = (MVNetworkGame *)returnValues, pOVar6 == (Object *)0x0
         )) break;
      if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar18 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar18;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar6 == (Object *)0x0) break;
        if ((pOVar6->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          puVar18 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar18;
          iVar9 = func_?();
          if ((iVar9 == 0) ||
             (this_03 = (PlayerShopInventoryRepository *)func_?(),
             this_03 == (PlayerShopInventoryRepository *)0x0)) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,(int32_t)unaff_ESI,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 == (MVNetworkGame *)0x0) break;
    pMVar16 = (pMVar2->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 == (MVNetworkGame *)0x0) break;
    pMVar16 = (pMVar2->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar16 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar16->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar2 = (this->fields).networkGame;
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar19 = (pMVar2->fields).OnSetAvatarAccessoryResponse;
      if (pAVar19 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar19->fields)._._.invoke_impl)((pAVar19->fields)._._.method_code,returnCode == 0);
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
    pMVar2 = (this->fields).networkGame;
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar8 = (pMVar2->fields)._PlayerController_k__BackingField,
       pMVar8 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                (pMVar8,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar2 = (this->fields).networkGame;
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar8 = (pMVar2->fields)._PlayerController_k__BackingField,
       pMVar8 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                (pMVar8,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  iVar9 = func_?();
  lVar20 = (longlong)iVar9 * (longlong)(int)unaff_ESI[-0x47e464].fields.OnMarketPlaceActionComplete;
  pIVar21 = (Il2CppImage *)lVar20;
  pbVar22 = (byte *)((int)&unaff_EBX[-1].fields.OnSetAvatarAccessoryResponse + 3);
  bVar23 = (byte)((ulonglong)lVar20 >> 0x28);
  bVar24 = CARRY1(*pbVar22,bVar23) || CARRY1(*pbVar22 + bVar23,(int)pIVar21 != lVar20);
  *pbVar22 = *pbVar22 + bVar23 + ((int)pIVar21 != lVar20);
  bVar25 = (byte)((uint)unaff_EBX >> 8);
  bVar26 = (byte)unaff_EBX + bVar25;
  bVar27 = bVar26 + bVar24;
  bVar28 = (byte)((ulonglong)lVar20 >> 8);
  *(char *)(extraout_ECX + -0x19efab51) =
       *(char *)(extraout_ECX + -0x19efab51) + bVar28 +
       (CARRY1((byte)unaff_EBX,bVar25) || CARRY1(bVar26,bVar24));
  bVar24 = pIVar21 < ((Il2CppClass_0 *)&unaff_EDI->klass)->image;
  ppMVar29 = &unaff_ESI[-1].fields.OnReceivedChatMessage;
  bVar25 = (byte)((uint)extraout_ECX >> 8);
  bVar26 = *(char *)ppMVar29 + bVar25;
  bVar30 = CARRY1(*(byte *)ppMVar29,bVar25) || CARRY1(bVar26,bVar24);
  *(byte *)ppMVar29 = bVar26 + bVar24;
  bVar26 = (byte)extraout_ECX + 0x54;
  bVar31 = bVar26 + bVar30;
  bVar25 = (byte)((ulonglong)lVar20 >> 0x20);
  bVar24 = CARRY1(bVar25,bVar31) ||
           CARRY1(bVar25 + bVar31,0xab < (byte)extraout_ECX || CARRY1(bVar26,bVar30));
  pbVar22 = (byte *)CONCAT31((int3)((uint)extraout_ECX >> 8),0x54);
  bVar26 = *(byte *)&pIVar21->name;
  bVar25 = *(char *)&pIVar21->name + bVar28;
  *(byte *)&pIVar21->name = bVar25 + bVar24;
  bVar24 = 0xab < bVar28 || CARRY1(bVar28 + 0x54,CARRY1(bVar26,bVar28) || CARRY1(bVar25,bVar24));
  pbVar32 = (byte *)CONCAT31((int3)((ulonglong)lVar20 >> 0x28),0x54);
  bVar26 = *(char *)&unaff_ESI->klass + bVar27;
  bVar30 = CARRY1(*(byte *)&unaff_ESI->klass,bVar27) || CARRY1(bVar26,bVar24);
  *(byte *)&unaff_ESI->klass = bVar26 + bVar24;
  bVar26 = *pbVar32;
  bVar25 = *pbVar32;
  *pbVar32 = bVar25 + bVar31 + bVar30;
  bVar28 = (byte)lVar20;
  bVar24 = 0xab < bVar28 ||
           CARRY1(bVar28 + 0x54,
                  0xab < in_stack_1 ||
                  CARRY1(in_stack_1 + 0x54,
                         CARRY1(bVar26,bVar31) || CARRY1(bVar25 + bVar31,bVar30)));
  piVar33 = (int *)CONCAT22((short)((ulonglong)lVar20 >> 0x30),
                            CONCAT11(bVar23 + bVar31 + bVar24,0x54));
  pcVar34 = (char *)CONCAT22((short)((ulonglong)lVar20 >> 0x10),CONCAT11(0x54,bVar28));
  *pcVar34 = *pcVar34 + bVar28 + (CARRY1(bVar23,bVar31) || CARRY1(bVar23 + bVar31,bVar24));
  *piVar33 = (int)(pcVar34 + *piVar33);
  *pbVar22 = *pbVar22 | 0x54;
  FastExitMediaState();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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

