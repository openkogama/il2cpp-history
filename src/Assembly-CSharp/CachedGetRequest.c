
/* Void AddToCallback(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_AddToCallback
               (CachedGetRequest *this,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callbackOther,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._._.isDone == 0) {
    pAVar1 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)(this->fields)._._.callback,(Delegate *)callbackOther,
                        (MethodInfo *)0x0);
    pAVar2 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
    if (pAVar1 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      if (pAVar1->klass == TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>) {
        pAVar2 = pAVar1;
      }
      if (pAVar2 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) goto code_?;
    }
    (this->fields)._._.callback = pAVar2;
    return;
  }
  if (callbackOther != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
               callbackOther,(Dictionary_2_System_String_System_Object_ *)(this->fields)._._.request
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Invoke_UnityEngine__Networking__UnityWebRequest_
              );
    return;
  }
  func_?(0);
  pAVar1 = extraout_ECX;
code_?:
  func_?(pAVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean FoundInCache(AsyncWWWManager+Cache) */

bool Assembly-CSharp.dll::CachedGetRequest::CachedGetRequest_FoundInCache
               (CachedGetRequest *this,AsyncWWWManager_Cache *cache,MethodInfo *method)

{
  pCVar1 = (CachedGetRequest *)0x0;
  if (cache != (AsyncWWWManager_Cache *)0x0) {
    bVar2 = AsyncWWWManager+Cache::AsyncWWWManager_Cache_TryGet
                      (cache,(this->fields)._._.path,(CachedGetRequest **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      AsyncWWWManager+Cache::AsyncWWWManager_Cache_Add
                (cache,(this->fields)._._.path,this,(MethodInfo *)0x0);
      return 0;
    }
    this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields)._._.callback;
    if (this_00 ==
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      return 1;
    }
    if (pCVar1 != (CachedGetRequest *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((pCVar1->fields)._._.isDone == 0) {
        pAVar3 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)(pCVar1->fields)._._.callback,(Delegate *)this_00,
                            (MethodInfo *)0x0);
        pAVar4 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
        if (pAVar3 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
code_?:
          (pCVar1->fields)._._.callback = pAVar4;
          return 1;
        }
        if (pAVar3->klass == TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>) {
          pAVar4 = pAVar3;
        }
        if (pAVar4 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
        goto code_?;
      }
      if (this_00 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_00,(Dictionary_2_System_String_System_Object_ *)(pCVar1->fields)._._.request
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Invoke_UnityEngine__Networking__UnityWebRequest_
                  );
        return 1;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}

