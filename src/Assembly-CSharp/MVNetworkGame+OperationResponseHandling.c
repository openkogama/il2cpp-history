
/* Void ExecuteOperationResponse(MVOperationCodes, Dictionary`2[System.Byte,System.Object], Int16)
    */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,MVOperationCodes__Enum opCode,
               Dictionary_2_System_Byte_System_Object_ *returnValues,int16_t returnCode,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = returnValues;
  uVar2 = (undefined1)opCode;
  MVar3 = opCode & MVOperationCodes__Enum_Join;
  sVar4 = returnCode;
  switch(MVar3) {
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar5 = (this->fields).networkGame;
    if (((pMVar5 != (MVNetworkGame *)0x0) &&
        (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 != (WorldNetwork *)0x0)) &&
       (pMVar7 = (MVWorldObjectClientManagerNetwork *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pWVar6,(MethodInfo *)0x0),
       pMVar7 != (MVWorldObjectClientManagerNetwork *)0x0)) {
      MVWorldObjectClientManagerNetwork::
      MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
                (pMVar7,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
  case MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition:
    if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      piVar9 = (int32_t *)func_?(pOVar8,TypeInfo__System__Int32);
      iVar10 = *piVar9;
      pMVar5 = (this->fields).networkGame;
      if (((pMVar5 != (MVNetworkGame *)0x0) &&
          (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 != (WorldNetwork *)0x0)) &&
         (pMVar7 = (MVWorldObjectClientManagerNetwork *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)pWVar6,(MethodInfo *)0x0),
         pMVar7 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        MVWorldObjectClientManagerNetwork::
        MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
                  (pMVar7,returnCode == 0,iVar10,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  default:
    switch(MVar3) {
    case MVOperationCodes__Enum_UnregisterWorldObject:
      if (returnCode != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Failed_to_unregister_worldObject,(MethodInfo *)0x0);
        return;
      }
      pMVar5 = (this->fields).networkGame;
      if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
         (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0x16,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              ), pMVar5 != (MVNetworkGame *)0x0)) {
        piVar9 = (int32_t *)func_?(pOVar8,TypeInfo__System__Int32);
        MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                  (pMVar5,*piVar9,(MethodInfo *)0x0);
        return;
      }
      break;
    default:
      if (MVar3 == MVOperationCodes__Enum_LockHierarchy) {
        pMVar5 = (this->fields).networkGame;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                    (pMVar5,returnValues,(int)returnCode,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      if (MVar3 == MVOperationCodes__Enum_UploadScreenshot) {
        pMVar5 = (this->fields).networkGame;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                    (pMVar5->fields).ScreenshotUploaded;
          if (this_01 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            return;
          }
          if (pMVar5 != (MVNetworkGame *)0x0) {
            e = (InitializedGameQueryDataEventArgs *)
                func_?(TypeInfo__ScreenshotUploadedEventArgs);
            ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                      ((ScreenshotUploadedEventArgs *)e,returnCode == 0,(MethodInfo *)0x0);
            if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
              mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
              EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                        (this_01,(Object *)this,e,
                         MethodInfo__System__EventHandler<ScreenshotUploadedEventArgs>__Invoke_System__Object__ScreenshotUploadedEventArgs_
                        );
              return;
            }
          }
        }
        break;
      }
      if (MVar3 == MVOperationCodes__Enum_RequestWoUniquePrototype) {
        if (returnCode == 0) {
          return;
        }
        pMVar5 = (this->fields).networkGame;
        if (pMVar5 != (MVNetworkGame *)0x0) {
          MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                    (pMVar5,returnValues,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      switch(MVar3) {
      case MVOperationCodes__Enum_SetFirstTimeEvent:
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (returnValues,0xbf,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__get_Item
                              (pDVar1,0xdb,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                              );
          if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
            func_?();
          }
          puVar12 = (undefined1 *)func_?(pOVar11);
          uVar2 = *puVar12;
          pFVar13 = (FirstTimeEvent__Enum *)func_?(pOVar8,TypeInfo__System__Int32);
          FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                    (*pFVar13,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar2),(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      case MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold:
        if (returnCode == -1) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        }
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
        return;
      }
      switch(MVar3) {
      case MVOperationCodes__Enum_UpdateGold:
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
        bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                          (returnValues,0x82,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                          );
        if (bVar14 == 0) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 == (MVNetworkGame *)0x0) ||
           (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
           pMVar15 == (MVLocalPlayer *)0x0)) break;
        pUVar16 = (pMVar15->fields)._._UserProfileData_k__BackingField;
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (pDVar1,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if (pUVar16 == (UserProfileData *)0x0) break;
        returnValues = (Dictionary_2_System_Byte_System_Object_ *)TypeInfo__System__Int32;
        opCode = (MVOperationCodes__Enum)pOVar8;
        piVar9 = (int32_t *)func_?();
        (pUVar16->fields).Gold = *piVar9;
        goto code_?;
      default:
        if ((undefined1)opCode == MVOperationCodes__Enum_PublishPlanet) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar17 = StringLiteral_You_are_not_authorized_to_publis;
          if (((returnCode == -2) || (pSVar17 = StringLiteral_Undefined_fail_, returnCode == -1)) ||
             (pSVar17 = StringLiteral_Unhandled_returnCode, returnCode != 0)) {
            obj = (Dictionary_2_System_String_System_Object_ *)TM::TM__(pSVar17,(MethodInfo *)0x0);
          }
          else {
            obj = (Dictionary_2_System_String_System_Object_ *)
                  TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
            pMVar5 = (this->fields).networkGame;
            if (pMVar5 == (MVNetworkGame *)0x0) break;
            (pMVar5->fields).isPublished = 1;
          }
          pMVar5 = (this->fields).networkGame;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                      *)(pMVar5->fields).OnPublishedPlanet;
            if (pAVar18 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                           *)0x0) {
              if (pMVar5 == (MVNetworkGame *)0x0) break;
              mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
              String,System::Object]]::
              Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                        (pAVar18,obj,
                         MethodInfo__UnityEngine__Events__UnityAction<System::String>__Invoke_System__String_
                        );
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?();
            }
            pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                ((MethodInfo *)0x0);
            if (pGVar19 != (GameSessionData *)0x0) {
              pSVar17 = (pGVar19->fields).gamePublishedURL;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              bVar14 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)StringLiteral_s_gamePublishedURL_is_null_or_em,
                           (MethodInfo *)0x0);
                return;
              }
              this_03 = (WWWForm *)func_?(TypeInfo__UnityEngine__WWWForm);
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                        (this_03,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                  ((MethodInfo *)0x0);
              if ((pGVar19 != (GameSessionData *)0x0) && (this_03 != (WWWForm *)0x0)) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_03,StringLiteral_token,(pGVar19->fields).token,(MethodInfo *)0x0);
                pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                    ((MethodInfo *)0x0);
                if (pGVar19 != (GameSessionData *)0x0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_03,StringLiteral_profile_id,(pGVar19->fields).profileID,
                             (MethodInfo *)0x0);
                  pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                      ((MethodInfo *)0x0);
                  if (pGVar19 != (GameSessionData *)0x0) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_03,StringLiteral_planet_id,(pGVar19->fields).planetID,
                               (MethodInfo *)0x0);
                    pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData
                                        ((MethodInfo *)0x0);
                    if (pGVar19 != (GameSessionData *)0x0) {
                      pSVar17 = (pGVar19->fields).gamePublishedURL;
                      this_04 = (PostRequest *)func_?(TypeInfo__PostRequest);
                      PostRequest::PostRequest__ctor
                                (this_04,pSVar17,this_03,
                                 (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0
                                );
                      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000)
                           != 0) && ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
                        returnValues = (Dictionary_2_System_Byte_System_Object_ *)
                                       TypeInfo__AsyncWWWManager;
                        opCode = (MVOperationCodes__Enum)&UNK_?;
                        func_?();
                      }
                      returnValues = (Dictionary_2_System_Byte_System_Object_ *)0x0;
                      opCode = (MVOperationCodes__Enum)this_04;
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
        else if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
          pMVar5 = (this->fields).networkGame;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                      (pMVar5,(int)returnCode,(MethodInfo *)0x0);
            return;
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_UnEquipAccessory) {
          pMVar5 = (this->fields).networkGame;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            pJVar20 = (JumpState_OnWallJumpDelegate *)(pMVar5->fields).OnAccessoryUnequipped;
            if (pJVar20 == (JumpState_OnWallJumpDelegate *)0x0) {
              return;
            }
            if (pMVar5 != (MVNetworkGame *)0x0) {
              JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                        (pJVar20,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if ((undefined1)opCode == MVOperationCodes__Enum_GetThemesData) {
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                (returnValues,0xcf,
                                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                );
            if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr &
                 0x2000000) != 0) &&
               ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
              func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
            }
            method_00 = 
            System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
            ;
            pSVar17 = (String *)func_?(pOVar8,TypeInfo__System__String);
            this_05 = (List_1_VoxelHit_ *)
                      Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                                (pSVar17,method_00);
            pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                      *)TypeInfo__ThemeSelection__CallbackHandler->static_fields->
                        OnThemeDataReceived;
            if (pAVar18 == (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                           *)0x0) {
              return;
            }
            if ((this_05 != (List_1_VoxelHit_ *)0x0) &&
               (obj_00 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                         List_1_VoxelHit__ToArray
                                   (this_05,
                                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                                   ),
               pAVar18 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_
                          *)0x0)) {
              mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
              String,System::Object]]::
              Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                        (pAVar18,(Dictionary_2_System_String_System_Object_ *)obj_00,
                         MethodInfo__System__Action<MV::WorldObject::ThemesData::ThemeData_[]>__Invoke_MV__WorldObject__ThemesData__ThemeData____
                        );
              return;
            }
          }
        }
        else {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) {
            opCode = CONCAT13(uVar2,(undefined3)opCode);
            pOVar8 = (Object *)
                      func_?(TypeInfo__MV__Common__MVOperationCodes,
                                      (byte *)((int)&opCode + 3));
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar17 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_Unhandled_operation_code_,pOVar8,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)pSVar17,(MethodInfo *)0x0);
            return;
          }
          pMVar5 = (this->fields).networkGame;
          if (pMVar5 != (MVNetworkGame *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]::
            ObjectPool_1_System_Object__set_countAll
                      ((ObjectPool_1_System_Object_ *)pMVar5,4,(MethodInfo *)0x0);
            if ((short)_returnCode != 0) {
              if ((short)_returnCode == -0xc) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                bVar14 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0);
                if (bVar14 != 0) {
                  return;
                }
              }
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0)
              ;
              this_06 = (QuitConnectionError *)func_?(TypeInfo__QuitConnectionError);
              QuitConnectionError::QuitConnectionError__ctor(this_06,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?();
              }
              MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                        ((QuitBaseCallback *)this_06,(MethodInfo *)0x0);
              return;
            }
            pMVar5 = (this->fields).networkGame;
            if (pMVar5 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar5,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
        }
        break;
      case MVOperationCodes__Enum_CreateSpawnRole:
        if (returnCode != -1) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar15 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        if (pMVar15 != (MVLocalPlayer *)0x0) {
          MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar15,(MethodInfo *)0x0);
          return;
        }
      }
      break;
    case MVOperationCodes__Enum_UpdateWorldObjectData:
      if (returnCode == 0) {
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
      return;
    case MVOperationCodes__Enum_TransferOwnership:
      pMVar5 = (this->fields).networkGame;
      if (pMVar5 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                  (pMVar5,returnValues,(int)returnCode,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_PurchaseProduct:
    purchaseResponseData = (Dictionary_2_System_Object_System_Object_ *)0x0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__ContainsKey
                      (returnValues,0x5f,
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                      );
    if (bVar14 != 0) {
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (pDVar1,0x5f,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      purchaseResponseData =
           (Dictionary_2_System_Object_System_Object_ *)
           func_?(pOVar8,
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    }
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    sVar4 = (short)_returnCode;
    MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
              (pMVar5,(int)sVar4,purchaseResponseData,(MethodInfo *)0x0);
    if (sVar4 != 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
       pMVar15 == (MVLocalPlayer *)0x0)) break;
    pUVar16 = (pMVar15->fields)._._UserProfileData_k__BackingField;
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (pDVar1,0x82,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    if (pUVar16 == (UserProfileData *)0x0) break;
    piVar9 = (int32_t *)func_?(pOVar8,TypeInfo__System__Int32);
    (pUVar16->fields).Gold = *piVar9;
code_?:
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
       pMVar15 == (MVLocalPlayer *)0x0)) break;
    if ((pMVar15->fields)._.OnGoldAmountChange == (Action *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 == (MVNetworkGame *)0x0) ||
       (pMVar15 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar5,(MethodInfo *)0x0),
       pMVar15 == (MVLocalPlayer *)0x0)) break;
    pJVar20 = (JumpState_OnWallJumpDelegate *)(pMVar15->fields)._.OnGoldAmountChange;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pAVar21 = (Action_1_UIPushOption_ *)(pMVar5->fields).OnItemAddedToWorld;
      if (pAVar21 == (Action_1_UIPushOption_ *)0x0) {
        return;
      }
      if (pMVar5 != (MVNetworkGame *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (pAVar21,(uint)(returnCode == -1),MethodInfo__System__Action<bool>__Invoke_bool_);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar5,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar5,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar5 = (this->fields).networkGame;
      if (pDVar1 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        opCode = (MVOperationCodes__Enum)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (pDVar1,0x16,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        pDVar1 = (Dictionary_2_System_Byte_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (pDVar1,0x28,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if (pMVar5 != (MVNetworkGame *)0x0) {
          _returnCode = TypeInfo__System__Int32;
          opCode = (MVOperationCodes__Enum)&UNK_?;
          returnValues = pDVar1;
          piVar9 = (int32_t *)func_?();
          opCode = (MVOperationCodes__Enum)TypeInfo__System__Int32;
          iVar10 = *piVar9;
          piVar9 = (int32_t *)func_?();
          MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                    (pMVar5,(int)sVar4,*piVar9,iVar10,(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case MVOperationCodes__Enum_SetActiveAvatar:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    if ((pMVar5->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    pJVar20 = (JumpState_OnWallJumpDelegate *)(pMVar5->fields).OnActiveAvatarSet;
code_?:
    if (pJVar20 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(pJVar20,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    if (returnCode == 0) {
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x28,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      piVar9 = (int32_t *)func_?(pOVar8,TypeInfo__System__Int32);
      iVar10 = *piVar9;
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (pDVar1,0x87,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      pMVar22 = (MVOperationCodes__Enum *)func_?(pOVar8,TypeInfo__System__Int32);
      opCode = *pMVar22;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pIVar23 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
      if (pIVar23 == (IEditModeUI *)0x0) break;
      pIVar24 = pIVar23->klass;
      uVar25 = 0;
      uVar26._0_1_ = (pIVar24->_1).rank;
      uVar26._1_1_ = (pIVar24->_1).minimumAlignment;
      if (uVar26 != 0) {
        do {
          if (pIVar24->interfaceOffsets[uVar25].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI
             ) {
            ppMVar27 = &(&(pIVar23->klass->vtable).get_PlayerInventoryRepository)
                        [pIVar24->interfaceOffsets[uVar25].offset].method;
            goto code_?;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar26);
      }
      ppMVar27 = (MethodInfo **)func_?(pIVar23,TypeInfo__IEditModeUI,6);
code_?:
      this_02 = (PlayerInventoryRepository *)(*(code *)*ppMVar27)(pIVar23,ppMVar27[1]);
      if (this_02 == (PlayerInventoryRepository *)0x0) break;
      PlayerInventoryRepository::PlayerInventoryRepository_UpdateShopInventoryID
                (this_02,iVar10,opCode,(MethodInfo *)0x0);
      sVar4 = (short)_returnCode;
    }
    else {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
    }
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    this_00 = (pMVar5->fields).OnMarketPlaceActionComplete;
    if (this_00 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    goto joined_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
  case MVOperationCodes__Enum_AddAvatarToAvatarShopInventory:
  case MVOperationCodes__Enum_DeleteAvatarFromShopInventory:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 == (MVNetworkGame *)0x0) break;
    this_00 = (pMVar5->fields).OnMarketPlaceActionComplete;
    if (this_00 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
joined_?:
    if (pMVar5 != (MVNetworkGame *)0x0) {
      MVNetworkGame+OnMarketPlaceActionCompleteDelegate::
      MVNetworkGame_OnMarketPlaceActionCompleteDelegate_Invoke
                (this_00,sVar4 == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar5 = (this->fields).networkGame;
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pAVar21 = (Action_1_UIPushOption_ *)(pMVar5->fields).OnSetAvatarAccessoryResponse;
      if (pAVar21 != (Action_1_UIPushOption_ *)0x0) {
        if (pMVar5 == (MVNetworkGame *)0x0) break;
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (pAVar21,(uint)(returnCode == 0),MethodInfo__System__Action<bool>__Invoke_bool_);
      }
      if (sVar4 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_SetAvatarAccessorySlot_operation,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AttachWorldObjectToSeat:
  case MVOperationCodes__Enum_SpawnVehicleWithDriver:
    pPVar28 = (PrefabPool *)(this->fields).networkGame;
    if ((pPVar28 != (PrefabPool *)0x0) &&
       (pMVar29 = (MVLocalObjectController *)
                  PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar28,(MethodInfo *)0x0),
       pMVar29 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                (pMVar29,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pPVar28 = (PrefabPool *)(this->fields).networkGame;
    if ((pPVar28 != (PrefabPool *)0x0) &&
       (pMVar29 = (MVLocalObjectController *)
                  PrefabPool::PrefabPool_get_MVSmokePrefab(pPVar28,(MethodInfo *)0x0),
       pMVar29 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                (pMVar29,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadBytes:
    if ((((uint)(TypeInfo__DataUploadManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__DataUploadManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__DataUploadManager);
    }
    DataUploadManager::DataUploadManager_OnUploadBytes((MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
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
  puStack_5 = &stack0xffffffd4;
  puVar6 = &stack0xffffffd4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  func_?();
  if (operationResponse != (OperationResponse *)0x0) {
    pOVar7 = &operationResponse->fields;
    operationResponse =
         (OperationResponse *)
         CONCAT31(operationResponse._1_3_,(operationResponse->fields).OperationCode);
    uStack_2 = 0;
    puStack_5 = &stack0xffffffd4;
    MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
              (this,(MVOperationCodes__Enum)operationResponse,(pOVar1->fields).Parameters,
               pOVar7->ReturnCode,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_4;
    return;
  }
  puStack_5 = &stack0xffffffd4;
  func_?();
  auStack_8[0] = *unaff_ESI;
  func_?(auStack_8,&UNK_?);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

