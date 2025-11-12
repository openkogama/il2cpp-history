
/* Boolean ContainsHandler(BackButtonHandler) */

bool Assembly-CSharp.dll::BackButtonManager::BackButtonManager_ContainsHandler
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0x20;
  while( true ) {
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar3 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    if ((pLVar3->fields)._size <= (int)uVar1) {
      return 0;
    }
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar3 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar3 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) break;
    if ((uint)(pLVar3->fields)._size <= uVar1) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pBVar6 = (pLVar3->fields)._items;
    if (pBVar6 == (BackButtonManager_BackButtonSubscriber__Array *)0x0) break;
    if ((uint)pBVar6->max_length <= uVar1) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    lVar7 = *(longlong *)((longlong)pBVar6->vector + lVar2 + -0x20);
    if (lVar7 == 0) break;
    pBVar8 = *(BackButtonHandler **)(lVar7 + 0x10);
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
    if (handler == (BackButtonHandler *)0x0 && pBVar8 == (BackButtonHandler *)0x0) {
      return 1;
    }
    if (handler == (BackButtonHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pBVar8 == (BackButtonHandler *)0x0) break;
      bVar9 = (pBVar8->fields)._._._._.m_CachedPtr == (void *)0x0;
    }
    else if (pBVar8 == (BackButtonHandler *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar9 = (handler->fields)._._._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar9 = pBVar8 == handler;
    }
    if (bVar9) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 8;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void PostDestroyCleanup() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_PostDestroyCleanup
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__subscribers_are_never_unsubs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    args = (Object__Array *)FUN_?(TypeInfo__System__Object,1);
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      aiStackX_10[0] = (pLVar1->fields)._size;
      lVar2 = FUN_?(uRam_?,aiStackX_10);
      if (args != (Object__Array *)0x0) {
        if ((lVar2 != 0) &&
           (lVar2 = FUN_?(lVar2,(args->klass->_0).element_class), lVar2 == 0)) {
          uVar3 = FUN_?();
          FUN_?(uVar3,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FUN_?(args,0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarningFormat
                  (StringLiteral__0__subscribers_are_never_unsubs,args,(MethodInfo *)0x0);
        pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
        if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
          length = (pLVar1->fields)._size;
          piVar5 = &(pLVar1->fields)._version;
          *piVar5 = *piVar5 + 1;
          (pLVar1->fields)._size = 0;
          if (length < 1) {
            return;
          }
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Subscribe(BackButtonHandler, KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Subscribe
               (BackButtonHandler *handler,KogamaControls__Enum button,KeyState__Enum state,
               UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BackButtonManager__BackButtonSubscriber);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Add_BackButtonManager__BackButtonSubscriber_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = BackButtonManager_ContainsHandler(handler,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BackButtonManager);
    }
    this = TypeInfo__BackButtonManager->static_fields->subscribers;
    item = (Object *)FUN_?(TypeInfo__BackButtonManager__BackButtonSubscriber);
    item[1].klass = (Object__Class *)handler;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)(item + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    *(KogamaControls__Enum *)&item[1].monitor = button;
    *(KeyState__Enum *)((longlong)&item[1].monitor + 4) = state;
    item[2].klass = (Object__Class *)callback;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)(item + 2) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pMVar8 = 
    MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__Add_BackButtonManager__BackButtonSubscriber_
    ;
    if (this != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      piVar9 = &(this->fields)._version;
      *piVar9 = *piVar9 + 1;
      pBVar10 = (this->fields)._items;
      if (pBVar10 != (BackButtonManager_BackButtonSubscriber__Array *)0x0) {
        uVar2 = (this->fields)._size;
        if ((uint)pBVar10->max_length <= uVar2) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this,item,pMVar8->klass->rgctx_data[0xe].method);
          return;
        }
        (this->fields)._size = uVar2 + 1;
        FUN_?(pBVar10,(longlong)(int)uVar2,item);
        return;
      }
    }
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  return;
}


/* Void Unsubscribe(BackButtonHandler) */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Unsubscribe
               (BackButtonHandler *handler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size - 1;
  if (0 < (int)index) {
    lVar3 = (longlong)(int)index;
    lVar4 = lVar3 * 8 + 0x20;
    do {
      if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      if (pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0)
      goto code_?;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pBVar5 = (pLVar1->fields)._items;
      if (pBVar5 == (BackButtonManager_BackButtonSubscriber__Array *)0x0) goto code_?;
      if ((uint)pBVar5->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pBVar5->vector + lVar4 + -0x20);
      if (lVar6 == 0) goto code_?;
      pBVar7 = *(BackButtonHandler **)(lVar6 + 0x10);
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
      if (handler == (BackButtonHandler *)0x0 && pBVar7 == (BackButtonHandler *)0x0) {
code_?:
        if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
        if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                    );
          return;
        }
        goto code_?;
      }
      if (handler == (BackButtonHandler *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pBVar7 == (BackButtonHandler *)0x0) goto code_?;
        bVar8 = (pBVar7->fields)._._._._.m_CachedPtr == (void *)0x0;
      }
      else if (pBVar7 == (BackButtonHandler *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar8 = (handler->fields)._._._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar8 = pBVar7 == handler;
      }
      if (bVar8) goto code_?;
      index = index - 1;
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -8;
    } while (0 < lVar3);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    if ((pLVar1->fields)._size < 1) {
      return;
    }
    if (*(int *)&(TypeInfo__BackButtonManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
    if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
      iVar2 = (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pBVar4 = (pLVar1->fields)._items;
      if (pBVar4 != (BackButtonManager_BackButtonSubscriber__Array *)0x0) {
        if ((uint)pBVar4->max_length <= iVar2 - 1U) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pBVar5 = pBVar4->vector[(longlong)iVar2 + -1];
        if (pBVar5 != (BackButtonManager_BackButtonSubscriber *)0x0) {
          iVar2 = (pBVar5->fields).state;
          if (iVar2 == 0) {
            KVar6 = (pBVar5->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KVar6,(MethodInfo *)0x0);
          }
          else if (iVar2 == 1) {
            KVar6 = (pBVar5->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown(KVar6,(MethodInfo *)0x0);
          }
          else {
            if (iVar2 != 2) {
              return;
            }
            KVar6 = (pBVar5->fields).button;
            if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl(KVar6,(MethodInfo *)0x0);
          }
          if (bVar7 != 0) {
            pUVar8 = (pBVar5->fields).callback;
            if (pUVar8 == (UnityAction *)0x0) goto code_?;
            (*(pUVar8->fields)._._.invoke_impl)
                      ((pUVar8->fields)._._.method_code,(pUVar8->fields)._._.method);
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


/* BackButtonManager() */

void Assembly-CSharp.dll::BackButtonManager::BackButtonManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BackButtonManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_BackButtonManager_BackButtonSubscriber_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>
                      );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__List__
            );
  TypeInfo__BackButtonManager->static_fields->subscribers = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__BackButtonManager->static_fields >> 0xc);
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
  return;
}

