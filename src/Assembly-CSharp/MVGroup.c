
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGroup::MVGroup_AddChild
               (MVGroup *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Group_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_already_contains_child_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (child != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(child->klass->vtable).get_Position.methodPtr)
                       (aRStack_2,child,(child->klass->vtable).get_Position.method);
    pvVar3 = (void *)*puVar1;
    iVar4 = *(int32_t *)(puVar1 + 1);
    puVar1 = (undefined8 *)
             (*(child->klass->vtable).get_Rotation.methodPtr)
                       (aRStack_2,child,(child->klass->vtable).get_Rotation.method);
    pvVar5 = (void *)*puVar1;
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)(*(child->klass->vtable).get_Scale.methodPtr)(aRStack_2);
    this_00 = (this->fields)._.gameObject;
    this_01 = (child->fields).transform;
    pvVar7 = (void *)*puVar1;
    iVar8 = *(int32_t *)(puVar1 + 1);
    if (this_00 != (GameObject *)0x0) {
      value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_01,value,(MethodInfo *)0x0);
        aRStack_2[0]._length = iVar4;
        aRStack_2[0]._pointer._value = pvVar3;
        (*(child->klass->vtable).set_Position.methodPtr)
                  (child,aRStack_2,(child->klass->vtable).set_Position.method);
        aRStack_2[0]._pointer._value = pvVar5;
        aRStack_2[0]._8_8_ = uVar6;
        (*(child->klass->vtable).set_Rotation.methodPtr)
                  (child,aRStack_2,(child->klass->vtable).set_Rotation.method);
        aRStack_2[0]._length = iVar8;
        aRStack_2[0]._pointer._value = pvVar7;
        (*(child->klass->vtable).set_Scale.methodPtr)
                  (child,aRStack_2,(child->klass->vtable).set_Scale.method);
        this_02 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).children;
        if (this_02 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
          iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                            (this_02,(child->fields)._.id,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                             ->klass->rgctx_data[0x21].method);
          if (iVar4 < 0) {
            this_03 = (this->fields).children;
            if (this_03 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_03,(child->fields)._.id,
                       (Object *)child,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                       ->klass->rgctx_data[0x22].method);
          }
          else {
            iVar4 = (this->fields)._._.id;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_2[0]._pointer._value = (void *)0x0;
            aRStack_2[0]._length = 0;
            aRStack_2[0]._12_4_ = 0;
            pSVar9 = mscorlib.dll::System::Number::Number_FormatInt32
                               (iVar4,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            iVar4 = (child->fields)._.id;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                           );
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
            aRStack_2[0]._pointer._value = (void *)0x0;
            aRStack_2[0]._length = 0;
            aRStack_2[0]._12_4_ = 0;
            str3 = mscorlib.dll::System::Number::Number_FormatInt32
                             (iVar4,aRStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            pSVar9 = mscorlib.dll::System::String::String_Concat_6
                               (StringLiteral_Group_,pSVar9,StringLiteral_already_contains_child_,
                                str3,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar9,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient Clone(Int32, Int32, CloneBookkeeping,
   Dictionary`2[System.Int32,MVWorldObjectClient],
   Dictionary`2[System.Int32,RuntimePrototypeCubeModel]) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGroup::MVGroup_Clone
          (MVGroup *this,int32_t ownerActorNumber,int32_t cloneGroupId,
          CloneBookkeeping *cloneBookkeeping,
          Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
          Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *prototypes,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Sort_System__Comparison<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGroup____c___Clone_b__15_0_MVWorldObjectClient__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVWorldObjectClient::MVWorldObjectClient_Clone
                     ((MVWorldObjectClient *)this,ownerActorNumber,cloneGroupId,cloneBookkeeping,
                      worldObjects,prototypes,(MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__MVGroup)) {
      FUN_?(pMVar1);
code_?:
      FUN_?();
      goto code_?;
    }
  }
  this_00 = MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MVGroup____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = TypeInfo__MVGroup____c->static_fields->__9__15_0;
  if (this_01 == (Comparison_1_MVWorldObjectClient_ *)0x0) {
    if (*(int *)&(TypeInfo__MVGroup____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__MVGroup____c->static_fields->__9;
    this_01 = (Comparison_1_MVWorldObjectClient_ *)
              FUN_?(TypeInfo__System__Comparison<MVWorldObjectClient>);
    mscorlib.dll::System::Func`3[Object,Object,Int32]::Func_3_Object_Object_Int32___ctor
              ((Func_3_Object_Object_Int32_ *)this_01,(Object *)object,
               MethodInfo__MVGroup____c___Clone_b__15_0_MVWorldObjectClient__MVWorldObjectClient_,
               (MethodInfo *)0x0);
    TypeInfo__MVGroup____c->static_fields->__9__15_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__MVGroup____c->static_fields->__9__15_0 >> 0xc);
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
  if (this_00 == (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    pMVar1 = (MVWorldObjectClient *)(*pcVar8)();
    return pMVar1;
  }
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Sort_1
            ((List_1_System_Object_ *)this_00,(Comparison_1_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Sort_System__Comparison<MVWorldObjectClient>_
            );
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_9 >> 0xc);
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
  pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(this_00->fields)._version << 0x20);
  uStack_11 = 0;
  LStack_12._8_8_ = pLStack_10;
  LStack_12._current = (Object *)0x0;
  uStack_9 = 0;
  pLStack_10 = &LStack_12;
  LStack_12._list = (List_1_System_Object_ *)this_00;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_12,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar13 == 0) {
      return pMVar1;
    }
    if (pMVar1 == (MVWorldObjectClient *)0x0) break;
    if (LStack_12._current == (Object *)0x0) goto code_?;
    (*(LStack_12._current)->klass[2].vtable.Finalize.methodPtr)
              (LStack_12._current,(ulonglong)(uint)ownerActorNumber,
               (ulonglong)(uint)(pMVar1->fields)._.id,cloneBookkeeping,worldObjects,prototypes,
               (LStack_12._current)->klass[2].vtable.Finalize.method);
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar8 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar8)();
  return pMVar1;
}


/* Bounds ComputeBoundsForWOs(List`1[MVWorldObjectClient], BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeBoundsForWOs
                   (Bounds *__return_storage_ptr__,List_1_MVWorldObjectClient_ *woList,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (woList == (List_1_MVWorldObjectClient_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  if ((woList->fields)._size == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).x;
    fVar5 = (pVVar3->zeroVector).y;
    fVar6 = (pVVar3->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar3->zeroVector).x;
    fVar8 = (float)uVar7 * _UNK_?;
    fVar9 = (pVVar3->zeroVector).y * _UNK_?;
    fVar10 = (pVVar3->zeroVector).z * _UNK_?;
    (__return_storage_ptr__->m_Center).x = fVar4;
    (__return_storage_ptr__->m_Center).y = fVar5;
    (__return_storage_ptr__->m_Center).z = fVar6;
    (__return_storage_ptr__->m_Extents).x = fVar8;
    (__return_storage_ptr__->m_Extents).y = fVar9;
    (__return_storage_ptr__->m_Extents).z = fVar10;
  }
  else {
    pMVar11 = (woList->fields)._items;
    if (pMVar11 == (MVWorldObjectClient__Array *)0x0) goto code_?;
    if ((int)pMVar11->max_length == 0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      pBVar2 = (Bounds *)(*pcVar1)();
      return pBVar2;
    }
    pBVar2 = MVGroup_ComputeLocalChildBounds
                       (aBStack_12,pMVar11->vector[0],boundsContext,(MethodInfo *)0x0);
    lVar13 = 0x28;
    uStack_14._0_4_ = (pBVar2->m_Center).x;
    uStack_14._4_4_ = (pBVar2->m_Center).y;
    uVar15 = *(undefined8 *)&(pBVar2->m_Center).z;
    uVar16 = (pBVar2->m_Extents).y;
    uVar17 = (pBVar2->m_Extents).z;
    fStack_18 = (float)uVar15;
    fStack_19 = (float)((ulonglong)uVar15 >> 0x20);
    fStack_20 = (float)uVar16;
    fStack_21 = (float)uVar17;
    for (uVar22 = 1; (int)uVar22 < (woList->fields)._size; uVar22 = uVar22 + 1) {
      if ((uint)(woList->fields)._size <= uVar22) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        pBVar2 = (Bounds *)(*pcVar1)();
        return pBVar2;
      }
      pMVar11 = (woList->fields)._items;
      if (pMVar11 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if ((uint)pMVar11->max_length <= uVar22) goto code_?;
      pBVar2 = MVGroup_ComputeLocalChildBounds
                         (aBStack_12,
                          *(MVWorldObjectClient **)((longlong)pMVar11->vector + lVar13 + -0x20),
                          boundsContext,(MethodInfo *)0x0);
      fVar6 = (pBVar2->m_Center).x;
      fVar4 = (pBVar2->m_Center).y;
      fVar5 = (pBVar2->m_Center).z;
      fVar10 = (pBVar2->m_Extents).x;
      aBStack_12[0].m_Extents.y = (pBVar2->m_Extents).y;
      aBStack_12[0].m_Extents.z = (pBVar2->m_Extents).z;
      fVar23 = fVar6 - fVar10;
      fVar24 = fVar5 - aBStack_12[0].m_Extents.z;
      fVar9 = fVar4 - aBStack_12[0].m_Extents.y;
      fVar8 = (float)uStack_14 - fStack_19;
      if (fVar23 <= (float)uStack_14 - fStack_19) {
        fVar8 = fVar23;
      }
      fVar25 = uStack_14._4_4_ - fStack_20;
      if (fVar9 <= uStack_14._4_4_ - fStack_20) {
        fVar25 = fVar9;
      }
      fVar26 = fStack_18 - fStack_21;
      if (fVar24 <= fStack_18 - fStack_21) {
        fVar26 = fVar24;
      }
      fVar27 = (float)uStack_14 + fStack_19;
      if ((float)uStack_14 + fStack_19 <= fVar23) {
        fVar27 = fVar23;
      }
      fVar23 = uStack_14._4_4_ + fStack_20;
      if (uStack_14._4_4_ + fStack_20 <= fVar9) {
        fVar23 = fVar9;
      }
      fVar9 = fStack_18 + fStack_21;
      if (fStack_18 + fStack_21 <= fVar24) {
        fVar9 = fVar24;
      }
      fVar27 = (fVar27 - fVar8) * _UNK_?;
      fVar24 = (fVar23 - fVar25) * _UNK_?;
      fVar23 = (fVar9 - fVar26) * _UNK_?;
      fVar4 = aBStack_12[0].m_Extents.y + fVar4;
      fVar5 = aBStack_12[0].m_Extents.z + fVar5;
      fVar10 = fVar10 + fVar6;
      fVar9 = (fVar8 + fVar27) - fVar27;
      fVar6 = (fVar25 + fVar24) - fVar24;
      fStack_18 = (fVar26 + fVar23) - fVar23;
      if (fVar10 <= fVar9) {
        fVar9 = fVar10;
      }
      if (fVar4 <= fVar6) {
        fVar6 = fVar4;
      }
      if (fVar5 <= fStack_18) {
        fStack_18 = fVar5;
      }
      fVar27 = fVar8 + fVar27 + fVar27;
      fVar24 = fVar25 + fVar24 + fVar24;
      fVar23 = fVar26 + fVar23 + fVar23;
      if (fVar27 <= fVar10) {
        fVar27 = fVar10;
      }
      if (fVar24 <= fVar4) {
        fVar24 = fVar4;
      }
      if (fVar23 <= fVar5) {
        fVar23 = fVar5;
      }
      fStack_19 = (fVar27 - fVar9) * _UNK_?;
      fStack_20 = (fVar24 - fVar6) * _UNK_?;
      fStack_21 = (fVar23 - fStack_18) * _UNK_?;
      fStack_18 = fStack_18 + fStack_21;
      uStack_14 = CONCAT44(fVar6 + fStack_20,fVar9 + fStack_19);
      lVar13 = lVar13 + 8;
    }
    (__return_storage_ptr__->m_Center).x = (float)uStack_14;
    (__return_storage_ptr__->m_Center).y = uStack_14._4_4_;
    *(ulonglong *)&(__return_storage_ptr__->m_Center).z = CONCAT44(fStack_19,fStack_18);
    (__return_storage_ptr__->m_Extents).y = fStack_20;
    (__return_storage_ptr__->m_Extents).z = fStack_21;
  }
  return __return_storage_ptr__;
}


/* Bounds ComputeLocalChildBounds(MVWorldObjectClient, BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_ComputeLocalChildBounds
                   (Bounds *__return_storage_ptr__,MVWorldObjectClient *wo,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if ((wo == (MVWorldObjectClient *)0x0) || (obj = (wo->fields).transform, obj == (Transform *)0x0))
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BStack_6.m_Center.x = 0.0;
  BStack_6.m_Center.y = 0.0;
  BStack_6.m_Center.z = 0.0;
  BStack_6.m_Extents.x = 0.0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_7 = 0;
  uStack_8 = 0;
  pvVar4 = (obj->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_7);
  uVar5 = BStack_6._8_8_;
  uStack_9 = uStack_7;
  uStack_10 = uStack_8;
  BStack_6.m_Center.z = VStack_3.z;
  uVar11 = BStack_6._8_8_;
  BStack_12.m_Center.x = BStack_6.m_Center.x;
  BStack_12.m_Center.y = BStack_6.m_Center.y;
  BStack_6.m_Center.z = (float)uVar5;
  BStack_6.m_Extents.x = SUB84(uVar5,4);
  BStack_12.m_Center.z = BStack_6.m_Center.z;
  BStack_12.m_Extents.x = BStack_6.m_Extents.x;
  BStack_6.m_Center.x = VStack_3.x;
  BStack_6.m_Center.y = VStack_3.y;
  MStack_13.m00 = 0.0;
  MStack_13.m10 = 0.0;
  MStack_13.m20 = 0.0;
  MStack_13.m30 = 0.0;
  MStack_13.m01 = 0.0;
  MStack_13.m11 = 0.0;
  MStack_13.m21 = 0.0;
  MStack_13.m31 = 0.0;
  MStack_13.m02 = 0.0;
  MStack_13.m12 = 0.0;
  MStack_13.m22 = 0.0;
  MStack_13.m32 = 0.0;
  MStack_13.m03 = 0.0;
  MStack_13.m13 = 0.0;
  MStack_13.m23 = 0.0;
  MStack_13.m33 = 0.0;
  pcVar1 = pcRam_?;
  BStack_6._8_8_ = uVar11;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Bounds *)(*pcVar1)();
    return pBVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&BStack_6,&BStack_12,&uStack_9,&MStack_13);
  puVar14 = (undefined8 *)
           (*(wo->klass->vtable).GetLocalBounds.methodPtr)(&BStack_6,wo,(ulonglong)boundsContext);
  BStack_12.m_Center._0_8_ = *puVar14;
  BStack_12._8_8_ = puVar14[1];
  BStack_12.m_Extents._4_8_ = puVar14[2];
  MStack_15.m00 = MStack_13.m00;
  MStack_15.m10 = MStack_13.m10;
  MStack_15.m20 = MStack_13.m20;
  MStack_15.m30 = MStack_13.m30;
  MStack_15.m01 = MStack_13.m01;
  MStack_15.m11 = MStack_13.m11;
  MStack_15.m21 = MStack_13.m21;
  MStack_15.m31 = MStack_13.m31;
  MStack_15.m02 = MStack_13.m02;
  MStack_15.m12 = MStack_13.m12;
  MStack_15.m22 = MStack_13.m22;
  MStack_15.m32 = MStack_13.m32;
  MStack_15.m03 = MStack_13.m03;
  MStack_15.m13 = MStack_13.m13;
  MStack_15.m23 = MStack_13.m23;
  MStack_15.m33 = MStack_13.m33;
  pBVar2 = MathFunctions::MathFunctions_FastAABBTransform
                     (&BStack_6,&MStack_15,&BStack_12,(MethodInfo *)0x0);
  fVar16 = (pBVar2->m_Center).y;
  uVar5 = *(undefined8 *)&(pBVar2->m_Center).z;
  fVar17 = (pBVar2->m_Extents).y;
  fVar18 = (pBVar2->m_Extents).z;
  (__return_storage_ptr__->m_Center).x = (pBVar2->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar16;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar5;
  (__return_storage_ptr__->m_Extents).y = fVar17;
  (__return_storage_ptr__->m_Extents).z = fVar18;
  return __return_storage_ptr__;
}


/* Void CreateGroup() */

void Assembly-CSharp.dll::MVGroup::MVGroup_CreateGroup(MVGroup *this,MethodInfo *method)

{
  piVar1 = &(this->fields)._.interactionFlags;
  *piVar1 = *piVar1 | 0x82101;
  return;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVGroup::MVGroup_DeSelect(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.selected != 0) {
    (this->fields)._.selected = 0;
    (*(this->klass->vtable).OnSelectedChanged.methodPtr)
              (this,0,(this->klass->vtable).OnSelectedChanged.method);
  }
  LStack_1._list = (List_1_System_Object_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if ((List_1_MVWorldObjectClient_ *)LStack_1._list == (List_1_MVWorldObjectClient_ *)0x0) {
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
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MVWorldObjectClient_ *)LStack_1._list)->fields)._version
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    (*(code *)(LStack_1._current)->klass[3].vtable.Equals.method)
              (LStack_1._current,(LStack_1._current)->klass[3].vtable.Finalize.methodPtr);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectClient GetChild(Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVGroup::MVGroup_GetChild(MVGroup *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).children;
  pMStackX_8 = (MVWorldObjectClient *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,woID,(Object **)&pMStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    return pMStackX_8;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar1)();
  return pMVar2;
}


/* Int32 GetGroupAbove(Int32, Int32, InteractionFlags) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetGroupAbove
                  (int32_t currentParent,int32_t leaf,InteractionFlags__Enum returnParentIfHasFlags,
                  MethodInfo *method)

{
  uVar1 = CONCAT44(in_register_00000084,returnParentIfHasFlags);
  while( true ) {
    iVar2 = leaf;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
         (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
        ((pMVar4->fields).worldNetwork == (WorldNetwork *)0x0)) ||
       (pMVar5 = (((pMVar4->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar5 == (MVWorldObjectClientManagerNetwork *)0x0)) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar6 = (pMVar5->fields)._.worldObjects;
    pOStack_7 = (Object *)0x0;
    if (pDVar6 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      iVar2 = (*pcVar8)();
      return iVar2;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar2,&pOStack_7,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pOStack_7 == (Object *)0x0) break;
    leaf = *(int *)((longlong)&pOStack_7[1].klass + 4);
    if (leaf == -1) {
      return -1;
    }
    if (uVar1 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 == (MVGameControllerBase *)0x0) ||
          (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
         (((pMVar4->fields).worldNetwork == (WorldNetwork *)0x0 ||
          (pMVar5 = (((pMVar4->fields).worldNetwork)->fields)._.worldObjectClientManager,
          pMVar5 == (MVWorldObjectClientManagerNetwork *)0x0)))) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar6 = (pMVar5->fields)._.worldObjects;
      pOStack_9 = (Object *)0x0;
      if (pDVar6 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        iVar2 = (*pcVar8)();
        return iVar2;
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,leaf,&pOStack_9,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pOStack_9 == (Object *)0x0) break;
      if (((ulonglong)pOStack_9[0x11].monitor & uVar1) == uVar1) {
        return leaf;
      }
    }
    if (currentParent == leaf) {
      return iVar2;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  iVar2 = (*pcVar8)();
  return iVar2;
}


/* HashSet`1[System.Int32] GetHierarchyWorldObjectIDs() */

HashSet_1_System_Int32_ *
Assembly-CSharp.dll::MVGroup::MVGroup_GetHierarchyWorldObjectIDs(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  if (pHVar1 != (HashSet_1_System_Int32_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__AddIfNotPresent
              (pHVar1,(this->fields)._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data
               [0x15].method);
    pLVar2 = MVGroup_get_Children(this,(MethodInfo *)0x0);
    if (pLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
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
                   ((ulonglong)(uint)(pLVar2->fields)._version << 0x20);
      uStack_9 = 0;
      LStack_10._8_8_ = pLStack_8;
      LStack_10._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_8 = &LStack_10;
      LStack_10._list = (List_1_System_Object_ *)pLVar2;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_10,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar11 == 0) {
          return pHVar1;
        }
        if ((MVGroup *)LStack_10._current == (MVGroup *)0x0) break;
        pMVar12 = (MVGroup__Class *)(LStack_10._current)->klass;
        bVar13 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((((pMVar12->_1).naturalAligment < bVar13) ||
            ((MVGroup__Class *)(pMVar12->_1).typeHierarchy[(ulonglong)bVar13 - 1] != TypeInfo__MVGroup
            )) || ((MVGroup *)LStack_10._current == (MVGroup *)0x0)) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__AddIfNotPresent
                    (pHVar1,(((MVGroup__Fields *)((longlong)LStack_10._current + 0x10))->_)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                     rgctx_data[0x15].method);
        }
        else {
          bVar13 = (TypeInfo__MVGroup->_1).naturalAligment;
          if ((((pMVar12->_1).naturalAligment < bVar13) ||
              ((MVGroup__Class *)(pMVar12->_1).typeHierarchy[(ulonglong)bVar13 - 1] !=
               TypeInfo__MVGroup)) || ((MVGroup *)LStack_10._current == (MVGroup *)0x0))
          goto code_?;
          this_00 = (MVGroup *)0x0;
          if ((MVGroup__Class *)
              (((MVGroup__Class *)(LStack_10._current)->klass)->_1).typeHierarchy
              [(ulonglong)(TypeInfo__MVGroup->_1).naturalAligment - 1] == TypeInfo__MVGroup) {
            this_00 = (MVGroup *)LStack_10._current;
          }
          other = MVGroup_GetHierarchyWorldObjectIDs(this_00,(MethodInfo *)0x0);
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__UnionWith
                    (pHVar1,(IEnumerable_1_System_Int32_ *)other,
                     MethodInfo__System__Collections__Generic__HashSet<int>__UnionWith_System__Collections__Generic__IEnumerable<int>_
                    );
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar14 = (code *)swi(3);
  pHVar1 = (HashSet_1_System_Int32_ *)(*pcVar14)();
  return pHVar1;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGroup::MVGroup_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGroup *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  woList = MVGroup_get_Children(this,(MethodInfo *)0x0);
  pBVar1 = MVGroup_ComputeBoundsForWOs(&BStack_2,woList,boundsContext,(MethodInfo *)0x0);
  fVar3 = (pBVar1->m_Center).y;
  uVar4 = *(undefined8 *)&(pBVar1->m_Center).z;
  fVar5 = (pBVar1->m_Extents).y;
  fVar6 = (pBVar1->m_Extents).z;
  (__return_storage_ptr__->m_Center).x = (pBVar1->m_Center).x;
  (__return_storage_ptr__->m_Center).y = fVar3;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar4;
  (__return_storage_ptr__->m_Extents).y = fVar5;
  (__return_storage_ptr__->m_Extents).z = fVar6;
  return __return_storage_ptr__;
}


/* Int32 GetParentBelow(Int32, Int32) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow
                  (int32_t parentId,int32_t childId,MethodInfo *method)

{
  aIStackX_10[0].m_value = childId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,childId,(MethodInfo *)0x0);
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,parentId,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObjectClient *)0x0) {
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_childId_is_not_valid__Id_is__,pSVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
    }
    else if ((pMVar2->fields)._.groupId != -1) {
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        if ((pMVar3->fields)._.id == (pMVar2->fields)._.groupId) {
          return (pMVar2->fields)._.id;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
          pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (pMVar1,(pMVar2->fields)._.groupId,(MethodInfo *)0x0);
          while( true ) {
            if ((pMVar2 == (MVWorldObjectClient *)0x0) || ((pMVar2->fields)._.groupId == -1)) {
              return -1;
            }
            if (pMVar3 == (MVWorldObjectClient *)0x0) break;
            if ((pMVar3->fields)._.id == (pMVar2->fields)._.groupId) {
              return (pMVar2->fields)._.id;
            }
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar1 == (MVWorldObjectClientManager *)0x0) break;
            pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar1,(pMVar2->fields)._.groupId,(MethodInfo *)0x0);
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          iVar6 = (*pcVar5)();
          return iVar6;
        }
      }
      goto code_?;
    }
    return -1;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Int32 GetParentBelow(MVWorldObjectClient, MVWorldObjectClient) */

int32_t Assembly-CSharp.dll::MVGroup::MVGroup_GetParentBelow_1
                  (MVWorldObjectClient *parent,MVWorldObjectClient *child,MethodInfo *method)

{
  while( true ) {
    if ((child == (MVWorldObjectClient *)0x0) || ((child->fields)._.groupId == -1)) {
      return -1;
    }
    if (parent == (MVWorldObjectClient *)0x0) break;
    if ((parent->fields)._.id == (child->fields)._.groupId) {
      return (child->fields)._.id;
    }
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this == (MVWorldObjectClientManager *)0x0) break;
    child = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this,(child->fields)._.groupId,(MethodInfo *)0x0);
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Initialize(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.previewOwnerProfileId != 0) {
    (*(this->klass->vtable).AddPreviewBox.methodPtr)
              (this,(this->klass->vtable).AddPreviewBox.method);
    piVar1 = &(this->fields)._.interactionFlags;
    *piVar1 = *piVar1 | 0x20000;
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).children;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                             ),
        pDVar2 ==
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iStack_13 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_14 = (undefined4)uStack_5;
    uStack_15 = uStack_5._4_4_;
    uStack_4 = 0;
    aplStack_16[0] = (longlong *)0x0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_14;
    while (lVar8 = CONCAT44(uStack_15,uStack_14), lVar8 != 0) {
      if (iStack_13 != *(int *)(lVar8 + 0x2c)) goto code_?;
      do {
        if (lVar8 == 0) goto code_?;
        if (*(uint *)(lVar8 + 0x20) <= uStack_4) {
          uStack_4 = *(int *)(lVar8 + 0x20) + 1;
          aplStack_16[0] = (longlong *)0x0;
          if ((this->fields)._._.groupId == -1) {
            return;
          }
          iVar17 = (this->fields)._._.groupId;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar18 != (MVGameControllerBase *)0x0) &&
               (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
              ((pMVar19->fields).worldNetwork != (WorldNetwork *)0x0)) &&
             ((this_01 = (MVWorldObjectClientManager *)
                         (((pMVar19->fields).worldNetwork)->fields)._.worldObjectClientManager,
              this_01 != (MVWorldObjectClientManager *)0x0 &&
              (pMVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                   (this_01,(MethodInfo *)0x0), pMVar20 != (MVGroup *)0x0)))) {
            if (iVar17 == (pMVar20->fields)._._.id) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                           );
              LOCK();
              UNLOCK();
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar20 = (this->fields)._.group;
            if (pMVar20 != (MVGroup *)0x0) {
              pUVar21 = (pMVar20->fields)._.PositionChanged;
              this_02 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (this_02,(Object *)this,
                         MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                         ,(MethodInfo *)0x0);
              pDVar22 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pUVar21,(Delegate *)this_02,(MethodInfo *)0x0);
              pUVar23 = 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
              ;
              if (pDVar22 == (Delegate *)0x0) {
                (pMVar20->fields)._.PositionChanged =
                     (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
              }
              else {
                pUVar21 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                          FUN_?(pDVar22,
                                        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                       );
                if (pUVar21 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
                  FUN_?(pDVar22,pUVar23);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                (pMVar20->fields)._.PositionChanged = pUVar21;
                pUVar23 = 
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                ;
                lVar8 = FUN_?(pDVar22,
                                       TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                      );
                if (lVar8 == 0) {
                  FUN_?(pDVar22,pUVar23);
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar3 = (uint)((ulonglong)&(pMVar20->fields)._.PositionChanged >> 0xc);
                lVar8 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
                do {
                  uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
                  puVar10 = (ulonglong *)(lVar8 + 0xADDR);
                  LOCK();
                  bVar11 = uVar9 == *puVar10;
                  if (bVar11) {
                    *puVar10 = uVar9 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar11);
              }
              return;
            }
          }
          goto code_?;
        }
        lVar24 = *(longlong *)(lVar8 + 0x18);
        lVar25 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar24 == 0) goto code_?;
        bVar11 = *(uint *)(lVar24 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar11) goto code_?;
      } while (*(int *)(lVar24 + 0x20 + lVar25 * 0x18) < 0);
      aplStack_16[0] = *(longlong **)(lVar24 + (lVar25 + 2) * 0x18);
      func_?(aplStack_16);
      if (aplStack_16[0] == (longlong *)0x0) goto code_?;
      (**(code **)(*aplStack_16[0] + 0x458))();
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGroup::MVGroup_InitializeInventory(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).children;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_11 = (undefined4)uStack_3;
  uStack_12 = uStack_3._4_4_;
  uStack_13 = 0;
  aplStack_14[0] = (longlong *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_11;
  do {
    lVar15 = CONCAT44(uStack_12,uStack_11);
    if (lVar15 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
        return;
      }
      lVar16 = *(longlong *)(lVar15 + 0x18);
      lVar17 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
    aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
    func_?(aplStack_14);
    if (aplStack_14[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_13;
code_?:
      uStack_13 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    *(undefined1 *)(aplStack_14[0] + 0x27) = 1;
    (**(code **)(*aplStack_14[0] + 0x468))(aplStack_14[0],*(undefined8 *)(*aplStack_14[0] + 0x470));
  } while( true );
}


/* Boolean IsDescendant(Int32, Int32) */

bool Assembly-CSharp.dll::MVGroup::MVGroup_IsDescendant
               (int32_t parentId,int32_t leafId,MethodInfo *method)

{
  while( true ) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        ((pMVar2->fields).worldNetwork == (WorldNetwork *)0x0)) ||
       (pMVar3 = (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
       pMVar3 == (MVWorldObjectClientManagerNetwork *)0x0)) break;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this = (pMVar3->fields)._.worldObjects;
    pOStackX_20 = (Object *)0x0;
    if (this == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this,leafId,&pOStackX_20,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
              );
    if (pOStackX_20 == (Object *)0x0) break;
    leafId = *(int *)((longlong)&pOStackX_20[1].klass + 4);
    if (leafId == -1) {
      return 0;
    }
    if (leafId == parentId) {
      return 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVGroup::MVGroup_OnEnterObject
               (MVGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (((pMVar1 != (MainCameraManager *)0x0) &&
      (pMVar2 = (pMVar1->fields).cameraController, pMVar2 != (MVCameraController *)0x0)) &&
     (this_00 = (pMVar2->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0)) {
    pMVar3 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    uStack_4 = 0;
    if (pMVar3 != (MVCameraBase *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      uStack_7 = 0;
      uStack_4 = 0;
      (*(pMVar3->klass->vtable).FocusOnObject.methodPtr)
                (pMVar3,this,TypeRef__System__Activator__T._0_4_,&uStack_4,&uStack_7,
                 (pMVar3->klass->vtable).FocusOnObject.method);
      pSVar8 = (String *)
               (*(this->klass->vtable).ToString.methodPtr)
                         (this,(this->klass->vtable).ToString.method);
      pSVar8 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_PtrPtrPtr_Entering_group__,pSVar8,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar8,(MethodInfo *)0x0);
      if ((e != (EditorStateMachine *)0x0) &&
         (this_01 = (e->fields).selectionController, this_01 != (SelectionController *)0x0)) {
        SelectionController::SelectionController_DeSelectAll(this_01,(MethodInfo *)0x0);
        SelectionController::SelectionController_PushWOParents
                  (this_01,(MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
        pMVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroup(e,(MethodInfo *)0x0);
        if (pMVar9 != (MVGroup *)0x0) {
          t = (pMVar9->fields)._.transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
          pMVar1 = (e->fields).weCamera;
          if (pMVar1 != (MainCameraManager *)0x0) {
            MainCameraManager::MainCameraManager_set_BlueModeEnabled(pMVar1,1,(MethodInfo *)0x0);
            auStackX_20[0] = 0xc;
            value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_20);
            FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGroup::MVGroup_OnPositionChanged
               (MVGroup *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).PositionChangedNotify.methodPtr)
            (this,(this->klass->vtable).PositionChangedNotify.method);
  return;
}


/* Void PlayModeInitialize() */

void Assembly-CSharp.dll::MVGroup::MVGroup_PlayModeInitialize(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).children;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = (pDVar1->fields)._dictionary;
  puStack_4 = (undefined4 *)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&uStack_3 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (uStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_10 = (uStack_3->fields)._version;
  uStack_5 = 0;
  uStack_3._4_4_ = (undefined4)((ulonglong)uStack_3 >> 0x20);
  uStack_11 = (undefined4)uStack_3;
  uStack_12 = uStack_3._4_4_;
  uStack_13 = 0;
  aplStack_14[0] = (longlong *)0x0;
  uStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_4 = &uStack_11;
  do {
    lVar15 = CONCAT44(uStack_12,uStack_11);
    if (lVar15 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
        return;
      }
      lVar16 = *(longlong *)(lVar15 + 0x18);
      lVar17 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (lVar16 == 0) goto code_?;
      if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
    aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
    func_?(aplStack_14);
    if (aplStack_14[0] == (longlong *)0x0) {
code_?:
      FUN_?();
      uVar6 = uStack_13;
code_?:
      uStack_13 = uVar6;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    (**(code **)(*aplStack_14[0] + 0x478))(aplStack_14[0],*(undefined8 *)(*aplStack_14[0] + 0x480));
  } while( true );
}


/* Void PositionChangedNotify() */

void Assembly-CSharp.dll::MVGroup::MVGroup_PositionChangedNotify(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVWorldObjectClient>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._._.id;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                         (this_00,(MethodInfo *)0x0), pMVar2 != (MVGroup *)0x0)) {
    if (iVar1 == (pMVar2->fields)._._.id) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_root_group_cannot_notify_as_this,(MethodInfo *)0x0);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PositionChangedEventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields)._.PositionChanged !=
          (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        pUVar3 = (this->fields)._.PositionChanged;
        obj = (this->fields)._.transform;
        if (obj == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_4 = 0;
        pDStack_5 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                     ((ulonglong)pDStack_5 & 0xffffffff00000000);
        pvVar6 = (obj->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
code_?:
          FUN_?();
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)(pvVar6,&uStack_4);
        lVar9 = FUN_?(TypeInfo__PositionChangedEventArgs);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__EventArgs);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
          FUN_?();
        }
        *(undefined8 *)(lVar9 + 0x10) = uStack_4;
        *(undefined4 *)(lVar9 + 0x18) = pDStack_5._0_4_;
        (*(pUVar3->fields)._._.invoke_impl)
                  ((pUVar3->fields)._._.method_code,this,lVar9,(pUVar3->fields)._._.method);
      }
      pDStack_10 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).children;
      if (pDStack_10 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
      uStack_11 = 0;
      uStack_12 = 0;
      if (iRam_? != 0) {
        uVar13 = (uint)((ulonglong)&pDStack_10 >> 0xc);
        puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar15 = *puVar14;
          LOCK();
          uVar16 = *puVar14;
          if (uVar15 == uVar16) {
            *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (uVar15 != uVar16);
      }
      uStack_17 = (ulonglong)(uint)(pDStack_10->fields)._version;
      uStack_18 = 2;
      DStack_19._version = (undefined4)uStack_17;
      DStack_19._index = uStack_17._4_4_;
      DStack_19._current.key = 0;
      DStack_19._current._4_4_ = 0;
      DStack_19._current.value = (Object *)0x0;
      DStack_19._getEnumeratorRetType = 2;
      DStack_19._36_4_ = 0;
      uStack_4 = 0;
      pDStack_5 = &DStack_19;
      DStack_19._dictionary = pDStack_10;
      while (bVar20 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_19,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                               ), bVar20 != 0) {
        if (DStack_19._current.value == (Object *)0x0) goto code_?;
        (*(code *)(DStack_19._current.value)->klass[2]._0.parent)
                  (DStack_19._current.value,(DStack_19._current.value)->klass[2]._0.generic_class);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RemoveChild(Int32) */

void Assembly-CSharp.dll::MVGroup::MVGroup_RemoveChild
               (MVGroup *this,int32_t childId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_;
  pDVar2 = (this->fields).children;
  if (pDVar2 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar4 = (pDVar2->fields)._comparer;
    uVar5 = childId;
    if (pIVar4 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      uVar5 = FUN_?(1,pvVar6,pIVar4,childId);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(uVar5 & 0x7fffffff) % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = pIVar7->vector[(int)uVar8] - 1;
    uVar10 = 0xffffffff;
    while (uVar11 = uVar9, -1 < (int)uVar11) {
      pDVar12 = (pDVar2->fields)._entries;
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVWorldObjectClient___Array *)0x0)
      goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (uVar5 & 0x7fffffff)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          cVar15 = (*(pEVar14->klass->vtable).__unknown.methodPtr)
                             (pEVar14,(ulonglong)(uint)pDVar12->vector[(int)uVar11].key,
                              (ulonglong)(uint)childId,(pEVar14->klass->vtable).__unknown.method);
        }
        else {
          pvVar6 = pIVar13[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            FUN_?(pvVar6);
          }
          cVar15 = FUN_?();
        }
        if (cVar15 != '\0') {
          if ((int)uVar10 < 0) {
            pIVar7 = (pDVar2->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar7->max_length <= uVar8) goto code_?;
            pIVar7->vector[(int)uVar8] = pDVar12->vector[(int)uVar11].next + 1;
          }
          else {
            pDVar16 = (pDVar2->fields)._entries;
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVWorldObjectClient___Array *
                          )0x0) goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (MVWorldObjectClient *)0x0;
          piVar17 = &(pDVar2->fields)._freeCount;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(pDVar2->fields)._version;
          *piVar17 = *piVar17 + 1;
          (pDVar2->fields)._freeList = uVar11;
          return;
        }
      }
      uVar10 = uVar11;
      uVar9 = pDVar12->vector[(int)uVar11].next;
    }
  }
  return;
}


/* Void Select() */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.selected != 1) {
    (this->fields)._.selected = 1;
    (*(this->klass->vtable).OnSelectedChanged.methodPtr)
              (this,CONCAT71((int7)((ulonglong)method >> 8),1),
               (this->klass->vtable).OnSelectedChanged.method);
  }
  LStack_1._list = (List_1_System_Object_ *)MVGroup_get_Children(this,(MethodInfo *)0x0);
  if ((List_1_MVWorldObjectClient_ *)LStack_1._list == (List_1_MVWorldObjectClient_ *)0x0) {
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
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MVWorldObjectClient_ *)LStack_1._list)->fields)._version
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
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    pOVar11 = (LStack_1._current)->klass;
    uVar12._0_2_ = pOVar11[3]._1.interfaces_count;
    uVar12._2_2_ = pOVar11[3]._1.interface_offsets_count;
    uVar12._4_1_ = pOVar11[3]._1.typeHierarchyDepth;
    uVar12._5_1_ = pOVar11[3]._1.genericRecursionDepth;
    uVar12._6_1_ = pOVar11[3]._1.rank;
    uVar12._7_1_ = pOVar11[3]._1.minimumAlignment;
    (**(code **)&pOVar11[3]._1.field_count)(LStack_1._current,uVar12);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVGroup::MVGroup_Select_1(MVGroup *this,Color *color,MethodInfo *method)

{
  pCVar1 = color;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.selected != 1) {
    (this->fields)._.selected = 1;
    (*(this->klass->vtable).OnSelectedChanged.methodPtr)
              (this,CONCAT71((int7)((ulonglong)pCVar1 >> 8),1),
               (this->klass->vtable).OnSelectedChanged.method);
  }
  pLStack_2 = MVGroup_get_Children(this,(MethodInfo *)0x0);
  if (pLStack_2 == (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLStack_2 >> 0xc);
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
  lStack_8 = (ulonglong)(uint)(pLStack_2->fields)._version << 0x20;
  uStack_9 = 0;
  LStack_10._index = (undefined4)lStack_8;
  LStack_10._version = lStack_8._4_4_;
  LStack_10._current = (Object *)0x0;
  LStack_10._list = (List_1_System_Object_ *)pLStack_2;
  while( true ) {
    bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_10,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar11 == 0) {
      return;
    }
    if (LStack_10._current == (Object *)0x0) break;
    pLStack_2 = *(List_1_MVWorldObjectClient_ **)color;
    lStack_8._0_4_ = color->b;
    lStack_8._4_4_ = color->a;
    (**(code **)&(LStack_10._current)->klass[3]._1.naturalAligment)
              (LStack_10._current,&pLStack_2,(LStack_10._current)->klass[3].vtable.Equals.methodPtr
              );
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetupTranformation() */

void Assembly-CSharp.dll::MVGroup::MVGroup_SetupTranformation(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.group;
  if (pMVar1 == (MVGroup *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar3 = (pMVar1->fields)._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGroup__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar5 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar4 == (Delegate *)0x0) {
    (pMVar1->fields)._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
             FUN_?(pDVar4,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (pUVar3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar4,pUVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pMVar1->fields)._.PositionChanged = pUVar3;
    pUVar5 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar6 = FUN_?(pDVar4,
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
    if (lVar6 == 0) {
      FUN_?(pDVar4,pUVar5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(pMVar1->fields)._.PositionChanged >> 0xc);
    puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar9 = *puVar8;
      LOCK();
      uVar10 = *puVar8;
      if (uVar9 == uVar10) {
        *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar9 != uVar10);
  }
  return;
}


/* Void TransferChild(Int32) */

void Assembly-CSharp.dll::MVGroup::MVGroup_TransferChild
               (MVGroup *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    value = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar1,id,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((value != (MVWorldObjectClient *)0x0) && (pMVar1 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,(value->fields)._.groupId,(MethodInfo *)0x0),
       pMVar2 != (MVWorldObjectClient *)0x0)) {
      bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
         ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          TypeInfo__MVGroup)) {
        FUN_?(pMVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pMVar2[1].klass != (MVWorldObjectClient__Class *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pMVar2[1].klass,id,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                  );
        this_00 = (value->fields).transform;
        if (this_00 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_00,(this->fields)._.transform,(MethodInfo *)0x0);
          bVar5 = iRam_? != 0;
          (value->fields)._.groupId = (this->fields)._._.id;
          (value->fields).group = this;
          if (bVar5) {
            uVar6 = (uint)((ulonglong)&(value->fields).group >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
          this_01 = (this->fields).children;
          if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,id,(Object *)value,
                       CONCAT31((int3)((uint)in_R9D >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                       ->klass->rgctx_data[0x22].method);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TraverseRecursiveTail(MVWorldObjectClient+CallBackDelegate) */

void Assembly-CSharp.dll::MVGroup::MVGroup_TraverseRecursiveTail
               (MVGroup *this,MVWorldObjectClient_CallBackDelegate *callBack,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (callBack != (MVWorldObjectClient_CallBackDelegate *)0x0) {
    (*(callBack->fields)._._.invoke_impl)
              ((callBack->fields)._._.method_code,this,(callBack->fields)._._.method);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this->fields).children;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                           UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                           Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                     (this_00,
                                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                                     ),
                 pDVar1 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                            *)0x0)) {
      uStack_2 = (pDVar1->fields)._dictionary;
      puStack_3 = (undefined4 *)0x0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&uStack_2 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      if (uStack_2 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iStack_10 = (uStack_2->fields)._version;
      uStack_4 = 0;
      uStack_2._4_4_ = (undefined4)((ulonglong)uStack_2 >> 0x20);
      uStack_11 = (undefined4)uStack_2;
      uStack_12 = uStack_2._4_4_;
      uStack_13 = 0;
      aplStack_14[0] = (longlong *)0x0;
      uStack_2 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_3 = &uStack_11;
      do {
        lVar15 = CONCAT44(uStack_12,uStack_11);
        if (lVar15 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (iStack_10 != *(int *)(lVar15 + 0x2c)) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (lVar15 == 0) goto code_?;
          if (*(uint *)(lVar15 + 0x20) <= uStack_13) {
            return;
          }
          lVar16 = *(longlong *)(lVar15 + 0x18);
          lVar17 = (longlong)(int)uStack_13;
          uVar5 = uStack_13 + 1;
          if (lVar16 == 0) goto code_?;
          if (*(uint *)(lVar16 + 0x18) <= uStack_13) {
            uStack_13 = uVar5;
            FUN_?();
            goto code_?;
          }
          uStack_13 = uVar5;
        } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
        aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
        func_?(aplStack_14);
        if (aplStack_14[0] == (longlong *)0x0) {
code_?:
          FUN_?();
          uVar5 = uStack_13;
code_?:
          uStack_13 = uVar5;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        (**(code **)(*aplStack_14[0] + 0x408))
                  (aplStack_14[0],callBack,*(undefined8 *)(*aplStack_14[0] + 0x410));
      } while( true );
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).children >> 0xc);
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
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._.interactionFlags;
  *piVar6 = *piVar6 | 0x82101;
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object], ObjectPrefab,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor_1
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               ObjectPrefab *prefabObject,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).children >> 0xc);
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
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_1
            ((MVWorldObjectClient *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._.interactionFlags;
  *piVar6 = *piVar6 | 0x82101;
  return;
}


/* MVGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGroup::MVGroup__ctor_2
               (MVGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).children = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).children >> 0xc);
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
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar6 = &(this->fields)._.interactionFlags;
  *piVar6 = *piVar6 | 0x82101;
  return;
}


/* List`1[MVWorldObjectClient] get_Children() */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVGroup::MVGroup_get_Children(MVGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).children;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
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
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_3 = (pDVar2->fields)._dictionary;
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
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
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_7 = pDStack_3;
      FUN_?();
      pcVar11 = (code *)swi(3);
      pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar11)();
      return pLVar1;
    }
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_3->fields)._version << 0x20);
    uStack_5 = 0;
    uStack_12 = (ulonglong)ppDStack_4;
    pOStack_13 = (Object *)0x0;
    pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_4 = &pDStack_3;
    while (pDStack_3 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_12._4_4_ != (pDStack_3->fields)._version) goto code_?;
      uVar10 = uStack_12 & 0xffffffff;
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar6 = (uint)uVar10;
        if ((uint)(pDStack_3->fields)._count <= uVar6) {
          return pLVar1;
        }
        pDVar14 = (pDStack_3->fields)._entries;
        uVar10 = (ulonglong)(uVar6 + 1);
        uStack_12 = CONCAT44(uStack_12._4_4_,uVar6 + 1);
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uVar6) goto code_?;
      } while ((&pDVar14->vector[0].hashCode)[(longlong)(int)uVar6 * 6] < 0);
      pOStack_13 = *(Object **)((longlong)&pDVar14->vector[0].key + (longlong)(int)uVar6 * 0x18 + 8)
      ;
      func_?();
      pMVar15 = 
      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_;
      if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      piVar16 = &(pLVar1->fields)._version;
      *piVar16 = *piVar16 + 1;
      pMVar17 = (pLVar1->fields)._items;
      uVar6 = (pLVar1->fields)._size;
      if (pMVar17 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if (uVar6 < (uint)pMVar17->max_length) {
        (pLVar1->fields)._size = uVar6 + 1;
        FUN_?(pMVar17,(longlong)(int)uVar6,pOStack_13);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,pOStack_13,pMVar15->klass->rgctx_data[0xe].method)
        ;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar11)();
  return pLVar1;
}

