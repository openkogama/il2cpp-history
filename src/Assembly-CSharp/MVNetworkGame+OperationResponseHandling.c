
/* Void ExecuteOperationResponse(MVOperationCodes, Dictionary`2[System.Byte,System.Object], Int16)
    */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,MVOperationCodes__Enum opCode,
               Dictionary_2_System_Byte_System_Object_ *returnValues,int16_t returnCode,
               MethodInfo *method)

{
  player = (MVPlayer *)CONCAT44(in_register_00000014,opCode);
  returnCode_00 = (int)returnCode;
  bVar1 = (byte)opCode;
  method_00 = (MethodInfo *)returnValues;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeSelection__CallbackHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVOperationCodes);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PostRequest);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__QuitConnectionError);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScreenshotUploadedEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WWWForm);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Quiting_from_join_because_of_of_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_fetch_actors_planet_ow);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_returnCode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_token);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_claim_gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unhandled_operation_code_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Successfully_published_planet);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_fetch_actors_planet_pe);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_are_not_authorized_to_publis);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_unregister_worldObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Gold_claimed__Marcus__Handle_thi);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetAvatarAccessorySlot_operation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UpdateWorldObjectData_FAILED_on_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_profile_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_s_gamePublishedURL_is_null_or_em);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_planet_id);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Undefined_fail_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (0x3f < bVar1) {
    if (bVar1 < 0x65) {
      if (bVar1 < 0x5b) {
        if (bVar1 == 0x41) {
code_?:
          if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
             (plVar2 = (longlong *)FUN_?(returnValues,0x17), plVar2 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar2,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pMVar4 = (this->fields).networkGame;
            if ((pMVar4 != (MVNetworkGame *)0x0) &&
               (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) {
              pMVar6 = (pWVar5->fields)._.worldObjectClientManager;
              lVar7 = plVar2[2];
              if (pMVar6 != (MVWorldObjectClientManagerNetwork *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__CloneWorldObjectTreeResponseEventArgs);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((pMVar6->fields)._.CloneWorldObjectTreeResponse ==
                    (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
                  return;
                }
                lVar8 = FUN_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__EventArgs);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
                  FUN_?();
                }
                *(bool *)(lVar8 + 0x14) = returnCode == 0;
                *(int *)(lVar8 + 0x10) = (int)lVar7;
                pEVar9 = (pMVar6->fields)._.CloneWorldObjectTreeResponse;
                if (pEVar9 != (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
                  (*(pEVar9->fields)._._.invoke_impl)
                            ((pEVar9->fields)._._.method_code,pMVar6,lVar8,
                             (pEVar9->fields)._._.method);
                  return;
                }
              }
            }
          }
          goto code_?;
        }
        switch(opCode & MVOperationCodes__Enum_Join) {
        case MVOperationCodes__Enum_SetFirstTimeEvent:
          if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
          plVar2 = (longlong *)FUN_?(returnValues,0xADDR);
          plVar10 = (longlong *)FUN_?(returnValues,0xdd);
          if (plVar10 == (longlong *)0x0) break;
          if (*(longlong *)(*plVar10 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar10,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar7 = plVar10[2];
          if (plVar2 == (longlong *)0x0) break;
          if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar2);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__FirstTimeEventManager);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__LevelingManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__LevelingManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__LevelingManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField == 0) {
            return;
          }
          if ((char)lVar7 == '\0') {
            return;
          }
          pAVar11 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
          goto code_?;
        default:
          goto code_?;
        case MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold:
          if (returnCode != -1) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        case MVOperationCodes__Enum_GetPlanetOwnerships:
          if (returnCode == -1) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
            return;
          }
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pSVar12 = (String *)FUN_?(returnValues,0xADDR);
            if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar13 = (String *)0x0;
            if (pSVar12 != (String *)0x0) {
              if (pSVar12->klass == pSRam0000000182dc50c0) {
                pSVar13 = pSVar12;
              }
              if (pSVar13 == (String *)0x0) {
                FUN_?(pSVar12);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                      JsonConvert_DeserializeObject_2
                                (pSVar13,
                                 MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                                );
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pAVar15 = (pMVar4->fields).ReceivedPlanetOwnershipData;
              if (pAVar15 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                return;
              }
              (*(pAVar15->fields)._._.invoke_impl)
                        ((pAVar15->fields)._._.method_code,pOVar14,(pAVar15->fields)._._.method);
              return;
            }
          }
          break;
        case MVOperationCodes__Enum_GetAllPlanetPermissions:
          if (returnCode == -1) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_fetch_actors_planet_pe,(MethodInfo *)0x0);
            return;
          }
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pSVar12 = (String *)FUN_?(returnValues,0xADDR);
            if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar13 = (String *)0x0;
            if (pSVar12 != (String *)0x0) {
              if (pSVar12->klass == pSRam0000000182dc50c0) {
                pSVar13 = pSVar12;
              }
              if (pSVar13 == (String *)0x0) {
                FUN_?(pSVar12);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pOVar14 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                      JsonConvert_DeserializeObject_2
                                (pSVar13,
                                 System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>_System__String_
                                );
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar4 != (MVNetworkGame *)0x0) {
              pAVar16 = (pMVar4->fields).ReceivedPlanetPermissionsData;
              if (pAVar16 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                             *)0x0) {
                return;
              }
              (*(pAVar16->fields)._._.invoke_impl)
                        ((pAVar16->fields)._._.method_code,pOVar14,(pAVar16->fields)._._.method);
              return;
            }
          }
        }
        goto code_?;
      }
      if (bVar1 == 0x60) {
        pMVar4 = (this->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          if ((pMVar4->fields).OnAccessoryUnequipped == (Action *)0x0) {
            return;
          }
          pAVar11 = (pMVar4->fields).OnAccessoryUnequipped;
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
          return;
        }
        goto code_?;
      }
      if (bVar1 == 100) {
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          pSVar12 = (String *)FUN_?(returnValues,0xd1);
          if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar13 = (String *)0x0;
          if (pSVar12 != (String *)0x0) {
            if (pSVar12->klass == pSRam0000000182dc50c0) {
              pSVar13 = pSVar12;
            }
            if (pSVar13 == (String *)0x0) {
              FUN_?(pSVar12);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          this_02 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                     *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                       JsonConvert_DeserializeObject_2
                                 (pSVar13,
                                  System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                                 );
          if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
              (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
            return;
          }
          pAVar17 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
          if (this_02 !=
              (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) {
            pRVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                      UIR::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                                (this_02,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                                );
            (*(pAVar17->fields)._._.invoke_impl)
                      ((pAVar17->fields)._._.method_code,pRVar18,(pAVar17->fields)._._.method);
            return;
          }
        }
        goto code_?;
      }
    }
    else if (bVar1 < 0x72) {
      if (bVar1 == 0x6e) {
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0)
        goto code_?;
        iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__FindEntry
                           (returnValues,0x85,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                            ->klass->rgctx_data[0x21].method);
        if (iVar19 < 0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 == (MVNetworkGame *)0x0) ||
            (pMVar20 = (pMVar4->fields).playerContainer, pMVar20 == (MVPlayerContainer *)0x0)) ||
           (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0)
           , pMVar21 == (MVLocalPlayer *)0x0)) goto code_?;
        pUVar22 = (pMVar21->fields)._._UserProfileData_k__BackingField;
        plVar2 = (longlong *)FUN_?(returnValues,0x85);
        if ((pUVar22 == (UserProfileData *)0x0) || (plVar2 == (longlong *)0x0))
        goto code_?;
        if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
