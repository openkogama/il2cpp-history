
/* Boolean Add(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Add
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((Object__Array *)(pLVar1->fields)._items,(Object *)behaviour,0,
                         (pLVar1->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (iVar2 != -1) {
        return 0;
      }
    }
    pLVar1 = (this->fields)._behaviours;
    if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      FUN_?(pLVar1,behaviour);
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean Contains(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Contains
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return 0;
    }
    iVar2 = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(pLVar1->fields)._items,(Object *)behaviour,0,
                       (pLVar1->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Contains_RTG__IGizmoBehaviour_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    return iVar2 != -1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* List`1[RTG.IGizmoBehaviour] GetBehavioursOfType(Type) */

List_1_RTG_IGizmoBehaviour_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType
          (GizmoBehaviourCollection *this,Type *behaviourType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Add_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      pLVar1 = (List_1_RTG_IGizmoBehaviour_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List__);
      return pLVar1;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._behaviours;
    if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      capacity = (pLVar1->fields)._size;
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>)
      ;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                (this_00,capacity,
                 MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
      pLVar2 = (List_1_System_Object_ *)(this->fields)._behaviours;
      if (pLVar2 != (List_1_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
        pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)((List_1_RTG_IGizmoBehaviour___Fields *)&pLVar2->fields)->_version <<
                     0x20);
        uStack_9 = 0;
        LStack_10._8_8_ = pLStack_8;
        LStack_10._current = (Object *)0x0;
        uStack_4 = 0;
        pLStack_8 = &LStack_10;
        LStack_10._list = pLVar2;
code_?:
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                          );
        pOVar12 = LStack_10._current;
        if (bVar11 == 0) {
          return (List_1_RTG_IGizmoBehaviour_ *)this_00;
        }
        if (LStack_10._current != (Object *)0x0) {
          pTVar13 = (Type *)FUN_?(&((LStack_10._current)->klass->_0).byval_arg);
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (pTVar13 == behaviourType) goto code_?;
          if (pTVar13 != (Type *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pLVar1 = (List_1_RTG_IGizmoBehaviour_ *)(*pcVar14)();
  return pLVar1;
code_?:
  cVar15 = (*(pTVar13->klass->vtable).IsSubclassOf.methodPtr)
                    (pTVar13,behaviourType,(pTVar13->klass->vtable).IsSubclassOf.method);
  if (cVar15 != '\0') {
code_?:
    if (this_00 ==
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) goto code_?;
    FUN_?(this_00,pOVar12);
  }
  goto code_?;
}


/* List`1[System.Object] GetBehavioursOfType[Object]() */

List_1_System_Object_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetBehavioursOfType_1
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(method);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      pvVar2 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      pLVar3 = (List_1_System_Object_ *)FUN_?(pvVar2);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
                 (method->field7_0x38).rgctx_data[1].method);
      return pLVar3;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this->fields)._behaviours;
    if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
      capacity = (pLVar1->fields)._size;
      pvVar2 = ((method->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
                 *)FUN_?(pvVar2);
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
      List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
                (this_00,capacity,(method->field7_0x38).rgctx_data[2].method);
      pvVar2 = (method->field7_0x38).rgctx_data[3].rgctxDataDummy;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pvVar2 == (void *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar5 = FUN_?(pvVar2,1);
        plVar4 = (longlong *)FUN_?(lVar5 + 0x20);
      }
      pLVar3 = (List_1_System_Object_ *)(this->fields)._behaviours;
      if (pLVar3 != (List_1_System_Object_ *)0x0) {
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
                      (uint)((List_1_RTG_IGizmoBehaviour___Fields *)&pLVar3->fields)->_version <<
                     0x20);
        uStack_12 = 0;
        LStack_13._8_8_ = pLStack_11;
        LStack_13._current = (Object *)0x0;
        uStack_7 = 0;
        pLStack_11 = &LStack_13;
        LStack_13._list = pLVar3;
code_?:
        bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>__MoveNext__
                          );
        pOVar15 = LStack_13._current;
        if (bVar14 == 0) {
          return (List_1_System_Object_ *)this_00;
        }
        if (LStack_13._current != (Object *)0x0) {
          plVar16 = (longlong *)FUN_?(&((LStack_13._current)->klass->_0).byval_arg);
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          if (plVar16 == plVar4) goto code_?;
          if (plVar16 != (longlong *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  pLVar3 = (List_1_System_Object_ *)(*pcVar17)();
  return pLVar3;
code_?:
  cVar18 = (**(code **)(*plVar16 + 0x288))(plVar16,plVar4,*(undefined8 *)(*plVar16 + 0x290));
  if (cVar18 != '\0') {
code_?:
    if (this_00 ==
        (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
         *)0x0) goto code_?;
    pvVar2 = (method->field7_0x38).rgctx_data[5].rgctxDataDummy;
    pvVar19 = (method->field7_0x38).rgctx_data[4].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar19 + 0x135) & 1) == 0) {
      pvVar19 = (void *)FUN_?(pvVar19);
    }
    uVar20 = FUN_?(pOVar15,pvVar19);
    FUN_?(this_00,uVar20,pvVar2);
  }
  goto code_?;
}


