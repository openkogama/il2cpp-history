
/* Void Execute() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Execute
               (DuplicateObjectsAction *this,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__ObjectCloning);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_UnityEngine_GameObject_ *)0x0;
  uStack_2 = 0;
  pLVar3 = (this->fields)._rootsToDuplicate;
  if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
    if ((pLVar3->fields)._size == 0) {
      return;
    }
    if (*(int *)&(TypeInfo__RTG__ObjectCloning->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__RTG__ObjectCloning);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__RTG__ObjectCloning->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar4 = TypeInfo__RTG__ObjectCloning->static_fields;
    pLStack_1 = (List_1_UnityEngine_GameObject_ *)(pOVar4->_defaultConfig).Parent;
    uStack_2._0_4_ = (pOVar4->_defaultConfig).TransformFlags;
    uStack_2._4_4_ = (pOVar4->_defaultConfig).Layer;
    pLVar3 = (this->fields)._rootsToDuplicate;
    if (pLVar3 != (List_1_UnityEngine_GameObject_ *)0x0) {
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&OStack_6 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      OStack_6._8_8_ = (ulonglong)(uint)(pLVar3->fields)._version << 0x20;
      uStack_11 = 0;
      aLStack_12[0]._index = OStack_6.TransformFlags;
      aLStack_12[0]._version = OStack_6.Layer;
      aLStack_12[0]._current = (Object *)0x0;
      uStack_13 = 0;
      pLStack_14 = aLStack_12;
      pGVar15 = unaff_RBX;
      OStack_6.Parent = (Transform *)pLVar3;
      aLStack_12[0]._list = (List_1_System_Object_ *)pLVar3;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (aLStack_12,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                                ), unaff_RBX = (GameObject *)aLStack_12[0]._current, bVar16 != 0) {
        if ((GameObject *)aLStack_12[0]._current == (GameObject *)0x0) goto code_?;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            ((GameObject *)aLStack_12[0]._current,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (((GameObject__Fields *)((longlong)unaff_RBX + 0x10))->_).m_CachedPtr;
        if (pvVar17 == (void *)0x0) goto code_?;
        pcVar18 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0))
        goto code_?;
        pcRam_? = pcVar18;
        uVar19 = (*pcRam_?)(pvVar17);
        uStack_2 = CONCAT44(uVar19,(undefined4)uStack_2);
        if (this_00 == (Transform *)0x0) goto code_?;
        pLVar3 = (List_1_UnityEngine_GameObject_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                            (this_00,(MethodInfo *)0x0);
        lVar7 = uStack_2;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pLStack_1 >> 0xc);
          lVar20 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar20 + 0xADDR);
            puVar9 = (ulonglong *)(lVar20 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pLStack_1 = pLVar3;
        if (*(int *)&(TypeInfo__RTG__ObjectCloning->_1).field_0x1c == 0) {
          FUN_?();
        }
        lVar20 = uStack_2;
        uStack_2._0_4_ = (undefined4)lVar7;
        uStack_2._4_4_ = SUB84(lVar7,4);
        OStack_6.TransformFlags = (undefined4)uStack_2;
        OStack_6.Layer = uStack_2._4_4_;
        uStack_2 = lVar20;
        OStack_6.Parent = (Transform *)pLVar3;
        item = ObjectCloning::ObjectCloning_CloneHierarchy(unaff_RBX,&OStack_6,(MethodInfo *)0x0);
        pMVar21 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
        ;
        pLVar3 = (this->fields)._duplicateResult;
        if (pLVar3 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
        piVar22 = &(pLVar3->fields)._version;
        *piVar22 = *piVar22 + 1;
        pGVar23 = (pLVar3->fields)._items;
        uVar5 = (pLVar3->fields)._size;
        if (pGVar23 == (GameObject__Array *)0x0) goto code_?;
        pGVar15 = unaff_RBX;
        if (uVar5 < (uint)pGVar23->max_length) {
          (pLVar3->fields)._size = uVar5 + 1;
          FUN_?();
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)pLVar3,(Object *)item,
                     pMVar21->klass->rgctx_data[0xe].method);
        }
      }
      if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTUndoRedo>->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_01 = (RTUndoRedo *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTUndoRedo>__get_Get__);
      unaff_RBX = pGVar15;
      if (this_01 != (RTUndoRedo *)0x0) {
        RTUndoRedo::RTUndoRedo_RecordAction(this_01,(IUndoRedoAction *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
code_?:
  uVar24 = func_?(&UNK_?);
  FUN_?(uVar24);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RBX,(MethodInfo *)0x0);
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnRemovedFromUndoRedoStack() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::
     DuplicateObjectsAction_OnRemovedFromUndoRedoStack
               (DuplicateObjectsAction *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__)
    ;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._cleanupOnRemovedFromStack != 0) {
    pLVar1 = (this->fields)._duplicateResult;
    if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pLVar1->fields)._size != 0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = (List_1_System_Object_ *)pLVar1;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_11,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                               ), obj = LStack_11._current, bVar12 != 0) {
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
                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields)._duplicateResult;
      if (pLVar1 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      piVar13 = &(pLVar1->fields)._version;
      *piVar13 = *piVar13 + 1;
      length = (pLVar1->fields)._size;
      (pLVar1->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void Redo() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Redo
               (DuplicateObjectsAction *this,MethodInfo *method)

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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._duplicateResult != (List_1_UnityEngine_GameObject_ *)0x0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._duplicateResult;
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
                 ((ulonglong)
                  (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_8 = 0;
    LStack_1._8_8_ = pLStack_7;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_1;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), obj = LStack_1._current, bVar9 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = obj[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12);
        goto code_?;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pOVar10,1);
    }
    (this->fields)._cleanupOnRemovedFromStack = 0;
  }
  return;
}


/* Void Undo() */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_Undo
               (DuplicateObjectsAction *this,MethodInfo *method)

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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._duplicateResult != (List_1_UnityEngine_GameObject_ *)0x0) {
    LStack_1._list = (List_1_System_Object_ *)(this->fields)._duplicateResult;
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
                 ((ulonglong)
                  (uint)(((List_1_UnityEngine_GameObject_ *)LStack_1._list)->fields)._version <<
                 0x20);
    uStack_8 = 0;
    LStack_1._8_8_ = pLStack_7;
    LStack_1._current = (Object *)0x0;
    uStack_3 = 0;
    pLStack_7 = &LStack_1;
    while (bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_1,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                             ), obj = LStack_1._current, bVar9 != 0) {
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = obj[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
code_?:
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12);
        goto code_?;
      }
      pcRam_? = pcVar11;
      (*pcRam_?)(pOVar10,0);
    }
    (this->fields)._cleanupOnRemovedFromStack = 1;
  }
  return;
}


/* DuplicateObjectsAction(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction__ctor
               (DuplicateObjectsAction *this,List_1_UnityEngine_GameObject_ *rootsToDuplicate,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GameObjectEx);
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  bVar2 = iRam_? != 0;
  (this->fields)._duplicateResult = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._duplicateResult >> 0xc);
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
  if (*(int *)&(TypeInfo__RTG__GameObjectEx->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar1 = GameObjectEx::GameObjectEx_FilterParentsOnly_1
                     ((IEnumerable_1_UnityEngine_GameObject_ *)rootsToDuplicate,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._rootsToDuplicate = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* List`1[UnityEngine.GameObject] get_DuplicateResult() */

List_1_UnityEngine_GameObject_ *
Assembly-CSharp.dll::RTG::DuplicateObjectsAction::DuplicateObjectsAction_get_DuplicateResult
          (DuplicateObjectsAction *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  collection = (this->fields)._duplicateResult;
  this_00 = (List_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object___ctor_1
            ((List_1_System_Object_ *)this_00,(IEnumerable_1_System_Object_ *)collection,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
            );
  return this_00;
}

