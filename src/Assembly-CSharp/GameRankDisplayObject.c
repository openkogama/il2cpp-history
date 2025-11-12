
/* Void Destroy() */

void Assembly-CSharp.dll::GameRankDisplayObject::GameRankDisplayObject_Destroy
               (GameRankDisplayObject *this,MethodInfo *method)

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


/* Void SetAmount(GamePassTier) */

void Assembly-CSharp.dll::GameRankDisplayObject::GameRankDisplayObject_SetAmount
               (GameRankDisplayObject *this,GamePassTier__Enum requiredRank,MethodInfo *method)

{
  pTVar1 = (this->fields).frontText;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_2._pointer._value = (void *)0x0;
  RStack_2._length = 0;
  RStack_2._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (requiredRank & 0xff,&RStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar1 != (TextMesh *)0x0) {
    UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
              (pTVar1,pSVar3,(MethodInfo *)0x0);
    pTVar1 = (this->fields).backText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    RStack_2._pointer._value = (void *)0x0;
    RStack_2._length = 0;
    RStack_2._12_4_ = 0;
    pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                       (requiredRank & 0xff,&RStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pTVar1 != (TextMesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::TextMesh>_UnityEngine__TextMesh_
                      ,pSVar3,0);
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
      RStack_2._pointer._value = (uint16_t *)0x0;
      RStack_2._length = 0;
      RStack_2._12_4_ = 0;
      uStack_4 = 0;
      puStack_5 = &stack0x00000008;
      if (pTVar1 != (TextMesh *)0x0) {
        pvVar6 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar6 != (void *)0x0) {
          if (pSVar3 != (String *)0x0) {
            if ((pSVar3->fields)._stringLength == 0) {
              RStack_2._pointer._value = (uint16_t *)0x1;
              RStack_2._length = 0;
              RStack_2._12_4_ = 0;
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
              iVar7 = (pSVar3->fields)._stringLength;
              RStack_2._pointer._value = &(pSVar3->fields)._firstChar;
              if (iVar7 == 0) {
                RStack_2._pointer._value = (uint16_t *)0x0;
              }
              RStack_2._length = iVar7;
            }
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? != (code *)0x0) ||
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 != (code *)0x0)) {
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar6,&RStack_2);
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

