
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
      pfVar3 = (float *)(*(code *)(pTVar2->klass->vtable).get_color.method)
                                   (&stack0xffffffe4,pTVar2,
                                    (pTVar2->klass->vtable).set_color.methodPtr);
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
        (*(code *)(pTVar2->klass->vtable).set_color.method)
                  (pTVar2,(this->fields)._c_5__2.r,(this->fields)._c_5__2.g,
                   (this->fields)._c_5__2.b,(this->fields)._c_5__2.a,
                   (pTVar2->klass->vtable).get_raycastTarget.methodPtr);
        this_03 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                  func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
        UxmlObjectListAttributeDescription`1[System::Object]::
        UxmlObjectListAttributeDescription_1_System_Object___ctor(this_03,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)this_03;
        func_?(&(this->fields).__2__current,this_03);
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
      pSVar7 = (String *)
                (*(code *)(pTVar2->klass->vtable).get_text.method)
                          (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
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
        this_01 = (SubscribableVariable_1_System_Single_ *)func_?();
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                  (this_01,0.1,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)this_01;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 2;
        return 1;
      }
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
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0)
        ;
        fVar4 = (float)iVar9 / _UNK_?;
        iVar9 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                          (this_00,::StringLiteral____,(MethodInfo *)0x0);
        pSVar7 = (this->fields)._textValue_5__4;
        pSVar11 = (String *)((float)iVar9 / fVar4);
        if (pSVar7 != (String *)0x0) {
          ppSVar12 = &(this->fields)._textValue_5__4;
          while (0 < (pSVar7->fields)._stringLength) {
            iVar9 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                              (this_00,*ppSVar12,(MethodInfo *)0x0);
            pTVar2 = (this_00->fields).text;
            if ((pTVar2 == (Text *)0x0) ||
               (this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    ((Graphic *)pTVar2,(MethodInfo *)0x0),
               this_02 == (RectTransform *)0x0)) goto code_?;
            pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                               ((Rect *)&stack0xffffffe4,this_02,(MethodInfo *)0x0);
            if ((float)iVar9 / fVar4 <= pRVar13->m_Width - (float)pSVar11) break;
            (this->fields)._addDots_5__5 = 1;
            if (*ppSVar12 == (String *)0x0) goto code_?;
            iVar1 = ((*ppSVar12)->fields)._stringLength + -1;
            iVar9 = 0;
            if (-1 < iVar1) {
              iVar9 = iVar1;
            }
            pSVar11 = mscorlib.dll::System::String::String_Remove
                                (*ppSVar12,iVar9,1,(MethodInfo *)0x0);
            *ppSVar12 = pSVar11;
            func_?();
            pTVar2 = (this_00->fields).text;
            if (pTVar2 == (Text *)0x0) goto code_?;
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,*ppSVar12,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pSVar7 = *ppSVar12;
            if (pSVar7 == (String *)0x0) goto code_?;
          }
          if ((this->fields)._addDots_5__5 != 0) {
            pTVar2 = (this_00->fields).text;
            if (pTVar2 == (Text *)0x0) goto code_?;
            pSVar7 = (String *)
                      (*(code *)(pTVar2->klass->vtable).get_text.method)
                                (pTVar2,(pTVar2->klass->vtable).set_text.methodPtr);
            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                                (pSVar7,::StringLiteral____,(MethodInfo *)0x0);
            (*(code *)(pTVar2->klass->vtable).set_text.method)
                      (pTVar2,pSVar7,
                       (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          }
          pTVar2 = (this_00->fields).text;
          if (pTVar2 != (Text *)0x0) {
            iVar9 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                              (pTVar2,(MethodInfo *)0x0);
            pTVar14 = (this_00->fields).text;
            if (pTVar14 != (Text *)0x0) {
              value = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMinSize
                                (pTVar14,(MethodInfo *)0x0);
              pTVar14 = (this_00->fields).text;
              if (pTVar14 != (Text *)0x0) {
                iVar15 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMaxSize
                                   (pTVar14,(MethodInfo *)0x0);
                if ((value <= iVar9) && (value = iVar9, iVar15 < iVar9)) {
                  value = iVar15;
                }
                UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                          (pTVar2,value,(MethodInfo *)0x0);
                pTVar2 = (this_00->fields).text;
                (this->fields)._c_5__2.a = (this->fields)._alpha_5__3;
                if (pTVar2 != (Text *)0x0) {
                  (*(code *)(pTVar2->klass->vtable).set_color.method)();
                  return 0;
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
  pcVar16 = (code *)swi(3);
  bVar10 = (*pcVar16)();
  return bVar10;
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
  func_?(&
                  MethodInfo__AddDotsToTruncatedText___Start_d__1__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

