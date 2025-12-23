
/* Void OnActivate() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnActivate
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
  }
  else {
    pAVar1 = (Action_2_Int32_EditCubeChange_ *)
             FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnClosed() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnClosed
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
  }
  else {
    pAVar1 = (Action_2_Int32_EditCubeChange_ *)
             FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if ((this->fields).completed == 0) {
    this_00 = (this->fields).popup;
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::GameObject>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
               ,(MethodInfo *)0x0);
    if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
      this_01 = (this_00->fields)._.fader;
      targetGameObject =
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (FirstTimeFadeHandler *)0x0) {
        FirstTimeFadeHandler::FirstTimeFadeHandler_StartFadeOut
                  (this_01,(Action_1_UnityEngine_GameObject_ *)this_02,targetGameObject,
                   (MethodInfo *)0x0);
        return;
      }
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void OnCubeChanged(Int32, EditCubeChange) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnCubeChanged
               (FirstTimeActivatablePointerWaitForCubeTool *this,int32_t cubeCount,
               EditCubeChange__Enum changeMade,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<EditCubeChange>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).checkCubeCount == 0) {
    pLVar1 = (this->fields).cubeChangesToCheck;
    uVar2 = 0;
    if (pLVar1 == (List_1_EditCubeChange_ *)0x0) goto code_?;
    lVar3 = 0x20;
    for (; (int)uVar2 < (pLVar1->fields)._size; uVar2 = uVar2 + 1) {
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pEVar5 = (pLVar1->fields)._items;
      if (pEVar5 == (EditCubeChange__Enum__Array *)0x0) goto code_?;
      if ((uint)pEVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(EditCubeChange__Enum *)((longlong)pEVar5->vector + lVar3 + -0x20) == changeMade) {
        piVar6 = &(this->fields).currentChangeCount;
        *piVar6 = *piVar6 + 1;
        break;
      }
      lVar3 = lVar3 + 4;
    }
  }
  else {
    (this->fields).currentChangeCount = cubeCount;
  }
  if ((this->fields).isShown != 0) {
    this_00 = (this->fields).popup;
    if (this_00 == (FirstTimeEventPopupWithProgress *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
              (this_00,(float)(this->fields).currentChangeCount,
               (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
    if ((this->fields).numberOfChangesBeforePointer <= (this->fields).currentChangeCount) {
      FirstTimeActivatablePointerWaitForCubeTool_OnShown(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnDestroy
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_UnRegister
            ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  if (this == (FirstTimeActivatablePointerWaitForCubeTool *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_00,(Object *)this,(this->klass->vtable).OnFirstTimeState.method,(MethodInfo *)0x0)
  ;
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_00,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pDVar3 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
  FUN_?(pDVar3,this);
  pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar2,pDVar3,(MethodInfo *)0x0);
  pAVar4 = TypeInfo__System__Action<int,_EditCubeChange>;
  if (pDVar3 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
  }
  else {
    pAVar2 = (Action_2_Int32_EditCubeChange_ *)
             FUN_?(pDVar3,TypeInfo__System__Action<int,_EditCubeChange>);
    if (pAVar2 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      FUN_?(pDVar3,pAVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar2;
    pAVar4 = TypeInfo__System__Action<int,_EditCubeChange>;
    lVar5 = FUN_?(pDVar3,TypeInfo__System__Action<int,_EditCubeChange>);
    if (lVar5 == 0) {
      FUN_?(pDVar3,pAVar4);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnPopupRemoved(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnPopupRemoved
               (FirstTimeActivatablePointerWaitForCubeTool *this,GameObject *popupGameObject,
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)
            FUN_?(
                         TypeInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0
                         );
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  pOVar1[1].klass = (Object__Class *)popupGameObject;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_00,pOVar1,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool____c__DisplayClass18_0___OnPopupRemoved_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)this,0.0,(MethodInfo *)0x0);
  index = (this->fields)._._.firstTimeEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar8 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar8 != (FirstTimeState *)0x0) &&
     (pBVar9 = (pFVar8->fields).bitArray, pBVar9 != (BitArray *)0x0)) {
    if ((pBVar9->fields).m_length <= index) {
      mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                (pBVar9,index + 1,(MethodInfo *)0x0);
    }
    pBVar9 = (pFVar8->fields).bitArray;
    if (pBVar9 != (BitArray *)0x0) {
      pvVar10 = (void *)0x0;
      mscorlib.dll::System::Collections::BitArray::BitArray_Set(pBVar9,index,1,(MethodInfo *)0x0);
      pFVar11 = TypeInfo__FirstTimeEventManager->static_fields;
      if (pFVar11->firstTimeStatePublisher !=
          (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *
          )0x0) {
        pAVar12 = pFVar11->firstTimeStatePublisher;
        pvVar10 = (pAVar12->fields)._._.method;
        (*(pAVar12->fields)._._.invoke_impl)
                  ((pAVar12->fields)._._.method_code,pFVar11->firstTimeState,index,pvVar10);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar13 != (MVGameControllerBase *)0x0) &&
          (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
         (pMVar15 = (pMVar14->fields).operationRequests,
         pMVar15 != (MVNetworkGame_OperationRequests *)0x0)) {
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
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000008);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ->klass->rgctx_data[0x22].method;
          uVar16 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0xc1,pOVar1,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar10 >> 8),2),method_00)
          ;
          pPVar17 = (pMVar15->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar17 != (PhotonPeer *)0x0) {
            (*(pPVar17->klass->vtable).SendOperation.methodPtr)
                      (pPVar17,CONCAT71((int7)((ulonglong)uVar16 >> 8),0x54),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar17->klass->vtable).SendOperation.method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnShow_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeEventPopupWithProgress_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopupWithProgress>_FirstTimeEventPopupWithProgress_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Shown_called_more_than_once);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isShown != 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Shown_called_more_than_once;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar4 = (this->fields).meanwhilePopup;
  (this->fields).isShown = 1;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pFVar4 = (FirstTimeEventPopupWithProgress *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pFVar4,
                       FirstTimeEventPopupWithProgress_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventPopupWithProgress>_FirstTimeEventPopupWithProgress_
                      );
  bVar5 = iRam_? != 0;
  (this->fields).popup = pFVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).popup >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pFVar4 = (this->fields).popup;
  if (pFVar4 != (FirstTimeEventPopupWithProgress *)0x0) {
    FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
              ((FirstTimeEventPopup *)pFVar4,(this->fields).skipAllowed,(MethodInfo *)0x0);
    pFVar4 = (this->fields).popup;
    if ((pFVar4 != (FirstTimeEventPopupWithProgress *)0x0) &&
       (pFVar10 = (pFVar4->fields)._.fader, pFVar10 != (FirstTimeFadeHandler *)0x0)) {
      this_00 = (pFVar10->fields).canvasGroup;
      (pFVar10->fields).fadingIn = 1;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pFVar10->fields).currentFadeInTime = 0.0;
        pFVar4 = (this->fields).popup;
        if (pFVar4 != (FirstTimeEventPopupWithProgress *)0x0) {
          FirstTimeEventPopupWithProgress::FirstTimeEventPopupWithProgress_SetProgress
                    (pFVar4,(float)(this->fields).currentChangeCount,
                     (float)(this->fields).numberOfChangesBeforePointer,(MethodInfo *)0x0);
          pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__FirstTimeActivatablePointerWaitForCubeTool___OnShow_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar12 = 
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
            if ((pMVar12->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar12);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar11,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar13 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar14 = (longlong)(pLVar13->fields)._size;
            uVar6 = 0;
            if (0 < lVar14) {
              lVar15 = 0;
              lVar16 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar13 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar13 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar13->fields)._size <= uVar6) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pTVar17 = (pLVar13->fields)._items;
                if (pTVar17 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar17->max_length <= uVar6) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                this_01 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
                if (this_01 == (Component *)0x0) goto code_?;
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_01,(MethodInfo *)0x0);
                bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar11,(BaseEventData *)0x0,this_02,
                                    (pMVar12->field7_0x38).rgctx_data[1].method);
                if (bVar18 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_01,(MethodInfo *)0x0);
                  return;
                }
                uVar6 = uVar6 + 1;
                lVar15 = lVar15 + 1;
                lVar16 = lVar16 + 8;
              } while (lVar15 < lVar14);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnShown() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_OnShown
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnCubeChanged_int__EditCubeChange_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).canShow = 0;
  (this->fields).completed = 1;
  pAVar1 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
  }
  else {
    pAVar1 = (Action_2_Int32_EditCubeChange_ *)
             FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (pAVar1 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar1;
    pAVar3 = TypeInfo__System__Action<int,_EditCubeChange>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int,_EditCubeChange>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  this_00 = (this->fields).popup;
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnPopupRemoved_UnityEngine__GameObject_
             ,(MethodInfo *)0x0);
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    pFVar10 = (this_00->fields)._.fader;
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (pFVar10 != (FirstTimeFadeHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>,this_02,pGVar11,0,unaff_RDI
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (pFVar10->fields).canvasGroup;
      (pFVar10->fields).currentFadeOutTime = (pFVar10->fields).fadeOutTime;
      (pFVar10->fields).fadingOut = 1;
      if (this_01 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,_UNK_?,(MethodInfo *)0x0);
      pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(pFVar10->fields).finishedAction,(Delegate *)this_02,
                          (MethodInfo *)0x0);
      pAVar12 = TypeInfo__System__Action<UnityEngine::GameObject>;
      if (pDVar2 == (Delegate *)0x0) {
        (pFVar10->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
      }
      else {
        pAVar13 = (Action_1_UnityEngine_GameObject_ *)
                  FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::GameObject>);
        if (pAVar13 == (Action_1_UnityEngine_GameObject_ *)0x0) {
          FUN_?(pDVar2,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pFVar10->fields).finishedAction = pAVar13;
        pAVar12 = TypeInfo__System__Action<UnityEngine::GameObject>;
        lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::GameObject>);
        if (lVar5 == 0) {
          FUN_?(pDVar2,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(pFVar10->fields).finishedAction >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar8 == *puVar7;
          if (bVar14) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      iVar15 = iRam_?;
      (pFVar10->fields).targetGameObject = pGVar11;
      if (iVar15 != 0) {
        uVar6 = (uint)((ulonglong)&(pFVar10->fields).targetGameObject >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar8 == *puVar7;
          if (bVar14) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnShow>b__13_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__OnShow_b__13_0
               (FirstTimeActivatablePointerWaitForCubeTool *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnClosed__);
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
  this_00 = (this->fields).popup;
  if (this_00 != (FirstTimeEventPopupWithProgress *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,
               MethodInfo__FirstTimeActivatablePointerWaitForCubeTool__OnClosed__,(MethodInfo *)0x0)
    ;
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


/* FirstTimeActivatablePointerWaitForCubeTool() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool__ctor
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).canShow = 1;
  (this->fields).skipAllowed = 1;
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerWaitForCubeTool::
     FirstTimeActivatablePointerWaitForCubeTool_get_CanShow
               (FirstTimeActivatablePointerWaitForCubeTool *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 == (GameObject *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return (this->fields).canShow;
    }
  }
  return 0;
}

