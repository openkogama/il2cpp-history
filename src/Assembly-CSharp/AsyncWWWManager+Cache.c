
/* Void Add(String, CachedGetRequest) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Add
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest *cachedGetRequest,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
                  ,path,cachedGetRequest,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cachedRequests;
  if (this_00 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)path,
               (Object *)cachedGetRequest,CONCAT31((int3)((uint)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_Clear
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).cachedRequests;
  if (pDVar1 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    length = (pDVar1->fields)._count;
    if (0 < length) {
      pIVar2 = (pDVar1->fields)._buckets;
      if (pIVar2 == (Int32__Array *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._buckets,0,(int32_t)pIVar2->max_length,(MethodInfo *)0x0)
      ;
      (pDVar1->fields)._count = 0;
      (pDVar1->fields)._freeCount = 0;
      (pDVar1->fields)._freeList = -1;
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pDVar1->fields)._entries,0,length,(MethodInfo *)0x0);
    }
    piVar4 = &(pDVar1->fields)._version;
    *piVar4 = *piVar4 + 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean TryGet(String, CachedGetRequest ByRef) */

bool Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_TryGet
               (AsyncWWWManager_Cache *this,String *path,CachedGetRequest **cachedGetRequest,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).cachedRequests;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)path,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    *cachedGetRequest = (CachedGetRequest *)0x0;
    return 0;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 == (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if ((uint)pDVar4->max_length <= uVar3) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  bVar5 = iRam_? != 0;
  *cachedGetRequest = (CachedGetRequest *)pDVar4->vector[(int)uVar3].value;
  if (bVar5) {
    uVar3 = (uint)((ulonglong)cachedGetRequest >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return 1;
}


/* Void UnsubscribeCached(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
               (AsyncWWWManager_Cache *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_CachedGetRequest>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields).cachedRequests;
  if (pDStack_1 == (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  uStack_8 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  DStack_12._version = (undefined4)uStack_8;
  DStack_12._index = uStack_8._4_4_;
  DStack_12._current.key = (Object *)0x0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDStack_1;
code_?:
  do {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_CachedGetRequest>__MoveNext__
                      );
    pOVar14 = DStack_12._current.value;
    if (bVar13 == 0) {
      return;
    }
    if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar14 == (Object *)0x0) goto code_?;
    pOVar15 = pOVar14[1].klass;
    if (pOVar15 == (Object__Class *)0x0) goto code_?;
  } while ((callback == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) ||
          (cVar16 = (**(code **)&(pOVar15->_0).image[4].typeCount)(pOVar15,callback), cVar16 == '\0'))
  ;
  goto code_?;
code_?:
  if (callback == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
code_?:
    pDVar17 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pOVar14[1].klass,(Delegate *)callback,(MethodInfo *)0x0);
    pAVar18 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    pOVar15 = (Object__Class *)0x0;
    if ((pDVar17 != (Delegate *)0x0) &&
       (pOVar15 = (Object__Class *)
                  FUN_?(pDVar17,
                                TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>),
       pOVar15 == (Object__Class *)0x0)) {
      FUN_?(pDVar17,pAVar18);
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar14[1].klass = pOVar15;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)(pOVar14 + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  goto code_?;
}


/* AsyncWWWManager+Cache() */

void Assembly-CSharp.dll::AsyncWWWManager+Cache::AsyncWWWManager_Cache__ctor
               (AsyncWWWManager_Cache *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).cachedRequests = (Dictionary_2_System_String_CachedGetRequest_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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

