
/* Void FilterParentsOnly(IEnumerable`1[UnityEngine.GameObject], List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_FilterParentsOnly
               (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,
               List_1_UnityEngine_GameObject_ *parents,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStack_1 = 0;
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    return;
  }
  if (parents == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar3 = &(parents->fields)._version;
  *piVar3 = *piVar3 + 1;
  length = (parents->fields)._size;
  (parents->fields)._size = 0;
  if (0 < length) {
    mscorlib.dll::System::Array::Array_Clear
              ((Array *)(parents->fields)._items,0,length,(MethodInfo *)0x0);
  }
  lStack_4 = FUN_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                            ,gameObjects);
  uStack_5 = 0;
  plStack_6 = &lStack_4;
code_?:
  do {
    if (lStack_4 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar7 == '\0') {
      if (*plStack_6 == 0) {
        return;
      }
      FUN_?(0,TypeInfo__System__IDisposable,*plStack_6);
      return;
    }
    if (lStack_4 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this = (GameObject *)FUN_?(0);
    pGStack_8 = this;
    if (this == (GameObject *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this,(MethodInfo *)0x0);
    lStack_1 = FUN_?(0,
                              TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                              ,gameObjects);
    uStack_9 = 0;
    plStack_10 = &lStack_1;
    do {
      do {
        if (lStack_1 == 0) {
code_?:
          FUN_?();
          FUN_?();
          goto code_?;
        }
        cVar7 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar7 == '\0') {
          if (lStack_1 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStack_1);
          }
          FUN_?(parents,this);
          goto code_?;
        }
        if (lStack_1 == 0) {
code_?:
          FUN_?();
          goto code_?;
        }
        this_01 = (GameObject *)FUN_?(0);
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
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_01 == (GameObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar11 = (this->fields)._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar11 = this_01 == this;
        }
      } while (bVar11);
      if (this_01 == (GameObject *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) {
        FUN_?();
        goto code_?;
      }
      bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                        (this_00,parent,(MethodInfo *)0x0);
    } while (bVar12 == 0);
    if (lStack_1 != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,lStack_1);
    }
  } while( true );
}


/* List`1[UnityEngine.GameObject] FilterParentsOnly(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_FilterParentsOnly_1
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStackX_20 = 0;
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    return pLVar1;
  }
  pvVar2 = MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_->klass
           ->rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pGVar3 = (GameObject__Array *)FUN_?(pvVar2,10);
  (pLVar1->fields)._items = pGVar3;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
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
  pLStack_8 = pLVar1;
  lStack_9 = FUN_?(0,
                            TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                            ,gameObjects);
  uStack_10 = 0;
  plStack_11 = &lStack_9;
code_?:
  do {
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar12)();
      return pLVar1;
    }
    cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    if (cVar13 == '\0') {
      if (*plStack_11 != 0) {
        FUN_?(0,TypeInfo__System__IDisposable,*plStack_11);
      }
      return pLVar1;
    }
    if (lStack_9 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this = (GameObject *)FUN_?(0);
    pGStack_14 = this;
    if (this == (GameObject *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this,(MethodInfo *)0x0);
    lStackX_20 = FUN_?(0,
                               TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                               ,gameObjects);
    uStack_15 = 0;
    plStack_16 = &lStackX_20;
    do {
      do {
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          if (lStackX_20 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
          }
          if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          FUN_?(pLVar1,this);
          goto code_?;
        }
        if (lStackX_20 == 0) {
code_?:
          FUN_?();
          goto code_?;
        }
        this_01 = (GameObject *)FUN_?(0);
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
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_01 == (GameObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar17 = (this->fields)._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar17 = this_01 == this;
        }
      } while (bVar17);
      if (this_01 == (GameObject *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_01,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) {
        FUN_?();
        goto code_?;
      }
      bVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                        (this_00,parent,(MethodInfo *)0x0);
    } while (bVar18 == 0);
    if (lStackX_20 != 0) {
      FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
    }
  } while( true );
}


/* List`1[UnityEngine.GameObject] GetAllChildren(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildren
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
  ;
  if (gameObject != (GameObject *)0x0) {
    if ((
        UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                   );
    }
    p_Var2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (gameObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
    if (p_Var2 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>
                                );
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                (this_00,(int32_t)p_Var2->max_length,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_)
      ;
      uVar2 = 0;
      pp_Var9 = p_Var2->vector;
      while( true ) {
        if ((int)p_Var2->max_length <= (int)uVar2) {
          return (List_1_UnityEngine_GameObject_ *)this_00;
        }
        if ((uint)p_Var2->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        this = (Component *)*pp_Var9;
        if (this == (Component *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (this->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        pcRam_? = pcVar3;
        pvVar5 = (void *)(*pcRam_?)(pvVar5);
        pGVar7 = (GameObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (pvVar5,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
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
        if (pGVar7 == (GameObject *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar8 = (gameObject->fields)._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar8 = pGVar7 == gameObject;
        }
        if (!bVar8) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this,(MethodInfo *)0x0);
          if (this_00 ==
              (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
               *)0x0) break;
          FUN_?(this_00);
        }
        uVar2 = uVar2 + 1;
        pp_Var9 = pp_Var9 + 1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
  return pLVar4;
}


/* List`1[UnityEngine.GameObject] GetAllChildrenAndSelf(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildrenAndSelf
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
  ;
  if (gameObject != (GameObject *)0x0) {
    if ((
        UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                   );
    }
    p_Var6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_4
                       (gameObject,0,((pMVar1->field7_0x38).rgctx_data)->method);
    if (p_Var6 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
              *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>)
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                (this,(int32_t)p_Var6->max_length,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_)
      ;
      uVar2 = 0;
      pp_Var12 = p_Var6->vector;
      while( true ) {
        if ((int)p_Var6->max_length <= (int)uVar2) {
          return (List_1_UnityEngine_GameObject_ *)this;
        }
        if ((uint)p_Var6->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        pOVar5 = (Object *)*pp_Var12;
        if (pOVar5 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar6 = pOVar5[1].klass;
        if (pOVar6 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar5,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar3 = (code *)swi(3);
          pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
          return pLVar4;
        }
        pcRam_? = pcVar3;
        gcHandlePtr = (void *)(*pcRam_?)(pOVar6);
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (gcHandlePtr,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
        ;
        if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                     *)0x0) break;
        piVar8 = &(this->fields)._version;
        *piVar8 = *piVar8 + 1;
        pRVar9 = (this->fields)._items;
        if (pRVar9 == (RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__Array *)0x0)
        break;
        uVar10 = (this->fields)._size;
        if (uVar10 < (uint)pRVar9->max_length) {
          (this->fields)._size = uVar10 + 1;
          FUN_?(pRVar9,(longlong)(int)uVar10,pOVar5);
          uVar2 = uVar2 + 1;
          pp_Var12 = pp_Var12 + 1;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)this,pOVar5,pMVar1->klass->rgctx_data[0xe].method);
          uVar2 = uVar2 + 1;
          pp_Var12 = pp_Var12 + 1;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_GameObject_ *)(*pcVar3)();
  return pLVar4;
}


/* Void GetAllChildrenAndSelf(GameObject, List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetAllChildrenAndSelf_1
               (GameObject *gameObject,List_1_UnityEngine_GameObject_ *childrenAndSelf,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (childrenAndSelf != (List_1_UnityEngine_GameObject_ *)0x0) {
    piVar1 = &(childrenAndSelf->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (childrenAndSelf->fields)._size;
    (childrenAndSelf->fields)._size = 0;
    if (0 < iVar2) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(childrenAndSelf->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__RTG__GameObjectEx);
    }
    pLVar3 = TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren;
    if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
      piVar1 = &(pLVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pLVar3->fields)._size;
      (pLVar3->fields)._size = 0;
      if (0 < iVar2) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pMVar4 = 
      void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
      ;
      pLVar3 = TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren;
      if (gameObject != (GameObject *)0x0) {
        if ((
            void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       void_MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>_System__Collections__Generic__List<UnityEngine::Transform>_
                       );
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_7
                  (gameObject,0,(List_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3
                   ,(pMVar4->field7_0x38).rgctx_data[1].method);
        LStack_5._list =
             (List_1_System_Object_ *)
             TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren;
        if ((List_1_UnityEngine_Transform_ *)LStack_5._list != (List_1_UnityEngine_Transform_ *)0x0
           ) {
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)(((List_1_UnityEngine_Transform_ *)LStack_5._list)->fields)._version
                       << 0x20);
          uStack_12 = 0;
          LStack_5._8_8_ = pLStack_11;
          LStack_5._current = (Object *)0x0;
          uStack_7 = 0;
          pLStack_11 = &LStack_5;
          while( true ) {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_5,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Transform>__MoveNext__
                               );
            obj = LStack_5._current;
            if (bVar13 == 0) {
              return;
            }
            if (LStack_5._current == (Object *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar14 = obj[1].klass;
            if (pOVar14 == (Object__Class *)0x0) break;
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16);
code_?:
              FUN_?();
              break;
            }
            pcRam_? = pcVar15;
            gcHandlePtr = (void *)(*pcRam_?)(pOVar14);
            item = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (gcHandlePtr,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
            pMVar4 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
            ;
            piVar1 = &(childrenAndSelf->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar17 = (childrenAndSelf->fields)._items;
            uVar6 = (childrenAndSelf->fields)._size;
            if (pGVar17 == (GameObject__Array *)0x0) goto code_?;
            if (uVar6 < (uint)pGVar17->max_length) {
              (childrenAndSelf->fields)._size = uVar6 + 1;
              FUN_?(pGVar17,(longlong)(int)uVar6,item);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        ((List_1_System_Object_ *)childrenAndSelf,item,
                         pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
          FUN_?();
          FUN_?();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* GameObjectType GetGameObjectType(GameObject) */

