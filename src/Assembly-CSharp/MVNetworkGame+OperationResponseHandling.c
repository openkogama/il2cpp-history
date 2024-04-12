
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (MVOperationCodes__Enum_UploadBytes < (byte)(undefined1)opCode) {
    if (MVOperationCodes__Enum_GetThemesData < (byte)(undefined1)opCode) {
      if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
        if ((undefined1)opCode != MVOperationCodes__Enum_UpdateGold) {
          if ((undefined1)opCode != MVOperationCodes__Enum_CreateSpawnRole) goto code_?;
          if (returnCode != -1) {
            return;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
          bVar2 = 0;
          if (pMVar1 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar1,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        bVar2 = 0;
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
        bVar2 = 0;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_5 = (Enum__Class *)0x0;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar1->fields)._._UserProfileData_k__BackingField;
        pMVar6 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        in_stack_5 = (Enum__Class *)returnValues;
        if ((unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (bVar2 = 0, pMVar6 == (MVNetworkGame_OperationResponseHandling *)0x0))
        goto code_?;
        pIVar7 = (((Object__Class *)pMVar6->klass)->_0).element_class;
        pIVar8 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar7 < pIVar8;
        if (pIVar7 != pIVar8) goto code_?;
        p_Var22 = (_union_86 *)func_?();
        (unaff_EDI->_0).byval_arg.data = *p_Var22;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        this = pMVar6;
        in_stack_5 = (Enum__Class *)returnValues;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        bVar2 = 0;
        in_stack_5 = (Enum__Class *)returnValues;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar1->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        in_stack_5 = (Enum__Class *)returnValues;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        bVar2 = 0;
        in_stack_5 = (Enum__Class *)returnValues;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar9 = (pMVar1->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar4 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar4 != (MVNetworkGame *)0x0) {
            pMVar10 = (pMVar4->fields)._PlayerController_k__BackingField;
            bVar2 = 0;
            if (pMVar10 != (MVLocalObjectController *)0x0) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar10,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar4 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar4 != (MVNetworkGame *)0x0) {
            (pMVar4->fields).connState = 4;
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
            pMVar4 = (this->fields).networkGame;
            bVar2 = 0;
            if (pMVar4 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar4,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar11 = func_?();
        bVar2 = 0;
        if (iVar11 == 0) goto code_?;
        iVar11 = func_?();
        bVar2 = 0;
        if (iVar11 == 0) goto code_?;
        if (*(int *)(iVar11 + 0x10) == 0) {
          return;
        }
        iVar11 = func_?();
        bVar2 = 0;
        if (iVar11 == 0) goto code_?;
        iVar11 = func_?();
        bVar2 = 0;
        if (iVar11 == 0) goto code_?;
        pAVar9 = *(Action **)(iVar11 + 0x10);
      }
code_?:
      bVar2 = 0;
      if (pAVar9 != (Action *)0x0) {
code_?:
        (*(pAVar9->fields)._._.invoke_impl)();
        return;
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
        pMVar4 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar4->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar9 = (pMVar4->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
      bVar2 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pSVar12 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xcf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value = (String *)0x0;
      if (pSVar12 != (String *)0x0) {
        if (pSVar12->klass == TypeInfo__System__String) {
          value = pSVar12;
        }
        bVar2 = 0;
        if (value == (String *)0x0) goto code_?;
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             (value,
                              System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                             );
      if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
          (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
        return;
      }
      pAVar13 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
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
        (*(pAVar13->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition) {
code_?:
      bVar2 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      if (pOVar14 == (Object *)0x0) goto code_?;
      pIVar7 = (pOVar14->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        piVar15 = (int32_t *)func_?();
        pMVar4 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          pWVar16 = (pMVar4->fields).worldNetwork;
          bVar2 = 0;
          if (pWVar16 != (WorldNetwork *)0x0) {
            pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
            bVar2 = 0;
            if (pMVar17 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar17,returnCode == 0,*piVar15,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    if (pOVar18 == (Object *)0x0) goto code_?;
    pIVar7 = (pOVar18->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Byte->_0).element_class;
    bVar2 = pIVar7 < pIVar8;
    if (pIVar7 != pIVar8) goto code_?;
    puVar19 = (undefined1 *)func_?();
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar19);
    bVar2 = 0;
    if (pOVar14 == (Object *)0x0) goto code_?;
    pIVar7 = (pOVar14->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      pFVar20 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar20,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    in_stack_5 = (Enum__Class *)&UNK_?;
    func_?();
code_?:
    func_?();
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
    if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
        pMVar4 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar4,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar12 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar12 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar12 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar12,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar4 = (this->fields).networkGame;
          bVar2 = 0;
          if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar4->fields).isPublished = 1;
        }
        pMVar4 = (this->fields).networkGame;
        bVar2 = 0;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          if ((pMVar4->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar4->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar11 = func_?();
          bVar2 = 0;
          if (iVar11 != 0) {
            bVar3 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar11 + 0x3c),(MethodInfo *)0x0);
            if (bVar3 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0)
              ;
              return;
            }
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                      ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
            in_stack_5 = (Enum__Class *)0x0;
            iVar11 = func_?();
            bVar2 = 0;
            if ((iVar11 != 0) &&
               (bVar2 = 0, unaff_EDI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar11 + 0x24),
                         (MethodInfo *)0x0);
              iVar11 = func_?();
              bVar2 = 0;
              if (iVar11 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          ((WWWForm *)unaff_EDI,StringLiteral_profile_id,*(int32_t *)(iVar11 + 0xc),
                           (MethodInfo *)0x0);
                iVar11 = func_?();
                bVar2 = 0;
                if (iVar11 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                             *(int32_t *)(iVar11 + 0x10),(MethodInfo *)0x0);
                  iVar11 = func_?();
                  bVar2 = 0;
                  if (iVar11 != 0) {
                    pSVar12 = *(String **)(iVar11 + 0x3c);
                    this_04 = (PostRequest *)func_?();
                    PostRequest::PostRequest__ctor
                              (this_04,pSVar12,(WWWForm *)unaff_EDI,
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
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    if ((pMVar4 == (MVNetworkGame *)0x0) || (bVar2 = 0, pOVar14 == (Object *)0x0))
    goto code_?;
    pIVar7 = (pOVar14->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      piVar15 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (pMVar4,*piVar15,(MethodInfo *)0x0);
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
      pSVar12 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar12,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar12,(MethodInfo *)0x0);
      return;
    }
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar4->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar21 = (pMVar4->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                (pMVar4,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  switch(opCode & MVOperationCodes__Enum_Join) {
  case MVOperationCodes__Enum_LockHierarchy:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar4,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pEVar22 = (pMVar4->fields).ScreenshotUploaded;
      if (pEVar22 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar22->fields)._._.invoke_impl)();
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                (pMVar4,returnValues,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar4->fields).worldNetwork;
      bVar2 = 0;
      if (pWVar16 != (WorldNetwork *)0x0) {
        pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
        bVar2 = 0;
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
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if ((bVar3 == 0) ||
       (purchaseResponseData =
             (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       ), purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0))
    {
code_?:
      pMVar4 = (this->fields).networkGame;
      bVar2 = 0;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar4,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
      bVar2 = 0;
      if (pMVar1 == (MVLocalPlayer *)0x0) break;
      opCode = (MVOperationCodes__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
      ;
      pUVar23 = (pMVar1->fields)._._UserProfileData_k__BackingField;
      this = (MVNetworkGame_OperationResponseHandling *)0x82;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      if ((pUVar23 == (UserProfileData *)0x0) || (bVar2 = 0, pOVar14 == (Object *)0x0)) break;
      pIVar7 = (pOVar14->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        piVar15 = (int32_t *)func_?();
        (pUVar23->fields).Gold = *piVar15;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar4 == (MVNetworkGame *)0x0) break;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar1 == (MVLocalPlayer *)0x0) break;
        if ((pMVar1->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar4 == (MVNetworkGame *)0x0) break;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar4,(MethodInfo *)0x0);
        bVar2 = 0;
        if (pMVar1 == (MVLocalPlayer *)0x0) break;
        pAVar9 = (pMVar1->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    }
    unaff_EBX = purchaseResponseData->klass;
    bVar2 = (unaff_EBX->_1).naturalAligment <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    if ((!(bool)bVar2) &&
       (pDVar24 = (Dictionary_2_System_Object_System_Object___Class *)
                  (unaff_EBX->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment - 1],
       bVar2 = pDVar24 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar24 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
       )) goto code_?;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      if ((pMVar4->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar21 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar4->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    unaff_EBX = _returnCode;
    opCode = (MVOperationCodes__Enum)pMVar4;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    in_stack_5 =
         (Enum__Class *)
         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    if ((pMVar4 == (MVNetworkGame *)0x0) || (bVar2 = 0, pOVar14 == (Object *)0x0)) break;
    pIVar7 = (pOVar14->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar7 < pIVar8;
    if (pIVar7 != pIVar8) goto code_?;
    this = (MVNetworkGame_OperationResponseHandling *)&UNK_?;
    pMVar25 = (MVOperationCodes__Enum *)func_?();
    opCode = *pMVar25;
    bVar2 = 0;
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    pIVar7 = (((UserProfileData__Class *)(unaff_EDI->_0).image)->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar2 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      piVar15 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar4,(int)returnCode,*piVar15,opCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = 0;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    if ((pMVar4->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = 0;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    pAVar9 = (pMVar4->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    unaff_EDI = _returnCode;
    if (returnCode == 0) {
      bVar2 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      if (pOVar14 == (Object *)0x0) break;
      pIVar7 = (pOVar14->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar2 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        piVar15 = (int32_t *)func_?();
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar15;
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        if (pOVar14 == (Object *)0x0) break;
        pIVar7 = (pOVar14->klass->_0).element_class;
        pIVar8 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar7 < pIVar8;
        if (pIVar7 == pIVar8) {
          piVar15 = (int32_t *)func_?();
          shopInventoryID = *piVar15;
          iVar11 = func_?();
          bVar2 = 0;
          if (iVar11 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          bVar2 = 0;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,shopInventoryID,(MethodInfo *)0x0);
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
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    pMVar21 = (pMVar4->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 == (MVNetworkGame *)0x0) break;
    pMVar21 = (pMVar4->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar21 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar21->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pAVar26 = (pMVar4->fields).OnSetAvatarAccessoryResponse;
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
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar10 = (pMVar4->fields)._PlayerController_k__BackingField;
      bVar2 = 0;
      if (pMVar10 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar10,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar4 = (this->fields).networkGame;
    bVar2 = 0;
    if (pMVar4 != (MVNetworkGame *)0x0) {
      pMVar10 = (pMVar4->fields)._PlayerController_k__BackingField;
      bVar2 = 0;
      if (pMVar10 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar10,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  MVar27 = opCode;
  uVar28 = func_?();
  out(0x54,uVar28);
  puVar19 = (undefined1 *)((int)&unaff_EDI[-1].vtable.GetObjectData.method + 3);
  bVar29 = (byte)((uint)unaff_EBX >> 8);
  bVar30 = *puVar19 + bVar29;
  bVar31 = CARRY1(*puVar19,bVar29) || CARRY1(bVar30,bVar2);
  *puVar19 = bVar30 + bVar2;
  bVar29 = (byte)unaff_EBX + extraout_DL;
  bVar32 = CARRY1((byte)unaff_EBX,extraout_DL) || CARRY1(bVar29,bVar31);
  bVar29 = bVar29 + bVar31;
  out(0x54,uVar28);
  pbVar33 = (byte *)(CONCAT31((int3)((uint)unaff_EBX >> 8),bVar29) + -0x10);
  bVar31 = CARRY1(*pbVar33,bVar29) || CARRY1(*pbVar33 + bVar29,bVar32);
  *pbVar33 = *pbVar33 + bVar29 + bVar32;
  bVar2 = *extraout_ECX + (byte)uVar28;
  bVar30 = CARRY1(*extraout_ECX,(byte)uVar28) || CARRY1(bVar2,bVar31);
  *extraout_ECX = bVar2 + bVar31;
  func_?();
  bVar34 = CARRY1(extraout_DH,extraout_CL) || CARRY1(extraout_DH + extraout_CL,bVar30);
  uVar35 = func_?();
  pbVar33 = (byte *)((int)((ulonglong)uVar35 >> 0x20) + -0x16);
  bVar2 = *pbVar33;
  bVar30 = *pbVar33;
  *pbVar33 = bVar30 + bVar29 + bVar34;
  pcVar36 = (char *)((int)uVar35 + 0x421054ea);
  *pcVar36 = *pcVar36 + (char)uVar35 + (CARRY1(bVar2,bVar29) || CARRY1(bVar30 + bVar29,bVar34));
  if (opCode == MVOperationCodes__Enum_RegisterWorldObject) {
    func_?();
    func_?(&stack0xffffffe4,&UNK_?);
    pcVar37 = (code *)swi(3);
    (*pcVar37)();
    return;
  }
  piVar38 = (int16_t *)(opCode + MVOperationCodes__Enum_RemoveLink);
  opCode = CONCAT31(opCode._1_3_,
                    *(undefined1 *)(opCode + MVOperationCodes__Enum_UpdatePrototypeScale));
  MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
            (this,opCode,
             *(Dictionary_2_System_Byte_System_Object_ **)
              (MVar27 + MVOperationCodes__Enum_RequestAcceptFriendship),*piVar38,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = in_stack_5;
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

