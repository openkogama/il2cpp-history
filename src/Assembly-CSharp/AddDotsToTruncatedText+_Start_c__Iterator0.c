
/* Void Dispose() */

void Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>c__Iterator0::
     AddDotsToTruncatedText_Start_c_Iterator0_Dispose
               (AddDotsToTruncatedText_Start_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>c__Iterator0::
     AddDotsToTruncatedText_Start_c_Iterator0_MoveNext
               (AddDotsToTruncatedText_Start_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pAVar2 = (this->fields)._this;
    if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
       (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) {
      pfVar4 = (float *)(*(code *)(pTVar3->klass->vtable).get_color.method)
                                   (&stack0xffffffd8,pTVar3,
                                    (pTVar3->klass->vtable).set_color.methodPtr);
      fVar5 = pfVar4[1];
      fVar6 = pfVar4[2];
      fVar7 = pfVar4[3];
      (this->fields)._c___0.r = *pfVar4;
      (this->fields)._c___0.g = fVar5;
      (this->fields)._c___0.b = fVar6;
      (this->fields)._c___0.a = fVar7;
      (this->fields)._alpha___0 = (this->fields)._c___0.a;
      (this->fields)._c___0.a = 0.0;
      pAVar2 = (this->fields)._this;
      if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
         (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) {
        (*(code *)(pTVar3->klass->vtable).set_color.method)
                  (pTVar3,(this->fields)._c___0.r,(this->fields)._c___0.g,(this->fields)._c___0.b,
                   (this->fields)._c___0.a,(pTVar3->klass->vtable).get_raycastTarget.methodPtr);
        this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
                  func_?(TypeInfo__UnityEngine__WaitForEndOfFrame);
        WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
        WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
        (this->fields)._current = (Object *)this_02;
        if ((this->fields)._disposing != 0) {
          return 1;
        }
        (this->fields)._PC = 1;
        return 1;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      pAVar2 = (this->fields)._this;
      if ((pAVar2 == (AddDotsToTruncatedText *)0x0) ||
         (pTVar3 = (pAVar2->fields).text, pTVar3 == (Text *)0x0)) goto code_?;
      pSVar8 = (String *)
                (*(code *)(pTVar3->klass->vtable).get_text.method)
                          (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
      (this->fields)._textValue___0 = pSVar8;
      (this->fields)._addDots___0 = 0;
    }
    else if (iVar1 != 2) {
      return 0;
    }
    pAVar2 = (this->fields)._this;
    if (((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
        (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) &&
       (pTVar9 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                           (pTVar3,(MethodInfo *)0x0), pTVar9 != (TextGenerator *)0x0)) {
      iVar10 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
               TextGenerator_get_fontSizeUsedForBestFit(pTVar9,(MethodInfo *)0x0);
      if (iVar10 == 0) {
        this_00 = (WaitForSeconds *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                  (this_00,0.1,(MethodInfo *)0x0);
        (this->fields)._current = (Object *)this_00;
        if ((this->fields)._disposing != 0) {
          return 1;
        }
        (this->fields)._PC = 2;
        return 1;
      }
      pAVar2 = (this->fields)._this;
      if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
         (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) {
        bVar11 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextForBestFit
                          (pTVar3,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pAVar2 = (this->fields)._this;
          if (((pAVar2 == (AddDotsToTruncatedText *)0x0) ||
              (pTVar3 = (pAVar2->fields).text, pTVar3 == (Text *)0x0)) ||
             ((pTVar9 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_cachedTextGenerator
                                  (pTVar3,(MethodInfo *)0x0), pTVar9 == (TextGenerator *)0x0 ||
              (iVar10 = UnityEngine.TextRenderingModule.dll::UnityEngine::TextGenerator::
                        TextGenerator_get_fontSizeUsedForBestFit(pTVar9,(MethodInfo *)0x0),
              pTVar3 == (Text *)0x0)))) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                    (pTVar3,iVar10,(MethodInfo *)0x0);
        }
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                           ((MethodInfo *)0x0);
        pAVar2 = (this->fields)._this;
        (this->fields)._res___0 = (float)iVar10 / _UNK_?;
        if (pAVar2 != (AddDotsToTruncatedText *)0x0) {
          iVar10 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                             (pAVar2,StringLiteral____,(MethodInfo *)0x0);
          pCVar12 = (Collection_1_VoxelHit_ *)(this->fields)._textValue___0;
          (this->fields)._dotSize___0 = (float)iVar10 / (this->fields)._res___0;
          if (pCVar12 != (Collection_1_VoxelHit_ *)0x0) {
            while (pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]
                             ::Collection_1_VoxelHit__get_Items(pCVar12,(MethodInfo *)0x0),
                  0 < (int)pIVar13) {
              pAVar2 = (this->fields)._this;
              if (pAVar2 == (AddDotsToTruncatedText *)0x0) goto code_?;
              iVar10 = AddDotsToTruncatedText::AddDotsToTruncatedText_CalculateLengthOfMessage
                                 (pAVar2,(this->fields)._textValue___0,(MethodInfo *)0x0);
              fVar5 = (this->fields)._res___0;
              pAVar2 = (this->fields)._this;
              if (((pAVar2 == (AddDotsToTruncatedText *)0x0) ||
                  (pTVar3 = (pAVar2->fields).text, pTVar3 == (Text *)0x0)) ||
                 (this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pTVar3,(MethodInfo *)0x0),
                 this_01 == (RectTransform *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
              fVar6 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffe8,
                                  (MethodInfo *)0x0);
              if ((float)iVar10 / fVar5 <= fVar6 - (this->fields)._dotSize___0) break;
              pCVar12 = (Collection_1_VoxelHit_ *)(this->fields)._textValue___0;
              (this->fields)._addDots___0 = 1;
              if (pCVar12 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              pIVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                        Collection_1_VoxelHit__get_Items(pCVar12,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                func_?();
              }
              iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                                 (0,(int32_t)((int)&pIVar13[-1].monitor + 3),(MethodInfo *)0x0);
              if (pCVar12 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
              pSVar8 = mscorlib.dll::System::String::String_Remove_1
                                  ((String *)pCVar12,iVar10,1,(MethodInfo *)0x0);
              pAVar2 = (this->fields)._this;
              (this->fields)._textValue___0 = pSVar8;
              if ((pAVar2 == (AddDotsToTruncatedText *)0x0) ||
                 ((pAVar2->fields).text == (Text *)0x0)) goto code_?;
              func_?();
              pCVar12 = (Collection_1_VoxelHit_ *)(this->fields)._textValue___0;
              if (pCVar12 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
            }
            if ((this->fields)._addDots___0 != 0) {
              pAVar2 = (this->fields)._this;
              if ((pAVar2 == (AddDotsToTruncatedText *)0x0) ||
                 (pTVar3 = (pAVar2->fields).text, pTVar3 == (Text *)0x0)) goto code_?;
              pSVar8 = (String *)
                        (*(code *)(pTVar3->klass->vtable).get_text.method)
                                  (pTVar3,(pTVar3->klass->vtable).set_text.methodPtr);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar8 = mscorlib.dll::System::String::String_Concat_2
                                  (pSVar8,StringLiteral____,(MethodInfo *)0x0);
              if (pTVar3 == (Text *)0x0) goto code_?;
              (*(code *)(pTVar3->klass->vtable).set_text.method)
                        (pTVar3,pSVar8,
                         (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            }
            pAVar2 = (this->fields)._this;
            if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
               (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) {
              iVar10 = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_fontSize
                                 (pTVar3,(MethodInfo *)0x0);
              pAVar2 = (this->fields)._this;
              if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
                 (pTVar14 = (pAVar2->fields).text, pTVar14 != (Text *)0x0)) {
                min = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMinSize
                                (pTVar14,(MethodInfo *)0x0);
                pAVar2 = (this->fields)._this;
                if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
                   (pTVar14 = (pAVar2->fields).text, pTVar14 != (Text *)0x0)) {
                  max = UnityEngine.UI.dll::UnityEngine::UI::Text::Text_get_resizeTextMaxSize
                                  (pTVar14,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                    func_?();
                  }
                  iVar10 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                                     (iVar10,min,max,(MethodInfo *)0x0);
                  if (pTVar3 != (Text *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Text::Text_set_fontSize
                              (pTVar3,iVar10,(MethodInfo *)0x0);
                    (this->fields)._c___0.a = (this->fields)._alpha___0;
                    pAVar2 = (this->fields)._this;
                    if ((pAVar2 != (AddDotsToTruncatedText *)0x0) &&
                       (pTVar3 = (pAVar2->fields).text, pTVar3 != (Text *)0x0)) {
                      (*(code *)(pTVar3->klass->vtable).set_color.method)
                                (pTVar3,(this->fields)._c___0.r,(this->fields)._c___0.g,
                                 (this->fields)._c___0.b,(this->fields)._c___0.a,
                                 (pTVar3->klass->vtable).get_raycastTarget.methodPtr);
                      (this->fields)._PC = -1;
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
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  bVar11 = (*pcVar15)();
  return bVar11;
}


/* Void Reset() */

void Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>c__Iterator0::
     AddDotsToTruncatedText_Start_c_Iterator0_Reset
               (AddDotsToTruncatedText_Start_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::AddDotsToTruncatedText+<Start>c__Iterator0::
         AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                   (AddDotsToTruncatedText_Start_c_Iterator0 *this,MethodInfo *method)

{
  return (this->fields)._current;
}