GameObjectType__Enum
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetGameObjectType
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = GameObjectEx_GetMesh(gameObject,(MethodInfo *)0x0);
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
  if (pMVar1 != (Mesh *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) {
      return GameObjectType__Enum_Mesh;
    }
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar2 = GameObjectEx_GetSprite(gameObject,(MethodInfo *)0x0);
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
  if (pSVar2 != (Sprite *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar2->fields)._.m_CachedPtr != (void *)0x0) {
      return GameObjectType__Enum_Sprite;
    }
  }
  if (gameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    GVar4 = (*pcVar3)();
    return GVar4;
  }
  pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__Camera_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Camera>__
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
  if (pOVar5 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar5[1].klass != (Object__Class *)0x0) {
      return GameObjectType__Enum_Camera;
    }
  }
  pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__Light_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Light>__
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
  if (pOVar5 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar5[1].klass != (Object__Class *)0x0) {
      return GameObjectType__Enum_Light;
    }
  }
  pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
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
  if (pOVar5 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    GVar4 = GameObjectType__Enum_ParticleSystem;
    if (pOVar5[1].klass == (Object__Class *)0x0) {
      GVar4 = GameObjectType__Enum_Empty;
    }
    return GVar4;
  }
  return GameObjectType__Enum_Empty;
}


