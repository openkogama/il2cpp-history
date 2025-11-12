
/* Void CopyTo(Array, Int32) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection_CopyTo
               (ColliderCollection *this,Array *array,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Collider);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__CopyTo_UnityEngine__Collider_____int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__UnityEngine__Collider;
  pMVar2 = 
  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__CopyTo_UnityEngine__Collider_____int_
  ;
  pLVar3 = (this->fields).colliders;
  if (pLVar3 == (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (array == (Array *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_?(array,TypeInfo__UnityEngine__Collider);
    if (lVar5 == 0) {
      FUN_?(array,pCVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (lVar5 != 0) {
    if (index < 0) {
      pOVar6 = (Object *)func_?(uRam_?,&stack0x00000010);
      uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
      pAVar8 = (ArgumentOutOfRangeException *)func_?(uVar7);
      pSVar9 = (String *)func_?(&StringLiteral_Non_negative_number_required_);
      pSVar10 = (String *)func_?(&StringLiteral_index);
      mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
                (pAVar8,pSVar10,pOVar6,pSVar9,(MethodInfo *)0x0);
      FUN_?(pAVar8,pMVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (index <= *(int *)(lVar5 + 0x18)) {
      if (*(int *)(lVar5 + 0x18) - index < (pLVar3->fields).count) {
        uVar7 = func_?(&TypeInfo__System__ArgumentException);
        this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
        pSVar9 = (String *)func_?(&StringLiteral_Insufficient_space_in_the_target);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
        FUN_?(this_01,pMVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pLVar11 = (pLVar3->fields).head;
      if (pLVar11 != (LinkedListNode_1_UnityEngine_Collider_ *)0x0) {
        do {
          lVar12 = (longlong)index;
          index = index + 1;
          if (pLVar11 == (LinkedListNode_1_UnityEngine_Collider_ *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FUN_?(lVar5,lVar12,(pLVar11->fields).item);
          pLVar11 = (pLVar11->fields).next;
        } while (pLVar11 != (pLVar3->fields).head);
      }
      return;
    }
    pOVar6 = (Object *)func_?(uRam_?,&stack0x00000010);
    uVar7 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    pAVar8 = (ArgumentOutOfRangeException *)func_?(uVar7);
    pSVar9 = (String *)func_?(&StringLiteral_Must_be_less_than_or_equal_to_th);
    pSVar10 = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (pAVar8,pSVar10,pOVar6,pSVar9,(MethodInfo *)0x0);
    FUN_?(pAVar8,pMVar2);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar7);
  pSVar9 = (String *)func_?(&StringLiteral_array);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,pSVar9,(MethodInfo *)0x0);
  FUN_?(this_00,pMVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator GetEnumerator() */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection_GetEnumerator
          (ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (this->fields).colliders;
  if (pLStack_1 == (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLStack_1 >> 0xc);
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
  uStack_9 = (pLStack_1->fields).version;
  uStack_10 = (ulonglong)uStack_9;
  pLStack_11 = (pLStack_1->fields).head;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLStack_11 >> 0xc);
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
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  pLStack_18 = pLStack_1;
  pLStack_19 = pLStack_11;
  pIVar3 = (IEnumerator *)
           FUN_?(TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                         ,&pLStack_18);
  return pIVar3;
}


/* Boolean RemoveCollider(Collider) */

