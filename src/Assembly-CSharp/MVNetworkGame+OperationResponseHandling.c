
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
  if (MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition < (byte)(undefined1)opCode) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_SetProfileSettings) {
      if ((byte)(undefined1)opCode < MVOperationCodes__Enum_PostChatMsg) {
        if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) {
          if ((undefined1)opCode == MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold) {
            if (returnCode != -1) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0)
              ;
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
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          pMVar1 = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xbf,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xdb,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          if (pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0) {
            pIVar3 = (Int32__Class *)TypeInfo__System__Byte;
            if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
                (TypeInfo__System__Byte->_0).element_class) goto code_?;
            puVar4 = (undefined1 *)func_?();
            unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                        CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar4);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pSVar5 = (String__Class *)TypeInfo__System__Int32;
              if ((pMVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                pFVar6 = (FirstTimeEvent__Enum *)func_?(pMVar1);
                FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                          (*pFVar6,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
        }
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_GetPlanetOwnerships) {
          if (returnCode == -1) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
            return;
          }
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
          pMVar7 = (MVNetworkGame *)0x0;
          if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
            Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                      ((String *)pMVar7,
                       MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                      );
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pAVar8 = (pMVar1->fields).ReceivedPlanetOwnershipData;
              if (pAVar8 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                return;
              }
              (*(pAVar8->fields)._._.invoke_impl)();
              return;
            }
            goto code_?;
          }
          if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
            pMVar7 = pMVar1;
          }
          pSVar5 = TypeInfo__System__String;
          if (pMVar7 != (MVNetworkGame *)0x0) goto code_?;
          goto code_?;
        }
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar1 = (this->fields).networkGame;
          if (pMVar1 != (MVNetworkGame *)0x0) {
            if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
              return;
            }
            pAVar9 = (pMVar1->fields).OnAccessoryUnequipped;
            goto code_?;
          }
        }
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pMVar1 = (MVNetworkGame *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0xcf,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
            if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
            }
            pMVar7 = (MVNetworkGame *)0x0;
            if (pMVar1 != (MVNetworkGame *)0x0) {
              if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
                pMVar7 = pMVar1;
              }
              pSVar5 = TypeInfo__System__String;
              if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
            }
            this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                         JsonConvert_DeserializeObject_2
                                   ((String *)pMVar7,
                                    System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                                   );
            if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
                (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
              return;
            }
            pAVar10 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
            if (this_01 !=
                (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
              MultiColumnCollectionHeader+ViewState+ColumnState]::
              List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                        (this_01,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                        );
              (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code);
              return;
            }
          }
        }
      }
    }
    else if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
      if ((undefined1)opCode == MVOperationCodes__Enum_UpdateGold) {
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                             (returnValues,0x82,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                             );
          if (bVar11 == 0) {
            return;
          }
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            in_stack_12 = (Enum__Class *)0x0;
            pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
            if (pMVar13 != (MVLocalPlayer *)0x0) {
              unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                          (pMVar13->fields)._._UserProfileData_k__BackingField;
              in_stack_12 = (Enum__Class *)returnValues;
              pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                  (returnValues,0x82,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              if ((unaff_EDI != (Dictionary_2_System_Object_System_Object___Class *)0x0) &&
                 (pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0)) {
                pIVar3 = TypeInfo__System__Int32;
                if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
                    (TypeInfo__System__Int32->_0).element_class) goto code_?;
                p_Var21 = (_union_86 *)func_?();
                (unaff_EDI->_0).byval_arg.data = *p_Var21;
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                this = pMVar2;
                if ((pMVar1 != (MVNetworkGame *)0x0) &&
                   (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar1,(MethodInfo *)0x0), pMVar13 != (MVLocalPlayer *)0x0
                   )) {
                  if ((pMVar13->fields)._.OnGoldAmountChange == (Action *)0x0) {
                    return;
                  }
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar1 != (MVNetworkGame *)0x0) &&
                     (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar1,(MethodInfo *)0x0),
                     pMVar13 != (MVLocalPlayer *)0x0)) {
                    pAVar9 = (pMVar13->fields)._.OnGoldAmountChange;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((undefined1)opCode != MVOperationCodes__Enum_CreateSpawnRole) goto code_?;
        if (returnCode != -1) {
          return;
        }
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar13 != (MVLocalPlayer *)0x0) {
          MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar13,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
      pMVar1 = (this->fields).networkGame;
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar14 = (pMVar1->fields)._PlayerController_k__BackingField,
         pMVar14 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                  (pMVar14,returnCode == 0,returnValues,(MethodInfo *)0x0);
        return;
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_GetInventoryItemData) {
      if (returnCode != -1) {
        return;
      }
      iVar15 = func_?(0);
      if ((iVar15 != 0) && (iVar15 = func_?(4,TypeInfo__IEditModeUI,iVar15), iVar15 != 0))
      {
        if (*(int *)(iVar15 + 0x10) == 0) {
          return;
        }
        iVar15 = func_?(0);
        if ((iVar15 != 0) && (iVar15 = func_?(4,TypeInfo__IEditModeUI,iVar15), iVar15 != 0)
           ) {
          pAVar9 = *(Action **)(iVar15 + 0x10);
          goto code_?;
        }
      }
    }
    else {
      if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        (pMVar1->fields).connState = 4;
        if (returnCode != 0) {
          if ((returnCode == -0xc) &&
             (bVar11 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
             bVar11 != 0)) {
            return;
          }
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0);
          this_00 = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
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
    }
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_RequestAcceptFriendship) {
    if ((byte)(undefined1)opCode < MVOperationCodes__Enum_UpdateWorldObjectDataPartial) {
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
      if (((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
          (pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (returnValues,0x16,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               ), pMVar1 != (MVNetworkGame *)0x0)) &&
         (pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0)) {
        pIVar3 = TypeInfo__System__Int32;
        if ((((Object__Class *)pMVar2->klass)->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar16 = (int32_t *)func_?(pMVar2);
          MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                    (pMVar1,*piVar16,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                  (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
      pSVar17 = StringLiteral_You_are_not_authorized_to_publis;
      if (((returnCode == -2) || (pSVar17 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
         (pSVar17 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
        pSVar17 = TM::TM__(pSVar17,(MethodInfo *)0x0);
      }
      else {
        pSVar17 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
        pMVar1 = (this->fields).networkGame;
        if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
        (pMVar1->fields).isPublished = 1;
      }
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        if ((pMVar1->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
          pUVar18 = (pMVar1->fields).OnPublishedPlanet;
          (*(pUVar18->fields)._._.invoke_impl)
                    ((pUVar18->fields)._._.method_code,pSVar17,(pUVar18->fields)._._.method);
        }
        iVar15 = func_?(0);
        if (iVar15 != 0) {
          bVar11 = mscorlib.dll::System::String::String_IsNullOrEmpty
                             (*(String **)(iVar15 + 0x3c),(MethodInfo *)0x0);
          if (bVar11 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0);
            return;
          }
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)func_?();
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                    ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
          in_stack_12 = (Enum__Class *)0x0;
          iVar15 = func_?();
          if ((iVar15 != 0) &&
             (unaff_EDI != (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                      ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar15 + 0x24),
                       (MethodInfo *)0x0);
            iVar15 = func_?(0);
            if (iVar15 != 0) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                        ((WWWForm *)unaff_EDI,StringLiteral_profile_id,*(int32_t *)(iVar15 + 0xc),
                         (MethodInfo *)0x0);
              iVar15 = func_?(0);
              if (iVar15 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          ((WWWForm *)unaff_EDI,StringLiteral_planet_id,*(int32_t *)(iVar15 + 0x10),
                           (MethodInfo *)0x0);
                iVar15 = func_?(0);
                if (iVar15 != 0) {
                  pSVar17 = *(String **)(iVar15 + 0x3c);
                  this_04 = (PostRequest *)func_?(TypeInfo__PostRequest);
                  PostRequest::PostRequest__ctor
                            (this_04,pSVar17,(WWWForm *)unaff_EDI,
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
    else {
      if ((undefined1)opCode != MVOperationCodes__Enum_RequestFriendshipByProfileID)
      goto code_?;
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                  (pMVar1,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
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
    if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
       (pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            ), pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0)) {
      pIVar3 = TypeInfo__System__Int32;
      pMVar1 = unaff_ESI;
      if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar16 = (int32_t *)func_?(pMVar2);
      pMVar1 = (this->fields).networkGame;
      if (((pMVar1 != (MVNetworkGame *)0x0) &&
          (pWVar19 = (pMVar1->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
         (pMVar20 = (pWVar19->fields)._.worldObjectClientManager,
         pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                  (pMVar20,returnCode == 0,*piVar16,(MethodInfo *)0x0);
        return;
      }
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
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pEVar21 = (pMVar1->fields).ScreenshotUploaded;
      if (pEVar21 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)
                func_?(TypeInfo__ScreenshotUploadedEventArgs);
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar21->fields)._._.invoke_impl)
                ((pEVar21->fields)._._.method_code,this,this_02,(pEVar21->fields)._._.method);
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
    pSVar17 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar17 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_Unhandled_operation_code_,pSVar17,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar17,(MethodInfo *)0x0);
    return;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar1 = (this->fields).networkGame;
    if (((pMVar1 != (MVNetworkGame *)0x0) &&
        (pWVar19 = (pMVar1->fields).worldNetwork, pWVar19 != (WorldNetwork *)0x0)) &&
       (pMVar20 = (pWVar19->fields)._.worldObjectClientManager,
       pMVar20 != (MVWorldObjectClientManagerNetwork *)0x0)) {
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                (pMVar20,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
    goto code_?;
  case MVOperationCodes__Enum_PurchaseProduct:
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if (((bVar11 == 0) ||
        (purchaseResponseData =
              (Dictionary_2_System_Object_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x5f,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        ), purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0)
        ) || ((unaff_EBX = purchaseResponseData->klass,
              (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment <= (unaff_EBX->_1).naturalAligment &&
              ((Dictionary_2_System_Object_System_Object___Class *)
               (unaff_EBX->_1).typeHierarchy
               [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment - 1] ==
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))
       ) {
      pMVar1 = (this->fields).networkGame;
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
           pMVar13 != (MVLocalPlayer *)0x0)) {
          opCode = (MVOperationCodes__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
          ;
          pMVar1 = (MVNetworkGame *)(pMVar13->fields)._._UserProfileData_k__BackingField;
          this = (MVNetworkGame_OperationResponseHandling *)0x82;
          pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x82,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0)) {
            pIVar3 = TypeInfo__System__Int32;
            if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
                (TypeInfo__System__Int32->_0).element_class) goto code_?;
            puVar22 = (undefined4 *)func_?();
            (pMVar1->fields).ReceivedAvatarBodiesFromQuery =
                 (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar22;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar1 != (MVNetworkGame *)0x0) &&
               (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
               pMVar13 != (MVLocalPlayer *)0x0)) {
              if ((pMVar13->fields)._.OnGoldAmountChange == (Action *)0x0) {
                return;
              }
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pMVar13 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 pMVar13 != (MVLocalPlayer *)0x0)) {
                pAVar9 = (pMVar13->fields)._.OnGoldAmountChange;
                goto code_?;
              }
            }
          }
        }
      }
      break;
    }
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar23 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      bVar24 = returnCode == -1;
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
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    unaff_EBX = _returnCode;
    opCode = (MVOperationCodes__Enum)pMVar1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    in_stack_12 =
         (Enum__Class *)
         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pMVar2 = (MVNetworkGame_OperationResponseHandling *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 == (MVNetworkGame_OperationResponseHandling *)0x0)) break;
    pIVar3 = TypeInfo__System__Int32;
    if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    this = (MVNetworkGame_OperationResponseHandling *)&UNK_?;
    pMVar25 = (MVOperationCodes__Enum *)func_?();
    opCode = *pMVar25;
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    pIVar3 = TypeInfo__System__Int32;
    if ((((UserProfileData__Class *)(unaff_EDI->_0).image)->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar16 = (int32_t *)func_?(unaff_EDI);
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar1,(int)returnCode,*piVar16,opCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar9 = (pMVar1->fields).OnActiveAvatarSet;
code_?:
        if (pAVar9 != (Action *)0x0) {
code_?:
          (*(pAVar9->fields)._._.invoke_impl)
                    ((pAVar9->fields)._._.method_code,(pAVar9->fields)._._.method);
          return;
        }
      }
    }
    break;
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
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar23 = (pMVar1->fields).OnMarketPlaceActionComplete;
        if (pMVar23 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar24 = returnCode == 0;
        goto code_?;
      }
      break;
    }
    if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
       (pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x28,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            ), pMVar2 == (MVNetworkGame_OperationResponseHandling *)0x0)) break;
    pIVar3 = TypeInfo__System__Int32;
    if ((((Object__Class *)pMVar2->klass)->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar16 = (int32_t *)func_?(pMVar2);
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar16;
      pMVar2 = (MVNetworkGame_OperationResponseHandling *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x87,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      if (pMVar2 != (MVNetworkGame_OperationResponseHandling *)0x0) {
        pIVar3 = TypeInfo__System__Int32;
        if ((((Object__Class *)pMVar2->klass)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar16 = (int32_t *)func_?(pMVar2);
        shopInventoryID = *piVar16;
        iVar15 = func_?(0);
        if ((iVar15 != 0) &&
           (this_03 = (PlayerShopInventoryRepository *)
                      func_?(4,TypeInfo__IEditModeUI,iVar15),
           this_03 != (PlayerShopInventoryRepository *)0x0)) {
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,shopInventoryID,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      break;
    }
code_?:
    func_?(pMVar2,pIVar3);
    pSVar5 = extraout_ECX;
code_?:
    func_?(pMVar1,pSVar5);
code_?:
    in_stack_12 = (Enum__Class *)&UNK_?;
    func_?();
    pIVar3 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar3);
    break;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar23 = (pMVar1->fields).OnMarketPlaceActionComplete;
      if (pMVar23 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      bVar24 = returnCode == 0;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar26 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
      if (pAVar26 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar26->fields)._._.invoke_impl)
                  ((pAVar26->fields)._._.method_code,returnCode == 0,(pAVar26->fields)._._.method);
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
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar14 = (pMVar1->fields)._PlayerController_k__BackingField,
       pMVar14 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                (pMVar14,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar1 = (this->fields).networkGame;
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar14 = (pMVar1->fields)._PlayerController_k__BackingField,
       pMVar14 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                (pMVar14,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    if ((undefined1)opCode != MVOperationCodes__Enum_AddAvatarToAvatarShopInventory)
    goto code_?;
code_?:
    pMVar1 = (this->fields).networkGame;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnMarketPlaceActionComplete ==
          (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      pMVar23 = (pMVar1->fields).OnMarketPlaceActionComplete;
      bVar24 = returnCode == 0;
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar23->fields)->_)._.invoke_impl)
                ((((Action_1_Boolean___Fields *)&pMVar23->fields)->_)._.method_code,bVar24,
                 (((Action_1_Boolean___Fields *)&pMVar23->fields)->_)._.method);
      return;
    }
  }
code_?:
  uVar27 = func_?();
  pbVar28 = (byte *)((ulonglong)uVar27 >> 0x20);
  lVar29 = (longlong)(int)(in_stack_12->_0).byval_arg.data.__klassIndex * -0x16;
  puVar30 = (undefined1 *)lVar29;
  piVar31 = (int16_t *)(puVar30 + -4);
  *(undefined4 *)(puVar30 + -4) = 0x66;
  pbVar32 = puVar30 + (int)&stack0xfffffffc * 2 + -4;
  bVar33 = (byte)uVar27;
  bVar24 = CARRY1(*pbVar32,bVar33) || CARRY1(*pbVar32 + bVar33,(int)puVar30 != lVar29);
  *pbVar32 = *pbVar32 + bVar33 + ((int)puVar30 != lVar29);
  pbVar32 = (byte *)(extraout_ECX_01 + 0x6c);
  bVar34 = (byte)extraout_ECX_01;
  bVar35 = CARRY1(*pbVar32,bVar34) || CARRY1(*pbVar32 + bVar34,bVar24);
  *pbVar32 = *pbVar32 + bVar34 + bVar24;
  bVar36 = (byte)((ulonglong)uVar27 >> 0x20);
  bVar37 = bVar34 + bVar36;
  bVar24 = CARRY1(bVar34,bVar36) || CARRY1(bVar37,bVar35);
  bVar37 = bVar37 + bVar35;
  pbVar38 = (byte *)CONCAT31((int3)((uint)extraout_ECX_01 >> 8),bVar37);
  pbVar39 = (byte *)((int)&(unaff_EDI->_0).image + 1);
  uVar40 = (undefined2)((ulonglong)uVar27 >> 0x20);
  uVar41 = in(uVar40);
  *(undefined1 *)&(unaff_EDI->_0).image = uVar41;
  bVar34 = *pbVar28;
  bVar42 = (byte)((ulonglong)uVar27 >> 0x28);
  bVar36 = *pbVar28 + bVar42;
  *pbVar28 = bVar36 + bVar24;
  out(*(undefined1 *)&(in_stack_12->_0).image,uVar40);
  bVar24 = CARRY1(in_stack_43,(byte)unaff_EBX) ||
           CARRY1(in_stack_43 + (byte)unaff_EBX,CARRY1(bVar34,bVar42) || CARRY1(bVar36,bVar24)
                 );
  puVar4 = (undefined1 *)((int)&unaff_EBX[0x204374].vtable.OnDeserialization_1.methodPtr + 2);
  bVar35 = CARRY1(*puVar4,bVar33) || CARRY1(*puVar4 + bVar33,bVar24);
  *puVar4 = *puVar4 + bVar33 + bVar24;
  out(*(undefined4 *)((int)&(in_stack_12->_0).image + 1),uVar40);
  pbVar32 = pbVar38 + -0x62ef9991;
  bVar34 = *pbVar32;
  bVar36 = *pbVar32 + bVar33;
  bVar24 = CARRY1(*pbVar32,bVar33) || CARRY1(bVar36,bVar35);
  *pbVar32 = bVar36 + bVar35;
  if (SCARRY1(bVar34,bVar33) == SCARRY1(bVar36,bVar35)) {
    bVar34 = bVar33 * '\x02';
    bVar35 = CARRY1(bVar33,bVar33) || CARRY1(bVar34,bVar24);
    pcVar44 = (char *)CONCAT31((int3)((ulonglong)uVar27 >> 8),bVar34 + bVar24);
    if (SCARRY1(bVar33,bVar33) == SCARRY1(bVar34,bVar24)) {
      bVar42 = (byte)((ulonglong)uVar27 >> 8);
      bVar36 = *pbVar39;
      bVar33 = *pbVar39 + bVar42;
      bVar45 = CARRY1(*pbVar39,bVar42) || CARRY1(bVar33,bVar35);
      *pbVar39 = bVar33 + bVar35;
      piVar31 = (int16_t *)puVar30;
      if (SCARRY1(bVar36,bVar42) != SCARRY1(bVar33,bVar35)) {
        pbVar32 = pbVar38 + 0x71;
        bVar36 = *pbVar32;
        bVar33 = *pbVar32;
        *pbVar32 = bVar33 + bVar42 + bVar45;
        *pcVar44 = *pcVar44 + bVar34 + bVar24 +
                   (CARRY1(bVar36,bVar42) || CARRY1(bVar33 + bVar42,bVar45));
        *(char **)pbVar28 = pcVar44 + *(int *)pbVar28;
        *pbVar38 = *pbVar38 | bVar37;
        *(undefined2 *)(puVar30 + -4) = in_CS;
        FastExitMediaState();
        pcVar46 = (code *)swi(3);
        (*pcVar46)();
        return;
      }
      goto code_?;
    }
  }
  else {
    piVar31 = (int16_t *)(puVar30 + -8);
    *(byte **)(puVar30 + -8) = pbVar28;
    opCode = CONCAT31(opCode._1_3_,bVar33);
  }
  *(undefined4 *)((int)piVar31 + -4) = *(undefined4 *)(pbVar38 + 0x10);
code_?:
  *(MVOperationCodes__Enum *)(piVar31 + -4) = opCode;
  *(MVNetworkGame_OperationResponseHandling **)(piVar31 + -6) = this;
  *(undefined **)(piVar31 + -8) = &UNK_?;
  MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
            (*(MVNetworkGame_OperationResponseHandling **)(piVar31 + -6),
             *(MVOperationCodes__Enum *)(piVar31 + -4),
             *(Dictionary_2_System_Byte_System_Object_ **)(piVar31 + -2),*piVar31,
             *(MethodInfo **)(piVar31 + 2));
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

