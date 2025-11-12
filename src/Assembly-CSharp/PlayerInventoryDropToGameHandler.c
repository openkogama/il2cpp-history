
/* Void OnDrop(PointerEventData) */

void Assembly-CSharp.dll::PlayerInventoryDropToGameHandler::PlayerInventoryDropToGameHandler_OnDrop
               (PlayerInventoryDropToGameHandler *this,PointerEventData *eventData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((eventData == (PointerEventData *)0x0) ||
       (pEVar1 = (eventData->fields)._.m_EventSystem, pEVar1 == (EventSystem *)0x0)) ||
      (pGVar2 = (pEVar1->fields).m_CurrentSelected, pGVar2 == (GameObject *)0x0)) ||
     (this_01 = (PlayerInventoryPreviewItem *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar2,
                           PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                          ), this_01 == (PlayerInventoryPreviewItem *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
       (IEditModeUI *)0x0) && (lVar6 = FUN_?(), lVar6 != 0)) {
    if (_UNK_? <= fVar5 - *(float *)(lVar6 + 0x30)) {
      if ((this_01->fields).requiresUnlocking == 0) {
        pIVar7 = (this_01->fields).item;
        if (pIVar7 != (InventoryItem *)0x0) {
          if ((pIVar7->fields).hasData != 0) {
            PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_AddItemToWorldFromInventory
                      (this_01,(MethodInfo *)0x0);
            return;
          }
          this_00 = (this_01->fields).loadingWheel;
          if ((this_00 != (Image *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,1,(MethodInfo *)0x0);
            this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            this_03 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<ReceivedItemFromQueryEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)this_01,
                       MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemLoaded_System__Object__ReceivedItemFromQueryEventArgs_
                       ,(MethodInfo *)0x0);
            if (this_02 != (MVNetworkGame *)0x0) {
              MVNetworkGame::MVNetworkGame_add_ReceivedItemFromQuery
                        (this_02,(EventHandler_1_ReceivedItemFromQueryEventArgs_ *)this_03,
                         (MethodInfo *)0x0);
              lVar6 = FUN_?();
              if ((lVar6 != 0) && (lVar6 = FUN_?(), lVar6 != 0)) {
                *(float *)(lVar6 + 0x30) = fVar5;
                lVar6 = FUN_?();
                if ((lVar6 != 0) && (lVar6 = FUN_?(), lVar6 != 0)) {
                  pDVar8 = *(Delegate **)(lVar6 + 0x20);
                  this_04 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  uVar4 = 0;
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (this_04,(Object *)this_01,
                             MethodInfo__PlayerInventoryPreviewItem__OnInventoryItemFailedToLoad__,
                             (MethodInfo *)0x0);
                  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar8,(Delegate *)this_04,(MethodInfo *)0x0);
                  if (pDVar8 == (Delegate *)0x0) {
                    *(undefined8 *)(lVar6 + 0x20) = 0;
                  }
                  else {
                    pDVar9 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar9 = pDVar8;
                    }
                    if (pDVar9 == (Delegate *)0x0) {
                      FUN_?(pDVar8,TypeInfo__System__Action);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    *(Delegate **)(lVar6 + 0x20) = pDVar9;
                    pDVar9 = (Delegate *)0x0;
                    if ((Action__Class *)pDVar8->klass == TypeInfo__System__Action) {
                      pDVar9 = pDVar8;
                    }
                    if (pDVar9 == (Delegate *)0x0) {
                      FUN_?();
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  func_?();
                  pMVar10 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  pIVar7 = (this_01->fields).item;
                  if ((pIVar7 != (InventoryItem *)0x0) &&
                     (iVar11 = (pIVar7->fields).itemID,
                     pMVar10 != (MVNetworkGame_OperationRequests *)0x0)) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&
                                    TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                   );
                      LOCK();
                      UNLOCK();
                      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_05 = (Dictionary_2_System_Byte_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                           );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object___ctor
                              (this_05,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    aiStackX_18[0] = iVar11;
                    value = (Object *)FUN_?(uRam_?,aiStackX_18);
                    if (this_05 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                      method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                  ->klass->rgctx_data[0x22].method;
                      uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0x28);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_05,0x28,value,
                                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2)
                                 ,method_00);
                      pPVar13 = (pMVar10->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar13 != (PhotonPeer *)0x0) {
                        (*(pPVar13->klass->vtable).SendOperation.methodPtr)
                                  (pPVar13,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x7a),this_05,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar13->klass->vtable).SendOperation.method);
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
      PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_ShowPurchasePopUp
                (this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

