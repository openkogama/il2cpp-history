
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
        cVar2 = '\0';
        unaff_EDI = (MVNetworkGame *)returnValues;
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          pMVar1 = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xbf,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xdb,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          cVar2 = '\0';
          unaff_ESI = pMVar1;
          if (pOVar3 != (Object *)0x0) {
            pIVar4 = (pOVar3->klass->_0).element_class;
            pIVar5 = (TypeInfo__System__Byte->_0).element_class;
            cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
            pIVar6 = (Int32__Class *)TypeInfo__System__Byte;
            if (pIVar4 != pIVar5) goto code_?;
            puVar7 = (undefined1 *)func_?();
            unaff_EBX = (MVNetworkGame *)CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar7);
            cVar2 = '\0';
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pIVar4 = (pMVar1->klass->_0).element_class;
              pIVar5 = (TypeInfo__System__Int32->_0).element_class;
              cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
              pSVar8 = (String__Class *)TypeInfo__System__Int32;
              if (pIVar4 == pIVar5) {
                pFVar9 = (FirstTimeEvent__Enum *)func_?(pMVar1);
                FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                          (*pFVar9,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
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
          pMVar10 = (MVNetworkGame *)0x0;
          if (pMVar1 == (MVNetworkGame *)0x0) {
code_?:
            unaff_ESI = (MVNetworkGame *)
                        Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                        JsonConvert_DeserializeObject_2
                                  ((String *)pMVar10,
                                   MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                                  );
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            cVar2 = '\0';
            if (pMVar1 != (MVNetworkGame *)0x0) {
              pAVar11 = (pMVar1->fields).ReceivedPlanetOwnershipData;
              if (pAVar11 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                return;
              }
              (*(pAVar11->fields)._._.invoke_impl)();
              return;
            }
            goto code_?;
          }
          if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
            pMVar10 = pMVar1;
          }
          cVar2 = '\0';
          pSVar8 = TypeInfo__System__String;
          if (pMVar10 != (MVNetworkGame *)0x0) goto code_?;
          goto code_?;
        }
        if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar1 = (this->fields).networkGame;
          cVar2 = '\0';
          if (pMVar1 != (MVNetworkGame *)0x0) {
            if ((pMVar1->fields).OnAccessoryUnequipped == (Action *)0x0) {
              return;
            }
            pAVar12 = (pMVar1->fields).OnAccessoryUnequipped;
            goto code_?;
          }
        }
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
          cVar2 = '\0';
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
            pMVar10 = (MVNetworkGame *)0x0;
            if (pMVar1 != (MVNetworkGame *)0x0) {
              if ((String__Class *)pMVar1->klass == TypeInfo__System__String) {
                pMVar10 = pMVar1;
              }
              cVar2 = '\0';
              pSVar8 = TypeInfo__System__String;
              if (pMVar10 == (MVNetworkGame *)0x0) goto code_?;
            }
            this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                       *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                         JsonConvert_DeserializeObject_2
                                   ((String *)pMVar10,
                                    System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                                   );
            if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
                (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
              return;
            }
            unaff_ESI = (MVNetworkGame *)
                        TypeInfo__ThemeSelection__CallbackHandler->static_fields->
                        OnThemeDataReceived;
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
              (*(code *)(unaff_ESI->fields).ReceivedItemFromQuery)
                        (*(undefined4 *)&(unaff_ESI->fields).isPublished);
              return;
            }
          }
        }
      }
    }
    else if ((byte)(undefined1)opCode < MVOperationCodes__Enum_GetAvatarBodies) {
      if ((undefined1)opCode == MVOperationCodes__Enum_UpdateGold) {
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)returnValues;
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                             (returnValues,0x82,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                             );
          if (bVar13 == 0) {
            return;
          }
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          cVar2 = '\0';
          unaff_ESI = (MVNetworkGame *)returnValues;
          if (pMVar10 != (MVNetworkGame *)0x0) {
            pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar10,(MethodInfo *)0x0);
            cVar2 = '\0';
            unaff_ESI = (MVNetworkGame *)returnValues;
            if (pMVar14 != (MVLocalPlayer *)0x0) {
              unaff_EDI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
              pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                        ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                  (returnValues,0x82,
                                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                  );
              cVar2 = '\0';
              unaff_ESI = (MVNetworkGame *)returnValues;
              if ((unaff_EDI != (MVNetworkGame *)0x0) &&
                 (cVar2 = '\0', unaff_ESI = (MVNetworkGame *)returnValues, pOVar3 != (Object *)0x0
                 )) {
                pIVar4 = (pOVar3->klass->_0).element_class;
                pIVar5 = (TypeInfo__System__Int32->_0).element_class;
                cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
                pIVar6 = TypeInfo__System__Int32;
                if (pIVar4 != pIVar5) goto code_?;
                p_Var24 = (_union_86 *)func_?();
                ((Il2CppType *)&(unaff_EDI->fields).ReceivedAvatarBodiesFromQuery)->data = *p_Var24;
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                cVar2 = '\0';
                unaff_ESI = (MVNetworkGame *)returnValues;
                if (pMVar1 != (MVNetworkGame *)0x0) {
                  pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                  cVar2 = '\0';
                  unaff_ESI = (MVNetworkGame *)returnValues;
                  if (pMVar14 != (MVLocalPlayer *)0x0) {
                    if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
                      return;
                    }
                    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
                    ;
                    cVar2 = '\0';
                    unaff_ESI = (MVNetworkGame *)returnValues;
                    if (pMVar1 != (MVNetworkGame *)0x0) {
                      pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                          (pMVar1,(MethodInfo *)0x0);
                      cVar2 = '\0';
                      unaff_ESI = (MVNetworkGame *)returnValues;
                      if (pMVar14 != (MVLocalPlayer *)0x0) {
                        pAVar12 = (pMVar14->fields)._.OnGoldAmountChange;
                        unaff_ESI = (MVNetworkGame *)returnValues;
                        goto code_?;
                      }
                    }
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
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        cVar2 = '\0';
        if (pMVar14 != (MVLocalPlayer *)0x0) {
          MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar15 = (pMVar1->fields)._PlayerController_k__BackingField;
        cVar2 = '\0';
        if (pMVar15 != (MVLocalObjectController *)0x0) {
          MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                    (pMVar15,returnCode == 0,returnValues,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_GetInventoryItemData) {
      if (returnCode != -1) {
        return;
      }
      iVar16 = func_?(0);
      cVar2 = '\0';
      if (iVar16 != 0) {
        iVar16 = func_?(4,TypeInfo__IEditModeUI,iVar16);
        cVar2 = '\0';
        if (iVar16 != 0) {
          if (*(int *)(iVar16 + 0x10) == 0) {
            return;
          }
          iVar16 = func_?(0);
          cVar2 = '\0';
          if (iVar16 != 0) {
            iVar16 = func_?(4,TypeInfo__IEditModeUI,iVar16);
            cVar2 = '\0';
            if (iVar16 != 0) {
              pAVar12 = *(Action **)(iVar16 + 0x10);
              goto code_?;
            }
          }
        }
      }
    }
    else {
      if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        (pMVar1->fields).connState = 4;
        if (returnCode != 0) {
          if ((returnCode == -0xc) &&
             (bVar13 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
             bVar13 != 0)) {
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
        cVar2 = '\0';
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
      unaff_ESI = (this->fields).networkGame;
      cVar2 = '\0';
      if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x16,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        cVar2 = '\0';
        if ((unaff_ESI != (MVNetworkGame *)0x0) && (cVar2 = '\0', pOVar3 != (Object *)0x0)) {
          pIVar4 = (pOVar3->klass->_0).element_class;
          pIVar5 = (TypeInfo__System__Int32->_0).element_class;
          cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
          pIVar6 = TypeInfo__System__Int32;
          pMVar1 = unaff_ESI;
          if (pIVar4 == pIVar5) {
            piVar17 = (int32_t *)func_?(pOVar3);
            MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                      (unaff_ESI,*piVar17,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                  (pMVar1,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
    }
    else if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
      pSVar18 = StringLiteral_You_are_not_authorized_to_publis;
      if (((returnCode == -2) || (pSVar18 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
         (pSVar18 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
        pSVar18 = TM::TM__(pSVar18,(MethodInfo *)0x0);
      }
      else {
        pSVar18 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
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
          pUVar19 = (pMVar1->fields).OnPublishedPlanet;
          (*(pUVar19->fields)._._.invoke_impl)
                    ((pUVar19->fields)._._.method_code,pSVar18,(pUVar19->fields)._._.method);
        }
        iVar16 = func_?(0);
        cVar2 = '\0';
        unaff_ESI = (MVNetworkGame *)this;
        if (iVar16 != 0) {
          bVar13 = mscorlib.dll::System::String::String_IsNullOrEmpty
                             (*(String **)(iVar16 + 0x44),(MethodInfo *)0x0);
          if (bVar13 != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0);
            return;
          }
          unaff_EDI = (MVNetworkGame *)func_?();
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                    ((WWWForm *)unaff_EDI,(MethodInfo *)0x0);
          iVar16 = func_?();
          cVar2 = '\0';
          unaff_ESI = (MVNetworkGame *)this;
          if ((iVar16 != 0) &&
             (cVar2 = '\0', unaff_ESI = (MVNetworkGame *)this, unaff_EDI != (MVNetworkGame *)0x0))
          {
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                      ((WWWForm *)unaff_EDI,StringLiteral_token,*(String **)(iVar16 + 0x24),
                       (MethodInfo *)0x0);
            iVar16 = func_?(0);
            cVar2 = '\0';
            unaff_ESI = (MVNetworkGame *)this;
            if (iVar16 != 0) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                        ((WWWForm *)unaff_EDI,StringLiteral_profile_id,*(int32_t *)(iVar16 + 0xc),
                         (MethodInfo *)0x0);
              iVar16 = func_?(0);
              cVar2 = '\0';
              unaff_ESI = (MVNetworkGame *)this;
              if (iVar16 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          ((WWWForm *)unaff_EDI,StringLiteral_planet_id,*(int32_t *)(iVar16 + 0x10),
                           (MethodInfo *)0x0);
                iVar16 = func_?(0);
                cVar2 = '\0';
                unaff_ESI = (MVNetworkGame *)this;
                if (iVar16 != 0) {
                  pSVar18 = *(String **)(iVar16 + 0x44);
                  this_04 = (PostRequest *)func_?(TypeInfo__PostRequest);
                  PostRequest::PostRequest__ctor
                            (this_04,pSVar18,(WWWForm *)unaff_EDI,
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
      cVar2 = '\0';
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
    cVar2 = '\0';
    if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      if (pOVar3 != (Object *)0x0) {
        pIVar4 = (pOVar3->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
        pIVar6 = TypeInfo__System__Int32;
        pMVar1 = unaff_ESI;
        if (pIVar4 != pIVar5) goto code_?;
        piVar17 = (int32_t *)func_?(pOVar3);
        pMVar1 = (this->fields).networkGame;
        cVar2 = '\0';
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pWVar20 = (pMVar1->fields).worldNetwork;
          cVar2 = '\0';
          if (pWVar20 != (WorldNetwork *)0x0) {
            pMVar21 = (pWVar20->fields)._.worldObjectClientManager;
            cVar2 = '\0';
            if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
              MVWorldObjectClientManagerNetwork::
              MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                        (pMVar21,returnCode == 0,*piVar17,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
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
    unaff_EBX = (MVNetworkGame *)this;
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pEVar22 = (pMVar1->fields).ScreenshotUploaded;
      if (pEVar22 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)
                func_?(TypeInfo__ScreenshotUploadedEventArgs);
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar22->fields)._._.invoke_impl)
                ((pEVar22->fields)._._.method_code,this,this_02,(pEVar22->fields)._._.method);
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
    pSVar18 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar18 = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_Unhandled_operation_code_,pSVar18,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar18,(MethodInfo *)0x0);
    return;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pWVar20 = (pMVar1->fields).worldNetwork;
      cVar2 = '\0';
      if (pWVar20 != (WorldNetwork *)0x0) {
        pMVar21 = (pWVar20->fields)._.worldObjectClientManager;
        cVar2 = '\0';
        if (pMVar21 != (MVWorldObjectClientManagerNetwork *)0x0) {
          MVWorldObjectClientManagerNetwork::
          MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                    (pMVar21,returnCode == 0,(MethodInfo *)0x0);
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
    unaff_EDI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if ((bVar13 == 0) ||
       (unaff_ESI = (MVNetworkGame *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x5f,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), unaff_ESI == (MVNetworkGame *)0x0)) {
code_?:
      pMVar1 = (this->fields).networkGame;
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                  (pMVar1,(int)returnCode,(Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                   (MethodInfo *)0x0);
        if (returnCode != 0) {
          return;
        }
        unaff_EBP = (MVNetworkGame *)0x0;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        cVar2 = '\0';
        unaff_ESI = _returnCode;
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          cVar2 = '\0';
          unaff_EBP = pMVar1;
          if (pMVar14 != (MVLocalPlayer *)0x0) {
            unaff_ESI = (MVNetworkGame *)(pMVar14->fields)._._UserProfileData_k__BackingField;
            unaff_EBP = (MVNetworkGame *)&UNK_?;
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0x82,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
            cVar2 = '\0';
            if ((unaff_ESI != (MVNetworkGame *)0x0) && (cVar2 = '\0', pOVar3 != (Object *)0x0)) {
              pIVar4 = (pOVar3->klass->_0).element_class;
              pIVar5 = (TypeInfo__System__Int32->_0).element_class;
              cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
              pIVar6 = TypeInfo__System__Int32;
              pMVar1 = unaff_ESI;
              if (pIVar4 != pIVar5) goto code_?;
              puVar23 = (undefined4 *)func_?();
              (unaff_ESI->fields).ReceivedAvatarBodiesFromQuery =
                   (EventHandler_1_ReceivedItemFromQueryEventArgs_ *)*puVar23;
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              cVar2 = '\0';
              if (pMVar1 != (MVNetworkGame *)0x0) {
                pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
                cVar2 = '\0';
                if (pMVar14 != (MVLocalPlayer *)0x0) {
                  if ((pMVar14->fields)._.OnGoldAmountChange == (Action *)0x0) {
                    return;
                  }
                  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  cVar2 = '\0';
                  if (pMVar1 != (MVNetworkGame *)0x0) {
                    pMVar14 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                        (pMVar1,(MethodInfo *)0x0);
                    cVar2 = '\0';
                    if (pMVar14 != (MVLocalPlayer *)0x0) {
                      pAVar12 = (pMVar14->fields)._.OnGoldAmountChange;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    unaff_EBX = (MVNetworkGame *)unaff_ESI->klass;
    bVar24 = *(byte *)&(unaff_EBX->fields).worldNetwork;
    bVar25 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment;
    cVar2 = SBORROW1(bVar24,bVar25);
    pMVar1 = unaff_ESI;
    if ((bVar25 <= bVar24) &&
       (pDVar26 = *(Dictionary_2_System_Object_System_Object___Class **)
                   ((unaff_EBX->fields)._MarketPlaceLevel_k__BackingField + -4 +
                   (uint)(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         ->_1).naturalAligment * 4),
       cVar2 = SBORROW4((int)pDVar26,
                         (int)
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ),
       pDVar26 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
       )) goto code_?;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar27 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar1->fields).OnItemAddedToWorld;
      bVar28 = returnCode == -1;
      goto code_?;
    }
    break;
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
    unaff_EDI = (MVNetworkGame *)this;
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar1,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    unaff_EBX = _returnCode;
    unaff_ESI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (MVNetworkGame *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    cVar2 = '\0';
    unaff_ESI = pMVar1;
    if ((pMVar1 == (MVNetworkGame *)0x0) || (cVar2 = '\0', pOVar3 == (Object *)0x0)) break;
    pIVar4 = (pOVar3->klass->_0).element_class;
    pIVar5 = (TypeInfo__System__Int32->_0).element_class;
    cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
    pIVar6 = TypeInfo__System__Int32;
    if (pIVar4 != pIVar5) goto code_?;
    piVar17 = (int32_t *)func_?();
    itemID = *piVar17;
    cVar2 = '\0';
    if (unaff_EDI == (MVNetworkGame *)0x0) break;
    pIVar4 = (Il2CppClass *)((Il2CppClass_0 *)&unaff_EDI->klass)->image->codeGenModule;
    pIVar5 = (TypeInfo__System__Int32->_0).element_class;
    cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
    pIVar6 = TypeInfo__System__Int32;
    if (pIVar4 == pIVar5) {
      piVar17 = (int32_t *)func_?(unaff_EDI);
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar1,(int)returnCode,*piVar17,itemID,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      if ((pMVar1->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pAVar12 = (pMVar1->fields).OnActiveAvatarSet;
code_?:
        cVar2 = '\0';
        if (pAVar12 != (Action *)0x0) {
code_?:
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
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
      cVar2 = '\0';
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar27 = (pMVar1->fields).OnMarketPlaceActionComplete;
        if (pMVar27 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
          return;
        }
        bVar28 = returnCode == 0;
        goto code_?;
      }
      break;
    }
    cVar2 = '\0';
    unaff_ESI = (MVNetworkGame *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    cVar2 = '\0';
    unaff_ESI = (MVNetworkGame *)returnValues;
    if (pOVar3 == (Object *)0x0) break;
    pIVar4 = (pOVar3->klass->_0).element_class;
    pIVar5 = (TypeInfo__System__Int32->_0).element_class;
    cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
    pIVar6 = TypeInfo__System__Int32;
    if (pIVar4 == pIVar5) {
      puVar23 = (undefined4 *)func_?(pOVar3);
      unaff_EBX = (MVNetworkGame *)*puVar23;
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x87,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      cVar2 = '\0';
      unaff_ESI = (MVNetworkGame *)returnValues;
      if (pOVar3 != (Object *)0x0) {
        pIVar4 = (pOVar3->klass->_0).element_class;
        pIVar5 = (TypeInfo__System__Int32->_0).element_class;
        cVar2 = SBORROW4((int)pIVar4,(int)pIVar5);
        pIVar6 = TypeInfo__System__Int32;
        if (pIVar4 != pIVar5) goto code_?;
        puVar23 = (undefined4 *)func_?(pOVar3);
        unaff_ESI = (MVNetworkGame *)*puVar23;
        iVar16 = func_?(0);
        cVar2 = '\0';
        if (iVar16 != 0) {
          this_03 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,iVar16)
          ;
          cVar2 = '\0';
          if (this_03 != (PlayerShopInventoryRepository *)0x0) {
            UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                      (this_03,(int32_t)unaff_EBX,(int32_t)unaff_ESI,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      break;
    }
code_?:
    func_?(pOVar3,pIVar6);
    pSVar8 = extraout_ECX;
code_?:
    func_?(pMVar1,pSVar8);
code_?:
    func_?();
    pIVar6 = extraout_ECX_00;
code_?:
    func_?(unaff_EDI,pIVar6);
    unaff_ESI = pMVar1;
    break;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar27 = (pMVar1->fields).OnMarketPlaceActionComplete;
      if (pMVar27 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
      bVar28 = returnCode == 0;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar29 = (pMVar1->fields).OnSetAvatarAccessoryResponse;
      if (pAVar29 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar29->fields)._._.invoke_impl)
                  ((pAVar29->fields)._._.method_code,returnCode == 0,(pAVar29->fields)._._.method);
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
      pMVar15 = (pMVar1->fields)._PlayerController_k__BackingField;
      cVar2 = '\0';
      if (pMVar15 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar15,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar1 = (this->fields).networkGame;
    cVar2 = '\0';
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pMVar15 = (pMVar1->fields)._PlayerController_k__BackingField;
      cVar2 = '\0';
      if (pMVar15 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar15,returnCode == 0,(MethodInfo *)0x0);
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
      pMVar27 = (pMVar1->fields).OnMarketPlaceActionComplete;
      bVar28 = returnCode == 0;
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar27->fields)->_)._.invoke_impl)
                ((((Action_1_Boolean___Fields *)&pMVar27->fields)->_)._.method_code,bVar28,
                 (((Action_1_Boolean___Fields *)&pMVar27->fields)->_)._.method);
      return;
    }
  }
code_?:
  uVar30 = func_?();
  pcVar31 = (code *)swi(4);
  iVar16 = extraout_ECX_01;
  if (cVar2 == '\x01') {
    uVar30 = (*pcVar31)();
    iVar16 = extraout_ECX_02;
  }
  piVar32 = (int *)uVar30;
  cVar2 = (char)((ulonglong)uVar30 >> 0x28);
  bVar25 = (byte)((ulonglong)uVar30 >> 0x20);
  bVar33 = -cVar2;
  pbVar34 = (byte *)CONCAT22((short)((ulonglong)uVar30 >> 0x30),CONCAT11(bVar33,bVar25));
  pbVar35 = &unaff_ESI[-1].fields.embeddedSiteConfigData.hideGoldShop;
  bVar24 = *pbVar35 + (byte)uVar30;
  bVar28 = CARRY1(*pbVar35,(byte)uVar30) || CARRY1(bVar24,cVar2 != '\0');
  *pbVar35 = bVar24 + (cVar2 != '\0');
  pbVar36 = pbVar34 + -0x22;
  bVar37 = (byte)unaff_EBX;
  bVar38 = CARRY1(*pbVar36,bVar37) || CARRY1(*pbVar36 + bVar37,bVar28);
  *pbVar36 = *pbVar36 + bVar37 + bVar28;
  pbVar36 = (byte *)((int)&(unaff_EDI->fields)._MarketPlaceLevel_k__BackingField +
                   (int)unaff_EBX * 8 + 2);
  bVar28 = CARRY1(*pbVar36,bVar33) || CARRY1(*pbVar36 + bVar33,bVar38);
  *pbVar36 = *pbVar36 + bVar33 + bVar38;
  pbVar36 = (byte *)(iVar16 + 0x411066df);
  bVar39 = (byte)((uint)unaff_EBX >> 8);
  bVar24 = *pbVar36 + bVar39;
  bVar38 = CARRY1(*pbVar36,bVar39) || CARRY1(bVar24,bVar28);
  *pbVar36 = bVar24 + bVar28;
  method_00 = (MethodInfo *)(iVar16 + -1);
  if (method_00 == (MethodInfo *)0x0 || *pbVar36 == 0) {
    pbVar36 = pbVar34 + -0x32ef991f;
    bVar39 = (byte)((ulonglong)uVar30 >> 8);
    bVar24 = *pbVar36 + bVar39;
    bVar40 = CARRY1(*pbVar36,bVar39) || CARRY1(bVar24,bVar38);
    *pbVar36 = bVar24 + bVar38;
    bVar28 = *pbVar36 == 0;
    method_00 = (MethodInfo *)(iVar16 + -2);
    if (method_00 == (MethodInfo *)0x0 || !bVar28) {
      method_00 = (MethodInfo *)(iVar16 + -3);
      if (method_00 == (MethodInfo *)0x0 || (byte)(bVar37 + bVar33 + bVar40) != '\0') {
        bVar28 = CARRY1(in_stack_41,bVar33) ||
                 CARRY1(in_stack_41 + bVar33,
                        CARRY1(bVar37,bVar33) || CARRY1(bVar37 + bVar33,bVar40));
        method_00 = (MethodInfo *)(iVar16 + -4);
        unaff_EBP = (MVNetworkGame *)&stack0xfffffffc;
        if (method_00 == (MethodInfo *)0x0) {
          bVar38 = CARRY1(bRam_?,bVar28);
          bRam_? = bRam_? + bVar28;
          in(0x66);
          ppRVar42 = &unaff_EDI[-0x29263a].fields.runtimeVariableNetworkManager;
          bVar24 = *(byte *)ppRVar42;
          cVar2 = *(char *)ppRVar42;
          *(byte *)ppRVar42 = cVar2 + bVar25 + bVar38;
          cVar43 = in(0x66);
          pcVar44 = (char *)CONCAT31((int3)((ulonglong)uVar30 >> 8),cVar43);
          *pcVar44 = *pcVar44 + cVar43 + (CARRY1(bVar24,bVar25) || CARRY1(cVar2 + bVar25,bVar38));
          *(char **)pbVar34 = pcVar44 + *(int *)pbVar34;
          FastExitMediaState();
          pcVar31 = (code *)swi(3);
          (*pcVar31)();
          return;
        }
      }
      else {
        *piVar32 = *piVar32 + (int)piVar32;
        pbVar34[-0x48f0f7bf] = pbVar34[-0x48f0f7bf] + (char)method_00;
        unaff_EBP = (MVNetworkGame *)&stack0xfffffffc;
      }
      goto code_?;
    }
  }
  else {
    bVar28 = method_00 == (MethodInfo *)0x0;
    unaff_EBP = (MVNetworkGame *)&stack0xfffffffc;
  }
  if (bVar28) {
    pRVar45 = (RuntimeVariableNetworkManager *)func_?();
    unaff_EBP[-1].fields.runtimeVariableNetworkManager = pRVar45;
    func_?();
    pcVar31 = (code *)swi(3);
    (*pcVar31)();
    return;
  }
  piVar32 = (int *)(uint)*(byte *)&method_00->invoker_method;
  pbVar34 = (byte *)(uint)*(ushort *)((int)&method_00->invoker_method + 2);
code_?:
  bVar24 = *pbVar34;
  *(char *)&(unaff_EBP->fields).ReceivedItemFromQuery = (char)piVar32;
  returnValues_00 =
       *(Dictionary_2_System_Byte_System_Object_ **)
        (CONCAT22((short)((uint)method_00 >> 0x10),
                  CONCAT11((byte)((uint)method_00 >> 8) | bVar24,(char)method_00)) + 0x10);
  opCode_00 = (unaff_EBP->fields).ReceivedItemFromQuery;
  unaff_EBP[-1].fields.statusChangedHandling = (MVNetworkGame_StatusChangedHandling *)0x0;
  MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
            ((MVNetworkGame_OperationResponseHandling *)(unaff_EBP->fields).GameEventManager,
             (MVOperationCodes__Enum)opCode_00,returnValues_00,(int16_t)pbVar34,method_00);
  *unaff_FS_OFFSET = unaff_EBP[-1].fields.operationRequests;
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

