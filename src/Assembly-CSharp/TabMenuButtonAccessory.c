
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_Initialize
               (TabMenuButtonAccessory *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabMenuButtonAccessory____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_TabDef_exists_for_accessory_c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TabMenuButtonAccessory____c__DisplayClass11_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
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
    *(int32_t *)&object[1].monitor = tabId;
    pLVar6 = (this->fields).layoutElement;
    (this->fields).category = tabId;
    if (pLVar6 != (LayoutElement *)0x0) {
      fVar7 = (float)(*(pLVar6->klass->vtable).get_minHeight_1.methodPtr)();
      (this->fields).defaultHeight = fVar7;
      TabMenuButtonAccessory_UpdateHighlightState(this,(MethodInfo *)0x0);
      pLVar8 = (this->fields).tabDefs;
      uVar2 = 0;
      if (pLVar8 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        lVar9 = 0x20;
        do {
          if ((pLVar8->fields)._size <= (int)uVar2) {
            pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&object[1].monitor,(MethodInfo *)0x0);
            pSVar10 = mscorlib.dll::System::String::String_Concat_4
                                (StringLiteral_No_TabDef_exists_for_accessory_c,pSVar10,
                                 (MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
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
            pIVar11 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar11 == (ILogger_1 *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar11,0,pSVar10);
            return;
          }
          if ((uint)(pLVar8->fields)._size <= uVar2) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar13 = (pLVar8->fields)._items;
          if (pTVar13 == (TabMenuButtonAccessory_AccessoryTabDef__Array *)0x0) break;
          if ((uint)pTVar13->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)&object[1].monitor ==
              *(int *)((longlong)
                       &((TabMenuButtonAccessory_AccessoryTabDef__Array *)(pTVar13->vector + -2))->
                        klass + lVar9)) {
            if ((uint)(pLVar8->fields)._size <= uVar2) goto code_?;
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 != (TabMenuButtonAccessory_AccessoryTabDef__Array *)0x0) {
              if ((uint)pTVar13->max_length <= uVar2) goto code_?;
              pGVar14 = pTVar13->vector[(int)uVar2].streamedImagePrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pGVar14 = (Graphic *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pGVar14,
                                   UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                                  );
              (this->fields).icon = pGVar14;
              func_?(&(this->fields).icon);
              pGVar14 = (this->fields).icon;
              if (pGVar14 != (Graphic *)0x0) {
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pGVar14,(MethodInfo *)0x0);
                parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar15 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                            (pTVar15,parent,0,(MethodInfo *)0x0);
                  pGVar14 = (this->fields).icon;
                  if ((pGVar14 != (Graphic *)0x0) &&
                     (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pGVar14,(MethodInfo *)0x0),
                     pTVar15 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                              (pTVar15,(MethodInfo *)0x0);
                    pBVar16 = (this->fields).button;
                    if (pBVar16 != (Button *)0x0) {
                      pBVar17 = (pBVar16->fields).m_OnClick;
                      this_00 = (NavMesh_OnNavMeshPreUpdate *)
                                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                      NavMesh_OnNavMeshPreUpdate__ctor
                                (this_00,object,
                                 MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__0__
                                 ,(MethodInfo *)0x0);
                      if (pBVar17 != (Button_ButtonClickedEvent *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        this_01 = (InvokableCall *)
                                  FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                        InvokableCall_add_Delegate(this_01,(UnityAction *)this_00,(MethodInfo *)0x0)
                        ;
                        pIVar18 = (pBVar17->fields)._._.m_Calls;
                        if (pIVar18 != (InvokableCallList *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pLVar19 = (pIVar18->fields).m_RuntimeCalls;
                          if (pLVar19 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                            FUN_?(pLVar19,this_01);
                            (pIVar18->fields).m_NeedsUpdate = 1;
                            return;
                          }
                        }
                        FUN_?();
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                    }
                  }
                }
              }
            }
            break;
          }
          uVar2 = uVar2 + 1;
          lVar9 = lVar9 + 0x10;
        } while( true );
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_LerpToSize
          (TabMenuButtonAccessory *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].monitor = size;
    return pIVar1;
  }
  uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
  do {
    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
    LOCK();
    bVar2 = uVar5 == *puVar6;
    if (bVar2) {
      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
    }
    UNLOCK();
  } while (!bVar2);
  *(float *)&pIVar1[2].monitor = size;
  return pIVar1;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsDeselected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pGVar1 == (Graphic *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  CStack_3.r = pCVar2->r;
  CStack_3.g = pCVar2->g;
  CStack_3.b = pCVar2->b;
  CStack_3.a = pCVar2->a;
  (*(pGVar1->klass->vtable).set_color.methodPtr)(pGVar1);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar5);
  pIVar7 = TabMenuButtonAccessory_LerpToSize(this,(this->fields).defaultHeight,(MethodInfo *)0x0);
  if (pIVar7 == (IEnumerator *)0x0) {
    uVar6 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar6);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar6 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar6);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (TabMenuButtonAccessory *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar5 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar5,pIVar7);
    return;
  }
  uVar6 = func_?(&TypeInfo__System__ArgumentException);
  this_01 = (InvalidEnumArgumentException *)func_?(uVar6);
  pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
  uVar6 = func_?(&
                              MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                             );
  FUN_?(this_01,uVar6);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsSelected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar2 = Styles::Styles_GetColor(&CStack_3,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pGVar1 == (Graphic *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  CStack_3.r = pCVar2->r;
  CStack_3.g = pCVar2->g;
  CStack_3.b = pCVar2->b;
  CStack_3.a = pCVar2->a;
  (*(pGVar1->klass->vtable).set_color.methodPtr)
            (pGVar1,&CStack_3,(pGVar1->klass->vtable).set_color.method);
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar6,(Object *)this,
             MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar5,(BaseEventData *)0x0,pEVar6,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
            );
  pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar6 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar6,(Object *)this,
             MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar5,(BaseEventData *)0x0,pEVar6,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (this->fields)._._._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar7);
  pIVar9 = TabMenuButtonAccessory_LerpToSize
                     (this,(this->fields).selectedTabHeight,(MethodInfo *)0x0);
  if (pIVar9 == (IEnumerator *)0x0) {
    uVar8 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar8);
    pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar10,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar8);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar11 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (TabMenuButtonAccessory *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pvVar7 = (this->fields)._._._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar7,pIVar9);
    return;
  }
  uVar8 = func_?(&TypeInfo__System__ArgumentException);
  this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
  pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(this_01,pSVar10,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                             );
  FUN_?(this_01,uVar8);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateHighlightState() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_UpdateHighlightState
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HighlightManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = TypeInfo__HighlightManager;
  if (*(int *)&(TypeInfo__HighlightManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar2 = HighlightManager::HighlightManager_GetHighLights
                     ((HighlightType__Enum)CONCAT71((int7)((ulonglong)pHVar1 >> 8),2),
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                     );
  pLVar3 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                     ((this->fields).category,(MethodInfo *)0x0);
  value = 0;
  iVar4 = 0;
  if (pLVar2 != (List_1_Highlight_1_System_Object_ *)0x0) {
    for (; iVar4 < (pLVar2->fields)._size; iVar4 = iVar4 + 1) {
      iVar5 = 0;
      if (pLVar3 == (List_1_AccessoryDataClient_ *)0x0) goto code_?;
      for (; iVar5 < (pLVar3->fields)._size; iVar5 = iVar5 + 1) {
        lVar6 = FUN_?(pLVar3,iVar5);
        if (lVar6 == 0) goto code_?;
        iVar7 = *(int *)(lVar6 + 0x10);
        lVar6 = FUN_?(pLVar2,iVar4);
        if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x18) == 0)) goto code_?;
        if (iVar7 == *(int *)(*(longlong *)(lVar6 + 0x18) + 0x10)) {
          this_01 = (AccessoryData *)FUN_?(pLVar3);
          if (this_01 == (AccessoryData *)0x0) goto code_?;
          bVar8 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_GetShowInShop(this_01,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            lVar6 = FUN_?(pLVar3,iVar5);
            if (lVar6 == 0) goto code_?;
            if (*(char *)(lVar6 + 0x40) == '\0') {
              value = value + 1;
            }
          }
        }
      }
    }
    this_00 = (this->fields).redDot;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0 < value,(MethodInfo *)0x0);
      pTVar9 = (this->fields).redDotCount;
      if (cRam_? == '\0') {
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
      aRStack_10[0]._pointer._value = (void *)0x0;
      aRStack_10[0]._length = 0;
      aRStack_10[0]._12_4_ = 0;
      pSVar11 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pTVar9 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar9->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar9,pSVar11,(pTVar9->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <SetAsSelected>b__13_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_b__13_0
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (this->fields).category != 0xff;
  pIVar3 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)bVar2;
  uVar4 = 0;
  pIVar5 = x->klass;
  uVar6._0_1_ = (pIVar5->_1).rank;
  uVar6._1_1_ = (pIVar5->_1).minimumAlignment;
  if (uVar6 != 0) {
    pIVar3 = pIVar5->interfaceOffsets;
    do {
      if (pIVar3[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar7 = &(pIVar5->vtable).OpenAccessoryManagementScreen + (pIVar3[uVar4].offset + 1);
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,1,pIVar3,unaff_RDI
                        );
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar7->methodPtr)(x,(ulonglong)bVar2,pVVar7->method,pVVar7->methodPtr);
  return;
}


/* Void <SetAsSelected>b__13_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_b__13_1
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IAccessoryClicked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (x == (IAccessoryClicked *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (this->fields).category;
  uVar3 = 0;
  pIVar4 = x->klass;
  uVar5._0_1_ = (pIVar4->_1).rank;
  uVar5._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAccessoryClicked) {
        pVVar6 = &(pIVar4->vtable).OpenAccessoryManagementScreen +
                 (pIVar4->interfaceOffsets[uVar3].offset + 3);
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


/* TabMenuButtonAccessory() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__ctor
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).selectedTabHeight = 140.0;
  (this->fields).lerpTime = 0.5;
  (this->fields).defaultHeight = 120.0;
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
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
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

