
/* Void AddToCallback(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_AddToCallback
               (CachedGetRequest *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callbackOther,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isDone != 0) {
    if (callbackOther == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(callbackOther->fields)._._.invoke_impl)
              ((callbackOther->fields)._._.method_code,(this->fields)._._.request,
               (callbackOther->fields)._._.method);
    return;
  }
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)(this->fields)._._.callback,(Delegate *)callbackOther,
                      (MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
  if (pDVar2 == (Delegate *)0x0) {
    (this->fields)._._.callback = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
  }
  else {
    pAVar4 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
             FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                          );
    if (pAVar4 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._._.callback = pAVar4;
    pAVar3 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
    ;
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}


/* Boolean FoundInCache(AsyncWWWManager+Cache) */

bool Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_FoundInCache
               (CachedGetRequest *this,AsyncWWWManager_Cache *cache,MethodInfo *method)

{
  pSVar1 = (this->fields)._._.path;
  pOStackX_8 = (Object *)0x0;
  if (cache != (AsyncWWWManager_Cache *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (cache->fields).cachedRequests;
    if (pDVar2 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
      pMVar3 = 
      MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
      ;
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)pSVar1,
                         &pOStackX_8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                        );
      pOVar5 = pOStackX_8;
      if (bVar4 != 0) {
        if ((this->fields)._._.callback != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        {
          b = (this->fields)._._.callback;
          if (pOStackX_8 == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(char *)&pOVar5[4].monitor == '\0') {
            pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pOVar5[1].klass,(Delegate *)b,(MethodInfo *)0x0);
            pAVar7 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
            if (pDVar6 == (Delegate *)0x0) {
              pOVar5[1].klass = (Object__Class *)0x0;
            }
            else {
              pOVar8 = (Object__Class *)
                        FUN_?(pDVar6,
                                      TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                     );
              if (pOVar8 == (Object__Class *)0x0) {
                FUN_?(pDVar6,pAVar7);
                pcVar9 = (code *)swi(3);
                bVar4 = (*pcVar9)();
                return bVar4;
              }
              pOVar5[1].klass = pOVar8;
              pAVar7 = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
              lVar10 = FUN_?(pDVar6,
                                     TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                    );
              if (lVar10 == 0) {
                FUN_?(pDVar6,pAVar7);
                pcVar9 = (code *)swi(3);
                bVar4 = (*pcVar9)();
                return bVar4;
              }
            }
            if (iRam_? != 0) {
              uVar11 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
              puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar13 = *puVar12;
                LOCK();
                uVar14 = *puVar12;
                if (uVar13 == uVar14) {
                  *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (uVar13 != uVar14);
              return 1;
            }
          }
          else {
            (*(b->fields)._._.invoke_impl)
                      ((b->fields)._._.method_code,pOVar5[4].klass,(b->fields)._._.method);
          }
        }
        return 1;
      }
      pSVar1 = (this->fields)._._.path;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar2 = (cache->fields).cachedRequests;
      if (pDVar2 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)pSVar1,
                   (Object *)this,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
                   ->klass->rgctx_data[0x22].method);
        return 0;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar4 = (*pcVar9)();
  return bVar4;
}

