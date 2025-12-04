
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>d__1::
     AddDotsToTruncatedText_Start_d_1_MoveNext
               (AddDotsToTruncatedText_Start_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 != (AddDotsToTruncatedText *)0x0) &&
       (pTVar2 = (this_00->fields).text, pTVar2 != (Text *)0x0)) {
      puVar3 = (undefined8 *)
                (*(pTVar2->klass->vtable).get_color.methodPtr)
                          (&uStack_4,pTVar2,(pTVar2->klass->vtable).get_color.method);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      (this->fields)._c_5__2.r = (float)(int)uVar5;
      (this->fields)._c_5__2.g = (float)(int)((ulonglong)uVar5 >> 0x20);
      (this->fields)._c_5__2.b = (float)(int)uVar6;
      (this->fields)._c_5__2.a = (float)(int)((ulonglong)uVar6 >> 0x20);
      (this->fields)._alpha_5__3 = (this->fields)._c_5__2.a;
      pTVar2 = (this_00->fields).text;
      (this->fields)._c_5__2.a = 0.0;
      if (pTVar2 != (Text *)0x0) {
        uStack_4._0_4_ = (this->fields)._c_5__2.r;
        uStack_4._4_4_ = (this->fields)._c_5__2.g;
        uStack_7._0_4_ = (this->fields)._c_5__2.b;
        uStack_7._4_4_ = (this->fields)._c_5__2.a;
        (*(pTVar2->klass->vtable).set_color.methodPtr)
                  (pTVar2,&uStack_4,(pTVar2->klass->vtable).set_color.method);
        pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
        bVar9 = iRam_? != 0;
        (this->fields).__2__current = pOVar8;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if ((this_00 == (AddDotsToTruncatedText *)0x0) ||
         (pTVar2 = (this_00->fields).text, pTVar2 == (Text *)0x0)) goto code_?;
      pSVar14 = (String *)(*(pTVar2->klass->vtable).get_text.methodPtr)();
      bVar9 = iRam_? != 0;
      (this->fields)._textValue_5__4 = pSVar14;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(this->fields)._textValue_5__4 >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      (this->fields)._addDots_5__5 = 0;
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      (this->fields).__1__state = -1;
      if (this_00 == (AddDotsToTruncatedText *)0x0) goto code_?;
    }
    pTVar2 = (this_00->fields).text;
    if ((pTVar2 != (Text *)0x0) &&
       (pTVar15 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                            (pTVar2,(MethodInfo *)0x0), pTVar15 != (TextGenerator_1 *)0x0)) {
      pvVar16 = (pTVar15->fields).m_Ptr;
      if (pvVar16 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
        pcVar17 = (code *)swi(3);
        bVar18 = (*pcVar17)();
        return bVar18;
      }
      pcVar17 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar17 = (code *)swi(3);
        bVar18 = (*pcVar17)();
        return bVar18;
      }
      pcRam_? = pcVar17;
      iVar1 = (*pcRam_?)(pvVar16);
      if (iVar1 == 0) {
        pOVar8 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
        bVar9 = iRam_? != 0;
        *(undefined4 *)&pOVar8[1].klass = 0x3dcccccd;
        (this->fields).__2__current = pOVar8;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        (this->fields).__1__state = 2;
        return 1;
      }
      pTVar2 = (this_00->fields).text;
      if ((pTVar2 != (Text *)0x0) &&
         (pFVar19 = (pTVar2->fields).m_FontData, pFVar19 != (FontData *)0x0)) {
        if ((pFVar19->fields).m_BestFit != 0) {
          pTVar15 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                              (pTVar2,(MethodInfo *)0x0);
          if (pTVar15 == (TextGenerator_1 *)0x0) goto code_?;
          pvVar16 = (pTVar15->fields).m_Ptr;
          if (pvVar16 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar15,(MethodInfo *)0x0);
            pcVar17 = (code *)swi(3);
            bVar18 = (*pcVar17)();
            return bVar18;
          }
          pcVar17 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar17 = (code *)swi(3);
            bVar18 = (*pcVar17)();
            return bVar18;
          }
          pcRam_? = pcVar17;
          iVar20 = (*pcRam_?)(pvVar16);
          UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                    (pTVar2,iVar20,(MethodInfo *)0x0);
        }
        pcVar17 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar17 = (code *)swi(3);
          bVar18 = (*pcVar17)();
          return bVar18;
        }
        pcRam_? = pcVar17;
        iVar1 = (*pcRam_?)();
        fVar21 = (float)iVar1 / _UNK_?;
        iVar20 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                          (this_00,::StringLiteral____,(MethodInfo *)0x0);
        pSVar14 = (this->fields)._textValue_5__4;
        if (pSVar14 != (String *)0x0) {
          while (0 < (pSVar14->fields)._stringLength) {
            iVar22 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                               (this_00,(this->fields)._textValue_5__4,(MethodInfo *)0x0);
            pTVar2 = (this_00->fields).text;
            if ((pTVar2 == (Text *)0x0) ||
               (obj = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pTVar2,(MethodInfo *)0x0), obj == (RectTransform *)0x0))
            goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_4 = 0;
            uStack_7 = 0;
            pvVar16 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar16 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar17 = (code *)swi(3);
              bVar18 = (*pcVar17)();
              return bVar18;
            }
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar17 = (code *)swi(3);
              bVar18 = (*pcVar17)();
              return bVar18;
            }
            pcRam_? = pcVar17;
            (*pcRam_?)(pvVar16);
            if ((float)iVar22 / fVar21 <= (float)uStack_7 - (float)iVar20 / fVar21) break;
            pSVar14 = (this->fields)._textValue_5__4;
            (this->fields)._addDots_5__5 = 1;
            if (pSVar14 == (String *)0x0) goto code_?;
            iVar1 = (pSVar14->fields)._stringLength + -1;
            iVar22 = 0;
            if (-1 < iVar1) {
              iVar22 = iVar1;
            }
            pSVar14 = mscorlib.dll::System::String::String_Remove
                                ((this->fields)._textValue_5__4,iVar22,1,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            (this->fields)._textValue_5__4 = pSVar14;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&(this->fields)._textValue_5__4 >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar12 == *puVar13;
                if (bVar9) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            pTVar2 = (this_00->fields).text;
            if (pTVar2 == (Text *)0x0) goto code_?;
            (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,(this->fields)._textValue_5__4);
            pSVar14 = (this->fields)._textValue_5__4;
            if (pSVar14 == (String *)0x0) goto code_?;
          }
          if ((this->fields)._addDots_5__5 != 0) {
            pTVar2 = (this_00->fields).text;
            if (pTVar2 == (Text *)0x0) goto code_?;
            pSVar14 = (String *)
                      (*(pTVar2->klass->vtable).get_text.methodPtr)
                                (pTVar2,(pTVar2->klass->vtable).get_text.method);
            pSVar14 = mscorlib.dll::System::String::String_Concat_4
                                (pSVar14,::StringLiteral____,(MethodInfo *)0x0);
            (*(pTVar2->klass->vtable).set_text.methodPtr)
                      (pTVar2,pSVar14,(pTVar2->klass->vtable).set_text.method);
          }
          pTVar2 = (this_00->fields).text;
          if ((pTVar2 != (Text *)0x0) &&
             (pFVar19 = (pTVar2->fields).m_FontData, pFVar19 != (FontData *)0x0)) {
            iVar1 = (pFVar19->fields).m_FontSize;
            iVar23 = (pFVar19->fields).m_MinSize;
            if (((iVar1 < iVar23) || (iVar23 = (pFVar19->fields).m_MaxSize, iVar23 < iVar1)) &&
               ((pFVar19->fields).m_FontSize != iVar23)) {
              (pFVar19->fields).m_FontSize = iVar23;
              (*(pTVar2->klass->vtable).SetVerticesDirty.methodPtr)
                        (pTVar2,(pTVar2->klass->vtable).SetVerticesDirty.method);
              (*(pTVar2->klass->vtable).SetLayoutDirty.methodPtr)
                        (pTVar2,(pTVar2->klass->vtable).SetLayoutDirty.method);
            }
            pTVar2 = (this_00->fields).text;
            (this->fields)._c_5__2.a = (this->fields)._alpha_5__3;
            if (pTVar2 != (Text *)0x0) {
              uStack_4._0_4_ = (this->fields)._c_5__2.r;
              uStack_4._4_4_ = (this->fields)._c_5__2.g;
              uStack_7._0_4_ = (this->fields)._c_5__2.b;
              uStack_7._4_4_ = (this->fields)._c_5__2.a;
              (*(pTVar2->klass->vtable).set_color.methodPtr)
                        (pTVar2,&uStack_4,(pTVar2->klass->vtable).set_color.method);
              return 0;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>d__1::
     AddDotsToTruncatedText_Start_d_1_System_Collections_IEnumerator_Reset
               (AddDotsToTruncatedText_Start_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__AddDotsToTruncatedText___Start_d__1__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

