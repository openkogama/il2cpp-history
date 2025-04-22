
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_MoveNext(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>);
    func_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Styles);
    func_?(&MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_);
    func_?(&TypeInfo__PurchasedAccessoryPreviewer____c);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if (((this_00 != (PurchasedAccessoryPreviewer *)0x0) && (this_01 = (this_00->fields).image, this_01 != (Image *)0x0)) && (this_02 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)this_01,(MethodInfo *)0x0), this_02 != (RectTransform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(this_02,(Vector2)0x0,(MethodInfo *)0x0);
      (this_00->fields).currentTime = 0.0;
code_?:
      if ((this_00->fields).currentTime / (this_00->fields).imageDisplayTime < 1.0) {
        method_00 = (MethodInfo *)(this_00->fields).currentTime;
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
        fVar2 = (float)this + (float)method_00;
        (this_00->fields).currentTime = fVar2;
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime(this_00,fVar2 / (this_00->fields).imageBounceEffectTime,fVar2 / (this_00->fields).imageDisplayTime,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar3;
        func_?(&(pPVar1->fields).__2__current);
        (pPVar1->fields).__1__state = 1;
        return 1;
      }
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime(this_00,1.0,1.0,(MethodInfo *)0x0);
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
      pOVar3 = (Object *)func_?();
      (pPVar1->fields).__2__current = pOVar3;
      func_?(&(pPVar1->fields).__2__current,pOVar3);
      (pPVar1->fields).__1__state = 2;
      return 1;
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if ((this_00 == (PurchasedAccessoryPreviewer *)0x0) || (pAVar4 = (this_00->fields).previewData, pAVar4 == (AccessoryDataClient__Array *)0x0)) break;
    if ((int)(pAVar4->max_length - 1) <= (this_00->fields).currentStreamingAssetIndex) {
      root = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
      this = root;
      if ((TypeInfo__PurchasedAccessoryPreviewer____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__PurchasedAccessoryPreviewer____c);
      }
      callbackFunction = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__PurchasedAccessoryPreviewer____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_,(MethodInfo *)0x0);
        TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0 = callbackFunction;
        func_?(&TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0,callbackFunction);
        root = this;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy((GameObject *)root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_);
      goto code_?;
    }
    PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime(this_00,0.0,0.0,(MethodInfo *)0x0);
    iVar5 = (this_00->fields).currentStreamingAssetIndex;
    pAVar4 = (this_00->fields).previewData;
    uVar6 = iVar5 + 1;
    (this_00->fields).currentStreamingAssetIndex = uVar6;
    if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
    if (uVar6 < pAVar4->max_length) {
      if (pAVar4->vector[iVar5 + 1] == (AccessoryDataClient *)0x0) break;
      if (((pAVar4->vector[iVar5 + 1]->fields)._.lvl == 0) || ((((this_00->fields).previewData)->vector[iVar5 + 1]->fields)._.cost != 0)) {
        pAVar4 = (this_00->fields).previewData;
        if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
        if (pAVar4->max_length <= uVar6) goto code_?;
        unaff_EBX = (pAVar4->vector[iVar5 + 1]->fields)._.cost;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar7 = Styles::Styles_GetAccessoryColorsFromPrice(unaff_EBX,(MethodInfo *)0x0);
      }
      else {
        pAVar4 = (this_00->fields).previewData;
        if (pAVar4 == (AccessoryDataClient__Array *)0x0) break;
        if (pAVar4->max_length <= uVar6) goto code_?;
        if (pAVar4->vector[iVar5 + 1] == (AccessoryDataClient *)0x0) break;
        unaff_EBX = (pAVar4->vector[iVar5 + 1]->fields)._.lvl;
        if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Styles);
        }
        pRVar7 = Styles::Styles_GetAccessoryColorsFromLevel(unaff_EBX,(MethodInfo *)0x0);
      }
      if (pRVar7 != (RarityStylesDef *)0x0) {
        fVar2 = (pRVar7->fields).backgroundColor.g;
        fVar8 = (pRVar7->fields).backgroundColor.b;
        fVar9 = (pRVar7->fields).backgroundColor.a;
        (this_00->fields).targetColorBackground.r = (pRVar7->fields).backgroundColor.r;
        (this_00->fields).targetColorBackground.g = fVar2;
        (this_00->fields).targetColorBackground.b = fVar8;
        (this_00->fields).targetColorBackground.a = fVar9;
        fVar2 = (pRVar7->fields).glowColor.g;
        fVar8 = (pRVar7->fields).glowColor.b;
        fVar9 = (pRVar7->fields).glowColor.a;
        (this_00->fields).targetColorGlow.r = (pRVar7->fields).glowColor.r;
        (this_00->fields).targetColorGlow.g = fVar2;
        (this_00->fields).targetColorGlow.b = fVar8;
        (this_00->fields).targetColorGlow.a = fVar9;
        routine = PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_DisplayAndFadeImages(this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
code_?:
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
        pOVar3 = (Object *)func_?();
        (pPVar1->fields).__2__current = pOVar3;
        func_?();
        (pPVar1->fields).__1__state = 3;
        return 1;
      }
    }
    else {
code_?:
      func_?();
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  func_?();
  *(byte *)(unaff_EBX + -0x77cef82) = *(byte *)(unaff_EBX + -0x77cef82) | (byte)extraout_ECX;
  LOCK();
  UNLOCK();
  cVar10 = (char)((uint)((int)&(pPVar1->klass->_0).image + extraout_ECX) >> 8);
  *(char *)((int)&pPVar1[3].monitor + 3) = cVar10;
  *extraout_EDX = *extraout_EDX + cVar10;
  *(undefined4 *)((int)&(this_00->fields)._._._._.m_CachedPtr + 1) = 0xffffffff;
  in_stack_11[-1] = (float)&UNK_?;
  this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup((MethodInfo *)*in_stack_11);
  pfVar12 = in_stack_11 + 2;
  if (pPVar1 != (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0) {
    if ((float)this - (float)pPVar1[1].monitor < (float)pPVar1[1].klass) {
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
      in_stack_11[1] = (float)&this;
      *in_stack_11 = (float)TypeInfo__System__Int32;
      pfVar13 = in_stack_11 + -1;
      in_stack_11[-1] = (float)&UNK_?;
      uVar14 = func_?();
      *(undefined4 *)((int)pfVar13 + -4) = uVar14;
      *(undefined4 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1) = uVar14;
      *(undefined1 **)((int)pfVar13 + -8) = (undefined1 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1);
      *(undefined **)((int)pfVar13 + -0xc) = &UNK_?;
      func_?();
      *(undefined4 *)((int)&(this_00->fields)._._._._.m_CachedPtr + 1) = 1;
      return 1;
    }
    *(undefined4 *)((int)&(this_00->fields).imageLoader + 1) = 0;
    pPVar15 = pPVar1[1].fields.__4__this;
    pfVar12 = in_stack_11 + 2;
    if (pPVar1[2].klass != (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0) {
      fVar2 = *(float *)((int)&(this_00->fields).imageLoader + 1);
      fVar8 = (float)pPVar1[1].fields.__1__state;
      fVar9 = *(float *)&((pPVar1[2].klass)->_0).byval_arg.attrs;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      pfVar12 = in_stack_11 + 2;
      if (pPVar15 != (PurchasedAccessoryPreviewer *)0x0) {
        in_stack_11[1] = 0.0;
        *in_stack_11 = (float)pPVar15;
        *in_stack_11 = (fVar9 - fVar8) * fVar2 + fVar8;
        in_stack_11[-1] = (float)pPVar15;
        in_stack_11[-2] = (float)&UNK_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress((ProgressBarAndroid *)in_stack_11[-1],*in_stack_11,(MethodInfo *)in_stack_11[1]);
        pPVar15 = pPVar1[1].fields.__4__this;
        pfVar12 = in_stack_11 + 5;
        if ((pPVar15 != (PurchasedAccessoryPreviewer *)0x0) && (pfVar12 = in_stack_11 + 5, pPVar1[2].klass != (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0)) {
          if (*(float *)&((pPVar1[2].klass)->_0).byval_arg.attrs < (float)(pPVar15->fields).imageLoader) {
            this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
            in_stack_11[4] = (float)&this;
            in_stack_11[3] = (float)TypeInfo__System__Int32;
            pfVar16 = in_stack_11 + 2;
            in_stack_11[2] = (float)&UNK_?;
            uVar14 = func_?();
            *(undefined4 *)((int)pfVar16 + -4) = uVar14;
            *(undefined4 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1) = uVar14;
            *(undefined1 **)((int)pfVar16 + -8) = (undefined1 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1);
            *(undefined **)((int)pfVar16 + -0xc) = &UNK_?;
            func_?();
            *(undefined4 *)((int)&(this_00->fields)._._._._.m_CachedPtr + 1) = 2;
            return 1;
          }
          this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
          in_stack_11[4] = (float)&this;
          in_stack_11[3] = (float)TypeInfo__System__Int32;
          pfVar17 = in_stack_11 + 2;
          in_stack_11[2] = (float)&UNK_?;
          uVar14 = func_?();
          *(undefined4 *)((int)pfVar17 + -4) = uVar14;
          *(undefined4 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1) = uVar14;
          *(undefined1 **)((int)pfVar17 + -8) = (undefined1 *)((int)&(this_00->fields)._.m_CancellationTokenSource + 1);
          *(undefined **)((int)pfVar17 + -0xc) = &UNK_?;
          func_?();
          *(undefined4 *)((int)&(this_00->fields)._._._._.m_CachedPtr + 1) = 3;
          return 1;
        }
      }
    }
  }
  bVar18 = 0;
  *(undefined **)((int)pfVar12 + -4) = &UNK_?;
  uVar19 = func_?();
  bVar20 = (byte)((ushort)uVar19 >> 8);
  bVar21 = CARRY1(bVar20,(byte)unaff_EBX) || CARRY1(bVar20 + (byte)unaff_EBX,bVar18);
  pPVar22 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)in(extraout_DX);
  pPVar1->klass = pPVar22;
  pbVar23 = (byte *)((int)&this_00[1].fields._.m_CancellationTokenSource + 3);
  bVar20 = *pbVar23;
  bVar18 = *pbVar23 + (byte)uVar19;
  *pbVar23 = bVar18 + bVar21;
  *(char *)(unaff_EBX + 0x71) = *(char *)(unaff_EBX + 0x71) + (char)((ushort)extraout_DX >> 8) + (CARRY1(bVar20,(byte)uVar19) || CARRY1(bVar18,bVar21));
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_System_Collections_IEnumerator_Reset(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

