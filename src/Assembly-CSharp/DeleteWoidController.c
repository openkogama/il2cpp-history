
/* Void DeleteWorldObject(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_DeleteWorldObject
               (DeleteWoidController *this,bool success,ConfirmationPopup *popup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DeleteWoidController___DeleteWorldObject_b__4_1_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
                  MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeleteWoidController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DeleteWoidController____c);
  }
  this_01 = TypeInfo__DeleteWoidController____c->static_fields->__9__4_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeleteWoidController____c);
    }
    pDVar2 = TypeInfo__DeleteWoidController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pDVar2,
               MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__DeleteWoidController____c->static_fields->__9__4_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__DeleteWoidController____c->static_fields->__9__4_0 >> 0xc
                    );
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (success == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeleteWoidController____c);
    }
    this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              TypeInfo__DeleteWoidController____c->static_fields->__9__4_3;
    if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DeleteWoidController____c);
      }
      pDVar2 = TypeInfo__DeleteWoidController____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pDVar2,
                 MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DeleteWoidController____c->static_fields->__9__4_3 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_02;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__DeleteWoidController____c->static_fields->__9__4_3 >>
                      0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    pMVar8 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
    }
  }
  else {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__DeleteWoidController___DeleteWorldObject_b__4_1_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DeleteWoidController____c);
    }
    this_02 = TypeInfo__DeleteWoidController____c->static_fields->__9__4_2;
    if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__DeleteWoidController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__DeleteWoidController____c);
      }
      pDVar2 = TypeInfo__DeleteWoidController____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)pDVar2,
                 MethodInfo__DeleteWoidController____c___DeleteWorldObject_b__4_2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__DeleteWoidController____c->static_fields->__9__4_2 = this_02;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__DeleteWoidController____c->static_fields->__9__4_2 >>
                      0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    pMVar8 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
    }
  }
  if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_Initialize
               (DeleteWoidController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DeleteWoidController__OnPick_MVWorldObjectClient__MVWorldObjectClient_
                 );
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
    FUN_?(&PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeleteWoidController____c__DisplayClass2_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DeleteWoidController____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Select_object_to_delete);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DeleteWoidController____c__DisplayClass2_0);
  original = (this->fields).pickHelperPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
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
               MethodInfo__DeleteWoidController____c__DisplayClass2_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__DeleteWoidController__OnPick_MVWorldObjectClient__MVWorldObjectClient_,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      plVar7 = *(longlong **)&(pOVar1->_0).byval_arg.attrs;
      if (plVar7 == (longlong *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)(*plVar7 + 0x5e8))
                (plVar7,StringLiteral_Select_object_to_delete,*(undefined8 *)(*plVar7 + 0x5f0),
                 StringLiteral_Select_object_to_delete,unaff_RDI);
      bVar2 = iRam_? != 0;
      (pOVar1->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)this_01;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pOVar1->_0).byval_arg >> 0xc);
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
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnPick(MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController_OnPick
               (DeleteWoidController *this,MVWorldObjectClient *wo,MVWorldObjectClient *woParent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DeleteWoidController___OnPick_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DeleteWoidController___OnPick_b__3_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
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
    cRam_? = '\x01';
  }
  if (wo == (MVWorldObjectClient *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = (wo->fields)._.id;
  (this->fields).woid = iVar2;
  if (iVar2 < 1) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    pMVar4 = 
    MethodInfo__DeleteWoidController___OnPick_b__3_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  else {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    pMVar4 = 
    MethodInfo__DeleteWoidController___OnPick_b__3_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
    ;
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,pMVar4,(MethodInfo *)0x0);
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
            (pGVar3,(IList_1_UnityEngine_Transform_ *)
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
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar10 = (pLVar5->fields)._items;
        if (pTVar10 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar10->max_length <= uVar7) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar10->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar3,(BaseEventData *)0x0,this_01,
                           (pMVar4->field7_0x38).rgctx_data[1].method);
        if (bVar11 != 0) {
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <DeleteWorldObject>b__4_1(IEditModeController, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__DeleteWorldObject_b__4_1
               (DeleteWoidController *this,IEditModeController *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IEditModeController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (this->fields).woid;
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IEditModeController) {
        pVVar6 = &(pIVar4->vtable).DeleteWoid + pIVar4->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  pVVar6 = (VirtualInvokeData *)FUN_?(x);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar6->methodPtr)(x,(ulonglong)uVar2,pVVar6->method,pVVar6->methodPtr);
  return;
}


/* Void <OnPick>b__3_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__OnPick_b__3_0
               (DeleteWoidController *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DeleteWoidController__DeleteWorldObject_bool__ConfirmationPopup_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Are_you_sure_you_wish_to_delete_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (StringLiteral_Are_you_sure_you_wish_to_delete_,str1,::StringLiteral__,(MethodInfo *)0x0
            );
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__DeleteWoidController__DeleteWorldObject_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnPick>b__3_1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::DeleteWoidController::DeleteWoidController__OnPick_b__3_1
               (DeleteWoidController *this,IModalPopupCreator *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_woid_not_valid__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)&(this->fields).woid,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_woid_not_valid__,str1,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

