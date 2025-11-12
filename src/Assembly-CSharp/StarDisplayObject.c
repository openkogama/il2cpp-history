
/* Void Destroy() */

void Assembly-CSharp.dll::StarDisplayObject::StarDisplayObject_Destroy
               (StarDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).frontText;
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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)pTVar1,0.0,(MethodInfo *)0x0);
  pTVar1 = (this->fields).backText;
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
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pTVar1 != (TextMesh *)0x0) {
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::StarDisplayObject::StarDisplayObject_SetAmount
               (StarDisplayObject *this,int32_t starAmount,MethodInfo *method)

{
  aIStackX_10[0].m_value = starAmount;
  pTVar1 = (this->fields).frontText;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,pSVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).backText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
    if (pTVar1 != (TextMesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                      ,pSVar2,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      puStack_3 = (uint16_t *)0x0;
      uStack_4 = 0;
      uStack_5 = 0;
      puStack_6 = &stack0x00000008;
      if (pTVar1 != (TextMesh *)0x0) {
        pvVar7 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar7 != (void *)0x0) {
          if (pSVar2 != (String *)0x0) {
            if ((pSVar2->fields)._stringLength == 0) {
              puStack_3 = (uint16_t *)0x1;
              uStack_4 = 0;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              iVar8 = (pSVar2->fields)._stringLength;
              puStack_3 = &(pSVar2->fields)._firstChar;
              if (iVar8 == 0) {
                puStack_3 = (uint16_t *)0x0;
              }
              uStack_4 = CONCAT44(uStack_4._4_4_,iVar8);
            }
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? != (code *)0x0) ||
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 != (code *)0x0)) {
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar7,&puStack_3);
            return;
          }
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      }
      FUN_?();
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

