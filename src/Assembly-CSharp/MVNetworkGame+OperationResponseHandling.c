
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
    func_?();
    func_?();
    func_?();
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
  uVar1 = (undefined3)((uint)unaff_EBX >> 8);
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
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                 Object,GUILoginHandler+PlanetData]::
                 Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                           ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)returnValues,
                            (Object *)0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar4 == 0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                    (pMVar2->fields)._._UserProfileData_k__BackingField;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        if ((unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) ||
           (bVar3 = 0, pOVar6 == (Object *)0x0)) goto code_?;
        pIVar7 = (pOVar6->klass->_0).element_class;
        pIVar8 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar7 < pIVar8;
        if (pIVar7 != pIVar8) goto code_?;
        p_Var26 = (_union_86 *)func_?();
        (unaff_EDI->_0).byval_arg.data = *p_Var26;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar2->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
        pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
        bVar3 = 0;
        if (pMVar2 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar9 = (pMVar2->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pMVar10 = (pMVar5->fields)._PlayerController_k__BackingField;
            bVar3 = 0;
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
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            (pMVar5->fields).connState = 4;
            if (returnCode == 0) {
              pMVar5 = (this->fields).networkGame;
              bVar3 = 0;
              if (pMVar5 != (MVNetworkGame *)0x0) {
                MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar5,returnValues,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              if ((returnCode == -0xc) &&
                 (bVar4 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar4 != 0)) {
                return;
              }
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0)
              ;
              this_00 = (QuitConnectionError *)func_?();
              bVar3 = 0;
              if (this_00 != (QuitConnectionError *)0x0) {
                QuitConnectionError::QuitConnectionError__ctor(this_00,(MethodInfo *)0x0);
                MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                          ((QuitBaseCallback *)this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar11 = func_?();
        bVar3 = 0;
        if (iVar11 == 0) goto code_?;
        iVar11 = func_?();
        bVar3 = 0;
        if (iVar11 == 0) goto code_?;
        if (*(int *)(iVar11 + 0x10) == 0) {
          return;
        }
        iVar11 = func_?();
        bVar3 = 0;
        if (iVar11 == 0) goto code_?;
        iVar11 = func_?();
        bVar3 = 0;
        if (iVar11 == 0) goto code_?;
        pAVar9 = *(Action **)(iVar11 + 0x10);
      }
code_?:
      bVar3 = 0;
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
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
        pAVar9 = (pMVar5->fields).OnAccessoryUnequipped;
        goto code_?;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pSVar12 = (String *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xcf,
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
        bVar3 = 0;
        if (value == (String *)0x0) goto code_?;
      }
      this_01 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
                          (value,
                           System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                          );
      if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
          (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
        return;
      }
      pAVar13 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
      bVar3 = 0;
      if (this_01 != (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
        UnitySynchronizationContext+WorkRequest]::
        List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__ToArray
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
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if (pOVar6 == (Object *)0x0) goto code_?;
      pIVar7 = (pOVar6->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        puVar14 = (undefined4 *)func_?();
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          pWVar15 = (pMVar5->fields).worldNetwork;
          bVar3 = 0;
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pWVar15 != (WorldNetwork *)0x0) {
            unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                        (pWVar15->fields)._.worldObjectClientManager;
            unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*puVar14;
            bVar3 = 0;
            if (unaff_EDI != (Dictionary_2_System_Object_System_Object___Class *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((unaff_EDI->_0).properties == (PropertyInfo *)0x0) {
                return;
              }
              pTVar16 = (TweenRunner_1_FloatTween_ *)func_?();
              bVar3 = 0;
              if (pTVar16 != (TweenRunner_1_FloatTween_ *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
                TweenRunner_1_FloatTween___ctor(pTVar16,(MethodInfo *)0x0);
                *(bool *)&(pTVar16->fields).m_Tween = returnCode == 0;
                (pTVar16->fields).m_CoroutineContainer = (MonoBehaviour *)unaff_EBX;
                pPVar17 = (unaff_EDI->_0).properties;
                bVar3 = 0;
                if (pPVar17 != (PropertyInfo *)0x0) {
                  (*(code *)pPVar17->set)();
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
    bVar3 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xbf,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0xdb,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    if (pOVar18 == (Object *)0x0) goto code_?;
    pIVar7 = (pOVar18->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Byte->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    if (pIVar7 != pIVar8) goto code_?;
    puVar19 = (undefined1 *)func_?();
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)CONCAT31(uVar1,*puVar19);
    bVar3 = 0;
    if (pOVar6 == (Object *)0x0) goto code_?;
    pIVar7 = (pOVar6->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      pFVar20 = (FirstTimeEvent__Enum *)func_?();
      FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                (*pFVar20,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
      return;
    }
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
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
        pSVar12 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode == -2) || (pSVar12 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
           (pSVar12 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
          TM::TM__(pSVar12,(MethodInfo *)0x0);
        }
        else {
          TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar5 = (this->fields).networkGame;
          bVar3 = 0;
          if (pMVar5 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar5->fields).isPublished = 1;
        }
        pMVar5 = (this->fields).networkGame;
        bVar3 = 0;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          if ((pMVar5->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            (*(((pMVar5->fields).OnPublishedPlanet)->fields)._._.invoke_impl)();
          }
          iVar11 = func_?();
          bVar3 = 0;
          if (iVar11 != 0) {
            bVar4 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar11 + 0x38),(MethodInfo *)0x0);
            if (bVar4 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                        ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,(MethodInfo *)0x0)
              ;
              return;
            }
            this_04 = (WWWForm *)func_?();
            bVar3 = 0;
            if (this_04 != (WWWForm *)0x0) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        (this_04,(MethodInfo *)0x0);
              iVar11 = func_?();
              bVar3 = 0;
              if (iVar11 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_04,StringLiteral_token,*(String **)(iVar11 + 0x20),(MethodInfo *)0x0
                          );
                iVar11 = func_?();
                bVar3 = 0;
                if (iVar11 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_profile_id,*(int32_t *)(iVar11 + 0xc),
                             (MethodInfo *)0x0);
                  iVar11 = func_?();
                  bVar3 = 0;
                  if (iVar11 != 0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_04,StringLiteral_planet_id,*(int32_t *)(iVar11 + 0x10),
                               (MethodInfo *)0x0);
                    iVar11 = func_?();
                    bVar3 = 0;
                    if (iVar11 != 0) {
                      unaff_EBX = *(Dictionary_2_System_Object_System_Object___Class **)
                                   (iVar11 + 0x38);
                      this_05 = (PostRequest *)func_?();
                      bVar3 = 0;
                      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
                      if (this_05 != (PostRequest *)0x0) {
                        PostRequest::PostRequest__ctor
                                  (this_05,(String *)unaff_EBX,this_04,
                                   (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                   WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                                   (MethodInfo *)0x0);
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (returnCode != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_unregister_worldObject,(MethodInfo *)0x0);
      return;
    }
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    if ((pMVar5 == (MVNetworkGame *)0x0) || (bVar3 = 0, pOVar6 == (Object *)0x0))
    goto code_?;
    pIVar7 = (pOVar6->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      piVar21 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (pMVar5,*piVar21,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar12,(MethodInfo *)0x0);
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
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pEVar23 = (pMVar5->fields).ScreenshotUploaded;
      if (pEVar23 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)func_?();
      bVar3 = 0;
      unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
      if (this_02 != (ScreenshotUploadedEventArgs *)0x0) {
        ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                  (this_02,returnCode == 0,(MethodInfo *)0x0);
        (*(pEVar23->fields)._._.invoke_impl)();
        return;
      }
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
      pWVar15 = (pMVar5->fields).worldNetwork;
      bVar3 = 0;
      if (pWVar15 != (WorldNetwork *)0x0) {
        pMVar24 = (pWVar15->fields)._.worldObjectClientManager;
        bVar3 = 0;
        if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
          unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                      CONCAT31(uVar1,returnCode == 0);
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (returnCode != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
          }
          if ((pMVar24->fields)._.OnTransferWosResponse ==
              (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
            return;
          }
          pEVar25 = (pMVar24->fields)._.OnTransferWosResponse;
          pTVar16 = (TweenRunner_1_FloatTween_ *)func_?();
          bVar3 = 0;
          unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)0x0;
          if (pTVar16 != (TweenRunner_1_FloatTween_ *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(pTVar16,(MethodInfo *)0x0);
            *(bool *)&(pTVar16->fields).m_CoroutineContainer = returnCode == 0;
            (*(pEVar25->fields)._._.invoke_impl)();
            return;
          }
        }
      }
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
    goto code_?;
  case MVOperationCodes__Enum_PurchaseProduct:
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    bVar3 = 0;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)returnValues;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
             Object,GUILoginHandler+PlanetData]::
             Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                       ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)returnValues,
                        (Object *)0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if (bVar4 == 0) {
code_?:
      pMVar5 = (this->fields).networkGame;
      bVar3 = 0;
      if (pMVar5 == (MVNetworkGame *)0x0) break;
      MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
                (pMVar5,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
      if (returnCode != 0) {
        return;
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar5 == (MVNetworkGame *)0x0) break;
      pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0);
      bVar3 = 0;
      if (pMVar2 == (MVLocalPlayer *)0x0) break;
      pUVar26 = (pMVar2->fields)._._UserProfileData_k__BackingField;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if ((pUVar26 == (UserProfileData *)0x0) || (bVar3 = 0, pOVar6 == (Object *)0x0)) break;
      pIVar7 = (pOVar6->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        piVar21 = (int32_t *)func_?();
        (pUVar26->fields).Gold = *piVar21;
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
        pAVar9 = (pMVar2->fields)._.OnGoldAmountChange;
        goto code_?;
      }
      goto code_?;
    }
    purchaseResponseData =
         (Dictionary_2_System_Object_System_Object_ *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
         Dictionary_2_System_ByteEnum_System_Object__get_Item
                   ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x5f,
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    if (purchaseResponseData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      goto code_?;
    }
    unaff_EBX = purchaseResponseData->klass;
    bVar3 = (unaff_EBX->_1).typeHierarchyDepth <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).typeHierarchyDepth;
    if ((!(bool)bVar3) &&
       (pDVar27 = (Dictionary_2_System_Object_System_Object___Class *)
                  (unaff_EBX->_1).typeHierarchy
                  [(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).typeHierarchyDepth - 1],
       bVar3 = pDVar27 < 
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
       pDVar27 == TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
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
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar5,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    unaff_EBX = _returnCode;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar3 = 0;
    if ((pMVar5 == (MVNetworkGame *)0x0) || (bVar3 = 0, pOVar6 == (Object *)0x0)) break;
    pIVar7 = (pOVar6->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    if (pIVar7 != pIVar8) goto code_?;
    piVar21 = (int32_t *)func_?();
    iVar28 = *piVar21;
    bVar3 = 0;
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object___Class *)0x0) break;
    pIVar7 = (((String__Class *)(unaff_EDI->_0).image)->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    bVar3 = pIVar7 < pIVar8;
    if (pIVar7 == pIVar8) {
      piVar21 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                (pMVar5,(int)returnCode,*piVar21,iVar28,(MethodInfo *)0x0);
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
    pAVar9 = (pMVar5->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    unaff_EDI = _returnCode;
    if (returnCode == 0) {
      bVar3 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar3 = 0;
      if (pOVar6 == (Object *)0x0) break;
      pIVar7 = (pOVar6->klass->_0).element_class;
      pIVar8 = (TypeInfo__System__Int32->_0).element_class;
      bVar3 = pIVar7 < pIVar8;
      if (pIVar7 == pIVar8) {
        piVar21 = (int32_t *)func_?();
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar21;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)returnValues,0x87,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar3 = 0;
        if (pOVar6 == (Object *)0x0) break;
        pIVar7 = (pOVar6->klass->_0).element_class;
        pIVar8 = (TypeInfo__System__Int32->_0).element_class;
        bVar3 = pIVar7 < pIVar8;
        if (pIVar7 == pIVar8) {
          piVar21 = (int32_t *)func_?();
          iVar28 = *piVar21;
          iVar11 = func_?();
          bVar3 = 0;
          if (iVar11 == 0) break;
          this_03 = (PlayerShopInventoryRepository *)func_?();
          bVar3 = 0;
          if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
          UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
          PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                    (this_03,(int32_t)unaff_EBX,iVar28,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_SetAvatarAccessorySlot_operation,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AttachWorldObjectToSeat:
  case MVOperationCodes__Enum_SpawnVehicleWithDriver:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar10 = (pMVar5->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar10 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar10,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar5 = (this->fields).networkGame;
    bVar3 = 0;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar10 = (pMVar5->fields)._PlayerController_k__BackingField;
      bVar3 = 0;
      if (pMVar10 != (MVLocalObjectController *)0x0) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar10,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  uVar30 = func_?();
  uVar1 = (undefined3)((ulonglong)uVar30 >> 0x28);
  bVar31 = (byte)unaff_EBX;
  bVar32 = 0xd9 < bVar31 || CARRY1(bVar31 + 0x26,bVar3);
  bVar3 = bVar31 + 0x26 + bVar3;
  uVar33 = CONCAT31(uVar1,bVar3);
  bVar34 = *extraout_ECX;
  bVar35 = (byte)((uint)unaff_EBX >> 8);
  bVar36 = *extraout_ECX;
  *extraout_ECX = bVar36 + bVar35 + bVar32;
  bVar37 = (byte)uVar30;
  in_AF = 9 < (bVar37 & 0xf) | in_AF;
  bVar32 = 0x99 < bVar37 || (CARRY1(bVar34,bVar35) || CARRY1(bVar36 + bVar35,bVar32));
  bVar34 = bVar37 + in_AF * '\x06' + bVar32 * '`';
  *(char *)&(unaff_EBX->_0).image =
       *(char *)&(unaff_EBX->_0).image + (char)((uint)extraout_ECX >> 8) + bVar32;
  *(uint *)(uVar33 + 0x10) = *(uint *)(uVar33 + 0x10) ^ uVar33;
  bVar32 = 0x99 < bVar34;
  bVar37 = bVar34 + (9 < (bVar34 & 0xf) | in_AF) * '\x06' + bVar32 * '`';
  pbVar38 = extraout_ECX + 0x28;
  bVar34 = *pbVar38;
  bVar39 = (byte)((ulonglong)uVar30 >> 0x28);
  bVar36 = *pbVar38;
  *pbVar38 = bVar36 + bVar39 + bVar32;
  *(char *)(uVar33 + 0xf1105229) =
       *(char *)(uVar33 + 0xf1105229) + (byte)extraout_ECX +
       (CARRY1(bVar34,bVar39) || CARRY1(bVar36 + bVar39,bVar32));
  bVar32 = bVar3 < *(byte *)(uVar33 + 0x10);
  cVar40 = bVar3 - *(byte *)(uVar33 + 0x10);
  iVar11 = CONCAT31(uVar1,cVar40);
  bVar3 = bVar37 - 0x2b;
  bVar41 = bVar37 < 0x2b || bVar3 < bVar32;
  bVar3 = bVar3 - bVar32;
  uVar33 = CONCAT31((int3)((ulonglong)uVar30 >> 8),bVar3);
  pbVar38 = (byte *)(iVar11 + 0x2b);
  bVar32 = CARRY1(*pbVar38,bVar3) || CARRY1(*pbVar38 + bVar3,bVar41);
  *pbVar38 = *pbVar38 + bVar3 + bVar41;
  pbVar38 = (byte *)((int)&stack0x00000000 * 2 + -0x30);
  bVar41 = CARRY1(*pbVar38,bVar3) || CARRY1(*pbVar38 + bVar3,bVar32);
  *pbVar38 = *pbVar38 + bVar3 + bVar32;
  pbVar38 = (byte *)(uVar33 + 0x2c);
  bVar32 = CARRY1(*pbVar38,bVar3) || CARRY1(*pbVar38 + bVar3,bVar41);
  *pbVar38 = *pbVar38 + bVar3 + bVar41;
  pbVar38 = (byte *)((int)&stack0x00000000 * 2 + 0x4a);
  bVar41 = CARRY1(*pbVar38,bVar31) || CARRY1(*pbVar38 + bVar31,bVar32);
  *pbVar38 = *pbVar38 + bVar31 + bVar32;
  puVar19 = (undefined1 *)((int)&(unaff_EDI->_0).parent + 1);
  bVar3 = *puVar19;
  cVar42 = *puVar19;
  *puVar19 = cVar42 + bVar35 + bVar41;
  piVar43 = (int *)CONCAT22((short)((ulonglong)uVar30 >> 0x30),
                            CONCAT11(bVar39 + (char)((ulonglong)uVar30 >> 8) +
                                     (CARRY1(bVar3,bVar35) || CARRY1(cVar42 + bVar35,bVar41)),cVar40
                                    ));
  pcVar44 = (char *)(uVar33 + 0xd1dfefae);
  *pcVar44 = *pcVar44 + (char)pcVar44 + (uVar33 < 0x2e201052);
  *piVar43 = (int)(pcVar44 + *piVar43);
  *extraout_ECX = *extraout_ECX | (byte)extraout_ECX;
  FastExitMediaState();
  pcVar45 = (code *)swi(3);
  (*pcVar45)(iVar11,iVar11);
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
  if (operationResponse != (OperationResponse *)0x0) {
    pOVar5 = &operationResponse->fields;
    operationResponse =
         (OperationResponse *)
         CONCAT31(operationResponse._1_3_,(operationResponse->fields).OperationCode);
    uStack_2 = 0;
    MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
              (this,(MVOperationCodes__Enum)operationResponse,(pOVar1->fields).Parameters,
               pOVar5->ReturnCode,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

