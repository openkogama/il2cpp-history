
/* Void GameOnReceivedItemFromQuery(Object, ReceivedItemFromQueryEventArgs) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GameOnReceivedItemFromQuery
               (ResetAvatarHandler *this,Object *sender,
               ReceivedItemFromQueryEventArgs *receivedItemFromQueryEventArgs,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_03,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_02 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_02,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,(MethodInfo *)0x0);
    if (receivedItemFromQueryEventArgs != (ReceivedItemFromQueryEventArgs *)0x0) {
      koGaMaData = (receivedItemFromQueryEventArgs->fields).KoGaMaData;
      this_04 = (KoGaMaPackageClient *)func_?();
      KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,koGaMaData,0,(MethodInfo *)0x0);
      if (this_04 != (KoGaMaPackageClient *)0x0) {
        KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this_04->fields).worldObjects;
        if (this_00 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          pPVar1 = (PrefabPool *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (this_00,(this_04->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          pRVar2 = (this->fields).toImage;
          func_?();
          if (pRVar2 != (RawImage *)0x0) {
            (*(code *)(pRVar2->klass->vtable).set_color.method)(pRVar2);
            pRVar2 = (this->fields).fromImage;
            func_?(&stack0xffffffac);
            if (pRVar2 != (RawImage *)0x0) {
              (*(code *)(pRVar2->klass->vtable).set_color.method)(pRVar2);
              pAVar3 = (this->fields).previewer;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              pAVar3 = (AvatarPreviewer *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                 ((XpBoostParticlePreviewer *)pAVar3,
                                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                 );
              iVar4 = (this->fields).previewDimensions;
              (this->fields).toPreviewer = pAVar3;
              if (pPVar1 != (PrefabPool *)0x0) {
                pOVar5 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
                                   (pPVar1,(MethodInfo *)0x0);
                pTVar6 = (this->fields).avatarResetToTransform;
                func_?();
                pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                   ((DayNightCycle *)pPVar1,(MethodInfo *)0x0);
                if (pAVar3 != (AvatarPreviewer *)0x0) {
                  AvatarPreviewer::AvatarPreviewer_Initialize
                            (pAVar3,iVar4,iVar4,CameraClearFlags__Enum_Color,
                             (LayerFlags__Enum)pOVar5,(Vector3)ZEXT812(0),pTVar6,(Vector3)ZEXT812(0)
                             ,StringLiteral_Avatar_reset_to,(MVWorldObjectClient *)pPVar1,
                             (GameObject *)pCVar7,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
                  pAVar8 = (AddDotsToTruncatedText_Start_c_Iterator0 *)(this->fields).toPreviewer;
                  if (pAVar8 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
                    pGVar9 = (GameObject *)
                             AddDotsToTruncatedText+<Start>c__Iterator0::
                             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                       (pAVar8,(MethodInfo *)0x0);
                    if (pGVar9 != (GameObject *)0x0) {
                      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                               GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                      if (pTVar6 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_3
                                  (pTVar6,0.0,180.0,0.0,(MethodInfo *)0x0);
                        this_01 = (this->fields).avatarBody;
                        if (this_01 != (MVBody *)0x0) {
                          pCVar7 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                             ((DayNightCycle *)this_01,(MethodInfo *)0x0);
                          gameObject = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                       Object_1_Instantiate_251
                                                 ((XpBoostParticlePreviewer *)pCVar7,
                                                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                 );
                          iVar4 = LayerUtil::LayerUtil_GetLayerNumber
                                             (LayerFlags__Enum_Hidden,(MethodInfo *)0x0);
                          LayerUtil::LayerUtil_SetLayerRecursively_4
                                    ((GameObject *)gameObject,iVar4,(MethodInfo *)0x0);
                          pAVar3 = (AvatarPreviewer *)
                                   UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_Instantiate_251
                                             ((XpBoostParticlePreviewer *)(this->fields).previewer,
                                              AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                                             );
                          iVar4 = (this->fields).previewDimensions;
                          pPVar1 = (PrefabPool *)(this->fields).avatarBody;
                          (this->fields).fromPreviewer = pAVar3;
                          if (pPVar1 != (PrefabPool *)0x0) {
                            pOVar5 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
                                               (pPVar1,(MethodInfo *)0x0);
                            func_?();
                            pTVar6 = (this->fields).avatarResetToTransform;
                            func_?();
                            if (pAVar3 != (AvatarPreviewer *)0x0) {
                              AvatarPreviewer::AvatarPreviewer_Initialize
                                        (pAVar3,iVar4,iVar4,CameraClearFlags__Enum_Color,
                                         (LayerFlags__Enum)pOVar5,(Vector3)ZEXT812(0),pTVar6,
                                         (Vector3)ZEXT812(0),StringLiteral_Avatar_reset_to,
                                         (MVWorldObjectClient *)(this->fields).avatarBody,
                                         (GameObject *)gameObject,(Vector3)ZEXT812(0),
                                         (MethodInfo *)0x0);
                              pAVar8 = (AddDotsToTruncatedText_Start_c_Iterator0 *)
                                       (this->fields).fromPreviewer;
                              if (pAVar8 != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
                                pGVar9 = (GameObject *)
                                         AddDotsToTruncatedText+<Start>c__Iterator0::
                                         AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                                                   (pAVar8,(MethodInfo *)0x0);
                                if (pGVar9 != (GameObject *)0x0) {
                                  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                                  if (pTVar6 != (Transform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_Rotate_3(pTVar6,0.0,180.0,0.0,(MethodInfo *)0x0);
                                    pAVar3 = (this->fields).fromPreviewer;
                                    pRVar2 = (this->fields).fromImage;
                                    if (pAVar3 != (AvatarPreviewer *)0x0) {
                                      pTVar10 = (Texture *)
                                                System.Core.dll::System::Linq::
                                                Enumerable+<CreateSelectIterator>c__Iterator10`2[System
                                                ::Collections::Generic::KeyValuePair`2[System::
                                                Object,System::Object],System::Object]::
                                                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                          ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pAVar3,(MethodInfo *)0x0);
                                      if (pRVar2 != (RawImage *)0x0) {
                                        UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                        RawImage_set_texture(pRVar2,pTVar10,(MethodInfo *)0x0);
                                        pAVar3 = (this->fields).toPreviewer;
                                        pRVar2 = (this->fields).toImage;
                                        if (pAVar3 != (AvatarPreviewer *)0x0) {
                                          pTVar10 = (Texture *)
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateSelectIterator>c__Iterator10`2[System
                                                  ::Collections::Generic::KeyValuePair`2[System::
                                                  Object,System::Object],System::Object]::
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                            ((
                                                  Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                                  *)pAVar3,(MethodInfo *)0x0);
                                          if (pRVar2 != (RawImage *)0x0) {
                                            UnityEngine.UI.dll::UnityEngine::UI::RawImage::
                                            RawImage_set_texture(pRVar2,pTVar10,(MethodInfo *)0x0);
                                            (this->fields).imagesReady = 1;
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
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void GetResetAvatarData(Int32) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_GetResetAvatarData
               (ResetAvatarHandler *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_02,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_01 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
              (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0);
    this_03 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (MVJetPack *)0x0) {
      pMVar1 = MVJetPack::MVJetPack_get_Shield(this_03,(MethodInfo *)0x0);
      if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        value = (Object *)func_?();
        if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__Add
                    (this_00,0x16,value,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                    );
          piVar2 = *(int **)(in_stack_3 + 0x10);
          if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
               0x2000000) != 0) &&
             ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
          if (piVar2 != (int *)0x0) {
            puStack5._0_1_ = (pSVar4->SendReliable).Encrypt;
            puStack5._1_1_ = (pSVar4->SendReliable).Channel;
            puStack5._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
            iStack6 = (pSVar4->SendReliable).DeliveryMode;
            pDStack7 = this_00;
            (**(code **)(*piVar2 + 0x110))();
            return;
          }
        }
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  pDStack7 = (Dictionary_2_System_Byte_System_Object_ *)0x0;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnAcceptReset() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnAcceptReset
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__ResetAvatarHandler___OnAcceptReset_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
  original = (this->fields).pleaseWaitPopupPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      ((XpBoostParticlePreviewer *)original,
                       PleaseWaitPopup_MethodInfo__UnityEngine__Object__Instantiate<PleaseWaitPopup>_PleaseWaitPopup_
                      );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar1;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pEVar2 = 
    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
    ;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this_01,
               MethodInfo__ResetAvatarHandler___OnAcceptReset_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((this->fields).OnReset != (Action *)0x0) {
      if (pJRam0000002c != (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                  (pJRam0000002c,in_stack_3);
      }
      this_00 = pMRam00000014;
      piVar4 = piRam_?;
      pcVar5 = pcRam_?;
      piVar6 = piRam_?;
      method_00 = pMRam00000014;
      if (pMRam00000014->flags == 0xffff) {
        func_?(pMRam00000014,pEVar2);
      }
      cVar7 = func_?(this_00);
      if (cVar7 == '\0') {
        if ((char)this_00->iflags == '\0') {
          (*pcVar5)();
          return;
        }
      }
      else if ((this_00->flags != 0xffff) &&
              (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
               (iRam_? != 0)))) {
        cVar7 = func_?(piVar4);
        if (cVar7 != '\0') {
          return;
        }
        pMVar8 = this_00;
        cVar7 = func_?();
        pOVar9 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,pMVar8);
        cVar10 = func_?(pOVar9);
        if (cVar7 == '\0') {
          if (cVar10 != '\0') {
            pOVar9 = mscorlib.dll::System::Collections::Generic::
                     KeyValuePair`2[WinningConditionType,System::Object]::
                     KeyValuePair_2_WinningConditionType_System_Object__get_Value
                               ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,
                                method_00);
            func_?(this_00->flags,pOVar9,piVar4);
            return;
          }
          (**(code **)(*piVar4 + 0xc0 + (uint)this_00->flags * 8))
                    (piVar4,*(undefined4 *)(*piVar4 + 0xc4 + (uint)this_00->flags * 8));
          return;
        }
        uVar11 = (uint)this_00->flags;
        if (cVar10 == '\0') {
          puVar12 = (undefined4 *)
                   func_?(*(undefined4 *)(*piVar4 + 0xc4 + uVar11 * 8),this_00);
          (*(code *)*puVar12)(piVar4,puVar12);
          return;
        }
        uVar13 = 0;
        uVar14 = *(ushort *)(*piVar4 + 0xb6);
        pMVar8 = this_00;
        if (uVar14 != 0) {
          do {
            if (*(char **)(*(int *)(*piVar4 + 0x58) + (uint)uVar13 * 8) == this_00->name) {
              iVar15 = *piVar6 +
                      (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar13 * 8) +
                      method_00->flags + 0x18) * 8;
              goto code_?;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
          uVar11 = (uint)method_00->flags;
          pMVar8 = method_00;
          piVar4 = piVar6;
        }
        piVar6 = piVar4;
        method_00 = pMVar8;
        iVar15 = func_?(piVar6,this_00->name,uVar11);
code_?:
        puVar12 = (undefined4 *)func_?(*(undefined4 *)(iVar15 + 4),method_00);
        (*(code *)*puVar12)(piVar6,puVar12);
        return;
      }
      (*pcVar5)(piVar4,this_00);
      return;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDestroy
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
             ,
             MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
            );
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_remove_ReceivedItemFromQuery
              (this_00,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_01,(MethodInfo *)0x0);
    pTVar1 = (this->fields).avatarResetToTransform;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).avatarResetToTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      (this->fields).avatarResetToTransform = (Transform *)0x0;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnDrag
               (ResetAvatarHandler *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetAxis
                    (StringLiteral_Mouse_X,(MethodInfo *)0x0);
  fVar1 = (float)((uint)fVar1 ^ _UNK_?);
  (this->fields).isDown = 1;
  (this->fields).currentRotationSpeed = fVar1 * (this->fields).rotationSensitivity;
  return;
}


/* Void OnPointerDown(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnPointerDown
               (ResetAvatarHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).currentRotationSpeed = 0.0;
  (this->fields).isDown = 1;
  return;
}


/* Void OnPointerUp(PointerEventData) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_OnPointerUp
               (ResetAvatarHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  (this->fields).isDown = 0;
  return;
}


/* Void ResetAvatar(MVBody, Action) */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_ResetAvatar
               (ResetAvatarHandler *this,MVBody *currentBody,Action *onReset,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).avatarResetToTransform;
  (this->fields).OnReset = onReset;
  (this->fields).avatarBody = currentBody;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor_1
              (this_00,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) goto code_?;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).avatarResetToTransform = pTVar1;
  }
  if (currentBody != (MVBody *)0x0) {
    avatarWoID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)currentBody,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,
               MethodInfo__ResetAvatarHandler__GameOnReceivedItemFromQuery_System__Object__ReceivedItemFromQueryEventArgs_
               ,
               MethodInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>__EventHandler_System__Object__void__
              );
    if (this_01 != (MVNetworkGame *)0x0) {
      MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                (this_01,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_02,(MethodInfo *)0x0
                );
      this_03 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_03 != (MVJetPack *)0x0) {
        this_04 = MVJetPack::MVJetPack_get_Shield(this_03,(MethodInfo *)0x0);
        if (this_04 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetResetAvatar
                    ((MVNetworkGame_OperationRequests *)this_04,(int32_t)avatarWoID,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler_Update
               (ResetAvatarHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).imagesReady == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressInGameInput((MethodInfo *)0x0);
  MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
  pAVar1 = (this->fields).fromPreviewer;
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    AvatarPreviewer::AvatarPreviewer_UpdateRotation
              (pAVar1,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
    pAVar1 = (this->fields).toPreviewer;
    if (pAVar1 != (AvatarPreviewer *)0x0) {
      AvatarPreviewer::AvatarPreviewer_UpdateRotation
                (pAVar1,(this->fields).currentRotationSpeed,(MethodInfo *)0x0);
      if ((this->fields).isDown != 0) {
        (this->fields).currentRotationSpeed = 0.0;
        return;
      }
      (this->fields).currentRotationSpeed = (this->fields).defaultRotationSpeed;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* ResetAvatarHandler() */

void Assembly-CSharp.dll::ResetAvatarHandler::ResetAvatarHandler__ctor
               (ResetAvatarHandler *this,MethodInfo *method)

{
  (this->fields).defaultRotationSpeed = 15.0;
  (this->fields).rotationSensitivity = 15.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

