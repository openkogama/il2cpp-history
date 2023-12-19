
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
          cVar3 = '\0';
          cVar4 = (int)pMVar1 < 0;
          uVar5 = pMVar1 == (MVLocalPlayer *)0x0;
          if (!(bool)uVar5) {
            MVLocalPlayer::MVLocalPlayer_UnSuspendCurrentSpawnRole(pMVar1,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)returnValues < 0;
        uVar5 = 1;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__ContainsKey
                           (returnValues,0x82,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                           );
        if (bVar6 == 0) {
          return;
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = 1;
        if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
        in_stack_8 = (Enum__Class *)0x0;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        pUVar9 = (pMVar1->fields)._._UserProfileData_k__BackingField;
        pMVar10 = (MVNetworkGame_OperationResponseHandling *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0x82,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pUVar9 < 0;
        uVar5 = 1;
        in_stack_8 = (Enum__Class *)returnValues;
        if (pUVar9 == (UserProfileData *)0x0) goto code_?;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar10 < 0;
        uVar5 = 1;
        if (pMVar10 == (MVNetworkGame_OperationResponseHandling *)0x0) goto code_?;
        pIVar11 = (((Object__Class *)pMVar10->klass)->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar13 = pIVar11 < pIVar12;
        if (pIVar11 != pIVar12) goto code_?;
        piVar14 = (int32_t *)func_?();
        (pUVar9->fields).Gold = *piVar14;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = 1;
        this = pMVar10;
        in_stack_8 = (Enum__Class *)returnValues;
        if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        in_stack_8 = (Enum__Class *)returnValues;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        if ((pMVar1->fields)._.OnGoldAmountChange == (Action *)0x0) {
          return;
        }
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = 1;
        in_stack_8 = (Enum__Class *)returnValues;
        if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
        pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar1 < 0;
        uVar5 = 1;
        in_stack_8 = (Enum__Class *)returnValues;
        if (pMVar1 == (MVLocalPlayer *)0x0) goto code_?;
        pAVar15 = (pMVar1->fields)._.OnGoldAmountChange;
      }
      else {
        if ((undefined1)opCode == MVOperationCodes__Enum_VehicleEnergyUse) {
          pMVar7 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar7 < 0;
          uVar5 = pMVar7 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            pMVar16 = (pMVar7->fields)._PlayerController_k__BackingField;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar16 < 0;
            uVar5 = pMVar16 == (MVLocalObjectController *)0x0;
            if (!(bool)uVar5) {
              MVLocalObjectController::MVLocalObjectController_VehicleEnergyUseResponse
                        (pMVar16,returnCode == 0,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if ((undefined1)opCode != MVOperationCodes__Enum_GetInventoryItemData) {
          if ((undefined1)opCode != MVOperationCodes__Enum_Join) goto code_?;
          pMVar7 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar7 < 0;
          uVar5 = pMVar7 == (MVNetworkGame *)0x0;
          if (!(bool)uVar5) {
            (pMVar7->fields).connState = 4;
            if (returnCode != 0) {
              if ((returnCode == -0xc) &&
                 (bVar6 = MVGameControllerBase::MVGameControllerBase_TryReauth((MethodInfo *)0x0),
                 bVar6 != 0)) {
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
            pMVar7 = (this->fields).networkGame;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar7 < 0;
            uVar5 = pMVar7 == (MVNetworkGame *)0x0;
            if (!(bool)uVar5) {
              MVNetworkGame::MVNetworkGame_OnJoinResponse(pMVar7,returnValues,(MethodInfo *)0x0);
              return;
            }
          }
          goto code_?;
        }
        if (returnCode != -1) {
          return;
        }
        iVar17 = func_?(0);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar17 < 0;
        uVar5 = 1;
        if (iVar17 == 0) goto code_?;
        iVar17 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar17 < 0;
        uVar5 = 1;
        if (iVar17 == 0) goto code_?;
        if (*(int *)(iVar17 + 0x10) == 0) {
          return;
        }
        iVar17 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar17 < 0;
        uVar5 = 1;
        if (iVar17 == 0) goto code_?;
        iVar17 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar17 < 0;
        uVar5 = 1;
        if (iVar17 == 0) goto code_?;
        pAVar15 = *(Action **)(iVar17 + 0x10);
      }
code_?:
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pAVar15 < 0;
      uVar5 = pAVar15 == (Action *)0x0;
      if (!(bool)uVar5) {
code_?:
        (*(pAVar15->fields)._._.invoke_impl)();
        return;
      }
      goto code_?;
    }
    if (MVOperationCodes__Enum_SetFirstTimeEvent < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_ClaimPlayingNewGameRewardedGold) {
        if (returnCode == -1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Failed_to_claim_gold,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Gold_claimed__Marcus__Handle_thi,(MethodInfo *)0x0);
        return;
      }
      if ((undefined1)opCode != MVOperationCodes__Enum_UnEquipAccessory) {
        if ((undefined1)opCode != MVOperationCodes__Enum_GetThemesData) goto code_?;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)returnValues < 0;
        uVar5 = 1;
        if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
        pSVar18 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object__get_Item
                            (returnValues,0xcf,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                            );
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        value = (String *)0x0;
        if (pSVar18 != (String *)0x0) {
          if (pSVar18->klass == TypeInfo__System__String) {
            value = pSVar18;
          }
          bVar13 = 0;
          pIVar11 = (Il2CppClass *)0x0;
          pSVar19 = TypeInfo__System__String;
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
        pAVar20 = TypeInfo__ThemeSelection__CallbackHandler->static_fields->OnThemeDataReceived;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)this_01 < 0;
        uVar5 = this_01 ==
                 (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                  *)0x0;
        if (!(bool)uVar5) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
          MultiColumnCollectionHeader+ViewState+ColumnState]::
          List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::ThemesData::ThemeData>__ToArray__
                    );
          (*(pAVar20->fields)._._.invoke_impl)();
          return;
        }
        goto code_?;
      }
      pMVar7 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar7 < 0;
      uVar5 = 1;
      if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
      if ((pMVar7->fields).OnAccessoryUnequipped == (Action *)0x0) {
        return;
      }
      pAVar15 = (pMVar7->fields).OnAccessoryUnequipped;
      goto code_?;
    }
    if ((undefined1)opCode == MVOperationCodes__Enum_CloneWorldObjectTreeWithPosition) {
code_?:
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x16,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar21 < 0;
      uVar5 = 1;
      if (pOVar21 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar21->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        piVar22 = (int *)func_?();
        pMVar7 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = 1;
        if (pMVar7 != (MVNetworkGame *)0x0) {
          pWVar23 = (pMVar7->fields).worldNetwork;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pWVar23 < 0;
          uVar5 = 1;
          if (pWVar23 != (WorldNetwork *)0x0) {
            pMVar24 = (pWVar23->fields)._.worldObjectClientManager;
            unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar22;
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = (int)pMVar24 < 0;
            uVar5 = 1;
            if (pMVar24 != (MVWorldObjectClientManagerNetwork *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((pMVar24->fields)._.CloneWorldObjectTreeResponse ==
                  (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
                return;
              }
              opCode = CONCAT13(returnCode == 0,(undefined3)opCode);
              pUVar25 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?();
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
              UxmlObjectListAttributeDescription`1[System::Object]::
              UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar25,(MethodInfo *)0x0);
              *(bool *)&pUVar25[1].klass = returnCode == 0;
              (pUVar25->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)unaff_EBX
              ;
              pEVar26 = (pMVar24->fields)._.CloneWorldObjectTreeResponse;
              bVar2 = 0;
              cVar3 = '\0';
              cVar4 = (int)pEVar26 < 0;
              uVar5 = pEVar26 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
              if (!(bool)uVar5) {
                (*(pEVar26->fields)._._.invoke_impl)((pEVar26->fields)._._.method_code);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    else {
      if ((undefined1)opCode != MVOperationCodes__Enum_SetFirstTimeEvent) goto code_?;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)returnValues < 0;
      uVar5 = 1;
      if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xbf,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0xdb,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar27 < 0;
      uVar5 = 1;
      if (pOVar27 == (Object *)0x0) goto code_?;
      pIVar11 = (pOVar27->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Byte->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        puVar28 = (undefined1 *)func_?();
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    CONCAT31((int3)((uint)unaff_EBX >> 8),*puVar28);
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pOVar21 < 0;
        uVar5 = pOVar21 == (Object *)0x0;
        if (!(bool)uVar5) {
          pIVar11 = (pOVar21->klass->_0).element_class;
          pIVar12 = (TypeInfo__System__Int32->_0).element_class;
          bVar13 = pIVar11 < pIVar12;
          pSVar19 = (String__Class *)TypeInfo__System__Int32;
          if (pIVar11 == pIVar12) {
            pFVar29 = (FirstTimeEvent__Enum *)func_?();
            FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
                      (*pFVar29,(XPRewardType__Enum)unaff_EBX,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
        goto code_?;
      }
    }
    goto code_?;
  }
  if ((byte)(undefined1)opCode < MVOperationCodes__Enum_AddPrototypeToInventory) {
    if (MVOperationCodes__Enum_UpdateWorldObjectData < (byte)(undefined1)opCode) {
      if ((undefined1)opCode == MVOperationCodes__Enum_TransferOwnership) {
        pMVar7 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = pMVar7 == (MVNetworkGame *)0x0;
        if (!(bool)uVar5) {
          MVNetworkGame::MVNetworkGame_OnTransferOwnershipResponse
                    (pMVar7,returnValues,(int)returnCode,(MethodInfo *)0x0);
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
          pMVar7 = (this->fields).networkGame;
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = (int)pMVar7 < 0;
          uVar5 = 1;
          if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
          (pMVar7->fields).isPublished = 1;
        }
        pMVar7 = (this->fields).networkGame;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar7 < 0;
        uVar5 = pMVar7 == (MVNetworkGame *)0x0;
        if (!(bool)uVar5) {
          if ((pMVar7->fields).OnPublishedPlanet != (UnityAction_1_System_String_ *)0x0) {
            pUVar30 = (pMVar7->fields).OnPublishedPlanet;
            (*(pUVar30->fields)._._.invoke_impl)((pUVar30->fields)._._.method_code);
          }
          iVar17 = func_?();
          bVar2 = 0;
          cVar3 = '\0';
          cVar4 = iVar17 < 0;
          uVar5 = iVar17 == 0;
          if (!(bool)uVar5) {
            bVar6 = mscorlib.dll::System::String::String_IsNullOrEmpty
                               (*(String **)(iVar17 + 0x3c),(MethodInfo *)0x0);
            if (bVar6 != 0) {
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
            in_stack_8 = (Enum__Class *)0x0;
            iVar17 = func_?();
            bVar2 = 0;
            cVar3 = '\0';
            cVar4 = iVar17 < 0;
            uVar5 = iVar17 == 0;
            if (!(bool)uVar5) {
              bVar2 = 0;
              cVar3 = '\0';
              cVar4 = (int)this_04 < 0;
              uVar5 = this_04 == (WWWForm *)0x0;
              if (!(bool)uVar5) {
                UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField
                          (this_04,StringLiteral_token,*(String **)(iVar17 + 0x24),(MethodInfo *)0x0
                          );
                iVar17 = func_?();
                bVar2 = 0;
                cVar3 = '\0';
                cVar4 = iVar17 < 0;
                uVar5 = iVar17 == 0;
                if (!(bool)uVar5) {
                  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                            (this_04,StringLiteral_profile_id,*(int32_t *)(iVar17 + 0xc),
                             (MethodInfo *)0x0);
                  iVar17 = func_?();
                  bVar2 = 0;
                  cVar3 = '\0';
                  cVar4 = iVar17 < 0;
                  uVar5 = iVar17 == 0;
                  if (!(bool)uVar5) {
                    UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddField_2
                              (this_04,StringLiteral_planet_id,*(int32_t *)(iVar17 + 0x10),
                               (MethodInfo *)0x0);
                    iVar17 = func_?();
                    bVar2 = 0;
                    cVar3 = '\0';
                    cVar4 = iVar17 < 0;
                    uVar5 = iVar17 == 0;
                    if (!(bool)uVar5) {
                      pSVar18 = *(String **)(iVar17 + 0x3c);
                      this_05 = (PostRequest *)func_?();
                      PostRequest::PostRequest__ctor
                                (this_05,pSVar18,this_04,
                                 (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0,
                                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0
                                );
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
      goto code_?;
    }
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
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)returnValues < 0;
    uVar5 = 1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
    pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pOVar21 < 0;
    uVar5 = 1;
    if (pOVar21 == (Object *)0x0) goto code_?;
    pIVar11 = (pOVar21->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      MVNetworkGame::MVNetworkGame_OnUnregisterWorldObjectResponse
                (pMVar7,*piVar14,(MethodInfo *)0x0);
      return;
    }
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
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) goto code_?;
    if ((pMVar7->fields).OnMarketPlaceActionComplete ==
        (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
    pMVar31 = (pMVar7->fields).OnMarketPlaceActionComplete;
    goto code_?;
  }
  if ((undefined1)opCode == MVOperationCodes__Enum_RequestFriendshipByProfileID) {
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      MVNetworkGame::MVNetworkGame_OnRequestFriendshipResponse
                (pMVar7,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  switch(opCode & MVOperationCodes__Enum_Join) {
  case MVOperationCodes__Enum_LockHierarchy:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      MVNetworkGame::MVNetworkGame_OnLockHierarchyResponse
                (pMVar7,returnValues,(int)returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_UploadScreenshot:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)this;
    if (pMVar7 != (MVNetworkGame *)0x0) {
      pEVar32 = (pMVar7->fields).ScreenshotUploaded;
      if (pEVar32 == (EventHandler_1_ScreenshotUploadedEventArgs_ *)0x0) {
        return;
      }
      this_02 = (ScreenshotUploadedEventArgs *)
                func_?(TypeInfo__ScreenshotUploadedEventArgs);
      ScreenshotUploadedEventArgs::ScreenshotUploadedEventArgs__ctor
                (this_02,returnCode == 0,(MethodInfo *)0x0);
      (*(pEVar32->fields)._._.invoke_impl)
                ((pEVar32->fields)._._.method_code,this,this_02,(pEVar32->fields)._._.method);
      return;
    }
    break;
  case MVOperationCodes__Enum_RequestWoUniquePrototype:
    if (returnCode == 0) {
      return;
    }
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      MVNetworkGame::MVNetworkGame_OnRequestWoUniquePrototypeFailed
                (pMVar7,returnValues,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  case MVOperationCodes__Enum_TransferWorldObjectsToGroup:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      pWVar23 = (pMVar7->fields).worldNetwork;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pWVar23 < 0;
      uVar5 = pWVar23 == (WorldNetwork *)0x0;
      if (!(bool)uVar5) {
        pMVar24 = (pWVar23->fields)._.worldObjectClientManager;
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)pMVar24 < 0;
        uVar5 = pMVar24 == (MVWorldObjectClientManagerNetwork *)0x0;
        if (!(bool)uVar5) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Debug);
            func_?(&TypeInfo__OnTransferWosResponseEventArgs);
            func_?(&StringLiteral_HandleTransferWorldObjectsToGrou);
            cRam_? = '\x01';
          }
          if (returnCode != 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
          }
          if ((pMVar24->fields)._.OnTransferWosResponse ==
              (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
            return;
          }
          pEVar33 = (pMVar24->fields)._.OnTransferWosResponse;
          pUVar25 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                    func_?(TypeInfo__OnTransferWosResponseEventArgs);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__System__EventArgs);
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__EventArgs);
          }
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor(pUVar25,(MethodInfo *)0x0);
          *(bool *)&(pUVar25->fields)._._defaultValue_k__BackingField = returnCode == 0;
          (*(pEVar33->fields)._._.invoke_impl)
                    ((pEVar33->fields)._._.method_code,pMVar24,pUVar25,(pEVar33->fields)._._.method);
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
    cVar3 = '\0';
    cVar4 = (int)returnValues < 0;
    uVar5 = 1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__ContainsKey
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__ContainsKey_unsigned_char_
                       );
    if ((bVar6 != 0) &&
       (purchaseResponseData =
             (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (returnValues,0x5f,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       ), purchaseResponseData != (Dictionary_2_System_Object_System_Object_ *)0x0))
    {
      unaff_EBX = purchaseResponseData->klass;
      bVar13 = (unaff_EBX->_1).naturalAligment;
      bVar34 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
      cVar3 = SBORROW1(bVar13,bVar34);
      cVar4 = (char)(bVar13 - bVar34) < '\0';
      uVar5 = bVar13 == bVar34;
      bVar2 = 1;
      if (bVar13 < bVar34) goto code_?;
      pDVar35 = (Dictionary_2_System_Object_System_Object___Class *)
                (unaff_EBX->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment - 1];
      bVar2 = pDVar35 < 
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      cVar3 = SBORROW4((int)pDVar35,
                        (int)
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
      cVar4 = (int)pDVar35 -
               (int)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object> <
               0;
      uVar5 = pDVar35 ==
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (!(bool)uVar5) goto code_?;
    }
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnPurchaseProductResponse
              (pMVar7,(int)returnCode,purchaseResponseData,(MethodInfo *)0x0);
    if (returnCode != 0) {
      return;
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar1 < 0;
    uVar5 = 1;
    if (pMVar1 == (MVLocalPlayer *)0x0) break;
    opCode = (MVOperationCodes__Enum)
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pUVar9 = (pMVar1->fields)._._UserProfileData_k__BackingField;
    this = (MVNetworkGame_OperationResponseHandling *)0x82;
    pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x82,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pUVar9 < 0;
    uVar5 = 1;
    if (pUVar9 == (UserProfileData *)0x0) break;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pOVar21 < 0;
    uVar5 = 1;
    if (pOVar21 == (Object *)0x0) break;
    pIVar11 = (pOVar21->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      (pUVar9->fields).Gold = *piVar14;
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar7 < 0;
      uVar5 = 1;
      if (pMVar7 == (MVNetworkGame *)0x0) break;
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVLocalPlayer *)0x0) break;
      if ((pMVar1->fields)._.OnGoldAmountChange == (Action *)0x0) {
        return;
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar7 < 0;
      uVar5 = 1;
      if (pMVar7 == (MVNetworkGame *)0x0) break;
      pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar1 < 0;
      uVar5 = 1;
      if (pMVar1 == (MVLocalPlayer *)0x0) break;
      pAVar15 = (pMVar1->fields)._.OnGoldAmountChange;
      goto code_?;
    }
    goto code_?;
  case MVOperationCodes__Enum_AddItemToWorld:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 != (MVNetworkGame *)0x0) {
      if ((pMVar7->fields).OnItemAddedToWorld == (Action_1_Boolean_ *)0x0) {
        return;
      }
      pMVar31 = (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)
                (pMVar7->fields).OnItemAddedToWorld;
      goto code_?;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventory:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      MVNetworkGame::MVNetworkGame_OnAddItemToInventory
                (pMVar7,returnValues,returnCode,(MethodInfo *)0x0);
      return;
    }
    break;
  case MVOperationCodes__Enum_AddWorldObjectToInventoryDev:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    MVNetworkGame::MVNetworkGame_OnAddItemToInventory
              (pMVar7,returnValues,returnCode,(MethodInfo *)0x0);
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)returnValues < 0;
    uVar5 = 1;
    unaff_EBX = _returnCode;
    opCode = (MVOperationCodes__Enum)pMVar7;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    in_stack_8 =
         (Enum__Class *)
         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
    ;
    pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pOVar27 < 0;
    uVar5 = 1;
    if (pOVar27 == (Object *)0x0) break;
    pIVar11 = (pOVar27->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      this = (MVNetworkGame_OperationResponseHandling *)&UNK_?;
      pMVar36 = (MVOperationCodes__Enum *)func_?();
      opCode = *pMVar36;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar21 < 0;
      uVar5 = pOVar21 == (Object *)0x0;
      if (!(bool)uVar5) {
        pIVar11 = (pOVar21->klass->_0).element_class;
        pIVar12 = (TypeInfo__System__Int32->_0).element_class;
        bVar2 = pIVar11 < pIVar12;
        cVar3 = SBORROW4((int)pIVar11,(int)pIVar12);
        cVar4 = (int)pIVar11 - (int)pIVar12 < 0;
        uVar5 = pIVar11 == pIVar12;
        if (!(bool)uVar5) goto code_?;
        piVar14 = (int32_t *)func_?();
        MVNetworkGame::MVNetworkGame_OnAddWorldObjectToInventoryResponseDev
                  (pMVar7,(int)returnCode,*piVar14,opCode,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    goto code_?;
  case MVOperationCodes__Enum_SetActiveAvatar:
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    if ((pMVar7->fields).OnActiveAvatarSet == (Action *)0x0) {
      return;
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    pAVar15 = (pMVar7->fields).OnActiveAvatarSet;
    goto code_?;
  case MVOperationCodes__Enum_AddItemToMarketPlace:
    if (returnCode != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_add_item_to_shop,(MethodInfo *)0x0);
code_?:
      pMVar7 = (this->fields).networkGame;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar7 < 0;
      uVar5 = 1;
      if (pMVar7 == (MVNetworkGame *)0x0) break;
      pMVar31 = (pMVar7->fields).OnMarketPlaceActionComplete;
      goto joined_?;
    }
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)returnValues < 0;
    uVar5 = 1;
    if (returnValues == (Dictionary_2_System_Byte_System_Object_ *)0x0) break;
    pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object__get_Item
                        (returnValues,0x28,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                        );
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pOVar21 < 0;
    uVar5 = 1;
    if (pOVar21 == (Object *)0x0) break;
    pIVar11 = (pOVar21->klass->_0).element_class;
    pIVar12 = (TypeInfo__System__Int32->_0).element_class;
    bVar13 = pIVar11 < pIVar12;
    if (pIVar11 == pIVar12) {
      piVar14 = (int32_t *)func_?();
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)*piVar14;
      pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (returnValues,0x87,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pOVar21 < 0;
      uVar5 = 1;
      if (pOVar21 == (Object *)0x0) break;
      pIVar11 = (pOVar21->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar13 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        piVar14 = (int32_t *)func_?();
        shopInventoryID = *piVar14;
        iVar17 = func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = iVar17 < 0;
        uVar5 = 1;
        if (iVar17 == 0) break;
        this_03 = (PlayerShopInventoryRepository *)func_?();
        bVar2 = 0;
        cVar3 = '\0';
        cVar4 = (int)this_03 < 0;
        uVar5 = 1;
        if (this_03 == (PlayerShopInventoryRepository *)0x0) break;
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_UpdatePlayerShopInventoryID
                  (this_03,(int32_t)unaff_EBX,shopInventoryID,(MethodInfo *)0x0);
        goto code_?;
      }
    }
code_?:
    pIVar11 = (Il2CppClass *)func_?();
    pSVar19 = extraout_ECX;
code_?:
    bVar34 = (byte)pIVar11;
    goto code_?;
  case MVOperationCodes__Enum_RemoveItemFromMarketPlace:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = 1;
    if (pMVar7 == (MVNetworkGame *)0x0) break;
    pMVar31 = (pMVar7->fields).OnMarketPlaceActionComplete;
joined_?:
    if (pMVar31 == (MVNetworkGame_OnMarketPlaceActionCompleteDelegate *)0x0) {
      return;
    }
code_?:
    (*(pMVar31->fields)._._.invoke_impl)();
    return;
  case MVOperationCodes__Enum_SetAvatarAccessorySlot:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      pAVar37 = (pMVar7->fields).OnSetAvatarAccessoryResponse;
      if (pAVar37 != (Action_1_Boolean_ *)0x0) {
        (*(pAVar37->fields)._._.invoke_impl)
                  ((pAVar37->fields)._._.method_code,returnCode == 0,(pAVar37->fields)._._.method);
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
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      pMVar16 = (pMVar7->fields)._PlayerController_k__BackingField;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar16 < 0;
      uVar5 = pMVar16 == (MVLocalObjectController *)0x0;
      if (!(bool)uVar5) {
        MVLocalObjectController::MVLocalObjectController_HandleAttachWorldObjectToSeat
                  (pMVar16,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
    break;
  case MVOperationCodes__Enum_DetachWorldObjectFromVehicle:
    pMVar7 = (this->fields).networkGame;
    bVar2 = 0;
    cVar3 = '\0';
    cVar4 = (int)pMVar7 < 0;
    uVar5 = pMVar7 == (MVNetworkGame *)0x0;
    if (!(bool)uVar5) {
      pMVar16 = (pMVar7->fields)._PlayerController_k__BackingField;
      bVar2 = 0;
      cVar3 = '\0';
      cVar4 = (int)pMVar16 < 0;
      uVar5 = pMVar16 == (MVLocalObjectController *)0x0;
      if (!(bool)uVar5) {
        MVLocalObjectController::MVLocalObjectController_HandleDetachWorldObjectFromVehicle
                  (pMVar16,returnCode == 0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  while (bVar34 = func_?(), pSVar19 = extraout_ECX_00, bVar13 = bVar2,
        !(bool)uVar5 && cVar3 == cVar4) {
code_?:
    bVar38 = bVar34 + 0x3d;
    bVar2 = bVar34 < 0xc3 || bVar38 < bVar13;
    cVar3 = SBORROW1(bVar34,-0x3d) != SBORROW1(bVar38,bVar13);
    cVar4 = (char)(bVar38 - bVar13) < '\0';
    uVar5 = bVar38 == bVar13;
    (**(code **)((int)&(pSVar19->_0).implementedInterfaces + 2))();
    func_?();
code_?:
    in_stack_8 = (Enum__Class *)&UNK_?;
    func_?();
code_?:
    func_?();
  }
  while( true ) {
    iVar17 = iRam_?;
    bVar13 = (byte)extraout_EDX;
    uVar39 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX + bVar13 + bVar2);
    *(int *)(uVar39 + 0x10) = (int)ROUND(extraout_ST0);
    puVar28 = &stack0xffffffe4 + uVar39;
    pbVar40 = (byte *)((int)puVar28 * 8 + -0x218aefad);
    bVar41 = CARRY1(*pbVar40,bVar13) ||
             CARRY1(*pbVar40 + bVar13,CARRY4(uVar39,(uint)&stack0xffffffe4));
    *pbVar40 = *pbVar40 + bVar13 + CARRY4(uVar39,(uint)&stack0xffffffe4);
    pbVar40 = (byte *)(iVar17 + -0x39efac22);
    bVar13 = (byte)((uint)iVar17 >> 8);
    bVar42 = CARRY1(*pbVar40,bVar13) || CARRY1(*pbVar40 + bVar13,bVar41);
    *pbVar40 = *pbVar40 + bVar13 + bVar41;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                CONCAT22((short)((uint)puVar28 >> 0x10),CONCAT11((char)puVar28,(char)puVar28));
    bVar2 = (byte)iVar17;
    bVar41 = CARRY1(bVar13,bVar2) || CARRY1(bVar13 + bVar2,bVar42);
    cVar4 = bVar13 + bVar2 + bVar42;
    *(short *)&(unaff_EBX->_0).byval_arg.data = (short)ROUND(extraout_ST0);
    pSVar43 = (String__Class *)((int)&pSVar19[-1].vtable.Clone.method + 3);
    if (pSVar43 == (String__Class *)0x0 || cVar4 == '\0') break;
    bVar13 = *(byte *)&(unaff_EBX->_0).image;
    bVar34 = *(char *)&(unaff_EBX->_0).image + bVar2;
    *(byte *)&(unaff_EBX->_0).image = bVar34 + bVar41;
    bVar44 = (byte)((uint)puVar28 >> 0x10);
    bVar38 = (byte)((uint)extraout_EDX >> 8);
    bVar2 = CARRY1(bVar44,bVar38) ||
             CARRY1(bVar44 + bVar38,
                    0x22 < bVar2 ||
                    CARRY1(bVar2 - 0x23,CARRY1(bVar13,bVar2) || CARRY1(bVar34,bVar41)));
    pSVar19 = pSVar43;
  }
  bVar13 = *(char *)&(unaff_EBX->_0).image + bVar2;
  bVar42 = CARRY1(*(byte *)&(unaff_EBX->_0).image,bVar2) || CARRY1(bVar13,bVar41);
  *(byte *)&(unaff_EBX->_0).image = bVar13 + bVar41;
  bVar41 = *(char *)&(unaff_EBX->_0).image == '\0';
  pbVar40 = (byte *)((int)&pSVar19[-1].vtable.Clone.method + 2);
  if (pbVar40 != (byte *)0x0 && bVar41) {
    if (bVar41) {
      func_?(unaff_EBX,unaff_EBX,puVar28,puVar28);
      func_?(&stack0xffffffe4,&UNK_?);
      pcVar45 = (code *)swi(3);
      (*pcVar45)();
      return;
    }
    opCode = CONCAT31(opCode._1_3_,*(undefined1 *)((int)&(pSVar19->_0).gc_desc + 2));
    MVNetworkGame_OperationResponseHandling_ExecuteOperationResponse
              (this,opCode,
               *(Dictionary_2_System_Byte_System_Object_ **)((int)&(pSVar19->_0).namespaze + 2),
               *(int16_t *)&(pSVar19->_0).name,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = in_stack_8;
    return;
  }
  pbVar46 = (byte *)(extraout_EDX + -0x1f);
  bVar2 = *pbVar46;
  bVar34 = (byte)((uint)pbVar40 >> 8);
  bVar13 = *pbVar46 + bVar34;
  *pbVar46 = bVar13 + bVar42;
  pcVar47 = (char *)((int)&pSVar19[0xa242]._0.declaringType + 1);
  *pcVar47 = *pcVar47 + cVar4 + (CARRY1(bVar2,bVar34) || CARRY1(bVar13,bVar42));
  *pbVar40 = *pbVar40 | (byte)pbVar40;
  FastExitMediaState();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
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

