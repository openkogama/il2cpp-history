
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
    func_?();
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = (MVNetworkGame *)returnValues;
  if (MVOperationCodes__Enum_UploadBytes < (byte)(undefined1)opCode) {
    if (MVOperationCodes__Enum_GetThemesData < (byte)(undefined1)opCode) {
      if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
        if ((undefined1)opCode != MVOperationCodes__Enum_UpdateGold) {
          if ((undefined1)opCode != MVOperationCodes__Enum_CreateSpawnRole) goto code_?;
          if (returnCode != -1) {
            return;
          }
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar3 == 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar4 == (MVNetworkGame *)0x0) ||
           (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar2 == (MVLocalPlayer *)0x0))
        goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar2->fields)._._UserProfileData_k__BackingField;
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((unaff_EDI == (MVNetworkGame *)0x0) ||
           (unaff_ESI = (MVNetworkGame *)returnValues, pOVar5 == (Object *)0x0))
        goto code_?;
        if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        p_Var17 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAccessoryData)->data = *p_Var17;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar2 == (MVLocalPlayer *)0x0))
        goto code_?;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pMVar1 == (MVNetworkGame *)0x0) ||
           (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           unaff_ESI = (MVNetworkGame *)returnValues, pMVar2 == (MVLocalPlayer *)0x0))
        goto code_?;
        pAVar6 = (pMVar2->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar7 = (pMVar1->fields)._PlayerController_k__BackingField,
             pMVar7 != (MVLocalObjectController *)0x0)) {
            MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                      (pMVar7,returnCode == 0,returnValues,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            (pMVar1->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar3 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar3 != 0)) {
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
        iVar8 = func_?();
        if ((iVar8 == 0) || (iVar8 = func_?(), iVar8 == 0)) goto code_?;
        if (*(int *)(iVar8 + 0x10) == 0) {
          return;
        }
        iVar8 = func_?();
        if ((iVar8 == 0) || (iVar8 = func_?(), iVar8 == 0)) goto code_?;
        pAVar6 = *(Action **)(iVar8 + 0x10);
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
        pMVar1 = (this->fields).networkGame;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar6 = (pMVar1->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
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
      pMVar4 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar4 = pMVar1;
        }
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             ((String *)pMVar4,
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
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x16,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pOVar5 == (Object *)0x0)) goto code_?;
      pMVar1 = unaff_ESI;
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar9 = (int32_t *)func_?();
        pMVar1 = (this->fields).networkGame;
        if (((pMVar1 != (MVNetworkGame *)0x0) &&
            (pWVar10 = (pMVar1->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) &&
           (pMVar11 = (pWVar10->fields)._.worldObjectClientManager,
           pMVar11 != (MVWorldObjectClientManagerNetwork *)0x0)) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                    (pMVar11,returnCode == 0,*piVar9,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar1 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    unaff_ESI = pMVar1;
    if (pOVar5 == (Object *)0x0) goto code_?;
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Byte->_0).element_class)
    goto code_?;
    puVar12 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar12);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pFVar13 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar13,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    unaff_ESI = pMVar1;
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
    if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
        pMVar1 = (this->fields).networkGame;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar14 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar14 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar14 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar14,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar1 = (this->fields).networkGame;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar1->fields).isPublished = 1;
        }
        pMVar1 = (this->fields).networkGame;
        unaff_ESI = (MVNetworkGame *)this;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar1->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar8 = func_?();
          unaff_ESI = (MVNetworkGame *)this;
          if (iVar8 != 0) {
            bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar8 + 0x3c),(MethodInfo *)0x0);
            if (bVar3 != 0) {
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
            iVar8 = func_?();
            unaff_ESI = (MVNetworkGame *)this;
            if ((iVar8 != 0) &&
               (unaff_ESI = (MVNetworkGame *)this, unaff_EDI != (MVNetworkGame *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar8 + 0x24),
                         (MethodInfo *)0x0);
              iVar8 = func_?();
              unaff_ESI = (MVNetworkGame *)this;
              if (iVar8 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          ((WWWForm *)unaff_EDI,StringLiteral_profile_id,*(int32_t *)(iVar8 + 0xc),
                           (MethodInfo *)0x0);
                iVar8 = func_?();
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar8 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                             *(int32_t *)(iVar8 + 0x10),(MethodInfo *)0x0);
                  iVar8 = func_?();
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar8 != 0) {
                    pSVar14 = *(String **)(iVar8 + 0x3c);
                    this_04 = (PostRequest *)func_?();
                    PostRequest::PostRequest__ctor
                              (this_04,pSVar14,(WWWForm *)unaff_EDI,
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
        (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (returnValues,0x16,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             ), unaff_ESI == (MVNetworkGame *)0x0)) || (pOVar5 == (Object *)0x0))
    goto code_?;
    pMVar1 = unaff_ESI;
    if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (unaff_ESI,*piVar9,(MethodInfo *)0x0);
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
      pSVar14 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar14,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar14,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar15 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar1 = (this->fields).networkGame;
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
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar1 = (this->fields).networkGame;
    unaff_EBX = (MVNetworkGame *)this;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pEVar16 = (pMVar1->fields).ScreenshotUploaded;
      if (pEVar16 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar16->fields)._._.invoke_impl)((pEVar16->fields)._._.method_code,this,this_02);
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar1 = (this->fields).networkGame;
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
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pWVar10 = (pMVar1->fields).worldNetwork, pWVar10 != (WorldNetwork *)0x0)) &&
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
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if (((bVar3 == 0) ||
        (unaff_ESI = (MVNetworkGame *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (returnValues,0x5f,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               ), unaff_ESI == (MVNetworkGame *)0x0)) ||
       ((unaff_EBX = (MVNetworkGame *)unaff_ESI->klass, pMVar1 = unaff_ESI,
        (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
        naturalAligment <= *(byte *)&(unaff_EBX->fields).OnWinningConditionFulfilled &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          ((int)(unaff_EBX->fields)._CustomTouristPromotionSettings_k__BackingField +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4 + -4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      unaff_ESI = _returnCode;
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 == (MVLocalPlayer *)0x0)) break;
      unaff_ESI = (MVNetworkGame *)(pMVar2->fields)._._UserProfileData_k__BackingField;
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((unaff_ESI == (MVNetworkGame *)0x0) || (pOVar5 == (Object *)0x0)) break;
      pMVar1 = unaff_ESI;
      if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar17 = (undefined4 *)func_?();
      (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar17;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 == (MVLocalPlayer *)0x0)) break;
      if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
         pMVar2 == (MVLocalPlayer *)0x0)) break;
      pAVar6 = (pMVar2->fields)._.OnGoldAmountChange;
      goto code_?;
    }
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar15 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar1 = (this->fields).networkGame;
    unaff_EDI = (MVNetworkGame *)this;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    unaff_EBX = _returnCode;
    unaff_ESI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    unaff_ESI = pMVar1;
    if ((pMVar1 == (MVNetworkGame *)0x0) || (pOVar5 == (Object *)0x0)) break;
    if ((pOVar5->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar9 = (int32_t *)func_?();
    itemID = *piVar9;
    if (unaff_EDI == (MVNetworkGame *)0x0) break;
    if ((Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar9 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar1,(int)returnCode,*piVar9,itemID,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pAVar6 = (pMVar1->fields).OnActiveAvatarSet;
code_?:
    if (pAVar6 != (Action *)0x0) {
code_?:
      (*(pAVar6->fields)._._.invoke_impl)();
      return;
    }
    break;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    unaff_EDI = _returnCode;
    if (returnCode == 0) {
      unaff_ESI = (MVNetworkGame *)returnValues;
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x28,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI = (MVNetworkGame *)returnValues, pOVar5 == (Object *)0x0
         )) break;
      if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        puVar17 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar17;
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar5 == (Object *)0x0) break;
        if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          puVar17 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar17;
          iVar8 = func_?();
          if ((iVar8 == 0) ||
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
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar15 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar15 = (pMVar1->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar15 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar15->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar18 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
      if (pAVar18 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar18->fields)._._.invoke_impl)((pAVar18->fields)._._.method_code);
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
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar7 = (pMVar1->fields)._PlayerController_k__BackingField,
       pMVar7 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                (pMVar7,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar1 = (this->fields).networkGame;
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar7 = (pMVar1->fields)._PlayerController_k__BackingField,
       pMVar7 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                (pMVar7,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  iVar8 = func_?();
  lVar19 = (longlong)iVar8 * (longlong)(int)unaff_ESI;
  iVar8 = (int)lVar19;
  bVar20 = (byte)unaff_EBX;
  bVar21 = *(char *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image + bVar20;
  bVar22 = CARRY1(*(byte *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image,bVar20) ||
           CARRY1(bVar21,iVar8 != lVar19);
  *(byte *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image = bVar21 + (iVar8 != lVar19);
  uVar23 = (undefined2)((ulonglong)lVar19 >> 0x20);
  out(uVar23,iVar8);
  pbVar24 = (byte *)((int)&unaff_EBX[-1].fields.gameDataQuery + 3);
  bVar21 = *pbVar24;
  bVar25 = (byte)((ulonglong)lVar19 >> 0x28);
  bVar26 = *pbVar24;
  *pbVar24 = bVar26 + bVar25 + bVar22;
  bVar27 = (byte)((uint)unaff_EBX >> 8);
  bVar22 = CARRY1(bVar20,bVar27) ||
           CARRY1(bVar20 + bVar27,CARRY1(bVar21,bVar25) || CARRY1(bVar26 + bVar25,bVar22));
  puVar28 = (uint *)(iVar8 + -0x5f + (int)((ulonglong)lVar19 >> 0x20));
  *puVar28 = ~*puVar28;
  out(uVar23,iVar8);
  bVar26 = (byte)((ulonglong)lVar19 >> 8);
  bVar21 = bVar25 + bVar26;
  out(CONCAT11(bVar21 + bVar22,(char)((ulonglong)lVar19 >> 0x20)),iVar8);
  ppMVar29 = &unaff_ESI[-1].fields.eventHandling;
  *(char *)ppMVar29 =
       *(char *)ppMVar29 + extraout_CH + (CARRY1(bVar25,bVar26) || CARRY1(bVar21,bVar22));
  pcVar30 = (code *)swi(1);
  (*pcVar30)();
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