bool Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
     ColliderCollection_RemoveCollider
               (ColliderCollection *this,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedListNode<UnityEngine::Collider>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__get_Last__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).baseCollider;
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
  if (collider != (Collider *)0x0 || pCVar1 != (Collider *)0x0) {
    if (pCVar1 == (Collider *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (collider == (Collider *)0x0) goto code_?;
      bVar2 = (collider->fields)._._.m_CachedPtr == (void *)0x0;
    }
    else if (collider == (Collider *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = (pCVar1->fields)._._.m_CachedPtr == (void *)0x0;
    }
    else {
      bVar2 = collider == pCVar1;
    }
    if (!bVar2) {
      pLVar3 = (this->fields).colliders;
      if (pLVar3 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
        bVar4 = System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
                LinkedList_1_System_Object__Remove
                          ((LinkedList_1_System_Object_ *)pLVar3,(Object *)collider,
                           MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                          );
        pLVar3 = (this->fields).colliders;
        if (((pLVar3 != (LinkedList_1_UnityEngine_Collider_ *)0x0) &&
            ((pLVar3->fields).head != (LinkedListNode_1_UnityEngine_Collider_ *)0x0)) &&
           (pLVar5 = (((pLVar3->fields).head)->fields).prev,
           pLVar5 != (LinkedListNode_1_UnityEngine_Collider_ *)0x0)) {
          bVar2 = iRam_? != 0;
          (this->fields).activeCollider = (pLVar5->fields).item;
          if (bVar2) {
            uVar6 = (uint)((ulonglong)&(this->fields).activeCollider >> 0xc);
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
          return bVar4;
        }
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar4 = (*pcVar10)();
      return bVar4;
    }
  }
  return 0;
}


/* Void SetActiveCollider(Collider) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
     ColliderCollection_SetActiveCollider
               (ColliderCollection *this,Collider *collider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).colliders;
  if (pLVar1 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
    LinkedList_1_System_Object__Remove
              ((LinkedList_1_System_Object_ *)pLVar1,(Object *)collider,
               MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__Remove_UnityEngine__Collider_
              );
    pLVar1 = (this->fields).colliders;
    if (pLVar1 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
      System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
      LinkedList_1_System_Object__AddLast
                ((LinkedList_1_System_Object_ *)pLVar1,(Object *)collider,
                 MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                );
      bVar2 = iRam_? != 0;
      (this->fields).activeCollider = collider;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).activeCollider >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator`1[UnityEngine.Collider]
   System.Collections.Generic.IEnumerable<UnityEngine.Collider>.GetEnumerator() */

IEnumerator_1_UnityEngine_Collider_ *
Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
ColliderCollection_System_Collections_Generic_IEnumerable_UnityEngine_Collider__GetEnumerator
          (ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (this->fields).colliders;
  if (pLStack_1 == (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pIVar3 = (IEnumerator_1_UnityEngine_Collider_ *)(*pcVar2)();
    return pIVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLStack_1 >> 0xc);
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
  uStack_9 = (pLStack_1->fields).version;
  uStack_10 = (ulonglong)uStack_9;
  pLStack_11 = (pLStack_1->fields).head;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&pLStack_11 >> 0xc);
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
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_17 = 0;
  pLStack_18 = pLStack_1;
  pLStack_19 = pLStack_11;
  pIVar3 = (IEnumerator_1_UnityEngine_Collider_ *)
           FUN_?(TypeInfo__System__Collections__Generic__LinkedList_1_T___Enumerator<UnityEngine::Collider>
                         ,&pLStack_18);
  return pIVar3;
}


/* ColliderCollection(Collider) */

void Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::ColliderCollection__ctor
               (ColliderCollection *this,Collider *baseCollider,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__LinkedList__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (LinkedList_1_UnityEngine_Collider_ *)
           FUN_?(TypeInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>);
  bVar2 = iRam_? != 0;
  (this->fields).colliders = pLVar1;
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
  pLVar1 = (this->fields).colliders;
  if (pLVar1 == (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  System.dll::System::Collections::Generic::LinkedList`1[System::Object]::
  LinkedList_1_System_Object__AddLast
            ((LinkedList_1_System_Object_ *)pLVar1,(Object *)baseCollider,
             MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__AddLast_UnityEngine__Collider_
            );
  iVar8 = iRam_?;
  (this->fields).baseCollider = baseCollider;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).baseCollider >> 0xc);
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
      iVar8 = iRam_?;
    } while (!bVar2);
  }
  (this->fields).activeCollider = baseCollider;
  if (iVar8 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).activeCollider >> 0xc);
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


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::Assets::Scripts::Tools::ColliderCollection::
        ColliderCollection_get_Count(ColliderCollection *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__LinkedList<UnityEngine::Collider>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).colliders;
  if (pLVar1 != (LinkedList_1_UnityEngine_Collider_ *)0x0) {
    return (pLVar1->fields).count;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

