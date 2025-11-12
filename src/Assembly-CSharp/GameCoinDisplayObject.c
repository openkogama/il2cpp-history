
/* Void Destroy() */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_Destroy
               (GameCoinDisplayObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textMesh1;
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
  pTVar1 = (this->fields).textMesh2;
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
  pGVar2 = (this->fields).coinMesh;
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
  pvVar3 = (void *)0x0;
  if (pGVar2 != (GameObject *)0x0) {
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void SetAmount(Int32) */

void Assembly-CSharp.dll::GameCoinDisplayObject::GameCoinDisplayObject_SetAmount
               (GameCoinDisplayObject *this,int32_t amount,MethodInfo *method)

{
  aIStackX_10[0].m_value = amount;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = ::StringLiteral__;
  if (0 < amount) {
    value = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  }
  pTVar1 = (this->fields).textMesh1;
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields).textMesh2;
    if (pTVar1 != (TextMesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                      ,value,0);
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
      puStack_2 = (uint16_t *)0x0;
      uStack_3 = 0;
      uStack_4 = 0;
      puStack_5 = &stack0x00000008;
      if (pTVar1 != (TextMesh *)0x0) {
        pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar6 != (void *)0x0) {
          if (value != (String *)0x0) {
            if ((value->fields)._stringLength == 0) {
              puStack_2 = (uint16_t *)0x1;
              uStack_3 = 0;
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
              iVar7 = (value->fields)._stringLength;
              puStack_2 = &(value->fields)._firstChar;
              if (iVar7 == 0) {
                puStack_2 = (uint16_t *)0x0;
              }
              uStack_3 = CONCAT44(uStack_3._4_4_,iVar7);
            }
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? != (code *)0x0) ||
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 != (code *)0x0)) {
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar6,&puStack_2);
            return;
          }
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      }
      FUN_?();
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

