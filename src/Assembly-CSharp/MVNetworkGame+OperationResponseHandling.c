
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
  uVar2 = (undefined7)((ulonglong)player >> 8);
  if (0x40 < bVar1) {
    if (bVar1 < 0x65) {
      if (bVar1 < 0x58) {
        if (bVar1 == 0x54) {
          if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0)
          goto code_?;
          plVar3 = (longlong *)FUN_?(returnValues,CONCAT71(uVar2,0xbf));
          plVar4 = (longlong *)FUN_?(returnValues,0xdb);
          if (plVar4 == (longlong *)0x0) goto code_?;
          if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar4,lRam_?);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar6 = plVar4[2];
          if (plVar3 == (longlong *)0x0) goto code_?;
          if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar3);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
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
          if ((char)lVar6 == '\0') {
            return;
          }
          pAVar7 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
          goto code_?;
        }
        if (bVar1 == 0x57) {
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
        }
      }
      else {
        if (bVar1 == 0x59) {
          if (returnCode == -1) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Failed_to_fetch_actors_planet_ow,(MethodInfo *)0x0);
            return;
          }
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pSVar8 = (String *)FUN_?(returnValues,CONCAT71(uVar2,0xf5));
            if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar9 = (String *)0x0;
            if (pSVar8 != (String *)0x0) {
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar9 = pSVar8;
              }
              if (pSVar9 == (String *)0x0) {
                FUN_?(pSVar8);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pOVar10 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                      JsonConvert_DeserializeObject_2
                                (pSVar9,
                                 MV__WorldObject__OwnershipData__PlanetOwnershipsData_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<MV::WorldObject::OwnershipData::PlanetOwnershipsData>_System__String_
                                );
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar11 != (MVNetworkGame *)0x0) {
              pAVar12 = (pMVar11->fields).ReceivedPlanetOwnershipData;
              if (pAVar12 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
                return;
              }
              (*(pAVar12->fields)._._.invoke_impl)
                        ((pAVar12->fields)._._.method_code,pOVar10,(pAVar12->fields)._._.method);
              return;
            }
          }
          goto code_?;
        }
        if (bVar1 == 0x60) {
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            if ((pMVar11->fields).OnAccessoryUnequipped == (Action *)0x0) {
              return;
            }
            pAVar7 = (pMVar11->fields).OnAccessoryUnequipped;
            (*(pAVar7->fields)._._.invoke_impl)
                      ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
            return;
          }
          goto code_?;
        }
        if (bVar1 == 100) {
          if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            pSVar8 = (String *)FUN_?(returnValues,CONCAT71(uVar2,0xcf));
            if (*(int *)&(TypeInfo__Newtonsoft__Json__JsonConvert->_1).field_0x1c == 0) {
              FUN_?();
            }
            pSVar9 = (String *)0x0;
            if (pSVar8 != (String *)0x0) {
              if (pSVar8->klass == pSRam0000000182dbbc60) {
                pSVar9 = pSVar8;
              }
              if (pSVar9 == (String *)0x0) {
                FUN_?(pSVar8);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            this_02 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                       *)Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::
                         JsonConvert_DeserializeObject_2
                                   (pSVar9,
                                    System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::List<MV::WorldObject::ThemesData::ThemeData>_>_System__String_
                                   );
            if (TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived ==
                (Action_1_MV_WorldObject_ThemesData_ThemeData_ *)0x0) {
              return;
            }
            pAVar13 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
            if (this_02 !=
                (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)0x0) {
              pRVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        UIR::RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
                        List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__ToArray
                                  (this_02,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                                  );
              (*(pAVar13->fields)._._.invoke_impl)
                        ((pAVar13->fields)._._.method_code,pRVar14,(pAVar13->fields)._._.method);
              return;
            }
          }
          goto code_?;
        }
      }
    }
    else if (bVar1 < 0x72) {
      if (bVar1 == 0x6e) {
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0)
        goto code_?;
        iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__FindEntry
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                            ->klass->rgctx_data[0x21].method);
        if (iVar15 < 0) {
          return;
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar11 == (MVNetworkGame *)0x0) ||
            (pMVar16 = (pMVar11->fields).playerContainer, pMVar16 == (MVPlayerContainer *)0x0)) ||
           (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0)
           , pMVar17 == (MVLocalPlayer *)0x0)) goto code_?;
        pUVar18 = (pMVar17->fields)._._UserProfileData_k__BackingField;
        plVar3 = (longlong *)FUN_?(returnValues,0x82);
        if ((pUVar18 == (UserProfileData *)0x0) || (plVar3 == (longlong *)0x0))
        goto code_?;
        if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar3,lRam_?);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
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
          pMVar19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (((*(longlong *)(extraout_RAX + 0x88) != 0) &&
              (lVar6 = *(longlong *)(*(longlong *)(extraout_RAX + 0x88) + 0x10), lVar6 != 0)) &&
             ((pMVar19 != (MVWorldObjectClientManager *)0x0 &&
              (pMVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (pMVar19,*(int32_t *)(lVar6 + 0x10),(MethodInfo *)0x0),
              pIVar21 = TypeInfo__ISpawnRoleLocal, pMVar20 != (MVWorldObjectClient *)0x0)))) {
            lVar6 = FUN_?(pMVar20,TypeInfo__ISpawnRoleLocal);
            pIVar22 = TypeInfo__ISpawnRoleLocal;
            if (lVar6 == 0) {
              FUN_?(pMVar20,pIVar21);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar6 = FUN_?(pMVar20,TypeInfo__ISpawnRoleLocal);
            if (lVar6 != 0) {
              FUN_?(3,TypeInfo__ISpawnRoleLocal,lVar6);
              return;
            }
            FUN_?(pMVar20,pIVar22);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        goto code_?;
      }
    }
    else {
      if (bVar1 == 0x78) {
        pMVar11 = (this->fields).networkGame;
        if ((pMVar11 != (MVNetworkGame *)0x0) &&
           (pMVar23 = (pMVar11->fields)._PlayerController_k__BackingField,
           pMVar23 != (MVLocalObjectController *)0x0)) {
          MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                    (pMVar23,returnCode == 0,returnValues,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      if (bVar1 == 0x7a) {
        if (returnCode != -1) {
          return;
        }
        lVar6 = FUN_?();
        if ((lVar6 == 0) || (lVar6 = FUN_?(), lVar6 == 0)) goto code_?;
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          return;
        }
        lVar6 = FUN_?();
        if ((lVar6 == 0) || (lVar6 = FUN_?(), lVar6 == 0)) goto code_?;
        pAVar7 = *(Action **)(lVar6 + 0x20);
        goto code_?;
      }
      if (bVar1 == 0xff) {
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          (pMVar11->fields).connState = 4;
          if (returnCode != 0) {
            if ((returnCode == -0xc) &&
               (bVar24 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
               bVar24 != 0)) {
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
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 != (MVNetworkGame *)0x0) {
            MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar11,returnValues,(MethodInfo *)0x0);
            return;
          }
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if (bVar1 < 0x10) {
    if (bVar1 < 4) {
      if (bVar1 == 1) {
        if (returnCode == 0) {
          pMVar11 = (this->fields).networkGame;
          if (((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
              (plVar3 = (longlong *)FUN_?(returnValues,CONCAT71(uVar2,0x16)),
              pMVar11 != (MVNetworkGame *)0x0)) && (plVar3 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar3,lRam_?);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar6 = plVar3[2];
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_OnUnregisterWorldObjectResponse_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pWVar25 = (pMVar11->fields).worldNetwork;
            if ((pWVar25 != (WorldNetwork *)0x0) &&
               (pMVar19 = (MVWorldObjectClientManager *)(pWVar25->fields)._.worldObjectClientManager,
               pMVar19 != (MVWorldObjectClientManager *)0x0)) {
              bVar24 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                                 (pMVar19,(int32_t)lVar6,(MethodInfo *)0x0);
              if (bVar24 == 0) {
                pSVar8 = StringLiteral_OnUnregisterWorldObjectResponse_;
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                  pSVar8 = StringLiteral_OnUnregisterWorldObjectResponse_;
                }
                goto code_?;
              }
              pMVar26 = (pWVar25->fields)._.worldObjectClientManager;
              if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
                MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                          (pMVar26,(int32_t)lVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        pSVar8 = StringLiteral_Failed_to_unregister_worldObject;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          pSVar8 = StringLiteral_Failed_to_unregister_worldObject;
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
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
             (plVar3 = (longlong *)FUN_?(returnValues,0x16), plVar3 != (longlong *)0x0)) {
            if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar3,lRam_?);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar6 = plVar3[2];
            plVar3 = (longlong *)
                      FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar3 >> 8),0x14));
            if (plVar3 != (longlong *)0x0) {
              if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
                FUN_?(plVar3,lRam_?);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pWVar25 = (pMVar11->fields).worldNetwork;
              if (pWVar25 != (WorldNetwork *)0x0) {
                pMVar26 = (pWVar25->fields)._.worldObjectClientManager;
                if (returnCode == 0) {
                  if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
                    bVar24 = 1;
                    goto code_?;
                  }
                }
                else if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
                  bVar24 = 0;
code_?:
                  MVWorldObjectClientManagerNetwork::
                  MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
                            (pMVar26,(int32_t)lVar6,(int32_t)plVar3[2],bVar24,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      if (bVar1 == 0xb) {
        pSVar8 = StringLiteral_You_are_not_authorized_to_publis;
        if (((returnCode_00 == -2) || (pSVar8 = StringLiteral_Undefined_fail_, returnCode_00 == -1)
            ) || (pSVar8 = StringLiteral_Unhandled_returnCode, returnCode_00 != 0)) {
          pSVar8 = TM::TM__(pSVar8,(MethodInfo *)0x0);
        }
        else {
          pSVar8 = TM::TM__(StringLiteral_Successfully_published_planet,(MethodInfo *)0x0);
          pMVar11 = (this->fields).networkGame;
          if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar11->fields).isPublished = 1;
        }
        pMVar11 = (this->fields).networkGame;
        if (pMVar11 != (MVNetworkGame *)0x0) {
          if ((pMVar11->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            pUVar27 = (pMVar11->fields).OnPublishedPlanet;
            (*(pUVar27->fields)._._.invoke_impl)
                      ((pUVar27->fields)._._.method_code,pSVar8,(pUVar27->fields)._._.method);
          }
          lVar6 = FUN_?();
          if (lVar6 != 0) {
            if ((*(longlong *)(lVar6 + 0x80) == 0) ||
               (*(int *)(*(longlong *)(lVar6 + 0x80) + 0x10) == 0)) {
              pSVar8 = StringLiteral_s_gamePublishedURL_is_null_or_em;
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
                pSVar8 = StringLiteral_s_gamePublishedURL_is_null_or_em;
              }
              goto code_?;
            }
            this_04 = (WWWForm *)FUN_?(TypeInfo__UnityEngine__WWWForm);
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm__ctor
                      (this_04,(MethodInfo *)0x0);
            lVar6 = FUN_?();
            if ((lVar6 != 0) && (this_04 != (WWWForm *)0x0)) {
              UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                        (this_04,StringLiteral_token,*(String **)(lVar6 + 0x40),(MethodInfo *)0x0);
              lVar6 = FUN_?();
              if (lVar6 != 0) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                          (this_04,StringLiteral_profile_id,*(int32_t *)(lVar6 + 0x18),
                           (MethodInfo *)0x0);
                lVar6 = FUN_?();
                if (lVar6 != 0) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_planet_id,*(int32_t *)(lVar6 + 0x1c),
                             (MethodInfo *)0x0);
                  lVar6 = FUN_?();
                  if (lVar6 != 0) {
                    pSVar8 = *(String **)(lVar6 + 0x80);
                    this_05 = (PostRequest *)FUN_?(TypeInfo__PostRequest);
                    PostRequest::PostRequest__ctor
                              (this_05,pSVar8,this_04,
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
      if (bVar1 == 0xf) {
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
          pSVar8 = ::StringLiteral__;
          switch(returnCode_00) {
          case -7:
            pSVar8 = StringLiteral_That_user_has_blocked_you;
            break;
          case -6:
            pSVar8 = StringLiteral_User_has_sent_you_request__Accep;
            break;
          case -5:
            pSVar8 = StringLiteral_You_have_blocked_that_user;
            break;
          case -4:
            pSVar8 = StringLiteral_You_are_already_friends_with_tha;
            break;
          case -3:
            pSVar8 = StringLiteral_You_already_have_a_pending_reque;
            break;
          case -2:
            pSVar8 = StringLiteral_User_does_not_exist;
            break;
          case -1:
            pSVar8 = StringLiteral_Undefined_fail_during_friend_req;
          }
          if (pSVar8 == ::StringLiteral__) {
            return;
          }
          if ((((pSVar8 != (String *)0x0) && (::StringLiteral__ != (String *)0x0)) &&
              ((pSVar8->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
             (bVar24 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar8->fields)._firstChar,
                                  (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                  (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar24 != 0)) {
            return;
          }
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar8,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if (0x36 < bVar1) {
    if (bVar1 != 0x37) {
      if (bVar1 == 0x3e) {
        DataUploadManager::DataUploadManager_OnUploadBytes((MethodInfo *)0x0);
        return;
      }
      if (bVar1 == 0x40) goto code_?;
      goto code_?;
    }
code_?:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar11->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar28 = (pMVar11->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  switch(opCode & MVOperationCodes__Enum_Join) {
  case MVOperationCodes__Enum_LockHierarchy:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar11,returnValues,returnCode_00,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pEVar29 = (pMVar11->fields).ScreenshotUploaded;
      if (pEVar29 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      lVar6 = FUN_?(TypeInfo__ScreenshotUploadedEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(bool *)(lVar6 + 0x10) = returnCode == 0;
      (*(pEVar29->fields)._._.invoke_impl)
                ((pEVar29->fields)._._.method_code,this,lVar6,(pEVar29->fields)._._.method);
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
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
         (plVar3 = (longlong *)FUN_?(returnValues,0x16), plVar3 != (longlong *)0x0)) {
        if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
          FUN_?(plVar3,lRam_?);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pWVar25 = (pMVar11->fields).worldNetwork;
        if ((pWVar25 != (WorldNetwork *)0x0) &&
           (this_00 = (pWVar25->fields)._.worldInventory, this_00 != (MVWorldInventory *)0x0)) {
          MVWorldInventory::MVWorldInventory_UnpendRuntimePrototype
                    (this_00,(int32_t)plVar3[2],(MethodInfo *)0x0);
          return;
        }
      }
    }
    break;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar11 = (this->fields).networkGame;
    if (((pMVar11 != (MVNetworkGame *)0x0) &&
        (pWVar25 = (pMVar11->fields).worldNetwork, pWVar25 != (WorldNetwork *)0x0)) &&
       (pMVar26 = (pWVar25->fields)._.worldObjectClientManager,
       pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0)) {
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
      if ((pMVar26->fields)._.OnTransferWosResponse ==
          (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
        return;
      }
      pEVar30 = (pMVar26->fields)._.OnTransferWosResponse;
      lVar6 = FUN_?(TypeInfo__OnTransferWosResponseEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(bool *)(lVar6 + 0x10) = returnCode == 0;
      (*(pEVar30->fields)._._.invoke_impl)
                ((pEVar30->fields)._._.method_code,pMVar26,lVar6,(pEVar30->fields)._._.method);
      return;
    }
    break;
  case MVOperationCodes__Enum_CloneWorldObjectTree:
code_?:
    if ((returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) &&
       (plVar3 = (longlong *)FUN_?(returnValues,CONCAT71(uVar2,0x16)),
       plVar3 != (longlong *)0x0)) {
      if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar3,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pMVar11 = (this->fields).networkGame;
      if ((pMVar11 != (MVNetworkGame *)0x0) &&
         (pWVar25 = (pMVar11->fields).worldNetwork, pWVar25 != (WorldNetwork *)0x0)) {
        pMVar26 = (pWVar25->fields)._.worldObjectClientManager;
        lVar6 = plVar3[2];
        if (pMVar26 != (MVWorldObjectClientManagerNetwork *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CloneWorldObjectTreeResponseEventArgs);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((pMVar26->fields)._.CloneWorldObjectTreeResponse ==
              (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
            return;
          }
          lVar31 = FUN_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__EventArgs);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
            FUN_?();
          }
          *(bool *)(lVar31 + 0x14) = returnCode == 0;
          *(int *)(lVar31 + 0x10) = (int)lVar6;
          pEVar32 = (pMVar26->fields)._.CloneWorldObjectTreeResponse;
          if (pEVar32 != (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
            (*(pEVar32->fields)._._.invoke_impl)
                      ((pEVar32->fields)._._.method_code,pMVar26,lVar31,(pEVar32->fields)._._.method);
            return;
          }
        }
      }
    }
    break;
  case MVOperationCodes__Enum_PurchaseProduct:
    uVar33 = 0;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    iVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__FindEntry
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                        ->klass->rgctx_data[0x21].method);
    if (-1 < iVar15) {
      FUN_?(returnValues,CONCAT71(uVar2,0x5f));
      uVar33 = FUN_?();
    }
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 == (MVNetworkGame *)0x0) break;
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
    if ((pMVar11->fields).PurchaseProductResponseHandler !=
        (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0)
    {
      pAVar34 = (pMVar11->fields).PurchaseProductResponseHandler;
      (*(pAVar34->fields)._._.invoke_impl)
                ((pAVar34->fields)._._.method_code,returnCode_00,uVar33,(pAVar34->fields)._._.method
                );
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
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar11 == (MVNetworkGame *)0x0) ||
        (pMVar16 = (pMVar11->fields).playerContainer, pMVar16 == (MVPlayerContainer *)0x0)) ||
       (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
       pMVar17 == (MVLocalPlayer *)0x0)) break;
    pUVar18 = (pMVar17->fields)._._UserProfileData_k__BackingField;
    plVar3 = (longlong *)FUN_?(returnValues,0x82);
    if ((pUVar18 == (UserProfileData *)0x0) || (plVar3 == (longlong *)0x0)) break;
    if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
      FUN_?(plVar3,lRam_?);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
code_?:
    (pUVar18->fields).Gold = (int32_t)plVar3[2];
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar11 == (MVNetworkGame *)0x0) ||
        (pMVar16 = (pMVar11->fields).playerContainer, pMVar16 == (MVPlayerContainer *)0x0)) ||
       (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
       pMVar17 == (MVLocalPlayer *)0x0)) break;
    if ((pMVar17->fields)._.OnGoldAmountChange == (Action *)0x0) {
      return;
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar11 == (MVNetworkGame *)0x0) ||
        (pMVar16 = (pMVar11->fields).playerContainer, pMVar16 == (MVPlayerContainer *)0x0)) ||
       (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar16,(MethodInfo *)0x0),
       pMVar17 == (MVLocalPlayer *)0x0)) break;
    pAVar7 = (pMVar17->fields)._.OnGoldAmountChange;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 == (MVNetworkGame *)0x0) break;
    if ((pMVar11->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
      return;
    }
    pMVar28 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
              (pMVar11->fields).OnItemAddedToWorld;
    bVar35 = returnCode == -1;
    goto code_?;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar11,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar11,returnValues,returnCode,(MethodInfo *)0x0);
      pMVar11 = (this->fields).networkGame;
      if (returnValues != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        plVar3 = (longlong *)FUN_?(returnValues,0x16);
        plVar4 = (longlong *)FUN_?(returnValues,0x28);
        if ((pMVar11 != (MVNetworkGame *)0x0) && (plVar4 != (longlong *)0x0)) {
          if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar4,lRam_?);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
              FUN_?(plVar3,lRam_?);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            aIStackX_10[0].m_value = (int32_t)plVar4[2];
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_Successfully_added_model_to_your);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Item_not_added_to_inventory);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if ((pMVar11->fields).OnAddWorldObjectToInventoryCallbackDev ==
                (UnityAction_1_System_String_ *)0x0) {
              return;
            }
            pSVar8 = StringLiteral_Item_not_added_to_inventory;
            if (returnCode == 0) {
              pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar8 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_Successfully_added_model_to_your,pSVar8,
                                   (MethodInfo *)0x0);
            }
            pUVar27 = (pMVar11->fields).OnAddWorldObjectToInventoryCallbackDev;
            if (pUVar27 != (UnityAction_1_System_String_ *)0x0) {
              (*(pUVar27->fields)._._.invoke_impl)
                        ((pUVar27->fields)._._.method_code,pSVar8,(pUVar27->fields)._._.method);
              return;
            }
          }
        }
      }
    }
    break;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar11 == (MVNetworkGame *)0x0) break;
    if ((pMVar11->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar11 == (MVNetworkGame *)0x0) break;
    pAVar7 = (pMVar11->fields).OnActiveAvatarSet;
code_?:
    if (pAVar7 != (Action *)0x0) {
      (*(pAVar7->fields)._._.invoke_impl)
                ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    if (returnCode == 0) {
      if ((returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
         (plVar3 = (longlong *)FUN_?(returnValues,CONCAT71(uVar2,0x28)),
         plVar3 == (longlong *)0x0)) break;
      if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar3,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar6 = plVar3[2];
      plVar3 = (longlong *)
                FUN_?(returnValues,CONCAT71((int7)((ulonglong)*plVar3 >> 8),0x87));
      if (plVar3 == (longlong *)0x0) break;
      if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar3,lRam_?);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar31 = plVar3[2];
      lVar36 = FUN_?();
      if ((lVar36 == 0) ||
         (this_03 = (PlayerShopInventoryRepository *)FUN_?(),
         this_03 == (PlayerShopInventoryRepository *)0x0)) break;
      UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
      PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                (this_03,(int32_t)lVar6,(int32_t)lVar31,(MethodInfo *)0x0);
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
    }
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pMVar28 = (pMVar11->fields).OnMarketPlaceActionComplete;
      if (pMVar28 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
        return;
      }
code_?:
      bVar35 = returnCode == 0;
code_?:
      (*(((Action_1_Boolean___Fields *)&pMVar28->fields)->_)._.invoke_impl)
                ((((Action_1_Boolean___Fields *)&pMVar28->fields)->_)._.method_code,bVar35,
                 (((Action_1_Boolean___Fields *)&pMVar28->fields)->_)._.method);
      return;
    }
    break;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar11 = (this->fields).networkGame;
    if (pMVar11 != (MVNetworkGame *)0x0) {
      pAVar37 = (pMVar11->fields).OnSetAvatarAccessoryResponse;
      if (pAVar37 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar37->fields)._._.invoke_impl)
                  ((pAVar37->fields)._._.method_code,CONCAT71(uVar2,returnCode == 0),
                   (pAVar37->fields)._._.method);
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
    pMVar11 = (this->fields).networkGame;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (pMVar23 = (pMVar11->fields)._PlayerController_k__BackingField,
       pMVar23 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                (pMVar23,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar11 = (this->fields).networkGame;
    if ((pMVar11 != (MVNetworkGame *)0x0) &&
       (pMVar23 = (pMVar11->fields)._PlayerController_k__BackingField,
       pMVar23 != (MVLocalObjectController *)0x0)) {
      MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                (pMVar23,returnCode == 0,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    if (bVar1 == 0x36) goto code_?;
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
    EStack_38.klass = (Enum__Class *)TypeInfo__MV__Common__MVOperationCodes;
    EStack_38.monitor = (MonitorData *)0xffffffffffffffff;
    bStack_39 = bVar1;
    pSVar8 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_38,(MethodInfo *)0x0);
    pSVar8 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Unhandled_operation_code_,pSVar8,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar8,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
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

