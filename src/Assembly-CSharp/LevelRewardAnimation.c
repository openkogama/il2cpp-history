
/* IEnumerator DisplayAndFadeGoldIcon() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeGoldIcon
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* IEnumerator DisplayAndFadeNextBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeNextBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* IEnumerator DisplayAndFadePrevBadge() */

IEnumerator *
Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadePrevBadge
          (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void Initialize(Dictionary`2[System.Int32,System.Int32]) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_Initialize
               (LevelRewardAnimation *this,Dictionary_2_System_Int32_System_Int32_ *levelRewards,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelRewardAnimation____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LEVEL_UP_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (levelRewards == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    lVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  ppDStack_7 = (Dictionary_2_System_Int32_System_Int32_ **)
                (ulonglong)(uint)(levelRewards->fields)._version;
  uStack_8 = 2;
  uStack_9 = 0;
  uStack_10 = (ulonglong)ppDStack_7;
  KStack_11.key = 0;
  KStack_11.value = 0;
  uStack_12 = 2;
  uStack_2 = 0;
  ppDStack_7 = &pDStack_13;
  pDStack_13 = levelRewards;
  while (cVar14 = FUN_?(&pDStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_int>__MoveNext__
                               ),
        pMVar15 = 
        MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__Add_System__Collections__Generic__KeyValuePair<int,_int>_
        , cVar14 != '\0') {
    pLVar16 = (this->fields).rewards;
    if (pLVar16 == (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0)
    goto code_?;
    piVar17 = &(pLVar16->fields)._version;
    *piVar17 = *piVar17 + 1;
    pKVar18 = (pLVar16->fields)._items;
    uVar1 = (pLVar16->fields)._size;
    if (pKVar18 == (KeyValuePair_2_System_Int32_System_Int32___Array *)0x0)
    goto code_?;
    if (uVar1 < (uint)pKVar18->max_length) {
      (pLVar16->fields)._size = uVar1 + 1;
      if ((uint)pKVar18->max_length <= uVar1) goto code_?;
      pKVar18->vector[(int)uVar1] = KStack_11;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
      EntryPreProcessor+AllocSize]::
      List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__AddWithResize
                ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)pLVar16,
                 (EntryPreProcessor_AllocSize)KStack_11,pMVar15->klass->rgctx_data[0xe].method);
    }
  }
  pLVar16 = (this->fields).rewards;
  if (*(int *)&(TypeInfo__LevelRewardAnimation____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  keySelector = TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0;
  if (keySelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_ *)0x0) {
    if (*(int *)&(TypeInfo__LevelRewardAnimation____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pLVar19 = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
    keySelector = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_Int32_
                   *)FUN_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>
                                  );
    pMVar15 = 
    MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
    ;
    (keySelector->fields)._._.method_ptr =
         MethodInfo__LevelRewardAnimation____c___Initialize_b__23_0_System__Collections__Generic__KeyValuePair<int,_int>_
         ->virtualMethodPointer;
    (keySelector->fields)._._.method = pMVar15;
    (keySelector->fields)._._.m_target = (Object *)pLVar19;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(keySelector->fields)._._.m_target >> 0xc);
      lVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uVar20 = pMVar15->parameters_count;
    (keySelector->fields)._._.method_code = keySelector;
    if ((pMVar15->flags & 0x10) == 0) {
      if (pLVar19 == (LevelRewardAnimation_c *)0x0) {
        uVar21 = func_?();
        FUN_?(uVar21,0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
code_?:
      (keySelector->fields)._._.method_code = (keySelector->fields)._._.m_target;
      puVar23 = (keySelector->fields)._._.method_ptr;
    }
    else {
      if (uVar20 != 1) goto code_?;
      puVar23 = &UNK_?;
    }
    (keySelector->fields)._._.invoke_impl = puVar23;
    (keySelector->fields)._._.extra_arg = FUN_?;
    TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0 = keySelector;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__LevelRewardAnimation____c->static_fields->__9__23_0 >>
                     0xc);
      lVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  pMVar15 = 
  System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
  ;
  if ((
      System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Linq__IOrderedEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__OrderByDescending<System::Collections::Generic::KeyValuePair<int,_int>,_int>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_int>,_int>_
                 );
  }
  pvVar24 = (pMVar15->field7_0x38).rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar24 + 0x135) & 1) == 0) {
    pvVar24 = (void *)FUN_?(pvVar24);
  }
  this_00 = (OrderedEnumerable_2_System_Object_System_Int32_ *)FUN_?(pvVar24);
  System.Core.dll::System::Linq::OrderedEnumerable`2[System::Object,System::Int32]::
  OrderedEnumerable_2_System_Object_System_Int32___ctor
            (this_00,(IEnumerable_1_System_Object_ *)pLVar16,(Func_2_Object_Int32_ *)keySelector,
             (IComparer_1_System_Int32_ *)0x0,1,(pMVar15->field7_0x38).rgctx_data[3].method);
  pMVar15 = 
  System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
  ;
  if ((
      System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>_MethodInfo__System__Linq__Enumerable__ToList<System::Collections::Generic::KeyValuePair<int,_int>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_int>_>_
                 );
  }
  if (this_00 == (OrderedEnumerable_2_System_Object_System_Int32_ *)0x0) {
    pSVar25 = (String *)func_?(&StringLiteral_source);
    pEVar26 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(pSVar25,(MethodInfo *)0x0);
    FUN_?(pEVar26,pMVar15);
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pvVar24 = (pMVar15->field7_0x38).rgctx_data[1].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar24 + 0x135) & 1) == 0) {
    pvVar24 = (void *)FUN_?(pvVar24);
  }
  pLVar16 = (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)FUN_?(pvVar24);
  mscorlib.dll::System::Collections::Generic::List`1[KeyValuePair`2[System::Int32,System::Int32]]::
  List_1_KeyValuePair_2_System_Int32_System_Int32___ctor_1
            (pLVar16,(IEnumerable_1_KeyValuePair_2_System_Int32_System_Int32_ *)this_00,
             (pMVar15->field7_0x38).rgctx_data[2].method);
  (this->fields).rewards = pLVar16;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).rewards >> 0xc);
    lVar3 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pTVar27 = (this->fields).header;
  if (pTVar27 != (Text *)0x0) {
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
    CVar28._.m_CachedPtr = (pTVar27->fields)._._._._._._._;
    if (CVar28._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pcVar22 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
      uVar21 = func_?(&UNK_?);
      FUN_?(uVar21,0);
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pcRam_? = pcVar22;
    pvVar24 = (void *)(*pcRam_?)(CVar28._.m_CachedPtr);
    obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (pvVar24,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
    if (obj_00 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar29 = obj_00[1].klass;
      if (pOVar29 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pcVar22 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
        uVar21 = func_?(&UNK_?);
        FUN_?(uVar21,0);
        pcVar22 = (code *)swi(3);
        (*pcVar22)();
        return;
      }
      pcRam_? = pcVar22;
      (*pcRam_?)(pOVar29);
      pTVar27 = (this->fields).header;
      pSVar25 = TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
      if (pTVar27 != (Text *)0x0) {
        (*(pTVar27->klass->vtable).set_text.methodPtr)
                  (pTVar27,pSVar25,(pTVar27->klass->vtable).set_text.method);
        pRVar30 = (this->fields).prevLevelBadge;
        if (pRVar30 != (RawImage *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CVar28._.m_CachedPtr = (pRVar30->fields)._._._._._._._;
          if (CVar28._.m_CachedPtr == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar30,(MethodInfo *)0x0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcVar22 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
            uVar21 = func_?(&UNK_?);
            FUN_?(uVar21,0);
            pcVar22 = (code *)swi(3);
            (*pcVar22)();
            return;
          }
          pcRam_? = pcVar22;
          (*pcRam_?)(CVar28._.m_CachedPtr);
          pRVar30 = (this->fields).nextLevelBadge;
          if (pRVar30 != (RawImage *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            CVar28._.m_CachedPtr = (pRVar30->fields)._._._._._._._;
            if (CVar28._.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar30,(MethodInfo *)0x0);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            pcVar22 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
              uVar21 = func_?(&UNK_?);
              FUN_?(uVar21,0);
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
            pcRam_? = pcVar22;
            (*pcRam_?)(CVar28._.m_CachedPtr);
            obj = (this->fields).goldImage;
            if (obj != (Image *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              CVar28._.m_CachedPtr = (obj->fields)._._._._._._._;
              if (CVar28._.m_CachedPtr == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              pcVar22 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
                uVar21 = func_?(&UNK_?);
                FUN_?(uVar21,0);
                pcVar22 = (code *)swi(3);
                (*pcVar22)();
                return;
              }
              pcRam_? = pcVar22;
              (*pcRam_?)(CVar28._.m_CachedPtr);
              LevelRewardAnimation_OnShow(this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnDestroy
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).previousBadgeTextureAsset = (Texture2D *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).previousBadgeTextureAsset >> 0xc);
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
  pUVar1 = (UnityAction_1_System_Object_ *)
           FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar1,(Object *)this,
             MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).currentBadgeTextureAsset = (Texture2D *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).currentBadgeTextureAsset >> 0xc);
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


/* Void OnNextBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnNextBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_downloading_nextLevel_badg);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 == (DownloadHandlerTexture *)0x0) goto code_?;
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                     (this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).currentBadgeTextureAsset = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).currentBadgeTextureAsset >> 0xc);
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
  pTVar1 = (this->fields).currentBadgeTextureAsset;
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
  if (pTVar1 == (Texture2D *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Error_downloading_nextLevel_badg,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    if (www == (UnityWebRequest *)0x0) goto code_?;
    pSVar7 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar7 != (String *)0x0) && ((pSVar7->fields)._stringLength != 0))
    goto code_?;
  }
  pRVar8 = (this->fields).nextLevelBadge;
  if (pRVar8 != (RawImage *)0x0) {
    pTVar1 = (this->fields).currentBadgeTextureAsset;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object,pTVar1,0,in_R9,unaff_RDI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar9 = (Texture2D *)(pRVar8->fields).m_Texture;
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
    if (pTVar1 != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
      if (pTVar1 == (Texture2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pTVar9 == (Texture2D *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        bVar2 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (pTVar9 == (Texture2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = (pTVar1->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar2 = pTVar9 == pTVar1;
      }
      if (!bVar2) {
        bVar2 = iRam_? != 0;
        (pRVar8->fields).m_Texture = (Texture *)pTVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
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
        (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
        (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPrevBadgeLoaded(UnityWebRequest) */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnPrevBadgeLoaded
               (LevelRewardAnimation *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Error_downloading_prevLevel_badg);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (DownloadHandlerTexture *)
            UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
            DownloadHandler_GetCheckedDownloader
                      (www,
                       UnityEngine__Networking__DownloadHandlerTexture_MethodInfo__UnityEngine__Networking__DownloadHandler__GetCheckedDownloader<UnityEngine::Networking::DownloadHandlerTexture>_UnityEngine__Networking__UnityWebRequest_
                      );
  if (this_00 == (DownloadHandlerTexture *)0x0) goto code_?;
  pTVar1 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
           DownloadHandlerTexture::DownloadHandlerTexture_InternalGetTextureNative
                     (this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).previousBadgeTextureAsset = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).previousBadgeTextureAsset >> 0xc);
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
  pTVar1 = (this->fields).previousBadgeTextureAsset;
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
  if (pTVar1 == (Texture2D *)0x0) {
code_?:
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Error_downloading_prevLevel_badg,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    if (www == (UnityWebRequest *)0x0) goto code_?;
    pSVar7 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((pSVar7 != (String *)0x0) && ((pSVar7->fields)._stringLength != 0))
    goto code_?;
  }
  pRVar8 = (this->fields).prevLevelBadge;
  if (pRVar8 != (RawImage *)0x0) {
    pTVar1 = (this->fields).previousBadgeTextureAsset;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object,pTVar1,0,in_R9,unaff_RDI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pTVar9 = (Texture2D *)(pRVar8->fields).m_Texture;
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
    if (pTVar1 != (Texture2D *)0x0 || pTVar9 != (Texture2D *)0x0) {
      if (pTVar1 == (Texture2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pTVar9 == (Texture2D *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        bVar2 = (pTVar9->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else if (pTVar9 == (Texture2D *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = (pTVar1->fields)._._.m_CachedPtr == (void *)0x0;
      }
      else {
        bVar2 = pTVar9 == pTVar1;
      }
      if (!bVar2) {
        bVar2 = iRam_? != 0;
        (pRVar8->fields).m_Texture = (Texture *)pTVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
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
        (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
        (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                  (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation_OnShow
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LevelRewardAnimation____c___OnShow_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelRewardAnimation____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GOLD_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (LevelRewardAnimation *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    pLVar4 = (this->fields).rewards;
    if (pLVar4 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
      if ((pLVar4->fields)._size < 1) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__LevelRewardAnimation____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__LevelRewardAnimation____c);
        }
        this_01 = TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0;
        if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if (*(int *)&(TypeInfo__LevelRewardAnimation____c->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__LevelRewardAnimation____c);
          }
          object = TypeInfo__LevelRewardAnimation____c->static_fields->__9;
          this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                     MethodInfo__LevelRewardAnimation____c___OnShow_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0 = this_01;
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)
                            &TypeInfo__LevelRewardAnimation____c->static_fields->__9__24_0 >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar11 = 
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
          if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar11);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar5,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar12 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar7 = (longlong)(pLVar12->fields)._size;
          uVar6 = 0;
          if (0 < lVar7) {
            lVar13 = 0;
            lVar14 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar12 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar12 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar12->fields)._size <= uVar6) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar15 = (pLVar12->fields)._items;
              if (pTVar15 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar15->max_length <= uVar6) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar15->vector + lVar14 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar5,(BaseEventData *)0x0,
                                  (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                                  (pMVar11->field7_0x38).rgctx_data[1].method);
              if (bVar16 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar6 = uVar6 + 1;
              lVar13 = lVar13 + 1;
              lVar14 = lVar14 + 8;
            } while (lVar13 < lVar7);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = (pLVar4->fields)._size;
      if ((uint)(pLVar4->fields)._size <= uVar6 - 1) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pKVar17 = (pLVar4->fields)._items;
      if (pKVar17 != (KeyValuePair_2_System_Int32_System_Int32___Array *)0x0) {
        if ((uint)pKVar17->max_length <= uVar6 - 1) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pLVar4 = (this->fields).rewards;
        (this->fields).currentReward = pKVar17->vector[(ulonglong)uVar6 - 1];
        if (pLVar4 != (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
          if ((uint)(pLVar4->fields)._size <= (pLVar4->fields)._size - 1U)
          goto code_?;
          piVar18 = &(pLVar4->fields)._size;
          *piVar18 = *piVar18 + -1;
          piVar18 = &(pLVar4->fields)._version;
          *piVar18 = *piVar18 + 1;
          iVar19 = (this->fields).currentReward.key;
          pUVar20 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar20,(Object *)this,
                     MethodInfo__LevelRewardAnimation__OnPrevBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          BadgeManager::BadgeManager_GetBadgeTexture
                    (iVar19 + -1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar20,
                     (MethodInfo *)0x0);
          level = (this->fields).currentReward.key;
          pUVar20 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (pUVar20,(Object *)this,
                     MethodInfo__LevelRewardAnimation__OnNextBadgeLoaded_UnityEngine__Networking__UnityWebRequest_
                     ,(MethodInfo *)0x0);
          BadgeManager::BadgeManager_GetBadgeTexture
                    (level,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar20,
                     (MethodInfo *)0x0);
          pTVar21 = (this->fields).goldText;
          pSVar22 = TM::TM__(StringLiteral_GOLD_,(MethodInfo *)0x0);
          pSVar22 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral__0__,pSVar22,(MethodInfo *)0x0);
          arg0 = (Object *)FUN_?(uRam_?,&stack0x00000008);
          PStack_23._arg0 = (Object *)0x0;
          PStack_23._arg1 = (Object *)0x0;
          PStack_23._arg2 = (Object *)0x0;
          PStack_23._args = (Object__Array *)0x0;
          mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_23,arg0,(MethodInfo *)0x0);
          pSVar22 = mscorlib.dll::System::String::String_FormatHelper
                              ((IFormatProvider *)0x0,pSVar22,
                               (ParamsArray *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
          if (pTVar21 != (Text *)0x0) {
            (*(pTVar21->klass->vtable).set_text.methodPtr)(pTVar21,pSVar22);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar7 = FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28);
            bVar10 = iRam_? != 0;
            *(undefined4 *)(lVar7 + 0x10) = 0;
            *(LevelRewardAnimation **)(lVar7 + 0x20) = this;
            if (bVar10) {
              uVar6 = (uint)(lVar7 + 0x20U >> 0xc);
              lVar14 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar14 + 0xADDR);
                puVar9 = (ulonglong *)(lVar14 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            if (lVar7 == 0) {
              PStack_23._args = (Object__Array *)&UNK_?;
              uVar3 = func_?(&TypeInfo__System__NullReferenceException);
              PStack_23._args = (Object__Array *)&UNK_?;
              this_02 = (NullReferenceException *)func_?(uVar3);
              PStack_23._args = (Object__Array *)&UNK_?;
              pSVar22 = (String *)func_?(&StringLiteral_routine_is_null);
              PStack_23._args = (Object__Array *)&UNK_?;
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                        (this_02,pSVar22,(MethodInfo *)0x0);
              PStack_23._args = (Object__Array *)&UNK_?;
              uVar3 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              PStack_23._args = (Object__Array *)&UNK_?;
              FUN_?(this_02,uVar3);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            PStack_23._args = (Object__Array *)&UNK_?;
            bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                     MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
            if (bVar16 == 0) {
              PStack_23._args = (Object__Array *)&UNK_?;
              uVar3 = func_?(&TypeInfo__System__ArgumentException);
              PStack_23._args = (Object__Array *)&UNK_?;
              this_03 = (InvalidEnumArgumentException *)func_?(uVar3);
              PStack_23._args = (Object__Array *)&UNK_?;
              pSVar22 = (String *)
                        func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              PStack_23._args = (Object__Array *)&UNK_?;
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_03,pSVar22,(MethodInfo *)0x0);
              PStack_23._args = (Object__Array *)&UNK_?;
              uVar3 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              PStack_23._args = (Object__Array *)&UNK_?;
              FUN_?(this_03,uVar3);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (cRam_? == '\0') {
              PStack_23._args = (Object__Array *)&UNK_?;
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this != (LevelRewardAnimation *)0x0) {
              pvVar1 = (this->fields)._._._._.m_CachedPtr;
              if (pvVar1 == (void *)0x0) {
                PStack_23._args = (Object__Array *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if (pcRam_? == (code *)0x0) {
                PStack_23._args = (Object__Array *)&UNK_?;
                pcVar2 = (code *)FUN_?(&UNK_?);
                if (pcVar2 == (code *)0x0) {
                  PStack_23._args = (Object__Array *)&UNK_?;
                  uVar3 = func_?(&UNK_?);
                  PStack_23._args = (Object__Array *)&UNK_?;
                  FUN_?(uVar3,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar1,lVar7);
              return;
            }
            PStack_23._args = (Object__Array *)&UNK_?;
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* LevelRewardAnimation() */

void Assembly-CSharp.dll::LevelRewardAnimation::LevelRewardAnimation__ctor
               (LevelRewardAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_KeyValuePair_2_System_Int32_System_Int32_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>
                        );
  FUN_?(pLVar1,
                MethodInfo__System__Collections__Generic__List<System::Collections::Generic::KeyValuePair<int,_int>_>__List__
               );
  bVar2 = iRam_? != 0;
  (this->fields).rewards = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).rewards >> 0xc);
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

