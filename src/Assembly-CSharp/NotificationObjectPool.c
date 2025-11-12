
/* Void AddToActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_AddToActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ActiveInstances;
  if (pLVar1 != (List_1_Notification_ *)0x0) {
    FUN_?(pLVar1,notification);
    if ((this->fields).OnActiveInstancesChanged != (Action *)0x0) {
      pAVar2 = (this->fields).OnActiveInstancesChanged;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Awake
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields).Elements;
  if ((List_1_NotificationObjectPoolElement_ *)LStack_1._list ==
      (List_1_NotificationObjectPoolElement_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_NotificationObjectPoolElement_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<NotificationObjectPoolElement>__MoveNext__
                      );
    pOVar11 = LStack_1._current;
    if (bVar10 == 0) {
      return;
    }
    iVar12 = 0;
    if (LStack_1._current == (Object *)0x0) break;
    for (; iVar12 < *(int *)&pOVar11[1].monitor; iVar12 = iVar12 + 1) {
      original = pOVar11[1].klass;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_00 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,parent,0,
                           Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification__UnityEngine__Transform__bool_
                          );
      if (this_00 == (Component *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      this_00[1].monitor = (MonitorData *)this;
      func_?(&this_00[1].monitor);
      if ((this->fields).Instances == (List_1_Notification_ *)0x0) {
        FUN_?();
        goto code_?;
      }
      FUN_?();
    }
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CanInstantiateNotificationType(NotificationType) */

bool Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_CanInstantiateNotificationType
               (NotificationObjectPool *this,NotificationType__Enum notificationType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<Notification>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__NotificationObjectPool____c__DisplayClass6_0);
  if (object != (Object *)0x0) {
    *(NotificationType__Enum *)&object[1].klass = notificationType;
    pLVar1 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
             (this->fields).Instances;
    pPVar2 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Predicate<Notification>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (pPVar2,object,
               MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__0_Notification_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
      EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__Find
                        (pLVar1,(Predicate_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                 *)pPVar2,
                         MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (EVar3 != (EntryPreProcessor_AllocSize)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(longlong *)((longlong)EVar3 + 0x10) != 0) {
          return 1;
        }
      }
      pLVar1 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
               (this->fields).ActiveInstances;
      pPVar2 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Predicate<Notification>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (pPVar2,object,
                 MethodInfo__NotificationObjectPool____c__DisplayClass6_0___CanInstantiateNotificationType_b__1_Notification_
                 ,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
        EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                EntryPreProcessor+AllocSize]::
                List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__Find
                          (pLVar1,(Predicate_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                   *)pPVar2,
                           MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (EVar3 == (EntryPreProcessor_AllocSize)0x0) {
          bVar4 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar4 = *(longlong *)((longlong)EVar3 + 0x10) != 0;
        }
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Notification CreateTempPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_CreateTempPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationObjectPoolElement_MethodInfo__System__Linq__Enumerable__First<NotificationObjectPoolElement>_System__Collections__Generic__IEnumerable<NotificationObjectPoolElement>__System__Func<NotificationObjectPoolElement,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<NotificationObjectPoolElement,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationObjectPool____c__DisplayClass11_0___CreateTempPanel_b__0_NotificationObjectPoolElement_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationObjectPool____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Couldn_t_find_temp_panel_type_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__NotificationObjectPool____c__DisplayClass11_0);
  if (object != (Object *)0x0) {
    *(NotificationType__Enum *)&object[1].klass = type;
    source = (this->fields).Elements;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Func<NotificationObjectPoolElement,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__NotificationObjectPool____c__DisplayClass11_0___CreateTempPanel_b__0_NotificationObjectPoolElement_
               ,(MethodInfo *)0x0);
    pOVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_First_4
                       ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                        NotificationObjectPoolElement_MethodInfo__System__Linq__Enumerable__First<NotificationObjectPoolElement>_System__Collections__Generic__IEnumerable<NotificationObjectPoolElement>__System__Func<NotificationObjectPoolElement,_bool>_
                       );
    if (pOVar1 != (Object *)0x0) {
      original = pOVar1[1].klass;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pNVar2 = (Notification *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          Notification_MethodInfo__UnityEngine__Object__Instantiate<Notification>_Notification_
                         );
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
      if (pNVar2 != (Notification *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pNVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
          bVar3 = iRam_? != 0;
          (pNVar2->fields).pool = this;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(pNVar2->fields).pool >> 0xc);
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
          NotificationObjectPool_AddToActiveInstances(this,pNVar2,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pNVar2,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            return pNVar2;
          }
          goto code_?;
        }
      }
      EStack_8.klass = (Enum__Class *)TypeInfo__MV__Common__NotificationType;
      uStack_9 = *(undefined4 *)&object[1].klass;
      EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar10 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Couldn_t_find_temp_panel_type_,pSVar10,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
      return (Notification *)0x0;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pNVar2 = (Notification *)(*pcVar11)();
  return pNVar2;
}


