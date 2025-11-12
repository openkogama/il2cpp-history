
/* Void CreatePlayerList() */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey_CreatePlayerList
               (PlayerListHoldHotkey *this,MethodInfo *method)

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
                  PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey____c___CreatePlayerList_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey____c__DisplayClass4_0___CreatePlayerList_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListHoldHotkey____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListHoldHotkey____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_8 = uStackX_8 & 0xffffffffffffff00;
  object_00 = (Object *)FUN_?(TypeInfo__PlayerListHoldHotkey____c__DisplayClass4_0);
  original = (this->fields).playerListsPrefab;
  (this->fields).isActive = 1;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PlayerListsLayout_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsLayout>_PlayerListsLayout_
                     );
  if (object_00 != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object_00[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedStat
              ((GameStatCounterType__Enum *)&uStackX_8,(MethodInfo *)0x0);
    pOVar1 = object_00[1].klass;
    if (pOVar1 != (Object__Class *)0x0) {
      bVar2 = iRam_? != 0;
      (pOVar1->_0).byval_arg.data = (_union_86)(this->fields).playerListsPrefab;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pOVar1->_0).byval_arg >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      *(undefined1 *)&(pOVar1->_0).element_class = (undefined1)uStackX_8;
      *(undefined4 *)((longlong)&(pOVar1->_0).element_class + 4) = 0;
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListHoldHotkey____c);
      }
      this_01 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__4_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PlayerListHoldHotkey____c);
        }
        object = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__PlayerListHoldHotkey____c___CreatePlayerList_b__4_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__4_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__4_0
                         >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object_00,
                 MethodInfo__PlayerListHoldHotkey____c__DisplayClass4_0___CreatePlayerList_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      pMVar8 = 
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
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
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
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
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
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_02,
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
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DestroyPlayerList() */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey_DestroyPlayerList
               (PlayerListHoldHotkey *this,MethodInfo *method)

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
                  MethodInfo__PlayerListHoldHotkey____c___DestroyPlayerList_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListHoldHotkey____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerListHoldHotkey____c);
  }
  this_00 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListHoldHotkey____c);
    }
    object = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__PlayerListHoldHotkey____c___DestroyPlayerList_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0 >> 0xc
                    );
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  (this->fields).isActive = 0;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey_OnDestroy
               (PlayerListHoldHotkey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
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
                  MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_1_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_2_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerListHoldHotkey____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerListHoldHotkey____c);
  }
  this_00 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListHoldHotkey____c);
    }
    pPVar2 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)pPVar2,
               MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_0 = this_00;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_0 >> 0xc
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
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).registeredHotkeys != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListHoldHotkey____c);
    }
    pEVar8 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_1;
    if (pEVar8 == (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)0x0) {
      if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListHoldHotkey____c);
      }
      pPVar2 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
      pEVar8 = (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar8,(Object *)pPVar2,
                 MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_1_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_1 = pEVar8;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_1 >>
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar8,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
              );
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListHoldHotkey____c);
    }
    pEVar8 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_2;
    if (pEVar8 == (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)0x0) {
      if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListHoldHotkey____c);
      }
      pPVar2 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
      pEVar8 = (ExecuteEvents_EventFunction_1_IShortcutKeyUnRegister_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar8,(Object *)pPVar2,
                 MethodInfo__PlayerListHoldHotkey____c___OnDestroy_b__6_2_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_2 = pEVar8;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__6_2 >>
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
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar8,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
              );
    (this->fields).isActive = 0;
    (this->fields).registeredHotkeys = 0;
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey_OnDisable
               (PlayerListHoldHotkey *this,MethodInfo *method)

{
  if ((this->fields).isActive != 0) {
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
                    MethodInfo__PlayerListHoldHotkey____c___DestroyPlayerList_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__PlayerListHoldHotkey____c);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerListHoldHotkey____c);
    }
    this_00 = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__PlayerListHoldHotkey____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PlayerListHoldHotkey____c);
      }
      object = TypeInfo__PlayerListHoldHotkey____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__PlayerListHoldHotkey____c___DestroyPlayerList_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__PlayerListHoldHotkey____c->static_fields->__9__5_0 >>
                      0xc);
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isActive = 0;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey_Start
               (PlayerListHoldHotkey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey___Start_b__3_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerListHoldHotkey___Start_b__3_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).registeredHotkeys = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__PlayerListHoldHotkey___Start_b__3_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__PlayerListHoldHotkey___Start_b__3_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar3 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
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
    if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar3);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar4 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar5 = (longlong)(pLVar4->fields)._size;
    uVar6 = 0;
    if (0 < lVar5) {
      lVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar4 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar10 = (pLVar4->fields)._items;
        if (pTVar10 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar10->max_length <= uVar6) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar10->vector + lVar8 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,pEVar2,
                           (pMVar3->field7_0x38).rgctx_data[1].method);
        if (bVar11 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar7 < lVar5);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Start>b__3_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey__Start_b__3_0
               (PlayerListHoldHotkey *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListHoldHotkey__CreatePlayerList__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__PlayerListHoldHotkey__CreatePlayerList__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Start>b__3_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::PlayerListHoldHotkey::PlayerListHoldHotkey__Start_b__3_1
               (PlayerListHoldHotkey *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerListHoldHotkey__DestroyPlayerList__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__PlayerListHoldHotkey__DestroyPlayerList__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

