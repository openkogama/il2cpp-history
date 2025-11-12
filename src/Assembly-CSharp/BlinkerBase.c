
/* Void Awake() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_Awake(BlinkerBase *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).targetCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).targetCamera >> 0xc);
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


/* Void DoBlinking() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_DoBlinking(BlinkerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((this->fields).visible == 0) ||
      ((this->fields).blinkers == (Dictionary_2_BlinkType_Blinker_ *)0x0)) ||
     (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(this->fields).blinkers,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                         ),
     pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
    return;
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).blinkers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
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
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_11 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_12 = 0;
  pBStack_13 = (Blinker *)0x0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
code_?:
  if (pDStack_3 !=
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    if (iStack_11 == (pDStack_3->fields)._version) {
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_3->fields)._count <= uStack_12) {
          return;
        }
        pDVar14 = (pDStack_3->fields)._entries;
        lVar15 = (longlong)(int)uStack_12;
        uVar6 = uStack_12 + 1;
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uStack_12) {
          uStack_12 = uVar6;
          FUN_?();
          goto code_?;
        }
        uStack_12 = uVar6;
      } while ((&pDVar14->vector[0].hashCode)[lVar15 * 6] < 0);
      pBStack_13 = *(Blinker **)((longlong)&pDVar14->vector[0].key + lVar15 * 0x18 + 8);
      func_?();
      this_02 = pBStack_13;
      if (pBStack_13 != (Blinker *)0x0) goto code_?;
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  bVar16 = Blinker::Blinker_get_IsExpired(pBStack_13,(MethodInfo *)0x0);
  if ((bVar16 == 0) &&
     ((*(this->klass->vtable).BeforeDraw.methodPtr)(),
     (this->fields).meshFilters != (MeshFilter__Array *)0x0)) {
    pMVar17 = (this->fields).meshFilters;
    for (uVar6 = 0; uVar18 = (uint)pMVar17->max_length, (int)uVar6 < (int)uVar18; uVar6 = uVar6 + 1
        ) {
      if (uVar18 <= uVar6) goto code_?;
      this_01 = pMVar17->vector[(int)uVar6];
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
      if (this_01 != (MeshFilter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_03 == (GameObject *)0x0) goto code_?;
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_03,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
            mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (this_01,(MethodInfo *)0x0);
            if (this_02 == (Blinker *)0x0) goto code_?;
            Blinker::Blinker_Draw
                      (this_02,mesh,tfm,(this->fields).targetCamera,(this->fields).layerMask,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar6 = uStack_12;
code_?:
  uStack_12 = uVar6;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_OnDestroy(BlinkerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).blinkers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pDStack_3 = (pDVar1->fields)._dictionary;
  ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 **)0x0;
  uStack_5 = 0;
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
    uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if (pDStack_3 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDStack_7 = pDStack_3;
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_12 = (pDStack_3->fields)._version;
  uStack_5 = 0;
  uStack_13 = 0;
  lStack_14 = 0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  ppDStack_4 = &pDStack_3;
  do {
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iStack_12 != (pDStack_3->fields)._version) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (pDStack_3 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      if ((uint)(pDStack_3->fields)._count <= uStack_13) {
        return;
      }
      pDVar15 = (pDStack_3->fields)._entries;
      lVar16 = (longlong)(int)uStack_13;
      uVar6 = uStack_13 + 1;
      if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0) goto code_?;
      if ((uint)pDVar15->max_length <= uStack_13) {
        uStack_13 = uVar6;
        FUN_?();
        goto code_?;
      }
      uStack_13 = uVar6;
    } while ((&pDVar15->vector[0].hashCode)[lVar16 * 6] < 0);
    lStack_14 = *(longlong *)((longlong)&pDVar15->vector[0].key + lVar16 * 0x18 + 8);
    func_?();
    lVar16 = lStack_14;
    if (lStack_14 == 0) {
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar17 = *(longlong *)(lVar16 + 0x10);
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
    if (lVar17 == 0) {
      bVar11 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar11 = *(longlong *)(lVar17 + 0x10) != 0;
    }
    if (bVar11) {
      obj = *(Object_1 **)(lVar16 + 0x10);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
    }
  } while( true );
}


/* Void StartBlinking(BlinkType, Single) */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_StartBlinking
               (BlinkerBase *this,BlinkType__Enum type,float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blinkers;
  if ((this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                         ), pOVar1 != (Object *)0x0)) {
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
    uVar4 = (*pcRam_?)();
    *(float *)((longlong)&pOVar1[1].monitor + 4) = duration;
    *(undefined4 *)&pOVar1[1].monitor = uVar4;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopBlinking(BlinkType) */

void Assembly-CSharp.dll::BlinkerBase::BlinkerBase_StopBlinking
               (BlinkerBase *this,BlinkType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blinkers;
  if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_
                       );
    if (pOVar1 != (Object *)0x0) {
      pOVar1[1].monitor = (MonitorData *)0x0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

