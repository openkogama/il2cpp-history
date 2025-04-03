
/* Void AddToCallback(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_AddToCallback
               (CachedGetRequest *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callbackOther,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isDone == 0) {
    pCVar1 = &this->fields;
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)(pCVar1->_)._.callback,(Delegate *)callbackOther,
                           (MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
    if (unaff_ESI == (Delegate *)0x0) {
      (pCVar1->_)._.callback = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
      func_?(pCVar1,0);
      return;
    }
    pAVar2 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
             func_?(unaff_ESI,
                             TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    if (pAVar2 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      (pCVar1->_)._.callback = pAVar2;
      unaff_EBX = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
      iVar3 = func_?(unaff_ESI,
                              TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      if (iVar3 != 0) {
        func_?(pCVar1,iVar3);
        return;
      }
    }
  }
  else {
    if (callbackOther != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      (*(callbackOther->fields)._._.invoke_impl)
                ((callbackOther->fields)._._.method_code,(this->fields)._._.request,
                 (callbackOther->fields)._._.method);
      return;
    }
    func_?();
  }
  func_?(unaff_ESI,unaff_EBX);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean FoundInCache(AsyncWWWManager+Cache) */

bool Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_FoundInCache
               (CachedGetRequest *this,AsyncWWWManager_Cache *cache,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  key = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)(this->fields)._._.path;
  if (cache != (AsyncWWWManager_Cache *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                     );
      cRam_? = '\x01';
    }
    pDVar2 = (cache->fields).cachedRequests;
    if (pDVar2 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)key,
                         &pOStack_1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__TryGetValue_System__String__CachedGetRequest__
                        );
      pOVar4 = pOStack_1;
      if (bVar3 == 0) {
        key = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)(this->fields)._._.path;
        if (cRam_? == '\0') {
          pOStack_1 = (Object *)
                      &
                      MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
          ;
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = (cache->fields).cachedRequests;
        if (pDVar2 != (Dictionary_2_System_String_CachedGetRequest_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar2,(Object *)key,
                     (Object *)this,
                     MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Add_System__String__CachedGetRequest_
                    );
          return 0;
        }
      }
      else {
        this = (CachedGetRequest *)(this->fields)._._.callback;
        if ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this ==
            (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
          return 1;
        }
        if (pOStack_1 != (Object *)0x0) {
          if (cRam_? == '\0') {
            pOStack_1 = (Object *)
                        &TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
            func_?();
            cRam_? = '\x01';
          }
          if (*(char *)&pOVar4[6].klass != '\0') {
            (*(((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this)->fields)._._.invoke_impl)
                      ((((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this)->fields)._._.
                       method_code,pOVar4[5].monitor,
                       (((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this)->fields)._._.
                       method);
            return 1;
          }
          pOVar4 = pOVar4 + 1;
          this = (CachedGetRequest *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pOVar4->klass,(Delegate *)this,(MethodInfo *)0x0);
          key = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
          if ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this ==
              (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
            pOVar4->klass = (Object__Class *)0x0;
            func_?(pOVar4,0);
            return 1;
          }
          pAVar5 = (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)
                   func_?(this,
                                   TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
          if (pAVar5 != (Action_1_UnityEngine_Networking_UnityWebRequest___Class *)0x0) {
            pOVar4->klass = (Object__Class *)pAVar5;
            key = TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>;
            iVar6 = func_?(this,
                                    TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                   );
            if (iVar6 != 0) {
              func_?(pOVar4,iVar6);
              return 1;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?(this,key);
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}

