
/* Boolean IsLayerTransformable(Int32) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_IsLayerTransformable
               (ObjectTransformGizmoSettings *this,int32_t objectLayer,MethodInfo *method)

{
  return ((this->fields)._transformableLayers & 1 << ((byte)objectLayer & 0x1f)) != 0;
}


/* Boolean IsObjectTransformable(GameObject) */

bool Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_IsObjectTransformable
               (ObjectTransformGizmoSettings *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
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
      this_00 = (this->fields)._nonTransformableObjects;
      if (this_00 != (HashSet_1_UnityEngine_GameObject_ *)0x0) {
        bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                HashSet_1_System_Object__Contains
                          ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
                           MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                          );
        return bVar1 ^ 1;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
  }
  return 0;
}


/* Void SetLayerTransformable(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetLayerTransformable
               (ObjectTransformGizmoSettings *this,int32_t objectLayer,bool isTransformable,
               MethodInfo *method)

{
  uVar1 = (this->fields)._transformableLayers;
  if (isTransformable == 0) {
    (this->fields)._transformableLayers = uVar1 & ~(1 << (objectLayer & 0x1fU));
    return;
  }
  (this->fields)._transformableLayers = uVar1 | 1 << (objectLayer & 0x1fU);
  return;
}


/* Void SetObjectCollectionTransformable(List`1[UnityEngine.GameObject], Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetObjectCollectionTransformable
               (ObjectTransformGizmoSettings *this,
               List_1_UnityEngine_GameObject_ *gameObjectCollection,bool areTransformable,
               MethodInfo *method)

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
  if (gameObjectCollection == (List_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
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
               ((ulonglong)(uint)(gameObjectCollection->fields)._version << 0x20);
  uStack_8 = 0;
  LStack_9._8_8_ = pLStack_7;
  LStack_9._current = (Object *)0x0;
  uStack_3 = 0;
  pLStack_7 = &LStack_9;
  LStack_9._list = (List_1_System_Object_ *)gameObjectCollection;
  while( true ) {
    while( true ) {
      do {
        do {
          bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_9,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::GameObject>__MoveNext__
                            );
          item = LStack_9._current;
          if (bVar10 == 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
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
        } while (item == (Object *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
      } while (item[1].klass == (Object__Class *)0x0);
      this_00 = (this->fields)._nonTransformableObjects;
      if (areTransformable != 0) break;
      if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) {
        FUN_?();
        goto code_?;
      }
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__AddIfNotPresent
                ((HashSet_1_System_Object_ *)this_00,item,
                 MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 ->klass->rgctx_data[0x15].method);
    }
    if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) break;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__Remove
              ((HashSet_1_System_Object_ *)this_00,item,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
              );
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetObjectTransformable(GameObject, Boolean) */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::
     ObjectTransformGizmoSettings_SetObjectTransformable
               (ObjectTransformGizmoSettings *this,GameObject *gameObject,bool isTransformable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
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
  if (gameObject == (GameObject *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
  ;
  if ((gameObject->fields)._.m_CachedPtr == (void *)0x0) {
    return;
  }
  this_00 = (this->fields)._nonTransformableObjects;
  if (this_00 == (HashSet_1_UnityEngine_GameObject_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (isTransformable == 0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
    HashSet_1_System_Object__AddIfNotPresent
              ((HashSet_1_System_Object_ *)this_00,(Object *)gameObject,
               MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
               ->klass->rgctx_data[0x15].method);
    return;
  }
  if ((this_00->fields)._buckets != (Int32__Array *)0x0) {
    if (gameObject == (GameObject *)0x0) {
      uVar3 = 0;
    }
    else {
      pIVar4 = (IEqualityComparer_1_System_Object_ *)(this_00->fields)._comparer;
      if (pIVar4 == (IEqualityComparer_1_System_Object_ *)0x0) goto code_?;
      pvVar5 = (MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__Remove_UnityEngine__GameObject_
                 ->klass->rgctx_data[0x16].method)->klass->rgctx_data[4].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
        pvVar5 = (void *)FUN_?(pvVar5);
      }
      uVar3 = FUN_?(1,pvVar5,pIVar4,gameObject);
      uVar3 = uVar3 & 0x7fffffff;
    }
    pIVar6 = (this_00->fields)._buckets;
    if (pIVar6 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pHVar7 = (this_00->fields)._slots;
    uVar8 = (int)uVar3 % (int)pIVar6->max_length;
    if ((uint)pIVar6->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar9 = pIVar6->vector[(int)uVar8] - 1;
    if (-1 < (int)uVar9) {
      iVar10 = 0;
      uVar11 = 0xffffffff;
      if (pHVar7 == (HashSet_1_T_Slot_UnityEngine_GameObject___Array *)0x0)
      goto code_?;
      do {
        uVar12 = uVar9;
        if ((uint)pHVar7->max_length <= uVar12) goto code_?;
        if (pHVar7->vector[(int)uVar12].hashCode == uVar3) {
          pIVar4 = (IEqualityComparer_1_System_Object_ *)(this_00->fields)._comparer;
          pGVar13 = pHVar7->vector[(int)uVar12].value;
          if (pIVar4 == (IEqualityComparer_1_System_Object_ *)0x0) goto code_?;
          pvVar5 = pMVar1->klass->rgctx_data[4].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
            pvVar5 = (void *)FUN_?(pvVar5);
          }
          cVar14 = FUN_?(0,pvVar5,pIVar4,pGVar13,gameObject);
          if (cVar14 != '\0') {
            if ((int)uVar11 < 0) {
              pIVar6 = (this_00->fields)._buckets;
              if ((uint)pHVar7->max_length <= uVar12) goto code_?;
              if (pIVar6 == (Int32__Array *)0x0) goto code_?;
              if ((uint)pIVar6->max_length <= uVar8) goto code_?;
              pIVar6->vector[(int)uVar8] = pHVar7->vector[(int)uVar12].next + 1;
            }
            else {
              if (((uint)pHVar7->max_length <= uVar12) || ((uint)pHVar7->max_length <= uVar11))
              goto code_?;
              pHVar7->vector[(int)uVar11].next = pHVar7->vector[(int)uVar12].next;
            }
            if ((uVar12 < (uint)pHVar7->max_length) &&
               (pHVar7->vector[(int)uVar12].hashCode = -1, uVar12 < (uint)pHVar7->max_length)) {
              pHVar7->vector[(int)uVar12].value = (GameObject *)0x0;
              if (uVar12 < (uint)pHVar7->max_length) {
                pHVar7->vector[(int)uVar12].next = (this_00->fields)._freeList;
                piVar15 = &(this_00->fields)._version;
                *piVar15 = *piVar15 + 1;
                iVar10 = (this_00->fields)._count + -1;
                (this_00->fields)._count = iVar10;
                if (iVar10 == 0) {
                  (this_00->fields)._lastIndex = 0;
                  uVar12 = 0xffffffff;
                }
                (this_00->fields)._freeList = uVar12;
                return;
              }
            }
            goto code_?;
          }
        }
        if ((int)pHVar7->max_length <= iVar10) {
          uVar16 = func_?(&TypeInfo__System__InvalidOperationException);
          this_01 = (ProtocolViolationException *)func_?(uVar16);
          message = (String *)func_?(&StringLiteral_Operations_that_change_non_concu);
          System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                    (this_01,message,(MethodInfo *)0x0);
          FUN_?(this_01,pMVar1);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar10 = iVar10 + 1;
        if ((uint)pHVar7->max_length <= uVar12) goto code_?;
        uVar9 = pHVar7->vector[(int)uVar12].next;
        uVar11 = uVar12;
      } while (-1 < (int)uVar9);
    }
  }
  return;
}


/* ObjectTransformGizmoSettings() */

void Assembly-CSharp.dll::RTG::ObjectTransformGizmoSettings::ObjectTransformGizmoSettings__ctor
               (ObjectTransformGizmoSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._transformableLayers = -1;
  this_00 = (HashSet_1_UnityEngine_GameObject_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__HashSet<UnityEngine::GameObject>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields)._nonTransformableObjects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._nonTransformableObjects >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
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
  return;
}

