
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
    func_?(&TypeInfo__QuitConnectionError);
    func_?(&TypeInfo__ScreenshotUploadedEventArgs);
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
          bVar3 = 0;
          if (pMVar2 != (MVLocalPlayer *)0x0) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        bVar3 = 0;
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
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_6 = (Enum__Class *)0x0;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pUVar7 = (pMVar2->fields)._._UserProfileData_k__BackingField;
        in_stack_6 = (Enum__Class *)returnValues;
        pMVar8 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if ((pUVar7 == (UserProfileData *)0x0) ||
           (bVar3 = 0, unaff_ESI = (MVNetworkGame *)returnValues,
           pMVar8 == (MVNetworkGame_OperationResponseHandling *)0x0)) goto code_?;
        pIVar9 = (((Object__Class *)pMVar8->klass)->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar9 < pIVar10;
        if (pIVar9 != pIVar10) goto code_?;
        piVar11 = (int32_t *)func_?();
        (pUVar7->fields).Gold = *piVar11;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        this = pMVar8;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar12 = (pMVar2->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            pMVar13 = (pMVar1->fields)._PlayerController_k__BackingField;
            bVar3 = 0;
            if (pMVar13 != (MVLocalObjectController *)0x0) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar13,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            (pMVar1->fields).connState = 4;
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
            pMVar1 = (this->fields).networkGame;
            bVar3 = 0;
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
        iVar14 = func_?();
        bVar3 = 0;
        if (iVar14 == 0) goto code_?;
        iVar14 = func_?();
        bVar3 = 0;
        if (iVar14 == 0) goto code_?;
        if (*(int *)(iVar14 + 0x10) == 0) {
          return;
        }
        iVar14 = func_?();
        bVar3 = 0;
        if (iVar14 == 0) goto code_?;
        iVar14 = func_?();
        bVar3 = 0;
        if (iVar14 == 0) goto code_?;
        pAVar12 = *(Action **)(iVar14 + 0x10);
      }
code_?:
      bVar3 = 0;
      if (pAVar12 != (Action *)0x0) {
code_?:
        (*(pAVar12->fields)._._.invoke_impl)();
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
        pMVar1 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar12 = (pMVar1->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
      bVar3 = 0;
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
      pMVar5 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar5 = pMVar1;
        }
        bVar3 = 0;
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
      bVar3 = 0;
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
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if (pOVar15 == (Object *)0x0) goto code_?;
      pIVar9 = (pOVar15->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      pMVar1 = unaff_ESI;
      if (pIVar9 == pIVar10) {
        piVar11 = (int32_t *)func_?();
        pMVar1 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pWVar16 = (pMVar1->fields).worldNetwork;
          bVar3 = 0;
          if (pWVar16 != (WorldNetwork *)0x0) {
            pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
            bVar3 = 0;
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
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pMVar1 = (MVNetworkGame *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    unaff_ESI = pMVar1;
    if (pOVar15 == (Object *)0x0) goto code_?;
    pIVar9 = (pOVar15->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Byte->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 != pIVar10) goto code_?;
    puVar18 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar18);
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar9 = (pMVar1->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 == pIVar10) {
      pFVar19 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar19,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    in_stack_6 = (Enum__Class *)&UNK_?;
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
        bVar3 = 0;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar20 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar20 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar20 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar20,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar1 = (this->fields).networkGame;
          bVar3 = 0;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar1->fields).isPublished = 1;
        }
        pMVar1 = (this->fields).networkGame;
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)this;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar1->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar14 = func_?();
          bVar3 = 0;
          unaff_ESI = (MVNetworkGame *)this;
          if (iVar14 != 0) {
            bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar14 + 0x3c),(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0)
              ;
              return;
            }
            this_04 = (WWWForm *)func_?();
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                      (this_04,(MethodInfo *)0x0);
            in_stack_6 = (Enum__Class *)0x0;
            iVar14 = func_?();
            bVar3 = 0;
            unaff_ESI = (MVNetworkGame *)this;
            if ((iVar14 != 0) &&
               (bVar3 = 0, unaff_ESI = (MVNetworkGame *)this, this_04 != (WWWForm *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        (this_04,StringLiteral_token,*(String **)(iVar14 + 0x24),(MethodInfo *)0x0);
              iVar14 = func_?();
              bVar3 = 0;
              unaff_ESI = (MVNetworkGame *)this;
              if (iVar14 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          (this_04,StringLiteral_profile_id,*(int32_t *)(iVar14 + 0xc),
                           (MethodInfo *)0x0);
                iVar14 = func_?();
                bVar3 = 0;
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar14 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_planet_id,*(int32_t *)(iVar14 + 0x10),
                             (MethodInfo *)0x0);
                  iVar14 = func_?();
                  bVar3 = 0;
                  unaff_ESI = (MVNetworkGame *)this;
                  if (iVar14 != 0) {
                    pSVar20 = *(String **)(iVar14 + 0x3c);
                    this_05 = (PostRequest *)func_?();
                    PostRequest::PostRequest__ctor
                              (this_05,pSVar20,this_04,
                               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
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
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    if ((unaff_ESI == (MVNetworkGame *)0x0) || (bVar3 = 0, pOVar15 == (Object *)0x0))
    goto code_?;
    pIVar9 = (pOVar15->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    pMVar1 = unaff_ESI;
    if (pIVar9 == pIVar10) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (unaff_ESI,*piVar11,(MethodInfo *)0x0);
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
      pSVar20 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar20 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar20,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar20,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar21 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
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
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    unaff_EBX = (MVNetworkGame *)this;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pEVar22 = (pMVar1->fields).ScreenshotUploaded;
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
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
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
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar1->fields).worldNetwork;
      bVar3 = 0;
      if (pWVar16 != (WorldNetwork *)0x0) {
        pMVar17 = (pWVar16->fields)._.worldObjectClientManager;
        bVar3 = 0;
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
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if ((bVar4 == 0) ||
       (unaff_ESI = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x5f,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI == (MVNetworkGame *)0x0)) {
code_?:
      pMVar1 = (this->fields).networkGame;
      bVar3 = 0;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      unaff_ESI = _returnCode;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVLocalPlayer *)0x0) break;
      opCode = (MVOperationCodes__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
      ;
      unaff_ESI = (MVNetworkGame *)(pMVar2->fields)._._UserProfileData_k__BackingField;
      this = (MVNetworkGame_OperationResponseHandling *)0x82;
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if ((unaff_ESI == (MVNetworkGame *)0x0) || (bVar3 = 0, pOVar15 == (Object *)0x0)) break;
      pIVar9 = (pOVar15->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      pMVar1 = unaff_ESI;
      if (pIVar9 == pIVar10) {
        puVar23 = (undefined4 *)func_?();
        (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar23;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        pAVar12 = (pMVar2->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    }
    unaff_EBX = (MVNetworkGame *)unaff_ESI->klass;
    bVar3 = *(byte *)&(unaff_EBX->fields).OnWinningConditionFulfilled <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    pMVar1 = unaff_ESI;
    if ((!(bool)bVar3) &&
       (pDVar24 = *(Dictionary_2_System_Object_System_Object___Class **)
                   ((int)(unaff_EBX->fields)._CustomTouristPromotionSettings_k__BackingField +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment * 4 + -4),
       bVar3 = pDVar24 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar24 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
       )) goto code_?;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar21 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    unaff_EBX = _returnCode;
    unaff_ESI = (MVNetworkGame *)returnValues;
    opCode = (MVOperationCodes__Enum)pMVar1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    in_stack_6 =
         (Enum__Class *)
         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pOVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    unaff_ESI = pMVar1;
    if ((pMVar1 == (MVNetworkGame *)0x0) || (bVar3 = 0, pOVar25 == (Object *)0x0)) break;
    pIVar9 = (pOVar25->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 != pIVar10) goto code_?;
    this = (MVNetworkGame_OperationResponseHandling *)&UNK_?;
    pMVar26 = (MVOperationCodes__Enum *)func_?();
    opCode = *pMVar26;
    bVar3 = 0;
    if (pOVar15 == (Object *)0x0) break;
    pIVar9 = (pOVar15->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 == pIVar10) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar1,(int)returnCode,*piVar11,opCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pAVar12 = (pMVar1->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    if (returnCode == 0) {
      bVar3 = 0;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar15 == (Object *)0x0) break;
      pIVar9 = (pOVar15->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      if (pIVar9 == pIVar10) {
        puVar23 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar23;
        pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar15 == (Object *)0x0) break;
        pIVar9 = (pOVar15->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar9 < pIVar10;
        if (pIVar9 == pIVar10) {
          puVar23 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar23;
          iVar14 = func_?();
          bVar3 = 0;
          if (iVar14 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          bVar3 = 0;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
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
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar21 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar21 = (pMVar1->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar21 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar21->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar27 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
      if (pAVar27 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar27->fields)._._.invoke_impl)();
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
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar13 = (pMVar1->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar13 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar13,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar1 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar13 = (pMVar1->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar13 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar13,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  MVar28 = opCode;
  func_?();
  bVar29 = func_?();
  bVar3 = CARRY1((byte)unaff_EBX,bVar29) || CARRY1((byte)unaff_EBX + bVar29,bVar3);
  func_?();
  cVar30 = CARRY1(extraout_CL,extraout_DH) || CARRY1(extraout_CL + extraout_DH,bVar3);
  func_?();
  pcVar31 = (char *)((int)&unaff_ESI[0x1b9cbd].fields._Peer_k__BackingField + 1);
  *pcVar31 = *pcVar31 + (char)((uint)unaff_EBX >> 8) + cVar30;
  *unaff_FS_OFFSET = &stack0xffffffe0;
  if (opCode == MVOperationCodes__Enum_RegisterWorldObject) {
    func_?();
    func_?(&stack0xffffffe4,&UNK_?);
    pcVar32 = (code *)swi(3);
    (*pcVar32)();
    return;
  }
  piVar33 = (int16_t *)(opCode + MVOperationCodes__Enum_RemoveLink);
  opCode = CONCAT31(opCode._1_3_,
                    *(undefined1 *)(opCode + MVOperationCodes__Enum_UpdatePrototypeScale));
  MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
            (this,opCode,
             *(Dictionary_2_System_Byte_System_Object_ **)
              (MVar28 + MVOperationCodes__Enum_RequestAcceptFriendship),*piVar33,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = in_stack_6;
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

