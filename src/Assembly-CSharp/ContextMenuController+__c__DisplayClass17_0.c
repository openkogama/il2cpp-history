
/* Void <ShowContextMenuLink>b__0() */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass17_0::
     ContextMenuController_c_DisplayClass17_0__ShowContextMenuLink_b__0
               (ContextMenuController_c_DisplayClass17_0 *this,MethodInfo *method)

{
  this_02 = (this->fields).__4__this;
  if (this_02 == (ContextMenuController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (this->fields).isObjectLink;
  uVar3 = 0;
  objectLinkID = (this->fields).linkID;
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
                  MethodInfo__ContextMenuController____c___DeleteLink_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
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
      FUN_?(&StringLiteral_RemoveLink__Link_not_found);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = (pMVar4->fields).networkGame;
    if (((pMVar5 == (MVNetworkGame *)0x0) ||
        (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 == (WorldNetwork *)0x0)) ||
       (this_00 = (pWVar6->fields).links, this_00 == (Links *)0x0)) goto code_?;
    bVar2 = Links::Links_Contains(this_00,objectLinkID,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = objectLinkID;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
      if (pDVar7 == (Dictionary_2_System_Byte_System_Object_ *)0x0) goto code_?;
      pMVar9 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method;
      uVar10 = CONCAT71((int7)((ulonglong)pMVar9 >> 8),0x3a);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (pDVar7,0x3a,pOVar8,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),pMVar9);
      pPVar11 = (pMVar4->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar11 == (PhotonPeer *)0x0) goto code_?;
      (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),10),pDVar7,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar11->klass->vtable).SendOperation.method);
      goto code_?;
    }
    message = StringLiteral_RemoveLink__Link_not_found;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_RemoveLink__Link_not_found;
    }
  }
  else {
    if (pMVar4 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
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
      FUN_?(&StringLiteral_RemoveObjectLink__ObjectLink_not);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = (pMVar4->fields).networkGame;
    if (((pMVar5 == (MVNetworkGame *)0x0) ||
        (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 == (WorldNetwork *)0x0)) ||
       (this_01 = (pWVar6->fields).objectLinks, this_01 == (ObjectLinks *)0x0))
    goto code_?;
    bVar2 = ObjectLinks::ObjectLinks_Contains(this_01,objectLinkID,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pDVar7 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (pDVar7,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      aiStackX_18[0] = objectLinkID;
      pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_18);
      if (pDVar7 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        pMVar9 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                 ->klass->rgctx_data[0x22].method;
        uVar10 = CONCAT71((int7)((ulonglong)pMVar9 >> 8),0x3a);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (pDVar7,0x3a,pOVar8,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),pMVar9);
        pPVar11 = (pMVar4->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar11 != (PhotonPeer *)0x0) {
          (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                    (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x1f),pDVar7,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar11->klass->vtable).SendOperation.method);
          goto code_?;
        }
      }
      goto code_?;
    }
    message = StringLiteral_RemoveObjectLink__ObjectLink_not;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
      message = StringLiteral_RemoveObjectLink__ObjectLink_not;
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)message,(MethodInfo *)0x0);
code_?:
  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_02,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ContextMenuController____c);
  }
  this_04 = TypeInfo__ContextMenuController____c->static_fields->__9__19_0;
  if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__ContextMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ContextMenuController____c);
    }
    object = TypeInfo__ContextMenuController____c->static_fields->__9;
    this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)object,
               MethodInfo__ContextMenuController____c___DeleteLink_b__19_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__ContextMenuController____c->static_fields->__9__19_0 = this_04;
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)&TypeInfo__ContextMenuController____c->static_fields->__9__19_0 >>
                     0xc);
      puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar15 = *puVar14;
        LOCK();
        uVar16 = *puVar14;
        if (uVar15 == uVar16) {
          *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (uVar15 != uVar16);
    }
  }
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
            (pGVar12,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar17 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar17 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar18 = (longlong)(pLVar17->fields)._size;
    uVar13 = 0;
    if (0 < lVar18) {
      lVar19 = 0;
      lVar20 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar17 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar17 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar17->fields)._size <= uVar13) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar21 = (pLVar17->fields)._items;
        if (pTVar21 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar21->max_length <= uVar13) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_03 = *(Component **)((longlong)pTVar21->vector + lVar20 + -0x20);
        if (this_03 == (Component *)0x0) goto code_?;
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_03,(MethodInfo *)0x0);
        bVar2 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                 ExecuteEvents_Execute_18
                           (pGVar12,(BaseEventData *)0x0,
                            (ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
                            (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar2 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_03,(MethodInfo *)0x0);
          return;
        }
        uVar13 = uVar13 + 1;
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 8;
      } while (lVar19 < lVar18);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ShowContextMenuLink>b__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ContextMenuController+<>c__DisplayClass17_0::
     ContextMenuController_c_DisplayClass17_0__ShowContextMenuLink_b__1
               (ContextMenuController_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ContextMenuController__OnContextMenuPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).contextMenu;
  if (this_00 != (ContextMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    object = (this->fields).__4__this;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)object,MethodInfo__ContextMenuController__OnContextMenuPop__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

