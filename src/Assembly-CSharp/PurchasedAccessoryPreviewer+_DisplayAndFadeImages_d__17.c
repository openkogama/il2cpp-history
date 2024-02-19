
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PurchasedAccessoryPreviewer+<DisplayAndFadeImages>d__17::
     PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17_MoveNext
               (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *this,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Styles);
    func_?(&
                    MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PurchasedAccessoryPreviewer____c);
    cRam_? = '\x01';
  }
  pPVar3 = this;
  pPVar4 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if (((pPVar4 != (PurchasedAccessoryPreviewer *)0x0) &&
        (pIVar5 = (pPVar4->fields).image, pIVar5 != (Image *)0x0)) &&
       (this_01 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar5,(MethodInfo *)0x0), this_01 != (RectTransform *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                (this_01,(Vector2)0x0,(MethodInfo *)0x0);
      (pPVar4->fields).currentTime = 0.0;
code_?:
      if ((float)_UNK_? <= (pPVar4->fields).currentTime / (pPVar4->fields).imageDisplayTime)
      {
        PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                  (pPVar4,1.0,1.0,(MethodInfo *)0x0);
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar6 = (Object *)func_?();
        (pPVar3->fields).__2__current = pOVar6;
        func_?(&(pPVar3->fields).__2__current,pOVar6);
        (pPVar3->fields).__1__state = 2;
        return 1;
      }
      method_00 = (MethodInfo *)(pPVar4->fields).currentTime;
      this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
      fVar7 = (float)this + (float)method_00;
      (pPVar4->fields).currentTime = fVar7;
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (pPVar4,fVar7 / (pPVar4->fields).imageBounceEffectTime,
                 fVar7 / (pPVar4->fields).imageDisplayTime,(MethodInfo *)0x0);
      pOVar6 = (Object *)func_?();
      (pPVar3->fields).__2__current = pOVar6;
      func_?(&(pPVar3->fields).__2__current);
      (pPVar3->fields).__1__state = 1;
      return 1;
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pPVar4 != (PurchasedAccessoryPreviewer *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if ((pPVar4 != (PurchasedAccessoryPreviewer *)0x0) &&
       (pAVar8 = (pPVar4->fields).previewData, pAVar8 != (AccessoryDataClient__Array *)0x0)) {
      if ((int)(pAVar8->max_length - 1) <= (pPVar4->fields).currentStreamingAssetIndex) {
        root = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pPVar4,(MethodInfo *)0x0);
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
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__PurchasedAccessoryPreviewer____c___DisplayAndFadeImages_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0 = callbackFunction;
          func_?(&TypeInfo__PurchasedAccessoryPreviewer____c->static_fields->__9__17_0,
                          callbackFunction);
          root = this;
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        goto code_?;
      }
      PurchasedAccessoryPreviewer::PurchasedAccessoryPreviewer_EvaluateImageAtTime
                (pPVar4,0.0,0.0,(MethodInfo *)0x0);
      iVar9 = (pPVar4->fields).currentStreamingAssetIndex;
      pAVar8 = (pPVar4->fields).previewData;
      uVar10 = iVar9 + 1;
      (pPVar4->fields).currentStreamingAssetIndex = uVar10;
      if (pAVar8 != (AccessoryDataClient__Array *)0x0) {
        if (uVar10 < pAVar8->max_length) {
          if (pAVar8->vector[iVar9 + 1] != (AccessoryDataClient *)0x0) {
            if (((pAVar8->vector[iVar9 + 1]->fields)._.lvl == 0) ||
               ((((pPVar4->fields).previewData)->vector[iVar9 + 1]->fields)._.cost != 0)) {
              pAVar8 = (pPVar4->fields).previewData;
              if (pAVar8 != (AccessoryDataClient__Array *)0x0) {
                if (pAVar8->max_length <= uVar10) goto code_?;
                iVar11 = (pAVar8->vector[iVar9 + 1]->fields)._.cost;
                if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__Styles);
                }
                pRVar12 = Styles::Styles_GetAccessoryColorsFromPrice(iVar11,(MethodInfo *)0x0);
code_?:
                if (pRVar12 != (RarityStylesDef *)0x0) {
                  fVar7 = (pRVar12->fields).backgroundColor.g;
                  fVar13 = (pRVar12->fields).backgroundColor.b;
                  fVar14 = (pRVar12->fields).backgroundColor.a;
                  (pPVar4->fields).targetColorBackground.r = (pRVar12->fields).backgroundColor.r;
                  (pPVar4->fields).targetColorBackground.g = fVar7;
                  (pPVar4->fields).targetColorBackground.b = fVar13;
                  (pPVar4->fields).targetColorBackground.a = fVar14;
                  fVar7 = (pRVar12->fields).glowColor.g;
                  fVar13 = (pRVar12->fields).glowColor.b;
                  fVar14 = (pRVar12->fields).glowColor.a;
                  (pPVar4->fields).targetColorGlow.r = (pRVar12->fields).glowColor.r;
                  (pPVar4->fields).targetColorGlow.g = fVar7;
                  (pPVar4->fields).targetColorGlow.b = fVar13;
                  (pPVar4->fields).targetColorGlow.a = fVar14;
                  routine = PurchasedAccessoryPreviewer::
                            PurchasedAccessoryPreviewer_DisplayAndFadeImages
                                      (pPVar4,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_Auto
                            ((MonoBehaviour *)pPVar4,routine,(MethodInfo *)0x0);
code_?:
                  this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)&this;
                  pOVar6 = (Object *)func_?();
                  (pPVar3->fields).__2__current = pOVar6;
                  func_?();
                  (pPVar3->fields).__1__state = 3;
                  return 1;
                }
              }
            }
            else {
              pAVar8 = (pPVar4->fields).previewData;
              if (pAVar8 != (AccessoryDataClient__Array *)0x0) {
                if (pAVar8->max_length <= uVar10) goto code_?;
                if (pAVar8->vector[iVar9 + 1] != (AccessoryDataClient *)0x0) {
                  iVar11 = (pAVar8->vector[iVar9 + 1]->fields)._.lvl;
                  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Styles);
                  }
                  pRVar12 = Styles::Styles_GetAccessoryColorsFromLevel(iVar11,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
        else {
code_?:
          func_?();
        }
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar9 = func_?();
  puVar15 = (undefined4 *)(*(int *)(iVar9 + 0x42) * 0x10);
  *(undefined1 *)(iVar9 + 0x42) = 0;
  if (CARRY1(extraout_CL,(byte)iVar9)) {
    pcVar16 = (code *)swi(3);
    bVar17 = (*pcVar16)();
    return bVar17;
  }
  func_?(&TypeInfo__System__Int32);
  pPVar3 = this;
  uRam_? = 1;
  pPVar4 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 1:
    (this->fields).__1__state = -1;
    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    bVar18 = pPVar4 == (PurchasedAccessoryPreviewer *)0x0;
    if (!bVar18) {
      if ((float)this - (float)(pPVar4->fields).background < (float)(pPVar4->fields).imageLoader) {
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pPVar3->fields).__2__current = pOVar6;
        func_?(&(pPVar3->fields).__2__current,pOVar6);
        (pPVar3->fields).__1__state = 1;
        return 1;
      }
      pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0;
code_?:
      pPVar3[1].klass = pPVar19;
      if ((float)_UNK_? <= (float)pPVar19) {
code_?:
        this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pPVar3->fields).__2__current = pOVar6;
        func_?(&(pPVar3->fields).__2__current,pOVar6);
        (pPVar3->fields).__1__state = 3;
        return 1;
      }
      pAVar20 = (pPVar4->fields).bounceEffect;
      this_00 = (ProgressBarAndroid *)(pPVar4->fields).imageBounceEffectTime;
      bVar18 = pAVar20 == (AnimationCurve *)0x0;
      if (!bVar18) {
        pPVar19 = pPVar3[1].klass;
        pIVar5 = (pPVar4->fields).backgroundGlow;
        if ((float)pPVar19 < 0.0) {
          pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)0x0;
        }
        else if ((float)_UNK_? < (float)pPVar19) {
          pPVar19 = _UNK_?;
        }
        bVar18 = this_00 == (ProgressBarAndroid *)0x0;
        if (!bVar18) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (this_00,((float)pAVar20[1].fields.m_Ptr - (float)pIVar5) * (float)pPVar19 +
                             (float)pIVar5,(MethodInfo *)0x0);
          fVar7 = (pPVar4->fields).imageBounceEffectTime;
          bVar18 = fVar7 == 0.0;
          if (!bVar18) {
            pAVar20 = (pPVar4->fields).bounceEffect;
            bVar18 = pAVar20 == (AnimationCurve *)0x0;
            if (!bVar18) {
              if ((float)pAVar20[1].fields.m_Ptr < *(float *)((int)fVar7 + 0x14)) {
                this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)0x0;
                pOVar6 = (Object *)func_?();
                (pPVar3->fields).__2__current = pOVar6;
                func_?(&(pPVar3->fields).__2__current,pOVar6);
                (pPVar3->fields).__1__state = 2;
                return 1;
              }
              goto code_?;
            }
          }
        }
      }
    }
    break;
  case 2:
    pPVar19 = this[1].klass;
    (this->fields).__1__state = -1;
    this = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar18 = pPVar4 == (PurchasedAccessoryPreviewer *)0x0;
    if (!bVar18) {
      pPVar19 = (PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17__Class *)
                ((float)this / (float)(pPVar4->fields).image + (float)pPVar19);
      goto code_?;
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  bVar21 = 0;
  uVar22 = func_?();
  if (bVar18) {
    puVar23 = (undefined4 *)((int)puVar15 + -5);
    puVar24 = (undefined1 *)((int)puVar15 + -5);
    puVar2 = (undefined1 *)((int)puVar15 + -5);
    puVar1 = (undefined1 *)((int)puVar15 + -5);
    *(undefined1 **)((int)puVar15 + -5) = &stack0xfffffffc;
    if (cRam_? == '\0') goto code_?;
  }
  else {
    pbVar25 = (byte *)((int)puVar15 + (int)pPVar3 * 2 + 0x42);
    bVar18 = 0x8e < *pbVar25 || CARRY1(*pbVar25 + 0x71,bVar21);
    *pbVar25 = *pbVar25 + 0x71 + bVar21;
    bVar26 = (byte)uVar22;
    bVar27 = (byte)((ulonglong)uVar22 >> 0x28);
    bVar21 = bVar27 + bVar26;
    cVar28 = bVar21 + bVar18;
    if (cVar28 == '\0') {
      vmwrite(*(undefined4 *)
               (extraout_ECX + 0x68287500 +
               CONCAT22((short)((ulonglong)uVar22 >> 0x30),
                        CONCAT11(cVar28,(char)((ulonglong)uVar22 >> 0x20)))),puVar15);
      if (SCARRY1(bVar27,bVar26) != SCARRY1(bVar21,bVar18)) {
        *(undefined4 *)uVar22 = *puVar15;
        *puVar15 = &
                   MethodInfo__HealthbarLerp___LerpProgress_d__10__System_Collections_IEnumerator_Reset__
        ;
        puVar29 = puVar15 + -1;
        puVar15[-1] = &UNK_?;
        uVar30 = func_?();
        *(undefined4 *)((int)puVar29 + 0x10) = uVar30;
        *(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 **)((int)puVar29 + 0xc) = pPVar3;
        *(undefined **)((int)puVar29 + 8) = &UNK_?;
        func_?();
        pcVar16 = (code *)swi(3);
        bVar17 = (*pcVar16)();
        return bVar17;
      }
      *(undefined2 *)(puVar15 + -1) = in_CS;
      puVar31 = puVar15 + -2;
      puVar15[-2] = &UNK_?;
      func_?();
    }
    else {
      if ((char)(cVar28 + 'q' + (CARRY1(bVar27,bVar26) || CARRY1(bVar21,bVar18))) == '\0') {
        pcVar16 = (code *)swi(3);
        bVar17 = (*pcVar16)();
        return bVar17;
      }
      in_stack_32 = in_stack_32 + cVar28;
      puVar23 = puVar15;
code_?:
      puVar23[-1] = &
                    AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
      ;
      puVar31 = puVar23 + -2;
      puVar23[-2] = &UNK_?;
      func_?();
      puVar2 = puVar1;
    }
    *(Object_1__Class ***)((int)puVar31 + -4) = &TypeInfo__UnityEngine__Object;
    puVar33 = (undefined1 *)((int)puVar31 + -8);
    *(undefined **)((int)puVar31 + -8) = &UNK_?;
    func_?();
    *(WaitForEndOfFrame__Class ***)(puVar33 + -4) = &TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar34 = puVar33 + -8;
    *(undefined **)(puVar33 + -8) = &UNK_?;
    func_?();
    puVar24 = puVar34 + 0xc;
    cRam_? = '\x01';
  }
  *(PurchasedAccessoryPreviewer_DisplayAndFadeImages_d_17 **)(puVar24 + -4) = pPVar3;
  *(PurchasedAccessoryPreviewer **)(puVar24 + -8) = pPVar4;
  iVar9 = *(int *)(puVar2 + 8);
  iVar35 = *(int *)(iVar9 + 0x10);
  if (*(int *)(iVar9 + 8) == 0) {
    *(undefined4 *)(iVar9 + 8) = 0xffffffff;
    *(WaitForEndOfFrame__Class **)(puVar24 + -0xc) = TypeInfo__UnityEngine__WaitForEndOfFrame;
    puVar36 = puVar24 + -0x10;
    *(undefined **)(puVar24 + -0x10) = &UNK_?;
    uVar30 = func_?();
    *(undefined4 *)(puVar36 + -4) = 0;
    *(undefined4 *)(puVar36 + -8) = uVar30;
    *(undefined **)(puVar36 + -0xc) = &UNK_?;
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              (*(UxmlObjectListAttributeDescription_1_System_Object_ **)(puVar36 + -8),
               *(MethodInfo **)(puVar36 + -4));
    *(undefined4 *)(iVar9 + 0xc) = uVar30;
    *(undefined4 *)(puVar36 + -4) = uVar30;
    *(int *)(puVar36 + -8) = iVar9 + 0xc;
    *(undefined **)(puVar36 + -0xc) = &UNK_?;
    func_?();
    *(undefined4 *)(iVar9 + 8) = 1;
    return 1;
  }
  if (*(int *)(iVar9 + 8) == 1) {
    *(undefined4 *)(iVar9 + 8) = 0xffffffff;
    piVar37 = (int *)(puVar24 + -8);
    if ((iVar35 == 0) ||
       (iVar9 = *(int *)(iVar35 + 0x10), piVar37 = (int *)(puVar24 + -8), iVar9 == 0)) {
code_?:
      *(undefined **)((int)piVar37 + -4) = &UNK_?;
      func_?();
      pcVar16 = (code *)swi(3);
      bVar17 = (*pcVar16)();
      return bVar17;
    }
    *(MethodInfo **)(puVar24 + -0xc) =
         AccessoryViewController_MethodInfo__UnityEngine__Component__GetComponent<AccessoryViewController>__
    ;
    *(int *)(puVar24 + -0x10) = iVar9;
    *(undefined **)(puVar24 + -0x14) = &UNK_?;
    pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        (*(Component **)(puVar24 + -0x10),*(MethodInfo **)(puVar24 + -0xc));
    *(Object **)(puVar24 + -0xc) = pOVar6;
    *(Object **)(iVar35 + 0x40) = pOVar6;
    *(int *)(puVar24 + -0x10) = iVar35 + 0x40;
    puVar38 = puVar24 + -0x14;
    *(undefined **)(puVar24 + -0x14) = &UNK_?;
    func_?();
    piVar39 = (int *)(puVar38 + 0x10);
    uVar30 = *(undefined4 *)(iVar35 + 0x40);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      *(Object_1__Class **)(puVar38 + 0xc) = TypeInfo__UnityEngine__Object;
      puVar40 = puVar38 + 8;
      *(undefined **)(puVar38 + 8) = &UNK_?;
      func_?();
      piVar39 = (int *)(puVar40 + 4);
    }
    piVar39[-1] = 0;
    piVar39[-2] = 0;
    piVar39[-3] = uVar30;
    piVar39[-4] = (int)&UNK_?;
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)piVar39[-3],(Object_1 *)piVar39[-2],(MethodInfo *)piVar39[-1]);
    piVar37 = piVar39 + 3;
    if (bVar17 != 0) {
      iVar9 = *(int *)(iVar35 + 0x40);
      if (iVar9 == 0) goto code_?;
      piVar39[2] = 0;
      piVar39[1] = *(undefined4 *)(iVar35 + 0x4c);
      *piVar39 = iVar9;
      piVar39[-1] = (int)&UNK_?;
      AccessoryViewController::AccessoryViewController_OpenAccessoryManagementScreen
                ((AccessoryViewController *)*piVar39,(AccessoryDataClient *)piVar39[1],
                 (MethodInfo *)piVar39[2]);
      *(undefined4 *)(iVar35 + 0x4c) = 0;
      piVar39[2] = 0;
      piVar39[1] = iVar35 + 0x4c;
      *piVar39 = (int)&UNK_?;
      func_?();
    }
  }
  return 0;
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
  func_?(&
                  MethodInfo__PurchasedAccessoryPreviewer___DisplayAndFadeImages_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

