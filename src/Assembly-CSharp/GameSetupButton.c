
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_OnDestroy
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameSetupButton__OnProgressionUpdate__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GameSetupButton__OnProgressionUpdate__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void OnProgressionUpdate() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_OnProgressionUpdate
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                    ((MethodInfo *)0x0);
  if ((bVar1 != 0) && ((this->fields).isTiersActivated == 0)) {
    this_00 = (this->fields).OnActivatedToolTip;
    if (this_00 == (GamePassesTextBubble *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GamePassesTextBubble::GamePassesTextBubble_Activate
              (this_00,StringLiteral_Game_Tiers_Activated,(MethodInfo *)0x0);
  }
  (this->fields).isTiersActivated = bVar1;
  return;
}


/* Void ShowGameSetupMenu() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_ShowGameSetupMenu
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameSetupMenu_MethodInfo__UnityEngine__Object__Instantiate<GameSetupMenu>_GameSetupMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupButton____c__DisplayClass3_0___ShowGameSetupMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupButton____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupButton____c__DisplayClass3_0);
  original = (this->fields).gameSetupMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GameSetupMenu_MethodInfo__UnityEngine__Object__Instantiate<GameSetupMenu>_GameSetupMenu_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupButton____c__DisplayClass3_0___ShowGameSetupMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameSetupButton::GameSetupButton_Start
               (GameSetupButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameSetupButton__OnProgressionUpdate__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GameSetupButton__OnProgressionUpdate__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  bVar8 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                    ((MethodInfo *)0x0);
  (this->fields).isTiersActivated = bVar8;
  return;
}