/* IEnumerator`1[RTG.IGizmoBehaviour] GetEnumerator() */

IEnumerator_1_RTG_IGizmoBehaviour_ *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetEnumerator
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 == (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_RTG_IGizmoBehaviour_ *)(*pcVar2)();
    return pIVar3;
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
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  lStack_11 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator_1_RTG_IGizmoBehaviour_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                         ,&uStack_13);
  return pIVar3;
}


/* IGizmoBehaviour GetFirstBehaviourOfType(Type) */

IGizmoBehaviour *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_GetFirstBehaviourOfType
          (GizmoBehaviourCollection *this,Type *behaviourType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = GizmoBehaviourCollection_GetBehavioursOfType(this,behaviourType,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return (IGizmoBehaviour *)0x0;
    }
    pIVar2 = (pLVar1->fields)._items;
    if (pIVar2 != (IGizmoBehaviour__Array *)0x0) {
      if ((int)pIVar2->max_length == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pIVar4 = (IGizmoBehaviour *)(*pcVar3)();
        return pIVar4;
      }
      return pIVar2->vector[0];
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pIVar4 = (IGizmoBehaviour *)(*pcVar3)();
  return pIVar4;
}


/* Object GetFirstBehaviourOfType[Object]() */

Object * Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::
         GizmoBehaviourCollection_GetFirstBehaviourOfType_1
                   (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if ((method->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(method);
  }
  pLVar1 = GizmoBehaviourCollection_GetBehavioursOfType_1
                     (this,((method->field7_0x38).rgctx_data)->method);
  if (pLVar1 != (List_1_System_Object_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      return (Object *)0x0;
    }
    pOVar2 = (pLVar1->fields)._items;
    if (pOVar2 != (Object__Array *)0x0) {
      if ((int)pOVar2->max_length == 0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pOVar4 = (Object *)(*pcVar3)();
        return pOVar4;
      }
      return pOVar2->vector[0];
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pOVar4 = (Object *)(*pcVar3)();
  return pOVar4;
}


/* Boolean Remove(IGizmoBehaviour) */

bool Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_Remove
               (GizmoBehaviourCollection *this,IGizmoBehaviour *behaviour,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
  ;
  this_00 = (List_1_System_Object_ *)(this->fields)._behaviours;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((this_00->fields)._items,(Object *)behaviour,0,(this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__Remove_RTG__IGizmoBehaviour_
                        ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return 0;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt(this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* IEnumerator System.Collections.IEnumerable.GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::
GizmoBehaviourCollection_System_Collections_IEnumerable_GetEnumerator
          (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 == (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
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
  uStack_9 = (pLVar1->fields)._version;
  uStack_10 = 0;
  lStack_11 = (ulonglong)uStack_9 << 0x20;
  uStack_5._0_4_ = SUB84(pLVar1,0);
  uStack_5._4_4_ = (undefined4)((ulonglong)pLVar1 >> 0x20);
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_5 = pLVar1;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::IGizmoBehaviour>
                         ,&uStack_13);
  return pIVar3;
}


/* GizmoBehaviourCollection() */

void Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection__ctor
               (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_RTG_IGizmoBehaviour_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>);
  pvVar2 = MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__List_int_->klass->
           rgctx_data[3].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
    pvVar2 = (void *)FUN_?(pvVar2);
  }
  pIVar3 = (IGizmoBehaviour__Array *)FUN_?(pvVar2,10);
  (pLVar1->fields)._items = pIVar3;
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
  (this->fields)._behaviours = pLVar1;
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
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::RTG::GizmoBehaviourCollection::GizmoBehaviourCollection_get_Count
                  (GizmoBehaviourCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<RTG::IGizmoBehaviour>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._behaviours;
  if (pLVar1 != (List_1_RTG_IGizmoBehaviour_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