/* Mesh GetMesh(GameObject) */

Mesh * Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMesh
                 (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (Mesh *)(*pcVar1)();
    return pMVar2;
  }
  this = (MeshFilter *)
         UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                   (gameObject,
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
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
  if (this != (MeshFilter *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this->fields)._._.m_CachedPtr != (void *)0x0) {
      pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                         (this,(MethodInfo *)0x0);
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
      if (pMVar2 != (Mesh *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar2->fields)._.m_CachedPtr != (void *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MeshFilter>_UnityEngine__MeshFilter_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this == (MeshFilter *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            pMVar2 = (Mesh *)(*pcVar1)();
            return pMVar2;
          }
          pvVar3 = (this->fields)._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            pMVar2 = (Mesh *)(*pcVar1)();
            return pMVar2;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar1 = (code *)swi(3);
            pMVar2 = (Mesh *)(*pcVar1)();
            return pMVar2;
          }
          pcRam_? = pcVar1;
          plVar5 = (longlong *)(*pcRam_?)(pvVar3);
          goto 
          UnityEngine_CoreModule_dll_UnityEngine_Bindings_Unmarshal_Unmarshal_UnmarshalUnityObject;
        }
      }
    }
  }
  this_00 = (SkinnedMeshRenderer *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (gameObject,
                       UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
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
  if (this_00 == (SkinnedMeshRenderer *)0x0) {
    return (Mesh *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((this_00->fields)._._._.m_CachedPtr == (void *)0x0) {
    return (Mesh *)0x0;
  }
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::SkinnedMeshRenderer::
           SkinnedMeshRenderer_get_sharedMesh(this_00,(MethodInfo *)0x0);
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
  if (pMVar2 == (Mesh *)0x0) {
    return (Mesh *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((pMVar2->fields)._.m_CachedPtr == (void *)0x0) {
    return (Mesh *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SkinnedMeshRenderer>_UnityEngine__SkinnedMeshRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (SkinnedMeshRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (Mesh *)(*pcVar1)();
    return pMVar2;
  }
  pvVar3 = (this_00->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pMVar2 = (Mesh *)(*pcVar1)();
    return pMVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pMVar2 = (Mesh *)(*pcVar1)();
    return pMVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
UnityEngine_CoreModule_dll_UnityEngine_Bindings_Unmarshal_Unmarshal_UnmarshalUnityObject:
  pMVar6 = 
  UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
  ;
  if ((
      UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__Mesh_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Mesh>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pMVar2 = (Mesh *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pMVar2 != (Mesh *)0x0) {
        return pMVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pMVar2 = (Mesh *)(*pcVar1)();
      return pMVar2;
    }
  }
  return (Mesh *)0x0;
}


/* List`1[UnityEngine.GameObject] GetMeshObjectsInHierarchy(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMeshObjectsInHierarchy
          (GameObject *root,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
  }
  else {
    capacity = (pLVar1->fields)._size;
    this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        gameObject = LStack_9._current;
        if (bVar10 == 0) {
          return (List_1_UnityEngine_GameObject_ *)this;
        }
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar11 = GameObjectEx_GetMesh((GameObject *)gameObject,(MethodInfo *)0x0);
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
        if (pMVar11 == (Mesh *)0x0) {
          bVar12 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar12 = (pMVar11->fields)._.m_CachedPtr != (void *)0x0;
        }
      } while (!bVar12);
      if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) break;
      FUN_?(this,gameObject);
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar13)();
  return pLVar1;
}


/* Renderer GetMeshRenderer(GameObject) */

Renderer *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetMeshRenderer
          (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (Renderer *)(*pcVar1)();
    return pRVar2;
  }
  pRVar2 = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (gameObject,
                      UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
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
  if (pRVar2 != (Renderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pRVar2->fields)._._.m_CachedPtr != (void *)0x0) {
      return pRVar2;
    }
  }
  pMVar3 = 
  UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
  ;
  if ((
      UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__SkinnedMeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SkinnedMeshRenderer>__
                 );
  }
  uStack_4 = 0;
  pvVar5 = (pMVar3->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (pvVar5 == (void *)0x0) {
    type = (Type *)0x0;
  }
  else {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar6 = FUN_?(pvVar5,1);
    type = (Type *)FUN_?(lVar6 + 0x20);
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentFastPath
            (gameObject,type,&uStack_4,(MethodInfo *)0x0);
  return (Renderer *)0x0;
}


/* List`1[UnityEngine.GameObject] GetRoots(IEnumerable`1[UnityEngine.GameObject]) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetRoots
          (IEnumerable_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_GameObject_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  if (gameObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    return pLVar1;
  }
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  this = (HashSet_1_System_Object_ *)
         FUN_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            (this,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  plVar2 = (longlong *)
           FUN_?(0,
                         TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::GameObject>
                         ,gameObjects);
code_?:
  if (plVar2 != (longlong *)0x0) {
    cVar3 = FUN_?(0);
    if (cVar3 == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plVar2);
      }
      if (this != (HashSet_1_System_Object_ *)0x0) {
        if (0 < (this->fields)._lastIndex) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this->fields)._slots,0,(this->fields)._lastIndex,(MethodInfo *)0x0);
          pIVar4 = (this->fields)._buckets;
          if (pIVar4 == (Int32__Array *)0x0) goto code_?;
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this->fields)._buckets,0,(int32_t)pIVar4->max_length,
                     (MethodInfo *)0x0);
          (this->fields)._count = 0;
          (this->fields)._lastIndex = 0;
          (this->fields)._freeList = -1;
        }
        piVar5 = &(this->fields)._version;
        *piVar5 = *piVar5 + 1;
        return pLVar1;
      }
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar6)();
      return pLVar1;
    }
    if (plVar2 != (longlong *)0x0) {
      lVar7 = *plVar2;
      uVar8 = 0;
      if (*(ushort *)(lVar7 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_GameObject___Class **)
               (*(longlong *)(lVar7 + 0xb0) + (ulonglong)uVar8 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>) {
            puVar9 = (undefined8 *)
                      ((longlong)*(int *)(*(longlong *)(lVar7 + 0xb0) + 8 + (ulonglong)uVar8 * 0x10)
                       * 0x10 + 0x138 + lVar7);
            goto code_?;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar7 + 0x12e));
      }
      puVar9 = (undefined8 *)
                FUN_?(plVar2,
                              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::GameObject>
                              ,0);
code_?:
      pGVar10 = (GameObject *)(*(code *)*puVar9)(plVar2);
      if (pGVar10 != (GameObject *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar10,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                              (pTVar11,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar11,(MethodInfo *)0x0);
            if (this != (HashSet_1_System_Object_ *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar6)();
  return pLVar1;
code_?:
  bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Contains
                    (this,(Object *)pGVar10,
                     MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                    );
  if (bVar12 == 0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              (this,(Object *)pGVar10,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
               ->klass->rgctx_data[0x15].method);
    if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    FUN_?(pLVar1,pGVar10);
  }
  goto code_?;
}


/* Sprite GetSprite(GameObject) */

Sprite * Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetSprite
                   (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pSVar2 = (Sprite *)(*pcVar1)();
    return pSVar2;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (gameObject,
                   UnityEngine__SpriteRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::SpriteRenderer>__
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
  if (obj == (Object *)0x0) {
    return (Sprite *)0x0;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (obj[1].klass == (Object__Class *)0x0) {
    return (Sprite *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::SpriteRenderer>_UnityEngine__SpriteRenderer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Sprite_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Sprite>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    pOVar3 = obj[1].klass;
    if (pOVar3 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      pSVar2 = (Sprite *)(*pcVar1)();
      return pSVar2;
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      pSVar2 = (Sprite *)(*pcVar1)();
      return pSVar2;
    }
    pcRam_? = pcVar1;
    plVar5 = (longlong *)(*pcRam_?)(pOVar3);
    pMVar6 = 
    UnityEngine__Sprite_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Sprite>_void__
    ;
    if ((
        UnityEngine__Sprite_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Sprite>_void__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__Sprite_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Sprite>_void__
                   );
    }
    if (plVar5 != (longlong *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((ulonglong)plVar5 & 1) == 0) {
        lVar7 = *plVar5;
      }
      else {
        lVar7 = FUN_?(plVar5);
      }
      pvVar8 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
        pvVar8 = (void *)FUN_?(pvVar8);
      }
      if (lVar7 != 0) {
        pSVar2 = (Sprite *)FUN_?(lVar7,pvVar8,in_R8,in_R9,unaff_RDI);
        if (pSVar2 != (Sprite *)0x0) {
          return pSVar2;
        }
        FUN_?(lVar7,pvVar8);
        pcVar1 = (code *)swi(3);
        pSVar2 = (Sprite *)(*pcVar1)();
        return pSVar2;
      }
    }
    return (Sprite *)0x0;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pSVar2 = (Sprite *)(*pcVar1)();
  return pSVar2;
}


/* List`1[UnityEngine.GameObject] GetSpriteObjectsInHierarchy(GameObject) */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_GetSpriteObjectsInHierarchy
          (GameObject *root,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
  }
  else {
    capacity = (pLVar1->fields)._size;
    this = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
            *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
    RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
    List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
              (this,capacity,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_int_);
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_8 = 0;
    LStack_9._8_8_ = pLStack_7;
    LStack_9._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_9;
    LStack_9._list = (List_1_System_Object_ *)pLVar1;
    while( true ) {
      do {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                          );
        gameObject = LStack_9._current;
        if (bVar10 == 0) {
          return (List_1_UnityEngine_GameObject_ *)this;
        }
        if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar11 = GameObjectEx_GetSprite((GameObject *)gameObject,(MethodInfo *)0x0);
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
        if (pSVar11 == (Sprite *)0x0) {
          bVar12 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar12 = (pSVar11->fields)._.m_CachedPtr != (void *)0x0;
        }
      } while (!bVar12);
      if (this == (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                   *)0x0) break;
      FUN_?(this,gameObject);
    }
  }
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  pLVar1 = (List_1_UnityEngine_GameObject_ *)(*pcVar13)();
  return pLVar1;
}


/* Boolean HierarchyHasMesh(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasMesh
               (GameObject *root,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
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
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  LStack_1._list =
       (List_1_System_Object_ *)GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if ((List_1_UnityEngine_GameObject_ *)LStack_1._list == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_5 = 0;
  pLStack_9 = &LStack_1;
  do {
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                      );
    gameObject = LStack_1._current;
    if (bVar3 == 0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar11 = GameObjectEx_GetMesh((GameObject *)gameObject,(MethodInfo *)0x0);
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
    if (pMVar11 == (Mesh *)0x0) {
      bVar12 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = (pMVar11->fields)._.m_CachedPtr != (void *)0x0;
    }
  } while (!bVar12);
  return 1;
}


/* Boolean HierarchyHasObjectsOfType(GameObject, GameObjectType) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasObjectsOfType
               (GameObject *root,GameObjectType__Enum typeFlags,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  LStack_1._list =
       (List_1_System_Object_ *)GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if ((List_1_UnityEngine_GameObject_ *)LStack_1._list == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_5 = 0;
  pLStack_9 = &LStack_1;
  do {
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                      );
    gameObject = LStack_1._current;
    if (bVar3 == 0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    GVar11 = GameObjectEx_GetGameObjectType((GameObject *)gameObject,(MethodInfo *)0x0);
  } while ((typeFlags & GVar11) == 0);
  return 1;
}


/* Boolean HierarchyHasSprite(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_HierarchyHasSprite
               (GameObject *root,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
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
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  LStack_1._list =
       (List_1_System_Object_ *)GameObjectEx_GetAllChildrenAndSelf(root,(MethodInfo *)0x0);
  if ((List_1_UnityEngine_GameObject_ *)LStack_1._list == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)
                (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version << 0x20
               );
  uStack_10 = 0;
  LStack_1._8_8_ = pLStack_9;
  LStack_1._current = (Object *)0x0;
  uStack_5 = 0;
  pLStack_9 = &LStack_1;
  do {
    bVar3 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                      );
    gameObject = LStack_1._current;
    if (bVar3 == 0) {
      return 0;
    }
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar11 = GameObjectEx_GetSprite((GameObject *)gameObject,(MethodInfo *)0x0);
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
    if (pSVar11 == (Sprite *)0x0) {
      bVar12 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar12 = (pSVar11->fields)._.m_CachedPtr != (void *)0x0;
    }
  } while (!bVar12);
  return 1;
}


/* Boolean IsRTGAppObject(GameObject) */

bool Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_IsRTGAppObject
               (GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__IRLDApplication_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRLDApplication>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (gameObject != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (gameObject,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetRoot
                         (pTVar1,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
        if (this != (GameObject *)0x0) {
          pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (this,
                              RTG__IRLDApplication_MethodInfo__UnityEngine__GameObject__GetComponent<RTG::IRLDApplication>__
                             );
          return pOVar2 != (Object *)0x0;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void SetHierarchyWorldScaleByPivot(GameObject, Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_SetHierarchyWorldScaleByPivot
               (GameObject *root,Vector3 *worldScale,Vector3 *pivotPoint,MethodInfo *method)

{
  if (worldScale->x == 0.0) {
    worldScale->x = 0.0001;
  }
  if (worldScale->y == 0.0) {
    worldScale->y = 0.0001;
  }
  if (worldScale->z == 0.0) {
    worldScale->z = 0.0001;
  }
  if ((root == (GameObject *)0x0) ||
     (transform = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (root,(MethodInfo *)0x0), transform == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  pvVar3 = (transform->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3);
  uStack_5._0_4_ = pivotPoint->x;
  uStack_5._4_4_ = pivotPoint->y;
  fVar6 = VStack_2.x - (float)uStack_5;
  fVar7 = VStack_2.z - pivotPoint->z;
  fVar8 = VStack_2.y - uStack_5._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_9 = 0.0;
  pvVar3 = (transform->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,&uStack_5);
  VStack_2.x = worldScale->x;
  VStack_2.y = worldScale->y;
  VStack_2.z = worldScale->z;
  TransformEx::TransformEx_SetWorldScale(transform,&VStack_2,(MethodInfo *)0x0);
  uVar10 = worldScale->x;
  uVar11 = worldScale->y;
  VStack_2.x = pivotPoint->x;
  VStack_2.y = pivotPoint->y;
  fStack_9 = (_UNK_? / fStack_9) * worldScale->z * fVar7 + pivotPoint->z;
  uStack_5 = CONCAT44((_UNK_? / uStack_5._4_4_) * (float)uVar11 * fVar8 + VStack_2.y,
                       (_UNK_? / (float)uStack_5) * (float)uVar10 * fVar6 + VStack_2.x);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (transform->fields)._._.m_CachedPtr;
  if (pvVar3 != (void *)0x0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(pvVar3,&uStack_5);
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)transform,(MethodInfo *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetStatic(GameObject, Boolean, Boolean) */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx_SetStatic
               (GameObject *gameObject,bool isStatic,bool affectChildren,MethodInfo *method)

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
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (affectChildren == 0) {
    if (gameObject == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_isStatic
              (gameObject,isStatic,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar1 = GameObjectEx_GetAllChildrenAndSelf(gameObject,(MethodInfo *)0x0);
    if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
      FUN_?();
code_?:
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2);
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)gameObject,(MethodInfo *)0x0);
code_?:
      FUN_?();
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_10 = 0;
    LStack_11._8_8_ = pLStack_9;
    LStack_11._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_9 = &LStack_11;
    LStack_11._list = (List_1_System_Object_ *)pLVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_11,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), gameObject = (GameObject *)LStack_11._current, bVar12 != 0) {
      if ((GameObject *)LStack_11._current == (GameObject *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar13 = (((GameObject__Fields *)((longlong)gameObject + 0x10))->_).m_CachedPtr;
      if (pvVar13 == (void *)0x0) goto code_?;
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
      goto code_?;
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar13,isStatic);
    }
  }
  return;
}


/* GameObjectEx() */

void Assembly-CSharp.dll::RTG::GameObjectEx::GameObjectEx__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_UnityEngine_Transform_ *)
         FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  TypeInfo__RTG__GameObjectEx->static_fields->_transformsChildren = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__RTG__GameObjectEx->static_fields >> 0xc);
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

