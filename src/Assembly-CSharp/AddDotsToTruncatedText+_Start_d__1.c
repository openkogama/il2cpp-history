
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>d__1::
     AddDotsToTruncatedText_Start_d_1_MoveNext
               (AddDotsToTruncatedText_Start_d_1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForEndOfFrame);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 != (AddDotsToTruncatedText *)0x0) &&
       (pTVar2 = (this_00->fields).text, pTVar2 != (Text *)0x0)) {
      pfVar3 = (float *)(*(pTVar2->klass->vtable).get_color.methodPtr)
                                   (&stack0xffffffd0,pTVar2,(pTVar2->klass->vtable).get_color.method
                                   );
      fVar4 = pfVar3[1];
      fVar5 = pfVar3[2];
      fVar6 = pfVar3[3];
      (this->fields)._c_5__2.r = *pfVar3;
      (this->fields)._c_5__2.g = fVar4;
      (this->fields)._c_5__2.b = fVar5;
      (this->fields)._c_5__2.a = fVar6;
      (this->fields)._alpha_5__3 = (this->fields)._c_5__2.a;
      pTVar2 = (this_00->fields).text;
      (this->fields)._c_5__2.a = 0.0;
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_color.methodPtr)
                  (pTVar2,(this->fields)._c_5__2.r,(this->fields)._c_5__2.g,(this->fields)._c_5__2.b
                   ,(this->fields)._c_5__2.a,(pTVar2->klass->vtable).set_color.method);
        this_03 = (TweenRunner_1_FloatTween_ *)
                  func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
        if (this_03 != (TweenRunner_1_FloatTween_ *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
          TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)this_03;
          func_?(&(this->fields).__2__current,this_03);
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if ((this_00 == (AddDotsToTruncatedText *)0x0) ||
         (pTVar2 = (this_00->fields).text, pTVar2 == (Text *)0x0)) goto code_?;
      pSVar7 = (String *)
                (*(pTVar2->klass->vtable).get_text.methodPtr)
                          (pTVar2,(pTVar2->klass->vtable).get_text.method);
      (this->fields)._textValue_5__4 = pSVar7;
      func_?(&(this->fields)._textValue_5__4,pSVar7);
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
       (pTVar8 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                           (pTVar2,(MethodInfo *)0x0), pTVar8 != (TextGenerator *)0x0)) {
      iVar9 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
              TextGenerator_get_fontSizeUsedForBestFit(pTVar8,(MethodInfo *)0x0);
      if (iVar9 == 0) {
        this_01 = (SubscribableVariableBase_1_System_Single_ *)func_?();
        if (this_01 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
          SubscribableVariableBase`1[System::Single]::
          SubscribableVariableBase_1_System_Single___ctor(this_01,0.1,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)this_01;
          func_?(&(this->fields).__2__current,this_01);
          (this->fields).__1__state = 2;
          return 1;
        }
      }
      else {
        pTVar2 = (this_00->fields).text;
        if (pTVar2 != (Text *)0x0) {
          bVar10 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextForBestFit
                            (pTVar2,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pTVar2 = (this_00->fields).text;
            if ((pTVar2 == (Text *)0x0) ||
               (pTVar8 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                                   (pTVar2,(MethodInfo *)0x0), pTVar8 == (TextGenerator *)0x0))
            goto code_?;
            iVar9 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                    TextGenerator_get_fontSizeUsedForBestFit(pTVar8,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                      (pTVar2,iVar9,(MethodInfo *)0x0);
          }
          iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                            ((MethodInfo *)0x0);
          fVar4 = (float)iVar9 / _UNK_?;
          iVar9 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                            (this_00,::StringLiteral____,(MethodInfo *)0x0);
          pSVar7 = (this->fields)._textValue_5__4;
          if (pSVar7 != (String *)0x0) {
            ppSVar11 = &(this->fields)._textValue_5__4;
            while (0 < (pSVar7->fields)._stringLength) {
              iVar12 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                                (this_00,*ppSVar11,(MethodInfo *)0x0);
              pTVar2 = (this_00->fields).text;
              if ((pTVar2 == (Text *)0x0) ||
                 (this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pTVar2,(MethodInfo *)0x0),
                 this_02 == (RectTransform *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffd0,this_02,(MethodInfo *)0x0);
              fVar5 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe0,
                                  (MethodInfo *)0x0);
              if ((float)iVar12 / fVar4 <= fVar5 - (float)iVar9 / fVar4) break;
              (this->fields)._addDots_5__5 = 1;
              if (*ppSVar11 == (String *)0x0) goto code_?;
              iVar1 = ((*ppSVar11)->fields)._stringLength + -1;
              iVar12 = 0;
              if (-1 < iVar1) {
                iVar12 = iVar1;
              }
              pSVar7 = mscorlib.dll::System::String::String_Remove
                                  (*ppSVar11,iVar12,1,(MethodInfo *)0x0);
              *ppSVar11 = pSVar7;
              func_?();
              pTVar2 = (this_00->fields).text;
              if (pTVar2 == (Text *)0x0) goto code_?;
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,*ppSVar11,(pTVar2->klass->vtable).set_text.method);
              pSVar7 = *ppSVar11;
              if (pSVar7 == (String *)0x0) goto code_?;
            }
            if ((this->fields)._addDots_5__5 != 0) {
              pTVar2 = (this_00->fields).text;
              if (pTVar2 == (Text *)0x0) goto code_?;
              pSVar7 = (String *)
                        (*(pTVar2->klass->vtable).get_text.methodPtr)
                                  (pTVar2,(pTVar2->klass->vtable).get_text.method);
              pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                  (pSVar7,::StringLiteral____,(MethodInfo *)0x0);
              (*(pTVar2->klass->vtable).set_text.methodPtr)
                        (pTVar2,pSVar7,(pTVar2->klass->vtable).set_text.method);
            }
            pTVar2 = (this_00->fields).text;
            if (pTVar2 != (Text *)0x0) {
              iVar9 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                                (pTVar2,(MethodInfo *)0x0);
              pTVar13 = (this_00->fields).text;
              if (pTVar13 != (Text *)0x0) {
                iVar12 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMinSize
                                  (pTVar13,(MethodInfo *)0x0);
                pTVar13 = (this_00->fields).text;
                if (pTVar13 != (Text *)0x0) {
                  iVar14 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMaxSize
                                     (pTVar13,(MethodInfo *)0x0);
                  if ((iVar12 <= iVar9) && (iVar12 = iVar9, iVar14 < iVar9)) {
                    iVar12 = iVar14;
                  }
                  UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                            (pTVar2,iVar12,(MethodInfo *)0x0);
                  pTVar2 = (this_00->fields).text;
                  (this->fields)._c_5__2.a = (this->fields)._alpha_5__3;
                  if (pTVar2 != (Text *)0x0) {
                    (*(pTVar2->klass->vtable).set_color.methodPtr)();
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  bVar10 = (*pcVar15)();
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>d__1::
     AddDotsToTruncatedText_Start_d_1_System_Collections_IEnumerator_Reset
               (AddDotsToTruncatedText_Start_d_1 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AddDotsToTruncatedText___Start_d__1__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

