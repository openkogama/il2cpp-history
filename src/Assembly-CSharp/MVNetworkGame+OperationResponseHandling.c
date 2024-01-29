
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
          uVar3 = 0;
          uVar4 = pMVar2 == (MVLocalPlayer *)0x0;
          if (!(bool)uVar4) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar2,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar5 == 0) {
          return;
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (MVNetworkGame *)(pMVar2->fields)._._UserProfileData_k__BackingField;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (unaff_EDI == (MVNetworkGame *)0x0) goto code_?;
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar7 == (Object *)0x0) goto code_?;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        uVar3 = pIVar8 < pIVar9;
        uVar4 = pIVar8 == pIVar9;
        if (!(bool)uVar4) goto code_?;
        p_Var23 = (_union_86 *)func_?();
        ((Il2CppType *)&(unaff_EDI->fields).ReceivedAccessoryData)->data = *p_Var23;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar10 = (pMVar2->fields)._.OnGoldAmountChange;
        unaff_ESI = (MVNetworkGame *)returnValues;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar1 = (this->fields).networkGame;
          uVar3 = 0;
          uVar4 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar4) {
            pMVar11 = (pMVar1->fields)._PlayerController_k__BackingField;
            uVar3 = 0;
            uVar4 = pMVar11 == (MVLocalObjectController *)0x0;
            if (!(bool)uVar4) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar11,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar1 = (this->fields).networkGame;
          uVar3 = 0;
          uVar4 = pMVar1 == (MVNetworkGame *)0x0;
          if (!(bool)uVar4) {
            (pMVar1->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar5 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar5 != 0)) {
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
            uVar3 = 0;
            uVar4 = pMVar1 == (MVNetworkGame *)0x0;
            if (!(bool)uVar4) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar1,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar12 = func_?();
        uVar3 = 0;
        uVar4 = 1;
        if (iVar12 == 0) goto code_?;
        iVar12 = func_?();
        uVar3 = 0;
        uVar4 = 1;
        if (iVar12 == 0) goto code_?;
        if (*(int *)(iVar12 + 0x10) == 0) {
          return;
        }
        iVar12 = func_?();
        uVar3 = 0;
        uVar4 = 1;
        if (iVar12 == 0) goto code_?;
        iVar12 = func_?();
        uVar3 = 0;
        uVar4 = 1;
        if (iVar12 == 0) goto code_?;
        pAVar10 = *(Action **)(iVar12 + 0x10);
      }
code_?:
      uVar3 = 0;
      uVar4 = pAVar10 == (Action *)0x0;
      if (!(bool)uVar4) {
code_?:
        (*(pAVar10->fields)._._.invoke_impl)();
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
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
          return;
        }
        pAVar10 = (pMVar1->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
      uVar3 = 0;
      uVar4 = 1;
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
      pMVar6 = (MVNetworkGame *)0x0;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
          pMVar6 = pMVar1;
        }
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                   JsonConvert_DeserializeObject_2
                             ((String *)pMVar6,
                              System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                             );
      if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
          (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
        return;
      }
      unaff_ESI = (MVNetworkGame *)
                  TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
      uVar3 = 0;
      uVar4 = this_01 ==
               (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                *)0x0;
      if (!(bool)uVar4) {
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
      uVar3 = 0;
      uVar4 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar3 = 0;
      uVar4 = 1;
      if (pOVar7 == (Object *)0x0) goto code_?;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      uVar3 = pIVar8 < pIVar9;
      uVar4 = false;
      pMVar1 = unaff_ESI;
      if (pIVar8 == pIVar9) {
        piVar13 = (int32_t *)func_?();
        pMVar1 = (this->fields).networkGame;
        uVar3 = 0;
        uVar4 = pMVar1 == (MVNetworkGame *)0x0;
        if (!(bool)uVar4) {
          pWVar14 = (pMVar1->fields).worldNetwork;
          uVar3 = 0;
          uVar4 = pWVar14 == (WorldNetwork *)0x0;
          if (!(bool)uVar4) {
            pMVar15 = (pWVar14->fields)._.worldObjectClientManager;
            uVar3 = 0;
            uVar4 = pMVar15 == (MVWorldObjectClientManagerNetwork *)0x0;
            if (!(bool)uVar4) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar15,returnCode == 0,*piVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    uVar3 = 0;
    uVar4 = 1;
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
    uVar3 = 0;
    uVar4 = 1;
    unaff_ESI = pMVar1;
    if (pOVar7 == (Object *)0x0) goto code_?;
    pIVar8 = (pOVar7->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Byte->_0).element_class;
    uVar3 = pIVar8 < pIVar9;
    uVar4 = pIVar8 == pIVar9;
    if (!(bool)uVar4) goto code_?;
    puVar16 = (undefined1 *)func_?();
    unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar16);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pIVar8 = (pMVar1->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    uVar3 = pIVar8 < pIVar9;
    uVar4 = 0;
    if (pIVar8 == pIVar9) {
      pFVar17 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar17,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
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
        uVar3 = 0;
        uVar4 = pMVar1 == (MVNetworkGame *)0x0;
        if (!(bool)uVar4) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_PublishPlanet) goto code_?;
        pSVar18 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar18 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar18 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar18,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar1 = (this->fields).networkGame;
          uVar3 = 0;
          uVar4 = 1;
          unaff_ESI = (MVNetworkGame *)this;
          if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar1->fields).isPublished = 1;
        }
        pMVar1 = (this->fields).networkGame;
        uVar3 = 0;
        uVar4 = pMVar1 == (MVNetworkGame *)0x0;
        unaff_ESI = (MVNetworkGame *)this;
        if (!(bool)uVar4) {
          if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar1->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar12 = func_?();
          uVar3 = 0;
          uVar4 = iVar12 == 0;
          unaff_ESI = (MVNetworkGame *)this;
          if (!(bool)uVar4) {
            bVar5 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar12 + 0x3c),(MethodInfo *)0x0);
            if (bVar5 != 0) {
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
            iVar12 = func_?();
            uVar3 = 0;
            uVar4 = iVar12 == 0;
            unaff_ESI = (MVNetworkGame *)this;
            if (!(bool)uVar4) {
              uVar3 = 0;
              uVar4 = unaff_EDI == (MVNetworkGame *)0x0;
              unaff_ESI = (MVNetworkGame *)this;
              if (!(bool)uVar4) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar12 + 0x24),
                           (MethodInfo *)0x0);
                iVar12 = func_?();
                uVar3 = 0;
                uVar4 = iVar12 == 0;
                unaff_ESI = (MVNetworkGame *)this;
                if (!(bool)uVar4) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            ((WWWForm *)unaff_EDI,StringLiteral_profile_id,
                             *(int32_t *)(iVar12 + 0xc),(MethodInfo *)0x0);
                  iVar12 = func_?();
                  uVar3 = 0;
                  uVar4 = iVar12 == 0;
                  unaff_ESI = (MVNetworkGame *)this;
                  if (!(bool)uVar4) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              ((WWWForm *)unaff_EDI,StringLiteral_planet_id,
                               *(int32_t *)(iVar12 + 0x10),(MethodInfo *)0x0);
                    iVar12 = func_?();
                    uVar3 = 0;
                    uVar4 = iVar12 == 0;
                    unaff_ESI = (MVNetworkGame *)this;
                    if (!(bool)uVar4) {
                      pSVar18 = *(String **)(iVar12 + 0x3c);
                      this_04 = (PostRequest *)func_?();
                      PostRequest::PostRequest__ctor
                                (this_04,pSVar18,(WWWForm *)unaff_EDI,
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
    uVar3 = 0;
    uVar4 = 1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar3 = 0;
    uVar4 = 1;
    if (unaff_ESI == (MVNetworkGame *)0x0) goto code_?;
    uVar3 = 0;
    uVar4 = 1;
    if (pOVar7 == (Object *)0x0) goto code_?;
    pIVar8 = (pOVar7->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    uVar3 = pIVar8 < pIVar9;
    uVar4 = false;
    pMVar1 = unaff_ESI;
    if (pIVar8 == pIVar9) {
      piVar13 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (unaff_ESI,*piVar13,(MethodInfo *)0x0);
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
      pSVar18 = mscorlib.dll::System::Enum::Enum_ToString
                          ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar18 = mscorlib.dll::System::String::String_Concat_3
                          (StringLiteral_Unhandled_operation_code_,pSVar18,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar18,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar1->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar19 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                (pMVar1,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  switch(opCode & MVOperationCodes__Enum_Join) {
  case MVOperationCodes__Enum_LockHierarchy:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    unaff_EBX = (MVNetworkGame *)this;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pEVar20 = (pMVar1->fields).ScreenshotUploaded;
      if (pEVar20 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar20->fields)._._.invoke_impl)();
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                (pMVar1,returnValues,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      pWVar14 = (pMVar1->fields).worldNetwork;
      uVar3 = 0;
      uVar4 = pWVar14 == (WorldNetwork *)0x0;
      if (!(bool)uVar4) {
        pMVar15 = (pWVar14->fields)._.worldObjectClientManager;
        uVar3 = 0;
        uVar4 = pMVar15 == (MVWorldObjectClientManagerNetwork *)0x0;
        if (!(bool)uVar4) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                    (pMVar15,returnCode == 0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
    goto code_?;
  case MVOperationCodes__Enum_PurchaseProduct:
    unaff_ESI = (MVNetworkGame *)0x0;
    uVar3 = 0;
    uVar4 = 1;
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if ((bVar5 == 0) ||
       (unaff_ESI = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x5f,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI == (MVNetworkGame *)0x0)) {
code_?:
      pMVar1 = (this->fields).networkGame;
      uVar3 = 0;
      uVar4 = 1;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                 (MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      uVar3 = 0;
      uVar4 = 1;
      unaff_ESI = _returnCode;
      if (pMVar1 == (MVNetworkGame *)0x0) break;
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
      uVar3 = 0;
      uVar4 = 1;
      if (pMVar2 == (MVLocalPlayer *)0x0) break;
      unaff_ESI = (MVNetworkGame *)(pMVar2->fields)._._UserProfileData_k__BackingField;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar3 = 0;
      uVar4 = 1;
      if (unaff_ESI == (MVNetworkGame *)0x0) break;
      uVar3 = 0;
      uVar4 = 1;
      if (pOVar7 == (Object *)0x0) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      uVar3 = pIVar8 < pIVar9;
      uVar4 = false;
      pMVar1 = unaff_ESI;
      if (pIVar8 == pIVar9) {
        puVar21 = (undefined4 *)func_?();
        (unaff_ESI->fields).ReceivedAccessoryData = (Action_1_String_ *)*puVar21;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar1 == (MVNetworkGame *)0x0) break;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        uVar3 = 0;
        uVar4 = 1;
        if (pMVar2 == (MVLocalPlayer *)0x0) break;
        pAVar10 = (pMVar2->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    }
    unaff_EBX = (MVNetworkGame *)unaff_ESI->klass;
    bVar22 = *(byte *)&(unaff_EBX->fields).OnWinningConditionFulfilled;
    bVar23 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    uVar3 = bVar22 < bVar23;
    uVar4 = bVar22 == bVar23;
    pMVar1 = unaff_ESI;
    if (!(bool)uVar3) {
      pDVar24 = *(Dictionary_2_System_Object_System_Object___Class **)
                 ((int)(unaff_EBX->fields)._CustomTouristPromotionSettings_k__BackingField +
                 (uint)(
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       ->_1).naturalAligment * 4 + -4);
      uVar3 = pDVar24 < 
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      uVar4 = 0;
      if (pDVar24 ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
      goto code_?;
    }
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar19 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    unaff_EDI = (MVNetworkGame *)this;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    unaff_EBX = _returnCode;
    unaff_ESI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    uVar3 = 0;
    uVar4 = 1;
    unaff_ESI = pMVar1;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    uVar3 = 0;
    uVar4 = 1;
    if (pOVar7 == (Object *)0x0) break;
    pIVar8 = (pOVar7->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    uVar3 = pIVar8 < pIVar9;
    uVar4 = pIVar8 == pIVar9;
    if (!(bool)uVar4) goto code_?;
    piVar13 = (int32_t *)func_?();
    itemID = *piVar13;
    uVar3 = 0;
    uVar4 = 1;
    if (unaff_EDI == (MVNetworkGame *)0x0) break;
    pIVar8 = (Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    uVar3 = pIVar8 < pIVar9;
    uVar4 = 0;
    if (pIVar8 == pIVar9) {
      piVar13 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar1,(int)returnCode,*piVar13,itemID,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pAVar10 = (pMVar1->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    unaff_EDI = _returnCode;
    if (returnCode == 0) {
      uVar3 = 0;
      uVar4 = 1;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      uVar3 = 0;
      uVar4 = 1;
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar7 == (Object *)0x0) break;
      pIVar8 = (pOVar7->klass->_0).element_class;
      pIVar9 = (TypeInfo__System__Int32->_0).element_class;
      uVar3 = pIVar8 < pIVar9;
      uVar4 = false;
      if (pIVar8 == pIVar9) {
        puVar21 = (undefined4 *)func_?();
        unaff_EBX = (MVNetworkGame *)*puVar21;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        uVar3 = 0;
        uVar4 = 1;
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (pOVar7 == (Object *)0x0) break;
        pIVar8 = (pOVar7->klass->_0).element_class;
        pIVar9 = (TypeInfo__System__Int32->_0).element_class;
        uVar3 = pIVar8 < pIVar9;
        uVar4 = false;
        if (pIVar8 == pIVar9) {
          puVar21 = (undefined4 *)func_?();
          unaff_ESI = (MVNetworkGame *)*puVar21;
          iVar12 = func_?();
          uVar3 = 0;
          uVar4 = 1;
          if (iVar12 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          uVar3 = 0;
          uVar4 = 1;
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
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar19 = (pMVar1->fields).OnMarketPlaceActionComplete;
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = 1;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pMVar19 = (pMVar1->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar19 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar19->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      pAVar25 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
      if (pAVar25 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar25->fields)._._.invoke_impl)();
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
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      pMVar11 = (pMVar1->fields)._PlayerController_k__BackingField;
      uVar3 = 0;
      uVar4 = pMVar11 == (MVLocalObjectController *)0x0;
      if (!(bool)uVar4) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar11,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar1 = (this->fields).networkGame;
    uVar3 = 0;
    uVar4 = pMVar1 == (MVNetworkGame *)0x0;
    if (!(bool)uVar4) {
      pMVar11 = (pMVar1->fields)._PlayerController_k__BackingField;
      uVar3 = 0;
      uVar4 = pMVar11 == (MVLocalObjectController *)0x0;
      if (!(bool)uVar4) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar11,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar26 = func_?();
  pcVar27 = (char *)uVar26;
  if (!(bool)uVar3 && !(bool)uVar4) {
    return;
  }
  puVar28 = (uint8_t *)((int)&unaff_EDI[-0xb7fb5].fields._Peer_k__BackingField + 2);
  bVar29 = (byte)unaff_EBX;
  bVar30 = CARRY1(*puVar28,bVar29) || CARRY1(*puVar28 + bVar29,uVar3);
  *puVar28 = *puVar28 + bVar29 + uVar3;
  bVar31 = (byte)uVar26;
  *(byte *)&((Il2CppClass_0 *)&unaff_EDI->klass)->image = bVar31;
  pbVar32 = (byte *)((int)&unaff_EBX[-1].fields.OnReceivedChatMessage + 3);
  bVar33 = (byte)((uint)unaff_EBX >> 8);
  bVar34 = CARRY1(*pbVar32,bVar33) || CARRY1(*pbVar32 + bVar33,bVar30);
  *pbVar32 = *pbVar32 + bVar33 + bVar30;
  bVar35 = (byte)((ulonglong)uVar26 >> 8);
  bVar30 = CARRY1(*extraout_ECX,bVar35) || CARRY1(*extraout_ECX + bVar35,bVar34);
  *extraout_ECX = *extraout_ECX + bVar35 + bVar34;
  *(char **)((int)&((Il2CppClass_0 *)&unaff_EDI->klass)->image + 1) = pcVar27;
  pbVar32 = (byte *)((int)&unaff_ESI[-1].fields.OnAddWorldObjectToInventoryCallbackDev + 3);
  bVar34 = CARRY1(*pbVar32,bVar35) || CARRY1(*pbVar32 + bVar35,bVar30);
  *pbVar32 = *pbVar32 + bVar35 + bVar30;
  bVar36 = (byte)((uint)extraout_ECX >> 8);
  bVar23 = (byte)((ulonglong)uVar26 >> 0x28);
  bVar22 = bVar23 + bVar36;
  bVar30 = CARRY1(bVar23,bVar36) || CARRY1(bVar22,bVar34);
  piVar37 = (int *)CONCAT22((short)((ulonglong)uVar26 >> 0x30),
                            CONCAT11(bVar22 + bVar34,(char)((ulonglong)uVar26 >> 0x20)));
  *(char **)((int)&unaff_EDI->monitor + 1) = pcVar27;
  pbVar32 = (byte *)((int)&unaff_EDI[-1].fields.OnMarketPlaceActionComplete + 2);
  bVar38 = (byte)extraout_ECX;
  bVar34 = CARRY1(*pbVar32,bVar38) || CARRY1(*pbVar32 + bVar38,bVar30);
  *pbVar32 = *pbVar32 + bVar38 + bVar30;
  pbVar32 = (byte *)((int)piVar37 + -0x53);
  bVar22 = *pbVar32;
  bVar23 = *pbVar32;
  *pbVar32 = bVar23 + bVar33 + bVar34;
  pcVar27[0x621054ad] =
       pcVar27[0x621054ad] + bVar35 + (CARRY1(bVar22,bVar33) || CARRY1(bVar23 + bVar33,bVar34));
  pcVar39 = (char *)((int)&unaff_ESI[-0x3e2a60].fields._WinningConditionManager_k__BackingField + 2);
  *pcVar39 = *pcVar39 + bVar29 +
            (bVar31 < *(byte *)((int)&(unaff_EDI->fields).ReceivedItemFromQuery + 1));
  pbVar40 = (byte *)CONCAT22((short)((uint)extraout_ECX >> 0x10),
                             CONCAT11(bVar36 + bVar29 +
                                      (pcVar27 <
                                      *(char **)((int)&(unaff_EDI->fields).ReceivedItemFromQuery + 2
                                                )),bVar38));
  bVar30 = pcVar27 < *(char **)((int)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery + 2);
  pbVar32 = (byte *)(pcVar27 + (int)unaff_ESI * 4 + 0x54);
  bVar34 = CARRY1(*pbVar32,bVar31) || CARRY1(*pbVar32 + bVar31,bVar30);
  *pbVar32 = *pbVar32 + bVar31 + bVar30;
  ppMVar41 = &unaff_ESI[-1].fields.OnReceivedChatMessage;
  bVar22 = *(byte *)ppMVar41;
  cVar42 = *(char *)ppMVar41;
  *(byte *)ppMVar41 = cVar42 + bVar33 + bVar34;
  *pcVar27 = *pcVar27 + bVar31 + (CARRY1(bVar22,bVar33) || CARRY1(cVar42 + bVar33,bVar34));
  *piVar37 = (int)(pcVar27 + *piVar37);
  *pbVar40 = *pbVar40 | bVar38;
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

