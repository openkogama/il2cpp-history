
/* GameObject CreatePooledObject() */

GameObject *
Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_CreatePooledObject
          (ObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._sourceObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if ((this->fields)._pooledObjects == (List_1_UnityEngine_GameObject_ *)0x0)
  goto code_?;
  FUN_?();
  pTVar2 = (this->fields)._pooledParent;
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
  if (pTVar2 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (pTVar2 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar2,(this->fields)._pooledParent,0,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    pGVar1 = (GameObject *)(*pcVar3)();
    return pGVar1;
  }
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar1,0,(MethodInfo *)0x0);
  return pGVar1;
}


/* GameObject GetPooledObject() */

GameObject *
Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_GetPooledObject
          (ObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._pooledObjects;
  if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    ppLStack_7 = (List_1_UnityEngine_GameObject_ **)
                  ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    lStack_9 = (longlong)ppLStack_7;
    uStack_3 = 0;
    ppLStack_7 = &pLStack_10;
    pLStack_10 = pLVar1;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&pLStack_10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), bVar11 != 0) {
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
    }
    if ((this->fields)._growMode == 0) {
      return (GameObject *)0x0;
    }
    pLVar1 = (this->fields)._pooledObjects;
    if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
      uVar2 = (pLVar1->fields)._size;
      ObjectPool_Grow(this,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._pooledObjects;
      if (pLVar1 != (List_1_UnityEngine_GameObject_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          pGVar13 = (GameObject *)(*pcVar12)();
          return pGVar13;
        }
        pGVar14 = (pLVar1->fields)._items;
        if (pGVar14 != (GameObject__Array *)0x0) {
          if ((uint)pGVar14->max_length <= uVar2) {
            FUN_?();
            pcVar12 = (code *)swi(3);
            pGVar13 = (GameObject *)(*pcVar12)();
            return pGVar13;
          }
          pGVar13 = pGVar14->vector[(int)uVar2];
          if (pGVar13 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar13,1,(MethodInfo *)0x0);
            pTVar15 = (this->fields)._pooledParent;
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
            if (pTVar15 == (Transform *)0x0) {
              return pGVar13;
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pTVar15->fields)._._.m_CachedPtr == (void *)0x0) {
              return pGVar13;
            }
            pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar13,(MethodInfo *)0x0);
            if (pTVar15 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar15,(this->fields)._pooledParent,0,(MethodInfo *)0x0);
              return pGVar13;
            }
          }
        }
      }
    }
  }
  FUN_?();
  FUN_?();
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pGVar13 = (GameObject *)(*pcVar12)();
  return pGVar13;
}


/* Void Grow() */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_Grow(ObjectPool *this,MethodInfo *method)

{
  if ((this->fields)._growMode == 0) {
    return;
  }
  if ((this->fields)._growMode == 2) {
    iVar1 = 0;
    if ((this->fields)._growAmount < 1) {
      return;
    }
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = (this->fields)._sourceObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar2 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar2,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      if ((this->fields)._pooledObjects == (List_1_UnityEngine_GameObject_ *)0x0)
      goto DAT_?;
      FUN_?();
      pTVar3 = (this->fields)._pooledParent;
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
      if (pTVar3 == (Transform *)0x0) {
code_?:
        if (pGVar2 == (GameObject *)0x0) {
DAT_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar3->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
        if ((pGVar2 == (GameObject *)0x0) ||
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
        goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar3,(this->fields)._pooledParent,0,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      iVar1 = iVar1 + 1;
      if ((this->fields)._growAmount <= iVar1) {
        return;
      }
    } while( true );
  }
  if ((this->fields)._growMode != 1) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = (this->fields)._sourceObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if ((this->fields)._pooledObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pTVar3 = (this->fields)._pooledParent;
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
    if (pTVar3 != (Transform *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
        if ((pGVar2 == (GameObject *)0x0) ||
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (pTVar3,(this->fields)._pooledParent,0,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    if (pGVar2 != (GameObject *)0x0) {
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MarkAllAsUnused() */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_MarkAllAsUnused
               (ObjectPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)(this->fields)._pooledObjects;
  if ((List_1_UnityEngine_GameObject_ *)LStack_1._list == (List_1_UnityEngine_GameObject_ *)0x0) {
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
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_1,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                        );
      this_00 = LStack_1._current;
      if (bVar10 == 0) {
        return;
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
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((GameObject *)this_00 == (GameObject *)0x0) {
        bVar11 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar11 = (((GameObject__Fields *)((longlong)this_00 + 0x10))->_).m_CachedPtr != (void *)0x0;
      }
    } while (!bVar11);
    if ((GameObject *)this_00 == (GameObject *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)this_00,0,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MarkAsUnused(GameObject) */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_MarkAsUnused
               (ObjectPool *this,GameObject *gameObject,MethodInfo *method)

{
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
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((gameObject->fields)._.m_CachedPtr != (void *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (gameObject == (GameObject *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar2 = (gameObject->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  return;
}


/* Void SetPooledObjectsParent(Transform) */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_SetPooledObjectsParent
               (ObjectPool *this,Transform *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._pooledParent = parent;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields)._pooledParent >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  LStack_6._list = (List_1_System_Object_ *)(this->fields)._pooledObjects;
  if ((List_1_UnityEngine_GameObject_ *)LStack_6._list == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_8 >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_6._list)->fields)._version << 0x20
               );
  uStack_10 = 0;
  LStack_6._8_8_ = pLStack_9;
  LStack_6._current = (Object *)0x0;
  uStack_8 = 0;
  pLStack_9 = &LStack_6;
  while( true ) {
    do {
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        this_00 = LStack_6._current;
        if (bVar11 == 0) {
          return;
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
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((GameObject *)this_00 == (GameObject *)0x0) {
          bVar5 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar5 = (((GameObject__Fields *)((longlong)this_00 + 0x10))->_).m_CachedPtr != (void *)0x0
          ;
        }
      } while (!bVar5);
      if ((GameObject *)this_00 == (GameObject *)0x0) goto code_?;
      bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    } while (bVar11 != 0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        ((GameObject *)this_00,(MethodInfo *)0x0);
    if (this_01 == (Transform *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_01,parent,0,(MethodInfo *)0x0);
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* ObjectPool(GameObject, Int32, ObjectPool+GrowMode) */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool__ctor
               (ObjectPool *this,GameObject *sourceObject,int32_t numPooled,
               ObjectPool_GrowMode__Enum growMode,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                  ,sourceObject,CONCAT44(in_register_00000084,numPooled));
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._growMode = 2;
  (this->fields)._growAmount = 0x32;
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_->klass
           ->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pGVar3 = (GameObject__Array *)FUN_?(pvVar2,100);
  (pLVar1->fields)._items = pGVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  iVar9 = iRam_?;
  (this->fields)._pooledObjects = pLVar1;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields)._pooledObjects >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar8);
  }
  (this->fields)._sourceObject = sourceObject;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  (this->fields)._growMode = growMode;
  return;
}


/* Void set_GrowAmount(Int32) */

void Assembly-CSharp.dll::RTG::ObjectPool::ObjectPool_set_GrowAmount
               (ObjectPool *this,int32_t value,MethodInfo *method)

{
  iVar1 = 1;
  if (0 < value) {
    iVar1 = value;
  }
  (this->fields)._growAmount = iVar1;
  return;
}