/* Notification GetPanel(NotificationType) */

Notification *
Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_GetPanel
          (NotificationObjectPool *this,NotificationType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Notification>__FindIndex_System__Predicate<Notification>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__NotificationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<Notification>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__0_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__1_Notification_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationObjectPool____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_notification_type);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__NotificationObjectPool____c__DisplayClass9_0);
  if (object != (Object *)0x0) {
    *(NotificationType__Enum *)&object[1].klass = type;
    pLVar1 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
             (this->fields).Instances;
    pPVar2 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Predicate<Notification>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (pPVar2,object,
               MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__0_Notification_
               ,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
      EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__Find
                        (pLVar1,(Predicate_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                 *)pPVar2,
                         MethodInfo__System__Collections__Generic__List<Notification>__Find_System__Predicate<Notification>_
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (EVar3 != (EntryPreProcessor_AllocSize)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(longlong *)((longlong)EVar3 + 0x10) != 0) {
          pLVar1 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                   (this->fields).Instances;
          pPVar2 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Predicate<Notification>);
          mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                    (pPVar2,object,
                     MethodInfo__NotificationObjectPool____c__DisplayClass9_0___GetPanel_b__1_Notification_
                     ,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
            index = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR
                    ::EntryPreProcessor+AllocSize]::
                    List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__FindIndex
                              (pLVar1,(Predicate_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_
                                       *)pPVar2,
                               MethodInfo__System__Collections__Generic__List<Notification>__FindIndex_System__Predicate<Notification>_
                              );
            pLVar4 = (this->fields).Instances;
            if (pLVar4 != (List_1_Notification_ *)0x0) {
              if ((uint)(pLVar4->fields)._size <= index) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar5 = (code *)swi(3);
                pNVar6 = (Notification *)(*pcVar5)();
                return pNVar6;
              }
              pNVar7 = (pLVar4->fields)._items;
              if (pNVar7 != (Notification__Array *)0x0) {
                if ((uint)pNVar7->max_length <= index) {
code_?:
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  pNVar6 = (Notification *)(*pcVar5)();
                  return pNVar6;
                }
                pNVar6 = pNVar7->vector[(int)index];
                if (pNVar6 != (Notification *)0x0) {
                  bVar8 = iRam_? != 0;
                  (pNVar6->fields).pool = this;
                  if (bVar8) {
                    uVar9 = (uint)((ulonglong)&(pNVar6->fields).pool >> 0xc);
                    puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar11 = *puVar10;
                      LOCK();
                      uVar12 = *puVar10;
                      if (uVar11 == uVar12) {
                        *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar11 != uVar12);
                  }
                  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pNVar6,(MethodInfo *)0x0);
                  if (this_00 != (GameObject *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (this_00,1,(MethodInfo *)0x0);
                    pLVar4 = (this->fields).Instances;
                    if (pLVar4 != (List_1_Notification_ *)0x0) {
                      if ((uint)(pLVar4->fields)._size <= index) goto code_?;
                      pNVar7 = (pLVar4->fields)._items;
                      if (pNVar7 != (Notification__Array *)0x0) {
                        if ((uint)pNVar7->max_length <= index) goto code_?;
                        NotificationObjectPool_AddToActiveInstances
                                  (this,pNVar7->vector[(int)index],(MethodInfo *)0x0);
                        pLVar4 = (this->fields).Instances;
                        if (pLVar4 != (List_1_Notification_ *)0x0) {
                          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                          List_1_System_Object__RemoveAt
                                    ((List_1_System_Object_ *)pLVar4,index,
                                     MethodInfo__System__Collections__Generic__List<Notification>__RemoveAt_int_
                                    );
                          return pNVar6;
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
      }
      EStack_13.klass = (Enum__Class *)TypeInfo__MV__Common__NotificationType;
      uStack_14 = *(undefined4 *)&object[1].klass;
      EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar15 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
      pSVar15 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Could_not_find_notification_type,pSVar15,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar15,(MethodInfo *)0x0);
      pNVar6 = NotificationObjectPool_CreateTempPanel
                          (this,*(NotificationType__Enum *)&object[1].klass,(MethodInfo *)0x0);
      return pNVar6;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pNVar6 = (Notification *)(*pcVar5)();
  return pNVar6;
}


/* Void RemoveFromActiveInstances(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_RemoveFromActiveInstances
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).ActiveInstances;
  if (this_00 != (List_1_Notification_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)notification,
               MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_);
    if ((this->fields).OnActiveInstancesChanged != (Action *)0x0) {
      pAVar1 = (this->fields).OnActiveInstancesChanged;
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Return(Notification) */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool_Return
               (NotificationObjectPool *this,Notification *notification,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((notification != (Notification *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)notification,(MethodInfo *)0x0),
     pGVar1 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
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
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 != '\0') {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)notification,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)notification,(MethodInfo *)0x0);
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar6 = (this->fields).ActiveInstances;
      if (pLVar6 != (List_1_Notification_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Remove
                  ((List_1_System_Object_ *)pLVar6,(Object *)notification,
                   MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                  );
        if ((this->fields).OnActiveInstancesChanged != (Action *)0x0) {
          pAVar7 = (this->fields).OnActiveInstancesChanged;
          (*(pAVar7->fields)._._.invoke_impl)
                    ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
        }
        pMVar8 = MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_;
        pLVar6 = (this->fields).Instances;
        if (pLVar6 != (List_1_Notification_ *)0x0) {
          pNVar9 = (pLVar6->fields)._items;
          piVar10 = &(pLVar6->fields)._version;
          *piVar10 = *piVar10 + 1;
          if (pNVar9 == (Notification__Array *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar11 = (pLVar6->fields)._size;
          if (uVar11 < (uint)pNVar9->max_length) {
            (pLVar6->fields)._size = uVar11 + 1;
          }
          else {
            uVar11 = (pLVar6->fields)._size;
            FUN_?(pLVar6,uVar11 + 1,
                          (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                          rgctxDataDummy,pNVar9,unaff_RDI);
            pNVar9 = (pLVar6->fields)._items;
            (pLVar6->fields)._size = uVar11 + 1;
            if (pNVar9 == (Notification__Array *)0x0) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((uint)pNVar9->max_length <= uVar11) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar12 = iRam_? != 0;
          pNVar9->vector[(int)uVar11] = notification;
          if (bVar12) {
            uVar11 = (uint)((ulonglong)(pNVar9->vector + (int)uVar11) >> 0xc);
            puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar14 = *puVar13;
              LOCK();
              uVar15 = *puVar13;
              if (uVar14 == uVar15) {
                *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
              }
              UNLOCK();
            } while (uVar14 != uVar15);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReturnAllExistingNotifications() */

void Assembly-CSharp.dll::NotificationObjectPool::
     NotificationObjectPool_ReturnAllExistingNotifications
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ActiveInstances;
  if (pLVar1 != (List_1_Notification_ *)0x0) {
    uVar2 = (pLVar1->fields)._size - 1;
    lVar3 = (longlong)(int)uVar2;
    if (-1 < (int)uVar2) {
      lVar4 = lVar3 * 8 + 0x20;
      do {
        pLVar1 = (this->fields).ActiveInstances;
        if (pLVar1 == (List_1_Notification_ *)0x0) goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pNVar6 = (pLVar1->fields)._items;
        if (pNVar6 == (Notification__Array *)0x0) goto code_?;
        if ((uint)pNVar6->max_length <= uVar2) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        NotificationObjectPool_Return
                  (this,*(Notification **)((longlong)pNVar6->vector + lVar4 + -0x20),
                   (MethodInfo *)0x0);
        uVar2 = uVar2 - 1;
        lVar4 = lVar4 + -8;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* NotificationObjectPool() */

void Assembly-CSharp.dll::NotificationObjectPool::NotificationObjectPool__ctor
               (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<NotificationObjectPoolElement>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Notification>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_NotificationObjectPoolElement_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<NotificationObjectPoolElement>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<NotificationObjectPoolElement>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).Elements = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Elements >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_Notification_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<Notification>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).Instances = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).Instances >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_Notification_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<Notification>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<Notification>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).ActiveInstances = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ActiveInstances >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
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


/* Int32 get_ActivateInstancesCount() */

int32_t Assembly-CSharp.dll::NotificationObjectPool::
        NotificationObjectPool_get_ActivateInstancesCount
                  (NotificationObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<Notification>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ActiveInstances;
  if (pLVar1 != (List_1_Notification_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

