
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_MoveNext
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PurchasedAccessoryPreviewer____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pOVar2 = (Object *)0x0;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (((this_00 != (PurchasedAccessoryPreviewer *)0x0) &&
        (this_01 = (this_00->fields).image, this_01 != (Image *)0x0)) &&
       (this_03 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)this_01,(MethodInfo *)0x0), this_03 != (RectTransform *)0x0)
       ) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_03,(Vector2)0x0,(MethodInfo *)0x0);
      (this_00->fields).currentTime = 0.0;
code_?:
      if ((this_00->fields).currentTime / (this_00->fields).imageDisplayTime < _UNK_?) {
        fVar3 = (this_00->fields).currentTime;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar3 = fVar3 + fVar4;
        (this_00->fields).currentTime = fVar3;
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (this_00,fVar3 / (this_00->fields).imageBounceEffectTime,
                   fVar3 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
        lVar5 = lRam_?;
        uStackX_8 = 0;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar2 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
              uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
          }
        }
        else {
          pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
        }
        bVar10 = iRam_? != 0;
        (this->fields).__2__current = pOVar2;
        if (bVar10) {
          uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (this_00,_UNK_?,_UNK_?,(MethodInfo *)0x0);
      lVar5 = lRam_?;
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar2 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
      }
      else {
        pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar10 = iRam_? != 0;
      (this->fields).__2__current = pOVar2;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
    goto code_?;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    goto code_?;
  }
  if (iVar1 != 2) {
    if (iVar1 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((this_00 == (PurchasedAccessoryPreviewer *)0x0) ||
     (pAVar11 = (this_00->fields).previewData, pAVar11 == (AccessoryDataClient__Array *)0x0))
  goto code_?;
  if ((int)pAVar11->max_length + -1 <= (this_00->fields).currentStreamingAssetIndex) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__PurchasedAccessoryPreviewer____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PurchasedAccessoryPreviewer____c);
    }
    this_02 = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__PurchasedAccessoryPreviewer____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PurchasedAccessoryPreviewer____c);
      }
      object = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0 = this_02;
      func_?(&TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0);
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    goto code_?;
  }
  PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
            (this_00,0.0,0.0,(MethodInfo *)0x0);
  iVar1 = (this_00->fields).currentStreamingAssetIndex;
  pAVar11 = (this_00->fields).previewData;
  uVar6 = iVar1 + 1;
  (this_00->fields).currentStreamingAssetIndex = uVar6;
  if (pAVar11 == (AccessoryDataClient__Array *)0x0) goto code_?;
  if ((uint)pAVar11->max_length <= uVar6) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    bVar13 = (*pcVar12)();
    return bVar13;
  }
  if (pAVar11->vector[(longlong)iVar1 + 1] == (AccessoryDataClient *)0x0) goto code_?;
  if ((pAVar11->vector[(longlong)iVar1 + 1]->fields)._.lvl == 0) {
code_?:
    if (pAVar11->vector[(int)uVar6] == (AccessoryDataClient *)0x0) goto code_?;
    iVar14 = (pAVar11->vector[(int)uVar6]->fields)._.cost;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pRVar15 = Styles::Styles_GetAccessoryColorsFromPrice(iVar14,(MethodInfo *)0x0);
  }
  else {
    if (pAVar11->vector[(int)uVar6] == (AccessoryDataClient *)0x0) goto code_?;
    if ((pAVar11->vector[(int)uVar6]->fields)._.cost != 0) goto code_?;
    if (pAVar11 == (AccessoryDataClient__Array *)0x0) goto code_?;
    if ((uint)pAVar11->max_length <= uVar6) goto code_?;
    if (pAVar11->vector[(int)uVar6] == (AccessoryDataClient *)0x0) goto code_?;
    iVar14 = (pAVar11->vector[(int)uVar6]->fields)._.lvl;
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?();
    }
    pRVar15 = Styles::Styles_GetAccessoryColorsFromLevel(iVar14,(MethodInfo *)0x0);
  }
  if (pRVar15 != (RarityStylesDef *)0x0) {
    fVar3 = (pRVar15->fields).backgroundColor.g;
    fVar4 = (pRVar15->fields).backgroundColor.b;
    fVar16 = (pRVar15->fields).backgroundColor.a;
    (this_00->fields).targetColorBackground.r = (pRVar15->fields).backgroundColor.r;
    (this_00->fields).targetColorBackground.g = fVar3;
    (this_00->fields).targetColorBackground.b = fVar4;
    (this_00->fields).targetColorBackground.a = fVar16;
    fVar3 = (pRVar15->fields).glowColor.g;
    fVar4 = (pRVar15->fields).glowColor.b;
    fVar16 = (pRVar15->fields).glowColor.a;
    (this_00->fields).targetColorGlow.r = (pRVar15->fields).glowColor.r;
    (this_00->fields).targetColorGlow.g = fVar3;
    (this_00->fields).targetColorGlow.b = fVar4;
    (this_00->fields).targetColorGlow.a = fVar16;
    routine = PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages
                        (this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
    lVar5 = lRam_?;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar2 + 1,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar2 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar10 = iRam_? != 0;
    (this->fields).__2__current = pOVar2;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_System_Collections_IEnumerator_Reset
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

