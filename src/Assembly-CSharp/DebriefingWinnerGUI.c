
/* Void ActivateScoreImage(WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_ActivateScoreImage
               (DebriefingWinnerGUI *this,WinningConditionType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pLVar2 = (this->fields).winConImages;
  uVar3 = uVar1;
  while (pLVar2 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    uVar4 = (uint)uVar3;
    if ((pLVar2->fields)._size <= (int)uVar4) {
      return;
    }
    pLVar2 = (this->fields).winConImages;
    if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
    pDVar5 = (pLVar2->fields)._items;
    if (pDVar5 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
    if ((uint)pDVar5->max_length <= uVar4) goto code_?;
    if (statType == *(WinningConditionType__Enum *)((longlong)&pDVar5->vector[0].ScoreType + uVar1))
    {
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
      pDVar5 = (pLVar2->fields)._items;
      if (pDVar5 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar5->max_length <= uVar4) goto code_?;
      pCVar6 = *(Component **)((longlong)&pDVar5->vector[0].ScoreImage + uVar1);
      if ((pCVar6 == (Component *)0x0) ||
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (pCVar6,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
      pDVar5 = (pLVar2->fields)._items;
      if (pDVar5 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar5->max_length <= uVar4) goto code_?;
      pGVar7 = *(GameObject **)((longlong)&pDVar5->vector[0].WinningConditionImage + uVar1);
      if (pGVar7 == (GameObject *)0x0) break;
      value = 1;
    }
    else {
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pDVar5 = (pLVar2->fields)._items;
      if (pDVar5 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar5->max_length <= uVar4) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pCVar6 = *(Component **)((longlong)&pDVar5->vector[0].ScoreImage + uVar1);
      if ((pCVar6 == (Component *)0x0) ||
         (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             (pCVar6,(MethodInfo *)0x0), pGVar7 == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar7,0,(MethodInfo *)0x0);
      pLVar2 = (this->fields).winConImages;
      if (pLVar2 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= uVar4) goto code_?;
      pDVar5 = (pLVar2->fields)._items;
      if (pDVar5 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar5->max_length <= uVar4) goto code_?;
      pGVar7 = *(GameObject **)((longlong)&pDVar5->vector[0].WinningConditionImage + uVar1);
      if (pGVar7 == (GameObject *)0x0) break;
      value = 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar7,value,(MethodInfo *)0x0);
    uVar3 = (ulonglong)(uVar4 + 1);
    uVar1 = uVar1 + 0x28;
    pLVar2 = (this->fields).winConImages;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetAdditionalInformation(String, WinningConditionType) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetAdditionalInformation
               (DebriefingWinnerGUI *this,String *text,WinningConditionType__Enum winConType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<DebriefingWinnerGUI::WinningConditionData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((text == ::StringLiteral__) ||
     ((((text != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
       ((text->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
      (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(text->fields)._firstChar,
                          (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                          (longlong)(text->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
      ))) {
    return;
  }
  uVar2 = 0;
  pLVar3 = (this->fields).winConImages;
  uVar4 = uVar2;
  while (pLVar3 != (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) {
    uVar5 = (uint)uVar4;
    if ((pLVar3->fields)._size <= (int)uVar5) {
      return;
    }
    pLVar3 = (this->fields).winConImages;
    if (pLVar3 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
    if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
    pDVar6 = (pLVar3->fields)._items;
    if (pDVar6 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
    if ((uint)pDVar6->max_length <= uVar5) goto code_?;
    this_00 = *(GameObject **)((longlong)&pDVar6->vector[0].InfoBG + uVar2);
    if (*(WinningConditionType__Enum *)((longlong)&pDVar6->vector[0].ScoreType + uVar2) ==
        winConType) {
      if (pLVar3 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pDVar6 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar6->max_length <= uVar5) {
code_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (this_00 == (GameObject *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pLVar3 = (this->fields).winConImages;
      if (pLVar3 == (List_1_DebriefingWinnerGUI_WinningConditionData_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar5) goto code_?;
      pDVar6 = (pLVar3->fields)._items;
      if (pDVar6 == (DebriefingWinnerGUI_WinningConditionData__Array *)0x0) break;
      if ((uint)pDVar6->max_length <= uVar5) goto code_?;
      plVar8 = *(longlong **)((longlong)&pDVar6->vector[0].AdditionalInfo + uVar2);
      if (plVar8 == (longlong *)0x0) break;
      (**(code **)(*plVar8 + 0x5e8))(plVar8,text);
    }
    uVar4 = (ulonglong)(uVar5 + 1);
    uVar2 = uVar2 + 0x28;
    pLVar3 = (this->fields).winConImages;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetTimerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
               (DebriefingWinnerGUI *this,String *time,MethodInfo *method)

{
  pTVar1 = (this->fields).timer;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,time,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetWinValue(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinValue
               (DebriefingWinnerGUI *this,String *winVal,MethodInfo *method)

{
  pTVar1 = (this->fields).winValue;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,winVal,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetWinnerImage(Color, RenderTexture) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerImage
               (DebriefingWinnerGUI *this,Color *startColor,RenderTexture *image,MethodInfo *method)

{
  fVar1 = startColor->b * _UNK_?;
  fVar2 = startColor->g * _UNK_?;
  pIVar3 = (this->fields).backgroundImage;
  if (pIVar3 != (ImageAnimator *)0x0) {
    fVar4 = startColor->r;
    fVar5 = startColor->g;
    fVar6 = startColor->b;
    fVar7 = startColor->a;
    (pIVar3->fields).endColor.r = startColor->r * _UNK_?;
    (pIVar3->fields).endColor.g = fVar2;
    (pIVar3->fields).endColor.b = fVar1;
    (pIVar3->fields).endColor.a = 1.0;
    (pIVar3->fields).startColor.r = fVar4;
    (pIVar3->fields).startColor.g = fVar5;
    (pIVar3->fields).startColor.b = fVar6;
    (pIVar3->fields).startColor.a = fVar7;
    pRVar8 = (this->fields).winnerImage;
    if (pRVar8 != (RawImage *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object,image,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pRVar9 = (RenderTexture *)(pRVar8->fields).m_Texture;
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (image != (RenderTexture *)0x0 || pRVar9 != (RenderTexture *)0x0) {
        if (image == (RenderTexture *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pRVar9 == (RenderTexture *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          bVar11 = (pRVar9->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else if (pRVar9 == (RenderTexture *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar11 = (image->fields)._._.m_CachedPtr == (void *)0x0;
        }
        else {
          bVar11 = pRVar9 == image;
        }
        if (!bVar11) {
          bVar11 = iRam_? != 0;
          (pRVar8->fields).m_Texture = (Texture *)image;
          if (bVar11) {
            uVar12 = (uint)((ulonglong)&(pRVar8->fields).m_Texture >> 0xc);
            puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar14 = *puVar13;
              LOCK();
              uVar15 = *puVar13;
              if (uVar14 == uVar15) {
                *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (uVar14 != uVar15);
          }
          (*(pRVar8->klass->vtable).SetVerticesDirty.methodPtr)
                    (pRVar8,(pRVar8->klass->vtable).SetVerticesDirty.method);
          (*(pRVar8->klass->vtable).SetMaterialDirty.methodPtr)
                    (pRVar8,(pRVar8->klass->vtable).SetMaterialDirty.method);
        }
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetWinnerText(String) */

void Assembly-CSharp.dll::DebriefingWinnerGUI::DebriefingWinnerGUI_SetWinnerText
               (DebriefingWinnerGUI *this,String *winner,MethodInfo *method)

{
  pTVar1 = (this->fields).winnerName;
  if (pTVar1 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,winner,(pTVar1->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

