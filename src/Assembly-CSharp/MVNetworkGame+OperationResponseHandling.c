
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
  pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
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
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_6 = (Enum__Class *)0x0;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pUVar7 = (pMVar2->fields)._._UserProfileData_k__BackingField;
        in_stack_6 = (Enum__Class *)returnValues;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if ((pUVar7 == (UserProfileData *)0x0) ||
           (bVar3 = 0, unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues
           , pOVar8 == (Object *)0x0)) goto code_?;
        pIVar9 = (pOVar8->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar9 < pIVar10;
        if (pIVar9 != pIVar10) goto code_?;
        piVar11 = (int32_t *)func_?();
        (pUVar7->fields).Gold = *piVar11;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar12 = (pMVar2->fields)._.OnGoldAmountChange;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pMVar13 = (pMVar5->fields)._PlayerController_k__BackingField;
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
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            (pMVar5->fields).connState = 4;
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
            pMVar5 = (this->fields).networkGame;
            bVar3 = 0;
            if (pMVar5 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar5,returnValues,(MethodInfo *)0x0);
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
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar5->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar12 = (pMVar5->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xcf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar15 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (pDVar1 != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        if ((String__Class *)(pDVar1->_0).image == TypeInfo__System__String) {
          pDVar15 = pDVar1;
        }
        bVar3 = 0;
        if (pDVar15 == (Dictionary_2_System_Object_System_Object___Class *)0x0)
        goto code_?;
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             ((String *)pDVar15,
                              System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                             );
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
      if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
        return;
      }
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
        (*(code *)(unaff_ESI->_0).namespaze)();
        return;
      }
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition) {
code_?:
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if (pOVar8 == (Object *)0x0) goto code_?;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      pDVar1 = unaff_ESI;
      if (pIVar9 == pIVar10) {
        piVar11 = (int32_t *)func_?();
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pWVar16 = (pMVar5->fields).worldNetwork;
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
    pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)
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
    bVar3 = 0;
    unaff_ESI = pDVar1;
    if (pOVar8 == (Object *)0x0) goto code_?;
    pIVar9 = (pOVar8->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Byte->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 != pIVar10) goto code_?;
    puVar18 = (undefined1 *)func_?();
    uVar19 = *puVar18;
    bVar3 = 0;
    if (pDVar1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
    pIVar9 = (((MVNetworkGame__Class *)(pDVar1->_0).image)->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 == pIVar10) {
      pFVar20 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar20,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar19),(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    in_stack_6 = (Enum__Class *)&UNK_?;
    func_?();
code_?:
    func_?();
    unaff_ESI = pDVar1;
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
    if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar5,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar21 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar21 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar21 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar21,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
          if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar5->fields).isPublished = 1;
        }
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          if ((pMVar5->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar5->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar14 = func_?();
          bVar3 = 0;
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
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
            unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
            if ((iVar14 != 0) &&
               (bVar3 = 0, unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this,
               this_04 != (WWWForm *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        (this_04,StringLiteral_token,*(String **)(iVar14 + 0x24),(MethodInfo *)0x0);
              iVar14 = func_?();
              bVar3 = 0;
              unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
              if (iVar14 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          (this_04,StringLiteral_profile_id,*(int32_t *)(iVar14 + 0xc),
                           (MethodInfo *)0x0);
                iVar14 = func_?();
                bVar3 = 0;
                unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
                if (iVar14 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_planet_id,*(int32_t *)(iVar14 + 0x10),
                             (MethodInfo *)0x0);
                  iVar14 = func_?();
                  bVar3 = 0;
                  unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)this;
                  if (iVar14 != 0) {
                    pSVar21 = *(String **)(iVar14 + 0x3c);
                    this_05 = (PostRequest *)func_?();
                    PostRequest::PostRequest__ctor
                              (this_05,pSVar21,this_04,
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (bVar3 = 0, pOVar8 == (Object *)0x0)) goto code_?;
    pIVar9 = (pOVar8->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    pDVar1 = unaff_ESI;
    if (pIVar9 == pIVar10) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                ((MVNetworkGame *)unaff_ESI,*piVar11,(MethodInfo *)0x0);
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
      pSVar21 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar21 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar21,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar21,(MethodInfo *)0x0);
      return;
    }
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar5->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar22 = (pMVar5->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                (pMVar5,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  switch(opCode & MVOperationCodes__Enum_Join) {
  case MVOperationCodes__Enum_LockHierarchy:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar5,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pEVar23 = (pMVar5->fields).ScreenshotUploaded;
      if (pEVar23 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar23->fields)._._.invoke_impl)();
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                (pMVar5,returnValues,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pWVar16 = (pMVar5->fields).worldNetwork;
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
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if (bVar4 == 0) {
code_?:
      pMVar5 = (this->fields).networkGame;
      bVar3 = 0;
      if (pMVar5 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar5,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      unaff_ESI = _returnCode;
      if (pMVar5 == (MVNetworkGame *)0x0) break;
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVLocalPlayer *)0x0) break;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar2->fields)._._UserProfileData_k__BackingField;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if ((unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
         (bVar3 = 0, pOVar8 == (Object *)0x0)) break;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      pDVar1 = unaff_ESI;
      if (pIVar9 == pIVar10) {
        p_Var29 = (_union_86 *)func_?();
        (unaff_ESI->_0).byval_arg.data = *p_Var29;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        pAVar12 = (pMVar2->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    }
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x5f,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    if (unaff_ESI == (Dictionary_2_System_Object_System_Object___Class *)0x0) {
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      goto code_?;
    }
    pMVar24 = (MVNetworkGame__Class *)(unaff_ESI->_0).image;
    bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    bVar3 = (pMVar24->_1).naturalAligment < bVar25;
    pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((!(bool)bVar3) &&
       (pDVar15 = (Dictionary_2_System_Object_System_Object___Class *)
                  (pMVar24->_1).typeHierarchy[bVar25 - 1],
       bVar3 = pDVar15 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar15 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
       )) goto code_?;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      if ((pMVar5->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar22 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar5->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar5,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar5,returnValues,returnCode,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_System_Object___Class *)(this->fields).networkGame;
    bVar3 = 0;
    unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    in_stack_6 =
         (Enum__Class *)
         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pOVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    unaff_ESI = pDVar1;
    if ((pDVar1 == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
       (bVar3 = 0, pOVar26 == (Object *)0x0)) break;
    pIVar9 = (pOVar26->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 != pIVar10) goto code_?;
    piVar11 = (int32_t *)func_?();
    iVar27 = *piVar11;
    bVar3 = 0;
    if (pOVar8 == (Object *)0x0) break;
    pIVar9 = (pOVar8->klass->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar9 < pIVar10;
    if (pIVar9 == pIVar10) {
      piVar11 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                ((MVNetworkGame *)pDVar1,(int)returnCode,*piVar11,iVar27,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    if ((pMVar5->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    pAVar12 = (pMVar5->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    if (returnCode == 0) {
      bVar3 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
      if (pOVar8 == (Object *)0x0) break;
      pIVar9 = (pOVar8->klass->_0).element_class;
      pIVar10 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar9 < pIVar10;
      if (pIVar9 == pIVar10) {
        piVar11 = (int32_t *)func_?();
        iVar27 = *piVar11;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (pOVar8 == (Object *)0x0) break;
        pIVar9 = (pOVar8->klass->_0).element_class;
        pIVar10 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar9 < pIVar10;
        if (pIVar9 == pIVar10) {
          puVar28 = (undefined4 *)func_?();
          unaff_ESI = (Dictionary_2_System_Object_System_Object___Class *)*puVar28;
          iVar14 = func_?();
          bVar3 = 0;
          if (iVar14 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          bVar3 = 0;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,iVar27,(int32_t)unaff_ESI,(MethodInfo *)0x0);
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
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    pMVar22 = (pMVar5->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    pMVar22 = (pMVar5->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar22 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar22->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pAVar29 = (pMVar5->fields).OnSetAvatarAccessoryResponse;
      if (pAVar29 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar29->fields)._._.invoke_impl)();
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
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar13 = (pMVar5->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar13 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar13,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar13 = (pMVar5->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar13 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar13,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar30 = func_?();
  piVar31 = (int *)((ulonglong)uVar30 >> 0x20);
  pbVar32 = (byte *)uVar30;
  pbVar33 = (byte *)((int)&unaff_ESI->static_fields + 3);
  bVar34 = (byte)extraout_ECX;
  bVar35 = CARRY1(*pbVar33,bVar34) || CARRY1(*pbVar33 + bVar34,bVar3);
  *pbVar33 = *pbVar33 + bVar34 + bVar3;
  pbVar33 = (byte *)((int)piVar31 + 0x2c10545f);
  bVar25 = (byte)((ulonglong)uVar30 >> 8);
  bVar3 = *pbVar33 + bVar25;
  bVar36 = CARRY1(*pbVar33,bVar25) || CARRY1(bVar3,bVar35);
  *pbVar33 = bVar3 + bVar35;
  bVar25 = (byte)((ulonglong)uVar30 >> 0x20);
  bVar3 = bRam_? + bVar25;
  bVar35 = CARRY1(bRam_?,bVar25) || CARRY1(bVar3,bVar36);
  bRam_? = bVar3 + bVar36;
  bVar37 = (byte)uVar30;
  bVar36 = CARRY1(*pbVar32,bVar37) || CARRY1(*pbVar32 + bVar37,bVar35);
  *pbVar32 = *pbVar32 + bVar37 + bVar35;
  puVar38 = (ushort *)(pbVar32 + 0x4f + (int)piVar31);
  uVar39 = (ushort)((ulonglong)uVar30 >> 0x20);
  sVar40 = (uVar39 & 3) - (*puVar38 & 3);
  *puVar38 = *puVar38 + (ushort)(0 < sVar40) * sVar40;
  puVar38 = (ushort *)(pbVar32 + 0x6b + (int)piVar31);
  sVar40 = (uVar39 & 3) - (*puVar38 & 3);
  *puVar38 = *puVar38 + (ushort)(0 < sVar40) * sVar40;
  ppMVar41 = &unaff_ESI[-0x51be1].vtable.GetObjectData.method;
  bVar35 = CARRY1(*(byte *)ppMVar41,bVar34) || CARRY1(*(char *)ppMVar41 + bVar34,bVar36);
  *(byte *)ppMVar41 = *(char *)ppMVar41 + bVar34 + bVar36;
  bVar3 = *(byte *)&(in_stack_6->_0).image;
  bVar42 = (byte)((uint)extraout_ECX >> 8);
  bVar25 = *(char *)&(in_stack_6->_0).image + bVar42;
  *(byte *)&(in_stack_6->_0).image = bVar25 + bVar35;
  *pbVar32 = *pbVar32 + bVar37 + (CARRY1(bVar3,bVar42) || CARRY1(bVar25,bVar35));
  *piVar31 = (int)(pbVar32 + *piVar31);
  *extraout_ECX = *extraout_ECX | bVar34;
  FastExitMediaState();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
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

