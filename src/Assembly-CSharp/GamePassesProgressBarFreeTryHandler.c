
/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnEnable
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).buttonAdImages;
  uVar2 = 0;
  if (pLVar1 != (List_1_UnityEngine_UI_Image_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).buttonAdImages;
      if (pLVar1 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar5 = (pLVar1->fields)._items;
      if (pIVar5 == (Image__Array *)0x0) break;
      if ((uint)pIVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      obj = *(Object **)((longlong)pIVar5->vector + lVar3 + -0x20);
      pTVar6 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if ((pTVar6 == (TogglePreviewState *)0x0) || (obj == (Object *)0x0)) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar7 = obj[1].klass;
      if (pOVar7 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pOVar7);
      pLVar1 = (this->fields).buttonAdImages;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnFreeTryTier(Int32) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnFreeTryTier
               (GamePassesProgressBarFreeTryHandler *this,int32_t tierToTry,MethodInfo *method)

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
                  GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass7_0___OnFreeTryTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass7_0);
  (this->fields).tierToTry = (uint8_t)tierToTry;
  original = (this->fields).gamePassesShopPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass7_0___OnFreeTryTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      bVar7 = (this->fields).tierToTry;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Game_Tier_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar2 = cRam_? == '\0';
      pIVar8 = (pOVar1->_0).byval_arg.data.array;
      *(undefined1 *)((longlong)&(pOVar1->vtable).Equals.method + 3) = 1;
      if (bVar2) {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_9[0]._pointer._value = (void *)0x0;
      aRStack_9[0]._length = 0;
      aRStack_9[0]._12_4_ = 0;
      pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                         ((uint)bVar7,aRStack_9,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Game_Tier_,pSVar10,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppArrayType *)0x0) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (**(code **)&pIVar8->etype[0x5e].attrs)(pIVar8,pSVar10,pIVar8->etype[0x5f].data.dummy);
      (pOVar1->_1).naturalAligment = bVar7;
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnPlayerPlanetDataUpdated
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___OnPlayerPlanetDataUpdated_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    }
    this_00 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__12_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
      }
      object = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__GamePassesProgressBarFreeTryHandler____c___OnPlayerPlanetDataUpdated_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__12_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)
                       &TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__12_0
                      >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar6 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->fields).tierToTry <= (pPVar6->fields).previewGamePassTier) {
    pAVar8 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    GamePassesProgressBarFreeTryHandler_ShowTierUnlock(this,0,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_PreviewTier
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___PreviewTier_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___PreviewTier_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
      }
      pEVar3 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__11_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
        }
        pGVar4 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,(Object *)pGVar4,
                   MethodInfo__GamePassesProgressBarFreeTryHandler____c___PreviewTier_b__11_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__11_1 = pEVar3;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                          &TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->
                           __9__11_1 >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                (this_01,(MethodInfo *)0x0);
      pAVar10 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,
                 MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar10 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar10,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pAVar10 == (Action *)0x0) {
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      }
      else {
        pAVar11 = (Action *)0x0;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAVar11 = pAVar10;
        }
        if (pAVar11 == (Action *)0x0) {
          FUN_?(pAVar10,TypeInfo__System__Action);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar11;
        pAVar11 = (Action *)0x0;
        if (pAVar10->klass == TypeInfo__System__Action) {
          pAVar11 = pAVar10;
        }
        if (pAVar11 == (Action *)0x0) {
          FUN_?(pAVar10,TypeInfo__System__Action);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)
                        &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >>
                       0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      pGVar13 = (this->fields).tierProgressBar;
      if (pGVar13 != (GameTierProgressBar *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar14 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar14 != (PlayerPlanetData *)0x0) {
          pLVar15 = (pGVar13->fields).tierProgressDataList;
          bVar16 = (pPVar14->fields).gamePassTier;
          if (pLVar15 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar15->fields)._size <= (uint)bVar16) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pGVar17 = (pLVar15->fields)._items;
            if (pGVar17 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar17->max_length <= (uint)bVar16) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              this_00 = pGVar17->vector[bVar16].freeTryTextBubble;
              if ((this_00 != (GamePassesTextBubble *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,0,(MethodInfo *)0x0);
                pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c ==
                    0) {
                  FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
                }
                pEVar3 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->
                          __9__11_0;
                if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
                  if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c
                      == 0) {
                    FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
                  }
                  pGVar4 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
                  pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                             (Object *)pGVar4,
                             MethodInfo__GamePassesProgressBarFreeTryHandler____c___PreviewTier_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__11_0 =
                       pEVar3;
                  if (iRam_? != 0) {
                    uVar5 = (uint)((ulonglong)
                                    &TypeInfo__GamePassesProgressBarFreeTryHandler____c->
                                     static_fields->__9__11_0 >> 0xc);
                    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                      LOCK();
                      bVar9 = uVar7 == *puVar8;
                      if (bVar9) {
                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar9);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar2,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                          );
                (this->fields).isWaitingForFreeTryTier = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_RewardedAdCallback
               (GamePassesProgressBarFreeTryHandler *this,RewardedAdResult__Enum result,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___RewardedAdCallback_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___RewardedAdCallback_b__10_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
code_?:
    GamePassesProgressBarFreeTryHandler_PreviewTier(this,(MethodInfo *)0x0);
    return;
  }
  if ((result == RewardedAdResult__Enum_ErrorClient) ||
     (result == RewardedAdResult__Enum_ErrorInternal)) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    }
    this_01 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_1;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    }
    pGVar2 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesProgressBarFreeTryHandler____c___RewardedAdCallback_b__10_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_1 = this_01;
    ppEVar3 = &TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_1;
  }
  else {
    if (result == RewardedAdResult__Enum_ErrorTimeout) {
      return;
    }
    if (result == RewardedAdResult__Enum_RewardUnlocked) goto code_?;
    if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    }
    this_01 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_0;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
    }
    pGVar2 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesProgressBarFreeTryHandler____c___RewardedAdCallback_b__10_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_0 = this_01;
    ppEVar3 = &TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__10_0;
  }
  func_?(ppEVar3);
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar4 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar6 = (longlong)(pLVar5->fields)._size;
    uVar7 = 0;
    if (0 < lVar6) {
      lVar8 = 0;
      lVar9 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar5->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar11 = (pLVar5->fields)._items;
        if (pTVar11 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar11->max_length <= uVar7) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar4->field7_0x38).rgctx_data[1].method);
        if (bVar12 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar8 < lVar6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_ShowAd
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c___ShowAd_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
      }
      this_01 = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__9_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesProgressBarFreeTryHandler____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c);
        }
        object = TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__GamePassesProgressBarFreeTryHandler____c___ShowAd_b__9_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->__9__9_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)
                          &TypeInfo__GamePassesProgressBarFreeTryHandler____c->static_fields->
                           __9__9_0 >> 0xc);
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__GamePassesProgressBarFreeTryHandler__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        GamePassesProgressBarFreeTryHandler_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowTierUnlock(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_ShowTierUnlock
               (GamePassesProgressBarFreeTryHandler *this,bool wasPurchased,bool wasTempUnlocked,
               MethodInfo *method)

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
                  TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass8_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass8_0);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesProgressBarFreeTryHandler____c__DisplayClass8_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)object[1].klass,(uint)(this->fields).tierToTry,
                 wasPurchased,wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