code_?:
        (pUVar22->fields).Gold = (int32_t)plVar2[2];
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 == (MVNetworkGame *)0x0) ||
            (pMVar20 = (pMVar4->fields).playerContainer, pMVar20 == (MVPlayerContainer *)0x0)) ||
           (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0)
           , pMVar21 == (MVLocalPlayer *)0x0)) goto code_?;
        if ((pMVar21->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 == (MVNetworkGame *)0x0) ||
           (pMVar20 = (pMVar4->fields).playerContainer, pMVar20 == (MVPlayerContainer *)0x0))
        goto code_?;
        pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0);
code_?:
        if (pMVar21 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar11 = (pMVar21->fields)._.OnGoldAmountChange;
code_?:
        if (pAVar11 != (Action *)0x0) {
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,(pAVar11->fields)._._.method);
          return;
        }
        goto code_?;
      }
      if (bVar1 == 0x71) {
        if (returnCode != -1) {
          return;
        }
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
        if (extraout_RAX != 0) {
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar23 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((*(longlong *)(extraout_RAX + 0x88) != 0) &&
              (lVar7 = *(longlong *)(*(longlong *)(extraout_RAX + 0x88) + 0x10), lVar7 != 0)) &&
             ((pMVar23 != (MVWorldObjectClientManager *)0x0 &&
              (pMVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (pMVar23,*(int32_t *)(lVar7 + 0x10),(MethodInfo *)0x0),
              pIVar25 = TypeInfo__ISpawnRoleLocal, pMVar24 != (MVWorldObjectClient *)0x0)))) {
            lVar7 = FUN_?(pMVar24,TypeInfo__ISpawnRoleLocal);
            pIVar26 = TypeInfo__ISpawnRoleLocal;
            if (lVar7 == 0) {
              FUN_?(pMVar24,pIVar25);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar7 = FUN_?(pMVar24,TypeInfo__ISpawnRoleLocal);
            if (lVar7 != 0) {
              FUN_?(3,TypeInfo__ISpawnRoleLocal,lVar7);
              return;
            }
            FUN_?(pMVar24,pIVar26);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        goto code_?;
      }
    }
    else {
      if (bVar1 == 0x78) {
        pMVar4 = (this->fields).networkGame;
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar27 = (pMVar4->fields)._PlayerController_k__BackingField,
           pMVar27 != (MVLocalObjectController *)0x0)) {
          MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                    (pMVar27,returnCode == 0,returnValues,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (bVar1 == 0x7a) {
        if (returnCode != -1) {
          return;
        }
        lVar7 = FUN_?();
        if ((lVar7 == 0) || (lVar7 = FUN_?(), lVar7 == 0)) goto code_?;
        if (*(longlong *)(lVar7 + 0x28) == 0) {
          return;
        }
        lVar7 = FUN_?();
        if (lVar7 == 0) goto code_?;
        pMVar21 = (MVLocalPlayer *)FUN_?();
        goto code_?;
      }
      if (bVar1 == 0xff) {
        pMVar4 = (this->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          (pMVar4->fields).connState = 4;
          if (returnCode != 0) {
            if ((returnCode == -0xc) &&
               (bVar28 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
               bVar28 != 0)) {
              return;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Quiting_from_join_because_of_of_,(MethodInfo *)0x0);
            this_01 = (QuitConnectionError *)FUN_?(TypeInfo__QuitConnectionError);
            QuitConnectionError::QuitConnectionError__ctor(this_01,(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_ApplicationQuit
                      ((QuitBaseCallback *)this_01,(MethodInfo *)0x0);
            return;
          }
          pMVar4 = (this->fields).networkGame;
          if (pMVar4 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar4,returnValues,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
code_?:
    EStack_29.klass = (Enum__Class *)TypeInfo__MV__Common__MVOperationCodes;
    EStack_29.monitor = (MonitorData *)0xffffffffffffffff;
    bStack_30 = bVar1;
    pSVar12 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_29,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Unhandled_operation_code_,pSVar12,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar12,(MethodInfo *)0x0);
    return;
  }
  if (bVar1 < 0xc) {
    if (bVar1 < 4) {
      if (bVar1 == 1) {
        if (returnCode == 0) {
          pMVar4 = (this->fields).networkGame;
          if (((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
              (plVar2 = (longlong *)FUN_?(returnValues,0x17),
              pMVar4 != (MVNetworkGame *)0x0)) && (plVar2 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar2,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar7 = plVar2[2];
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_OnUnregisterWorldObjectResponse_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pWVar5 = (pMVar4->fields).worldNetwork;
            if ((pWVar5 != (WorldNetwork *)0x0) &&
               (pMVar23 = (MVWorldObjectClientManager *)(pWVar5->fields)._.worldObjectClientManager,
               pMVar23 != (MVWorldObjectClientManager *)0x0)) {
              bVar28 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                                 (pMVar23,(int32_t)lVar7,(MethodInfo *)0x0);
              if (bVar28 == 0) {
                pSVar12 = StringLiteral_OnUnregisterWorldObjectResponse_;
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                  pSVar12 = StringLiteral_OnUnregisterWorldObjectResponse_;
                }
                goto code_?;
              }
              pMVar6 = (pWVar5->fields)._.worldObjectClientManager;
              if (pMVar6 != (MVWorldObjectClientManagerNetwork *)0x0) {
                MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                          (pMVar6,(int32_t)lVar7,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        pSVar12 = StringLiteral_Failed_to_unregister_worldObject;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar12 = StringLiteral_Failed_to_unregister_worldObject;
        }
        goto code_?;
      }
      if (bVar1 == 3) {
        if (returnCode == 0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_UpdateWorldObjectData_FAILED_on_,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (bVar1 == 6) {
        pMVar4 = (this->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
             (plVar2 = (longlong *)FUN_?(returnValues,0x17), plVar2 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar2,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar7 = plVar2[2];
            plVar2 = (longlong *)
                      FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar2 >> 8),0x15));
            if (plVar2 != (longlong *)0x0) {
              if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                FUN_?(plVar2,lRam_?);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pWVar5 = (pMVar4->fields).worldNetwork;
              if (pWVar5 != (WorldNetwork *)0x0) {
                pMVar6 = (pWVar5->fields)._.worldObjectClientManager;
                if (returnCode == 0) {
                  if (pMVar6 != (MVWorldObjectClientManagerNetwork *)0x0) {
                    bVar28 = 1;
                    goto code_?;
                  }
                }
                else if (pMVar6 != (MVWorldObjectClientManagerNetwork *)0x0) {
                  bVar28 = 0;
code_?:
                  MVWorldObjectClientManagerNetwork::
                  MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                            (pMVar6,(int32_t)lVar7,(int32_t)plVar2[2],bVar28,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (bVar1 == 0xb) {
        pSVar12 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode_00 == -2) || (pSVar12 = StringLiteral_Undefined_fail_, returnCode_00 == -1)
            ) || (pSVar12 = StringLiteral_Unhandled_returnCode, returnCode_00 != 0)) {
          pSVar12 = TM::TM__(pSVar12,(MethodInfo *)0x0);
        }
        else {
          pSVar12 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar4 = (this->fields).networkGame;
          if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar4->fields).isPublished = 1;
        }
        pMVar4 = (this->fields).networkGame;
        if (pMVar4 != (MVNetworkGame *)0x0) {
          if ((pMVar4->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            pUVar31 = (pMVar4->fields).OnPublishedPlanet;
            (*(pUVar31->fields)._._.invoke_impl)
                      ((pUVar31->fields)._._.method_code,pSVar12,(pUVar31->fields)._._.method);
          }
          lVar7 = FUN_?();
          if (lVar7 != 0) {
            if ((*(longlong *)(lVar7 + 0x80) == 0) ||
               (*(int *)(*(longlong *)(lVar7 + 0x80) + 0x10) == 0)) {
              pSVar12 = StringLiteral_s_gamePublishedURL_is_null_or_em;
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
                pSVar12 = StringLiteral_s_gamePublishedURL_is_null_or_em;
              }
              goto code_?;
            }
            this_04 = (WWWForm *)FUN_?(TypeInfo__UnityEngine__WWWForm);
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                      (this_04,(MethodInfo *)0x0);
            lVar7 = FUN_?();
            if ((lVar7 != 0) && (this_04 != (WWWForm *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        (this_04,StringLiteral_token,*(String **)(lVar7 + 0x40),(MethodInfo *)0x0);
              lVar7 = FUN_?();
              if (lVar7 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          (this_04,StringLiteral_profile_id,*(int32_t *)(lVar7 + 0x18),
                           (MethodInfo *)0x0);
                lVar7 = FUN_?();
                if (lVar7 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_planet_id,*(int32_t *)(lVar7 + 0x1c),
                             (MethodInfo *)0x0);
                  lVar7 = FUN_?();
                  if (lVar7 != 0) {
                    pSVar12 = *(String **)(lVar7 + 0x80);
                    this_05 = (PostRequest *)FUN_?(TypeInfo__PostRequest);
                    PostRequest::PostRequest__ctor
                              (this_05,pSVar12,this_04,
                               (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
                      FUN_?();
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
        goto code_?;
      }
    }
    goto code_?;
  }
  if (bVar1 < 0x33) {
    if (bVar1 == 0x10) {
      if ((this->fields).networkGame != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_Undefined_fail_during_friend_req);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_That_user_has_blocked_you);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_You_already_have_a_pending_reque);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_You_have_blocked_that_user);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_User_has_sent_you_request__Accep);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_User_does_not_exist);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_You_are_already_friends_with_tha);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar12 = ::StringLiteral__;
        switch(returnCode_00) {
        case -7:
          pSVar12 = StringLiteral_That_user_has_blocked_you;
          break;
        case -6:
          pSVar12 = StringLiteral_User_has_sent_you_request__Accep;
          break;
        case -5:
          pSVar12 = StringLiteral_You_have_blocked_that_user;
          break;
        case -4:
          pSVar12 = StringLiteral_You_are_already_friends_with_tha;
          break;
        case -3:
          pSVar12 = StringLiteral_You_already_have_a_pending_reque;
          break;
        case -2:
          pSVar12 = StringLiteral_User_does_not_exist;
          break;
        case -1:
          pSVar12 = StringLiteral_Undefined_fail_during_friend_req;
        }
        if (pSVar12 == ::StringLiteral__) {
          return;
        }
        if ((((pSVar12 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
            ((pSVar12->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
           (bVar28 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar12->fields)._firstChar,
                                (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar28 != 0)) {
          return;
        }
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar12,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    switch(opCode & MVOperationCodes__Enum_Join) {
    case MVOperationCodes__Enum_LockHierarchy:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                  (pMVar4,returnValues,returnCode_00,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_UploadScreenshot:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pEVar32 = (pMVar4->fields).ScreenshotUploaded;
        if (pEVar32 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
          return;
        }
        lVar7 = FUN_?(TypeInfo__ScreenshotUploadedEventArgs);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(bool *)(lVar7 + 0x10) = returnCode == 0;
        (*(pEVar32->fields)._._.invoke_impl)
                  ((pEVar32->fields)._._.method_code,this,lVar7,(pEVar32->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_RequestWoUniquePrototype:
      if (returnCode == 0) {
        return;
      }
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_OnRequestWoUniquePrototypeFailed);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_OnRequestWoUniquePrototypeFailed,(MethodInfo *)0x0);
        if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
           (plVar2 = (longlong *)FUN_?(returnValues,0x17), plVar2 != (longlong *)0x0)) {
          if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar2,lRam_?);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pWVar5 = (pMVar4->fields).worldNetwork;
          if ((pWVar5 != (WorldNetwork *)0x0) &&
             (this_00 = (pWVar5->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)) {
            MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype
                      (this_00,(int32_t)plVar2[2],(MethodInfo *)0x0);
            return;
          }
        }
      }
      break;
    default:
      goto code_?;
    case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
      pMVar4 = (this->fields).networkGame;
      if (((pMVar4 != (MVNetworkGame *)0x0) &&
          (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) &&
         (pMVar6 = (pWVar5->fields)._.worldObjectClientManager,
         pMVar6 != (MVWorldObjectClientManagerNetwork *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__OnTransferWosResponseEventArgs);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_HandleTransferWorldObjectsToGrou);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (returnCode != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
        }
        if ((pMVar6->fields)._.OnTransferWosResponse ==
            (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
          return;
        }
        pEVar33 = (pMVar6->fields)._.OnTransferWosResponse;
        lVar7 = FUN_?(TypeInfo__OnTransferWosResponseEventArgs);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(bool *)(lVar7 + 0x10) = returnCode == 0;
        (*(pEVar33->fields)._._.invoke_impl)
                  ((pEVar33->fields)._._.method_code,pMVar6,lVar7,(pEVar33->fields)._._.method);
        return;
      }
      break;
    case MVOperationCodes__Enum_CloneWorldObjectTree:
      goto code_?;
    case MVOperationCodes__Enum_PurchaseProduct:
      uVar34 = 0;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
      iVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__FindEntry
                         (returnValues,0x62,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                          ->klass->rgctx_data[0x21].method);
      if (-1 < iVar19) {
        FUN_?(returnValues,0x62);
        uVar34 = FUN_?();
      }
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
        LOCK();
        UNLOCK();
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pMVar4->fields).PurchaseProductResponseHandler !=
          (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
         ) {
        pAVar35 = (pMVar4->fields).PurchaseProductResponseHandler;
        (*(pAVar35->fields)._._.invoke_impl)
                  ((pAVar35->fields)._._.method_code,returnCode_00,uVar34,
                   (pAVar35->fields)._._.method);
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
        }
        BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                  (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
      }
      if (returnCode != 0) {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar4 == (MVNetworkGame *)0x0) ||
          (pMVar20 = (pMVar4->fields).playerContainer, pMVar20 == (MVPlayerContainer *)0x0)) ||
         (pMVar21 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar20,(MethodInfo *)0x0),
         pMVar21 == (MVLocalPlayer *)0x0)) break;
      pUVar22 = (pMVar21->fields)._._UserProfileData_k__BackingField;
      plVar2 = (longlong *)FUN_?(returnValues,0x85);
      if ((pUVar22 == (UserProfileData *)0x0) || (plVar2 == (longlong *)0x0)) break;
      if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto code_?;
    case MVOperationCodes__Enum_AddItemToWorld:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if ((pMVar4->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar36 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar4->fields).OnItemAddedToWorld;
      bVar37 = returnCode == -1;
      goto code_?;
    case MVOperationCodes__Enum_AddWorldObjectToInventory:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                  (pMVar4,returnValues,returnCode,(MethodInfo *)0x0);
        pMVar4 = (this->fields).networkGame;
        if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          plVar2 = (longlong *)FUN_?(returnValues,0x17);
          plVar10 = (longlong *)FUN_?(returnValues,0x29);
          if ((pMVar4 != (MVNetworkGame *)0x0) && (plVar10 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar10 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar10,lRam_?);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (plVar2 != (longlong *)0x0) {
              if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                FUN_?(plVar2,lRam_?);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              aIStackX_10[0].m_value = (int32_t)plVar10[2];
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral_Successfully_added_model_to_your);
                LOCK();
                UNLOCK();
                FUN_?(&StringLiteral_Item_not_added_to_inventory);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((pMVar4->fields).OnAddWorldObjectToInventoryCallbackDev ==
                  (UnityAction_1_System_String_ *)0x0) {
                return;
              }
              pSVar12 = StringLiteral_Item_not_added_to_inventory;
              if (returnCode == 0) {
                pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0)
                ;
                pSVar12 = mscorlib.dll::System::String::String_Concat_4
                                    (StringLiteral_Successfully_added_model_to_your,pSVar12,
                                     (MethodInfo *)0x0);
              }
              pUVar31 = (pMVar4->fields).OnAddWorldObjectToInventoryCallbackDev;
              if (pUVar31 != (UnityAction_1_System_String_ *)0x0) {
                (*(pUVar31->fields)._._.invoke_impl)
                          ((pUVar31->fields)._._.method_code,pSVar12,(pUVar31->fields)._._.method);
                return;
              }
            }
          }
        }
      }
      break;
    case MVOperationCodes__Enum_SetActiveAvatar:
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      if ((pMVar4->fields).OnActiveAvatarSet == (Action *)0x0) {
        return;
      }
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkGame *)0x0) break;
      pAVar11 = (pMVar4->fields).OnActiveAvatarSet;
      goto code_?;
    case MVOperationCodes__Enum_AddItemToMarketPlace:
      if (returnCode == 0) {
        if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
           (plVar2 = (longlong *)FUN_?(returnValues,0xADDR),
           plVar2 == (longlong *)0x0)) break;
        if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar7 = plVar2[2];
        plVar2 = (longlong *)
                  FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar2 >> 8),0x8a));
        if (plVar2 == (longlong *)0x0) break;
        if (*(longlong *)(*plVar2 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar2,lRam_?);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = plVar2[2];
        lVar38 = FUN_?();
        if ((lVar38 == 0) ||
           (this_03 = (PlayerShopInventoryRepository *)FUN_?(),
           this_03 == (PlayerShopInventoryRepository *)0x0)) break;
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                  (this_03,(int32_t)lVar7,(int32_t)lVar8,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
      }
    case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pMVar36 = (pMVar4->fields).OnMarketPlaceActionComplete;
        if (pMVar36 != (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
code_?:
          bVar37 = returnCode == 0;
code_?:
          (*(pMVar36->fields)._._.invoke_impl)
                    ((pMVar36->fields)._._.method_code,bVar37,(pMVar36->fields)._._.method);
        }
        return;
      }
      break;
    case MVOperationCodes__Enum_SetAvatarAccessorySlot:
      pMVar4 = (this->fields).networkGame;
      if (pMVar4 != (MVNetworkGame *)0x0) {
        pAVar39 = (pMVar4->fields).OnSetAvatarAccessoryResponse;
        if (pAVar39 != (Action_1_Boolean_ *)0x0) {
          (*(pAVar39->fields)._._.invoke_impl)
                    ((pAVar39->fields)._._.method_code,CONCAT71(0x1800000,returnCode == 0),
                     (pAVar39->fields)._._.method);
        }
        if (returnCode == 0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_SetAvatarAccessorySlot_operation,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_AttachWorldObjectToSeat:
    case MVOperationCodes__Enum_SpawnVehicleWithDriver:
      pMVar4 = (this->fields).networkGame;
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar27 = (pMVar4->fields)._PlayerController_k__BackingField,
         pMVar27 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar27,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
      break;
    case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
      pMVar4 = (this->fields).networkGame;
      if ((pMVar4 != (MVNetworkGame *)0x0) &&
         (pMVar27 = (pMVar4->fields)._PlayerController_k__BackingField,
         pMVar27 != (MVLocalObjectController *)0x0)) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar27,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((bVar1 != 0x37) && (bVar1 != 0x38)) {
    if (bVar1 == 0x3f) {
      DataUploadManager::DataUploadManager_OnUploadBytes((MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  pMVar4 = (this->fields).networkGame;
  if (pMVar4 == (MVNetworkGame *)0x0) goto code_?;
  if ((pMVar4->fields).OnMarketPlaceActionComplete ==
      (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
    return;
  }
  pMVar36 = (pMVar4->fields).OnMarketPlaceActionComplete;
  goto code_?;
}


/* Void HandleOperationResponse(OperationResponse) */

void Assembly-CSharp.dll::MVNetworkGame+OperationResponseHandling::
     MVNetworkGame_OperationResponseHandling_HandleOperationResponse
               (MVNetworkGame_OperationResponseHandling *this,OperationResponse *operationResponse,
               MethodInfo *method)

{
  if (operationResponse != (OperationResponse *)0x0) {
    MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
              (this,(uint)(operationResponse->fields).OperationCode,
               (operationResponse->fields).Parameters,(operationResponse->fields).ReturnCode,
               (MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

