
/* ValueTuple`2[UnityEngine.Vector2,UnityEngine.Vector2] CalculateMinMaxSafeAreas() */

ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *
Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_CalculateMinMaxSafeAreas
          (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *__return_storage_ptr__,
          SafeAreaPadding *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__ValueTuple<UnityEngine::Vector2,_UnityEngine::Vector2>__ValueTuple_UnityEngine__Vector2__UnityEngine__Vector2_
                   );
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  fVar4 = (float)iVar3;
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar5 = (float)iVar3;
  pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_cutouts((MethodInfo *)0x0);
  uVar7 = 0;
  pRVar8 = pRVar6;
  if (pRVar6 == (Rect__Array *)0x0) {
    func_?();
  }
  else {
    while( true ) {
      if ((int)pRVar6->max_length <= (int)uVar7) {
        (__return_storage_ptr__->Item1).x = 0.0;
        (__return_storage_ptr__->Item1).y = 0.0;
        (__return_storage_ptr__->Item2).x = 0.0;
        (__return_storage_ptr__->Item2).y = 0.0;
        item1.y = fStack_2;
        item1.x = fStack_1;
        item2.y = fVar5;
        item2.x = fVar4;
        mscorlib.dll::System::ValueTuple`2[UnityEngine::Vector2,UnityEngine::Vector2]::
        ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2___ctor
                  (__return_storage_ptr__,item1,item2,
                   MethodInfo__System__ValueTuple<UnityEngine::Vector2,_UnityEngine::Vector2>__ValueTuple_UnityEngine__Vector2__UnityEngine__Vector2_
                  );
        return __return_storage_ptr__;
      }
      if (pRVar6->max_length <= uVar7) break;
      fVar9 = pRVar8->vector[0].m_XMin;
      fVar10 = pRVar8->vector[0].m_YMin;
      fStack_11 = fVar9 + pRVar8->vector[0].m_Width;
      if (fStack_11 < fStack_1) {
        fStack_11 = fStack_1;
      }
      fVar12 = (float)((uint)(fVar5 - fStack_2) & _UNK_?) *
               (float)((uint)(fVar4 - fStack_11) & _UNK_?);
      fStack_13 = fStack_2;
      fStack_14 = fVar4;
      fStack_15 = fVar5;
      if (fVar12 <= 0.0) {
        fStack_11 = 0.0;
        fStack_13 = 0.0;
        fStack_14 = 0.0;
        fStack_15 = 0.0;
        fVar12 = 0.0;
      }
      if (fVar4 < fVar9) {
        fVar9 = fVar4;
      }
      fVar16 = (float)((uint)(fVar9 - fStack_1) & _UNK_?) *
               (float)((uint)(fVar5 - fStack_2) & _UNK_?);
      fStack_17 = fStack_11;
      fStack_18 = fStack_13;
      fStack_19 = fStack_14;
      fStack_20 = fStack_15;
      if (fVar12 < fVar16) {
        fVar12 = fVar16;
        fStack_17 = fStack_1;
        fStack_18 = fStack_2;
        fStack_19 = fVar9;
        fStack_20 = fVar5;
      }
      fVar9 = fVar10 + pRVar8->vector[0].m_Height;
      if (fVar9 < fStack_2) {
        fVar9 = fStack_2;
      }
      fVar16 = (float)((uint)(fVar4 - fStack_1) & _UNK_?) *
               (float)((uint)(fVar5 - fVar9) & _UNK_?);
      if (fVar12 < fVar16) {
        fVar12 = fVar16;
        fStack_17 = fStack_1;
        fStack_18 = fVar9;
        fStack_19 = fVar4;
        fStack_20 = fVar5;
      }
      fVar9 = fVar5;
      if (fVar10 <= fVar5) {
        fVar9 = fVar10;
      }
      fVar5 = fStack_20;
      if (fVar12 < (float)((uint)(fVar9 - fStack_2) & _UNK_?) *
                   (float)((uint)(fVar4 - fStack_1) & _UNK_?)) {
        fStack_17 = fStack_1;
        fStack_18 = fStack_2;
        fStack_19 = fVar4;
        fVar5 = fVar9;
      }
      fVar4 = fStack_19;
      uVar7 = uVar7 + 1;
      pRVar8 = (Rect__Array *)pRVar8->vector;
      fStack_1 = fStack_17;
      fStack_2 = fStack_18;
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  pVVar22 = (ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)(*pcVar21)();
  return pVVar22;
}


/* SafeAreaPadding+MinMaxArea CalculateMinMaxWithLargestArea(Vector2, Vector2,
   SafeAreaPadding+MinMaxArea) */

SafeAreaPadding_MinMaxArea *
Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_CalculateMinMaxWithLargestArea
          (SafeAreaPadding_MinMaxArea *__return_storage_ptr__,SafeAreaPadding *this,Vector2 min,
          Vector2 max,SafeAreaPadding_MinMaxArea bestSetup,MethodInfo *method)

{
  fVar1 = (float)((uint)(max.y - min.y) & _UNK_?) *
          (float)((uint)(max.x - min.x) & _UNK_?);
  if (bestSetup.area < fVar1) {
    bestSetup.min.x = min.x;
    bestSetup.min.y = min.y;
    bestSetup.max.x = max.x;
    bestSetup.max.y = max.y;
    bestSetup.area = fVar1;
  }
  (__return_storage_ptr__->min).x = bestSetup.min.x;
  (__return_storage_ptr__->min).y = bestSetup.min.y;
  (__return_storage_ptr__->max).x = bestSetup.max.x;
  (__return_storage_ptr__->max).y = bestSetup.max.y;
  __return_storage_ptr__->area = bestSetup.area;
  return __return_storage_ptr__;
}


/* Void Start() */

void Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding_Start
               (SafeAreaPadding *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  pRVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_cutouts((MethodInfo *)0x0);
  uVar3 = 0;
  if (pRVar2 != (Rect__Array *)0x0) {
    pRVar4 = pRVar2;
    for (; (int)uVar3 < (int)pRVar2->max_length; uVar3 = uVar3 + 1) {
      if (pRVar2->max_length <= uVar3) goto code_?;
      fStack_1 = fStack_1 + pRVar4->vector[0].m_Width * pRVar4->vector[0].m_Height;
      pRVar4 = (Rect__Array *)pRVar4->vector;
    }
    if (fStack_1 <= (this->fields).cutoutAreaThreshold) {
      return;
    }
    this_00 = (RectTransform *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                        );
    pRVar5 = (this->fields).canvasRect;
    if (pRVar5 != (RectTransform *)0x0) {
      pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                         ((Rect *)&stack0xffffff90,pRVar5,(MethodInfo *)0x0);
      fVar7 = pRVar6->m_Width;
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      pRVar5 = (this->fields).canvasRect;
      fVar7 = fVar7 / (float)iVar8;
      if (pRVar5 != (RectTransform *)0x0) {
        pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                           ((Rect *)&stack0xffffff90,pRVar5,(MethodInfo *)0x0);
        fVar9 = pRVar6->m_Height;
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        fVar9 = fVar9 / (float)iVar8;
        pVVar10 = SafeAreaPadding_CalculateMinMaxSafeAreas
                           ((ValueTuple_2_UnityEngine_Vector2_UnityEngine_Vector2_ *)
                            &stack0xffffff90,this,(MethodInfo *)0x0);
        fVar11 = (pVVar10->Item1).x;
        method_00 = (MethodInfo *)(pVVar10->Item2).x;
        fVar12 = (pVVar10->Item2).y;
        fVar13 = (pVVar10->Item1).y * fVar9;
        iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width(method_00);
        iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                          ((MethodInfo *)0x0);
        fVar9 = (fVar12 - (float)iVar14) * fVar9;
        if (this_00 != (RectTransform *)0x0) {
          value.y = fVar13;
          value.x = ((float)method_00 - (float)iVar8) * fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMax
                    (this_00,value,(MethodInfo *)0x0);
          value_00.y = fVar9;
          value_00.x = fVar11 * fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_offsetMin
                    (this_00,value_00,(MethodInfo *)0x0);
          pRVar5 = (this->fields).canvasRect;
          if ((pRVar5 != (RectTransform *)0x0) &&
             (this_01 = (CanvasScaler *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)pRVar5,
                                   UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                                  ), this_01 != (CanvasScaler *)0x0)) {
            value_01.y = (float)((uint)this_00 & _UNK_?) +
                         (this_01->fields).m_ReferenceResolution.y +
                         (float)((uint)fVar9 & _UNK_?);
            value_01.x = (this_01->fields).m_ReferenceResolution.x;
            UnityEngine.UI.dll::UnityEngine::UI::CanvasScaler::CanvasScaler_set_referenceResolution
                      (this_01,value_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* SafeAreaPadding() */

void Assembly-CSharp.dll::SafeAreaPadding::SafeAreaPadding__ctor
               (SafeAreaPadding *this,MethodInfo *method)

{
  (this->fields).cutoutAreaThreshold = 5000.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

