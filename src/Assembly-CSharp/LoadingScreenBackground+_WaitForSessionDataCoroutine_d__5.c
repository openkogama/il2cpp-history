
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenBackground+<WaitForSessionDataCoroutine>d__5::
     LoadingScreenBackground_WaitForSessionDataCoroutine_d_5_MoveNext
               (LoadingScreenBackground_WaitForSessionDataCoroutine_d_5 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  iVar2 = (this->fields).__1__state;
  pLVar3 = (this->fields).__4__this;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    (this->fields).__1__state = -1;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cVar1 = '\x01';
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField ==
        (GameSessionData *)0x0) {
      bVar4 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
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
      (this->fields).__1__state = 1;
      return 1;
    }
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar9 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar9 == (GameSessionData *)0x0) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar11 = (*pcVar10)();
      return bVar11;
    }
    pSVar12 = (pGVar9->fields).planetImageURL;
    if ((pSVar12 != ::StringLiteral__) &&
       ((((pSVar12 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
         ((pSVar12->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
        (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar12->fields)._firstChar,
                            (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                            (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar11 == 0)))) {
      if ((pLVar3 == (LoadingScreenBackground *)0x0) ||
         (this_00 = (pLVar3->fields).imageStream, this_00 == (StreamPngToSprite *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AsyncWWWManager);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__CachedTextureRequest);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__StreamPngToSprite__StreamingTextureLoaded_UnityEngine__Networking__UnityWebRequest_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__Common__Urls);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_00->fields).currentlyDownloading != 0) {
        StreamPngToSprite::StreamPngToSprite_CancelDownload(this_00,(MethodInfo *)0x0);
      }
      (this_00->fields).currentlyDownloading = 1;
      pSVar12 = mscorlib.dll::System::String::String_Concat_4
                         (::StringLiteral__,pSVar12,(MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__StreamPngToSprite__StreamingTextureLoaded_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_02 = (AsyncWebRequest *)FUN_?(TypeInfo__CachedTextureRequest);
      AsyncWebRequest::AsyncWebRequest__ctor
                (this_02,pSVar12,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(MethodInfo *)0x0);
      *(undefined1 *)&this_02[1].klass = 0;
      if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest(this_02,(MethodInfo *)0x0);
    }
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenBackground+<WaitForSessionDataCoroutine>d__5::
     LoadingScreenBackground_WaitForSessionDataCoroutine_d_5_System_Collections_IEnumerator_Reset
               (LoadingScreenBackground_WaitForSessionDataCoroutine_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LoadingScreenBackground___WaitForSessionDataCoroutine_d__5__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

