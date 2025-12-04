
/* Int32 CalculateLengthOfMessage(String) */

int32_t Assembly-CSharp.dll::AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                  (AddDotsToTruncatedText *this,String *message,MethodInfo *method)

{
  uStack_1 = 0;
  fVar2 = 0.0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  if (message != (String *)0x0) {
    pCVar9 = mscorlib.dll::System::String::String_ToCharArray(message,(MethodInfo *)0x0);
    uVar10 = 0;
    if (pCVar9 != (Char__Array *)0x0) {
      puVar11 = pCVar9->vector;
      while( true ) {
        if ((int)pCVar9->max_length <= (int)uVar10) {
          return (int)fVar2;
        }
        if ((uint)pCVar9->max_length <= uVar10) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          iVar13 = (*pcVar12)();
          return iVar13;
        }
        this_00 = (this->fields).text;
        if ((this_00 == (Text *)0x0) ||
           (pFVar14 = (this_00->fields).m_FontData, pFVar14 == (FontData *)0x0)) break;
        obj = (pFVar14->fields).m_Font;
        uVar15 = *puVar11;
        obj_00 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                           (this_00,(MethodInfo *)0x0);
        if (obj_00 == (TextGenerator_1 *)0x0) break;
        pvVar16 = (obj_00->fields).m_Ptr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          iVar13 = (*pcVar12)();
          return iVar13;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar12 = (code *)swi(3);
          iVar13 = (*pcVar12)();
          return iVar13;
        }
        pcRam_? = pcVar12;
        uVar18 = (*pcRam_?)(pvVar16);
        if (obj == (Font *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Font>_UnityEngine__Font_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar16 = (obj->fields)._.m_CachedPtr;
        if (pvVar16 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          iVar13 = (*pcVar12)();
          return iVar13;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar17 = func_?(&UNK_?);
          FUN_?(uVar17,0);
          pcVar12 = (code *)swi(3);
          iVar13 = (*pcVar12)();
          return iVar13;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar16,uVar15,&uStack_3,uVar18,0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        fVar19 = uStack_7._4_4_;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar20 = (double)FUN_?(SUB84((double)fVar19,0));
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 1;
        fVar2 = fVar2 + (float)(int)dVar20;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  iVar13 = (*pcVar12)();
  return iVar13;
}


/* IEnumerator Start() */

IEnumerator *
Assembly-CSharp.dll::AddDotsToTruncatedText::AddDotsToTruncatedText_Start
          (AddDotsToTruncatedText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AddDotsToTruncatedText___Start_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__AddDotsToTruncatedText___Start_d__1);
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

