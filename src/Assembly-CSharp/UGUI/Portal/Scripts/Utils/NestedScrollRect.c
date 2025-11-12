
/* Void DoForParents[Object](Action`1[Object]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::
     NestedScrollRect_DoForParents
               (NestedScrollRect *this,Action_1_Object_ *action,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IEventSystemHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if ((this != (NestedScrollRect *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    while( true ) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (this_00,(MethodInfo *)0x0);
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 == (Transform *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar1 = 
      UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
      ;
      if ((this_00->fields)._._.m_CachedPtr == (void *)0x0) {
        return;
      }
      if ((
          UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                     );
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) break;
      p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                         (this_01,((pMVar1->field7_0x38).rgctx_data)->method);
      uVar2 = 0;
      pp_Var11 = p_Var6->vector;
      if (p_Var6 == (_Il2CppFullySharedGenericType__Array *)0x0) break;
      for (; uVar3 = (uint)p_Var6->max_length, (int)uVar2 < (int)uVar3; uVar2 = uVar2 + 1) {
        if (uVar3 <= uVar2) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        p_Var2 = *pp_Var11;
        if ((*(byte *)((longlong)((method->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135) & 1) ==
            0) {
          FUN_?(((method->field7_0x38).rgctx_data)->rgctxDataDummy);
        }
        lVar5 = FUN_?(p_Var2);
        if (lVar5 != 0) {
          if (action == (Action_1_Object_ *)0x0) goto code_?;
          pvVar6 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            pvVar6 = (void *)FUN_?(pvVar6);
          }
          pIVar7 = TypeInfo__UnityEngine__EventSystems__IEventSystemHandler;
          if (p_Var2 == (_Il2CppFullySharedGenericType *)0x0) {
            lVar8 = 0;
          }
          else {
            lVar5 = FUN_?(p_Var2,TypeInfo__UnityEngine__EventSystems__IEventSystemHandler);
            if (lVar5 == 0) {
              FUN_?(p_Var2,pIVar7);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar8 = FUN_?(lVar5,pvVar6);
            if (lVar8 == 0) {
              FUN_?(lVar5,pvVar6);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          (*(action->fields)._._.invoke_impl)
                    ((action->fields)._._.method_code,lVar8,(action->fields)._._.method);
        }
        pp_Var11 = pp_Var11 + 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void 
   DoForParents[__Il2CppFullySharedGenericType](Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::
     NestedScrollRect_DoForParents_1
               (NestedScrollRect *this,
               Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *action,
               MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IEventSystemHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  uVar1 = (ulonglong)((method->field7_0x38).rgctx_data)->klass->actualSize;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  uVar2 = uVar2 & 0xfffffffffffffff0;
  FUN_?();
  lVar3 = -uVar2;
  if (this != (NestedScrollRect *)0x0) {
    *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      while( true ) {
        *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (this_00,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          *(undefined4 *)((longlong)auStack_4 + lVar3) =
               *(undefined4 *)((longlong)auStack_4 + lVar3);
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?();
        }
        if (cRam_? == '\0') {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          *(undefined4 *)((longlong)auStack_4 + lVar3) =
               *(undefined4 *)((longlong)auStack_4 + lVar3);
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_00 == (Transform *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?();
        }
        pMVar5 = 
        UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
        ;
        if ((this_00->fields)._._.m_CachedPtr == (void *)0x0) {
          return;
        }
        if ((
            UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          FUN_?(
                       UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                       );
        }
        *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (GameObject *)0x0) break;
        pMVar5 = ((pMVar5->field7_0x38).rgctx_data)->method;
        *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
        p_Var11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                            (this_01,pMVar5);
        uVar6 = 0;
        pp_Var17 = p_Var11->vector;
        if (p_Var11 == (_Il2CppFullySharedGenericType__Array *)0x0) break;
        for (; uVar7 = (uint)p_Var11->max_length, (int)uVar6 < (int)uVar7; uVar6 = uVar6 + 1) {
          if (uVar7 <= uVar6) {
            *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          p_Var3 = *pp_Var17;
          pvVar9 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
            *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
            FUN_?(pvVar9);
          }
          *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
          lVar10 = FUN_?(p_Var3);
          if (lVar10 != 0) {
            pvVar9 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
              *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
              pvVar9 = (void *)FUN_?(pvVar9);
            }
            pIVar11 = TypeInfo__UnityEngine__EventSystems__IEventSystemHandler;
            if (p_Var3 == (_Il2CppFullySharedGenericType *)0x0) {
              lVar10 = 0;
            }
            else {
              *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
              lVar10 = FUN_?(p_Var3,TypeInfo__UnityEngine__EventSystems__IEventSystemHandler
                                    );
              if (lVar10 == 0) {
                *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
                FUN_?(p_Var3,pIVar11);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
            puVar12 = (undefined8 *)FUN_?(lVar10,pvVar9,auStack_13 + lVar3);
            if (action == (Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
            goto code_?;
            if (-1 < *(int *)&((method->field7_0x38).rgctx_data)->method->return_type) {
              puVar12 = (undefined8 *)*puVar12;
            }
            pIVar14 = (method->field7_0x38).rgctx_data;
            *(undefined8 **)((longlong)auStack_15 + lVar3) = puVar12;
            pMVar5 = pIVar14[2].method;
            pIVar16 = pMVar5->invoker_method;
            pIVar17 = pMVar5->methodPointer;
            *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
            puStackX_20 = puVar12;
            (*pIVar16)(pIVar17,pMVar5,action,&puStackX_20,*(void **)((longlong)auStack_15 + lVar3));
          }
          pp_Var17 = pp_Var17 + 1;
        }
      }
    }
  }
code_?:
  *(undefined **)((longlong)auStack_4 + lVar3 + -8) = &UNK_?;
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::
     NestedScrollRect_OnBeginDrag
               (NestedScrollRect *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::EventSystems::IBeginDragHandler>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IBeginDragHandler>_System__Action<UnityEngine::EventSystems::IBeginDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass4_0___OnBeginDrag_b__0_UnityEngine__EventSystems__IBeginDragHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass4_0
                        );
  if (object == (Object *)0x0) goto code_?;
  bVar1 = iRam_? != 0;
  object[1].klass = (Object__Class *)eventData;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  uVar2 = _UNK_?;
  if ((this->fields)._.m_Horizontal == 0) {
    if (object[1].klass == (Object__Class *)0x0) goto code_?;
    uVar6 = *(uint *)((longlong)&((object[1].klass)->vtable).Finalize.methodPtr + 4);
    if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (object[1].klass == (Object__Class *)0x0) goto code_?;
    if ((float)(uVar6 & uVar2) <=
        (float)(*(uint *)&((object[1].klass)->vtable).Finalize.method & uVar2))
    goto code_?;
code_?:
    cVar7 = '\x01';
  }
  else {
code_?:
    if ((this->fields)._.m_Vertical == 0) {
      if (object[1].klass == (Object__Class *)0x0) goto code_?;
      uVar6 = *(uint *)((longlong)&((object[1].klass)->vtable).Finalize.methodPtr + 4);
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
        uVar2 = _UNK_?;
      }
      if (object[1].klass == (Object__Class *)0x0) goto code_?;
      if ((float)(uVar6 & uVar2) <
          (float)(*(uint *)&((object[1].klass)->vtable).Finalize.method & uVar2))
      goto code_?;
    }
    cVar7 = '\0';
  }
  *(char *)&this[1].klass = cVar7;
  if (cVar7 == '\0') {
    this_00 = (PointerEventData *)object[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__RectTransformUtility);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_00 == (PointerEventData *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this_00->fields)._button_k__BackingField == 0) &&
       (cVar7 = (*(this->klass->vtable).IsActive.methodPtr)(this), cVar7 != '\0')) {
      method_00 = this;
      UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_UpdateBounds
                ((ScrollRect *)this,(MethodInfo *)0x0);
      VVar9 = RTG::RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                        ((MethodInfo *)method_00);
      fStackX_10 = VVar9.x;
      fStackX_14 = VVar9.y;
      (this->fields)._.m_PointerStartLocalCursor.x = fStackX_10;
      (this->fields)._.m_PointerStartLocalCursor.y = fStackX_14;
      pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_get_viewRect
                         ((ScrollRect *)this,(MethodInfo *)0x0);
      VVar9 = (this_00->fields)._position_k__BackingField;
      cam = UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::
            PointerEventData_get_pressEventCamera(this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__RectTransformUtility->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
      RectTransformUtility_ScreenPointToLocalPointInRectangle
                (pRVar10,VVar9,cam,&(this->fields)._.m_PointerStartLocalCursor,(MethodInfo *)0x0);
      pRVar10 = (this->fields)._.m_Content;
      if (pRVar10 == (RectTransform *)0x0) goto code_?;
      VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar10,(MethodInfo *)0x0);
      fStackX_10 = VVar9.x;
      fStackX_14 = VVar9.y;
      (this->fields)._.m_ContentStartPosition.x = fStackX_10;
      (this->fields)._.m_ContentStartPosition.y = fStackX_14;
      (this->fields)._.m_Dragging = 1;
    }
  }
  else {
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::EventSystems::IBeginDragHandler>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,object,
               MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass4_0___OnBeginDrag_b__0_UnityEngine__EventSystems__IBeginDragHandler_
               ,(MethodInfo *)0x0);
    NestedScrollRect_DoForParents
              (this,(Action_1_Object_ *)this_01,
               void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IBeginDragHandler>_System__Action<UnityEngine::EventSystems::IBeginDragHandler>_
              );
  }
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::NestedScrollRect_OnDrag
               (NestedScrollRect *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::EventSystems::IDragHandler>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IDragHandler>_System__Action<UnityEngine::EventSystems::IDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass3_0___OnDrag_b__0_UnityEngine__EventSystems__IDragHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass3_0
                        );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)eventData;
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
  if (*(char *)&this[1].klass != '\0') {
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::EventSystems::IDragHandler>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,object,
               MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass3_0___OnDrag_b__0_UnityEngine__EventSystems__IDragHandler_
               ,(MethodInfo *)0x0);
    pMVar7 = 
    void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IDragHandler>_System__Action<UnityEngine::EventSystems::IDragHandler>_
    ;
    if ((
        void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IDragHandler>_System__Action<UnityEngine::EventSystems::IDragHandler>_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(&
                    UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__IEventSystemHandler);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(pMVar7);
      }
    }
    if ((this != (NestedScrollRect *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
      while( true ) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (this_02,(MethodInfo *)0x0);
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_02 == (Transform *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar8 = 
        UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
        ;
        if ((this_02->fields)._._.m_CachedPtr == (void *)0x0) {
          return;
        }
        if ((
            UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__Component__MethodInfo__UnityEngine__Component__GetComponents<MethodInfo::UnityEngine::Component>______
                       );
        }
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0);
        if (this_03 == (GameObject *)0x0) break;
        p_Var13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                            (this_03,((pMVar8->field7_0x38).rgctx_data)->method);
        uVar3 = 0;
        pp_Var21 = p_Var13->vector;
        if (p_Var13 == (_Il2CppFullySharedGenericType__Array *)0x0) break;
        for (; uVar9 = (uint)p_Var13->max_length, (int)uVar3 < (int)uVar9; uVar3 = uVar3 + 1) {
          if (uVar9 <= uVar3) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          p_Var6 = *pp_Var21;
          if ((*(byte *)((longlong)((pMVar7->field7_0x38).rgctx_data)->rgctxDataDummy + 0x135) & 1)
              == 0) {
            FUN_?(((pMVar7->field7_0x38).rgctx_data)->rgctxDataDummy);
          }
          lVar10 = FUN_?(p_Var6);
          if (lVar10 != 0) {
            if (this_01 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
            pvVar11 = ((pMVar7->field7_0x38).rgctx_data)->rgctxDataDummy;
            if ((*(byte *)((longlong)pvVar11 + 0x135) & 1) == 0) {
              pvVar11 = (void *)FUN_?(pvVar11);
            }
            pIVar12 = TypeInfo__UnityEngine__EventSystems__IEventSystemHandler;
            if (p_Var6 == (_Il2CppFullySharedGenericType *)0x0) {
              lVar13 = 0;
            }
            else {
              lVar10 = FUN_?(p_Var6,TypeInfo__UnityEngine__EventSystems__IEventSystemHandler
                                    );
              if (lVar10 == 0) {
                FUN_?(p_Var6,pIVar12);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              lVar13 = FUN_?(lVar10,pvVar11);
              if (lVar13 == 0) {
                FUN_?(lVar10,pvVar11);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
            (*(this_01->fields)._._.invoke_impl)
                      ((this_01->fields)._._.method_code,lVar13,(this_01->fields)._._.method);
          }
          pp_Var21 = pp_Var21 + 1;
        }
      }
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (PointerEventData *)object[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransformUtility,this_00,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.m_Dragging != 0) {
    if (this_00 == (PointerEventData *)0x0) {
DAT_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this_00->fields)._button_k__BackingField == 0) &&
       (cVar14 = (*(this->klass->vtable).IsActive.methodPtr)(this), cVar14 != '\0')) {
      pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_get_viewRect
                          ((ScrollRect *)this,(MethodInfo *)0x0);
      VVar16 = (this_00->fields)._position_k__BackingField;
      cam = UnityEngine.UI.dll::UnityEngine::EventSystems::PointerEventData::
            PointerEventData_get_pressEventCamera(this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__RectTransformUtility->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar17 = UnityEngine.UIModule.dll::UnityEngine::RectTransformUtility::
               RectTransformUtility_ScreenPointToLocalPointInRectangle
                         (pRVar15,VVar16,cam,(Vector2 *)&stack0x00000008,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_UpdateBounds
                  ((ScrollRect *)this,(MethodInfo *)0x0);
        fVar18 = (0.0 - (this->fields)._.m_PointerStartLocalCursor.x) +
                 (this->fields)._.m_ContentStartPosition.x;
        fVar19 = (0.0 - (this->fields)._.m_PointerStartLocalCursor.y) +
                 (this->fields)._.m_ContentStartPosition.y;
        pRVar15 = (this->fields)._.m_Content;
        if (pRVar15 == (RectTransform *)0x0) goto DAT_?;
        VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                 RectTransform_get_anchoredPosition(pRVar15,(MethodInfo *)0x0);
        VVar16.y = fVar19 - VVar20.y;
        VVar16.x = fVar18 - VVar20.x;
        VVar16 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_CalculateOffset
                           ((ScrollRect *)this,VVar16,(MethodInfo *)0x0);
        fVar21 = VVar16.x;
        overStretching = VVar16.y;
        fVar18 = fVar18 + fVar21;
        fVar19 = fVar19 + overStretching;
        if ((this->fields)._.m_MovementType == 1) {
          if (fVar21 != 0.0) {
            uVar22 = (this->fields)._.m_ViewBounds.m_Extents.x;
            fVar21 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_RubberDelta
                               (fVar21,(float)uVar22 * TypeRef__System__Activator__T._0_4_,
                                (MethodInfo *)0x0);
            fVar18 = fVar18 - fVar21;
          }
          if (overStretching != 0.0) {
            fVar21 = (this->fields)._.m_ViewBounds.m_Extents.y;
            fVar21 = UnityEngine.UI.dll::UnityEngine::UI::ScrollRect::ScrollRect_RubberDelta
                               (overStretching,fVar21 + fVar21,(MethodInfo *)0x0);
            fVar19 = fVar19 - fVar21;
          }
        }
        (*(this->klass->vtable).SetContentAnchoredPosition.methodPtr)
                  (this,CONCAT44(fVar19,fVar18),
                   (this->klass->vtable).SetContentAnchoredPosition.method);
      }
    }
  }
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::NestedScrollRect_OnEndDrag
               (NestedScrollRect *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::EventSystems::IEndDragHandler>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IEndDragHandler>_System__Action<UnityEngine::EventSystems::IEndDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass5_0___OnEndDrag_b__0_UnityEngine__EventSystems__IEndDragHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass5_0
                        );
  if (object == (Object *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)eventData;
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
  if (*(char *)&this[1].klass == '\0') {
    if (object[1].klass == (Object__Class *)0x0) goto code_?;
    if (*(int *)&object[1].klass[1]._0.name == 0) {
      (this->fields)._.m_Dragging = 0;
    }
  }
  else {
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::EventSystems::IEndDragHandler>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass5_0___OnEndDrag_b__0_UnityEngine__EventSystems__IEndDragHandler_
               ,(MethodInfo *)0x0);
    NestedScrollRect_DoForParents
              (this,(Action_1_Object_ *)this_00,
               void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IEndDragHandler>_System__Action<UnityEngine::EventSystems::IEndDragHandler>_
              );
  }
  *(undefined1 *)&this[1].klass = 0;
  return;
}


/* Void OnInitializePotentialDrag(PointerEventData) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::
     NestedScrollRect_OnInitializePotentialDrag
               (NestedScrollRect *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<UnityEngine::EventSystems::IInitializePotentialDragHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IInitializePotentialDragHandler>_System__Action<UnityEngine::EventSystems::IInitializePotentialDragHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass2_0___OnInitializePotentialDrag_b__0_UnityEngine__EventSystems__IInitializePotentialDragHandler_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass2_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(
                        TypeInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass2_0
                        );
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)eventData;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<UnityEngine::EventSystems::IInitializePotentialDragHandler>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect____c__DisplayClass2_0___OnInitializePotentialDrag_b__0_UnityEngine__EventSystems__IInitializePotentialDragHandler_
               ,(MethodInfo *)0x0);
    NestedScrollRect_DoForParents
              (this,(Action_1_Object_ *)this_00,
               void_MethodInfo__UGUI__Portal__Scripts__Utils__NestedScrollRect__DoForParents<UnityEngine::EventSystems::IInitializePotentialDragHandler>_System__Action<UnityEngine::EventSystems::IInitializePotentialDragHandler>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      if (*(int *)&object[1].klass[1]._0.name == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector2);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
        (this->fields)._.m_Velocity.x =
             (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
        (this->fields)._.m_Velocity.y = fVar6;
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* NestedScrollRect() */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Utils::NestedScrollRect::NestedScrollRect__ctor
               (NestedScrollRect *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__ScrollRect__ScrollRectEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._.m_Horizontal = 1;
  (this->fields)._.m_Vertical = 1;
  (this->fields)._.m_MovementType = 1;
  (this->fields)._.m_Elasticity = 0.1;
  (this->fields)._.m_Inertia = 1;
  (this->fields)._.m_DecelerationRate = 0.135;
  (this->fields)._.m_ScrollSensitivity = 1.0;
  this_00 = (ScrollRect_ScrollRectEvent *)
            FUN_?(TypeInfo__UnityEngine__UI__ScrollRect__ScrollRectEvent);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<UnityEngine::Vector2>__UnityEvent__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this_00->fields)._.m_InvokeArray = (Object__Array *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this_00->fields)._.m_InvokeArray >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEventBase::UnityEventBase__ctor
            ((UnityEventBase *)this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.m_OnValueChanged = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.m_OnValueChanged >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar6 = cRam_?;
  fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._.m_PointerStartLocalCursor.x =
       (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._.m_PointerStartLocalCursor.y = fVar7;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cVar6 = '\x01';
    cRam_? = '\x01';
  }
  fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._.m_ContentStartPosition.x =
       (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._.m_ContentStartPosition.y = fVar7;
  if (cVar6 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._.m_PrevPosition.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._.m_PrevPosition.y = fVar7;
  uVar8 = FUN_?(TypeInfo__UnityEngine__Vector3,4);
  bVar1 = iRam_? != 0;
  *(undefined8 *)&(this->fields).routeToParent = uVar8;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).routeToParent >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

