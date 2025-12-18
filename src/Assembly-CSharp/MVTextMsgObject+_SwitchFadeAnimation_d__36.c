
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVTextMsgObject+<SwitchFadeAnimation>d__36::MVTextMsgObject_SwitchFadeAnimation_d_36_MoveNext(MVTextMsgObject_SwitchFadeAnimation_d_36 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields)._fadeTime_5__2 = 0.0;
code_?:
    pfVar2 = &(this->fields)._fadeTime_5__2;
    (this->fields).__1__state = -1;
    if (*pfVar2 <= 0.15 && *pfVar2 != 0.15) {
      fVar3 = (this->fields)._fadeTime_5__2;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 + fVar3;
      (this->fields)._fadeTime_5__2 = fVar4;
      if ((this_00 != (MVTextMsgObject *)0x0) && (pTVar5 = (this_00->fields).textMesh, pTVar5 != (TextMeshProUGUI *)0x0)) {
        puVar6 = (undefined4 *)(*(pTVar5->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar5,(pTVar5->klass->vtable).get_color.method);
        pTVar8 = (this_00->fields).textMesh;
        uVar9 = *puVar6;
        if (pTVar8 != (TextMeshProUGUI *)0x0) {
          lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
          pTVar8 = (this_00->fields).textMesh;
          uVar11 = *(undefined4 *)(lVar10 + 4);
          if (pTVar8 != (TextMeshProUGUI *)0x0) {
            lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
            uVar12 = *(undefined4 *)(lVar10 + 8);
            fStack_13 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.15,fVar4,(MethodInfo *)0x0);
            fStack_13 = 1.0 - fStack_13;
            uStack_7 = uVar9;
            uStack_14 = uVar11;
            uStack_15 = uVar12;
            (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&uStack_7,(pTVar5->klass->vtable).set_color.method);
            bVar16 = iRam_? != 0;
            (this->fields).__2__current = (Object *)0x0;
            if (bVar16) {
              uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
              do {
                uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
                puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar19 == *puVar20;
                if (bVar16) {
                  *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
      goto code_?;
    }
    if ((this_00 == (MVTextMsgObject *)0x0) || (pTVar5 = (this_00->fields).textMesh, pTVar5 == (TextMeshProUGUI *)0x0)) goto code_?;
    puVar6 = (undefined4 *)(*(pTVar5->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar5,(pTVar5->klass->vtable).get_color.method);
    pTVar8 = (this_00->fields).textMesh;
    uVar9 = *puVar6;
    if (pTVar8 == (TextMeshProUGUI *)0x0) goto code_?;
    lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
    pTVar8 = (this_00->fields).textMesh;
    uVar11 = *(undefined4 *)(lVar10 + 4);
    if (pTVar8 == (TextMeshProUGUI *)0x0) goto code_?;
    lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
    uStack_15 = *(undefined4 *)(lVar10 + 8);
    fStack_13 = 0.0;
    uStack_7 = uVar9;
    uStack_14 = uVar11;
    (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&uStack_7);
    MVTextMsgObject::MVTextMsgObject_SetFont(this_00,(this->fields).fontAsset,(MethodInfo *)0x0);
    this_01 = (this_00->fields).canvas;
    if (this_01 == (Canvas *)0x0) goto code_?;
    pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
    pTVar22 = (Transform *)0x0;
    if ((pTVar21 != (Transform *)0x0) && (pTVar21->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      pTVar22 = pTVar21;
    }
    bVar16 = iRam_? != 0;
    (this->fields)._canvasTransform_5__3 = (RectTransform *)pTVar22;
    if (bVar16) {
      uVar17 = (uint)((ulonglong)&(this->fields)._canvasTransform_5__3 >> 0xc);
      uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
        puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
        LOCK();
        bVar16 = uVar19 == *puVar20;
        if (bVar16) {
          *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
        }
        UNLOCK();
      } while (!bVar16);
    }
    VVar23 = MVTextMsgObject::MVTextMsgObject_CalculateSizeDeltas(this_00,(MethodInfo *)0x0);
    fStackX_8 = VVar23.x;
    fStackX_c = VVar23.y;
    (this->fields)._targetCanvasSize_5__4.x = fStackX_8;
    (this->fields)._targetCanvasSize_5__4.y = fStackX_c;
    pRVar24 = (this_00->fields).background;
    if (pRVar24 == (RoundedRectangle *)0x0) goto code_?;
    cVar25 = (*(pRVar24->klass->vtable).IsActive.methodPtr)();
    if (cVar25 != '\0') {
      pRVar26 = (this->fields)._canvasTransform_5__3;
      (this->fields)._fadeTime_5__2 = 0.0;
      if (pRVar26 == (RectTransform *)0x0) goto code_?;
      VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar26,(MethodInfo *)0x0);
      fStackX_8 = VVar23.x;
      fStackX_c = VVar23.y;
      (this->fields)._oldCanvasSize_5__5.x = fStackX_8;
      (this->fields)._oldCanvasSize_5__5.y = fStackX_c;
      goto code_?;
    }
code_?:
    pRVar26 = (this->fields)._canvasTransform_5__3;
    if (pRVar26 == (RectTransform *)0x0) goto code_?;
    value.y = (this->fields)._targetCanvasSize_5__4.y;
    value.x = (this->fields)._targetCanvasSize_5__4.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar26,value,(MethodInfo *)0x0);
    (this->fields)._fadeTime_5__2 = 0.0;
  }
  else {
    if (iVar1 == 1) goto code_?;
    if (iVar1 == 2) {
      (this->fields).__1__state = -1;
code_?:
      pfVar2 = &(this->fields)._fadeTime_5__2;
      if (*pfVar2 <= 0.2 && *pfVar2 != 0.2) {
        fVar3 = (this->fields)._fadeTime_5__2;
        fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        pRVar26 = (this->fields)._canvasTransform_5__3;
        fVar27 = fVar27 + fVar3;
        fVar3 = (this->fields)._oldCanvasSize_5__5.x;
        fVar4 = (this->fields)._oldCanvasSize_5__5.y;
        fVar28 = (this->fields)._targetCanvasSize_5__4.x;
        fVar29 = (this->fields)._targetCanvasSize_5__4.y;
        (this->fields)._fadeTime_5__2 = fVar27;
        fVar27 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.2,fVar27,(MethodInfo *)0x0);
        if (fVar27 < 0.0) {
          fVar27 = 0.0;
        }
        else if (1.0 < fVar27) {
          fVar27 = 1.0;
        }
        if (pRVar26 != (RectTransform *)0x0) {
          VVar23.y = (fVar29 - fVar4) * fVar27 + fVar4;
          VVar23.x = (fVar28 - fVar3) * fVar27 + fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar26,VVar23,(MethodInfo *)0x0);
          bVar16 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
            do {
              uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
              puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
              LOCK();
              bVar16 = uVar19 == *puVar20;
              if (bVar16) {
                *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          (this->fields).__1__state = 2;
          return 1;
        }
        goto code_?;
      }
      (this->fields)._oldCanvasSize_5__5.x = 0.0;
      (this->fields)._oldCanvasSize_5__5.y = 0.0;
      goto code_?;
    }
    if (iVar1 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pfVar2 = &(this->fields)._fadeTime_5__2;
  if (0.15 < *pfVar2 || *pfVar2 == 0.15) {
    if ((this_00 != (MVTextMsgObject *)0x0) && (pTVar5 = (this_00->fields).textMesh, pTVar5 != (TextMeshProUGUI *)0x0)) {
      puVar6 = (undefined4 *)(*(pTVar5->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar5,(pTVar5->klass->vtable).get_color.method);
      pTVar8 = (this_00->fields).textMesh;
      uVar9 = *puVar6;
      if (pTVar8 != (TextMeshProUGUI *)0x0) {
        lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
        pTVar8 = (this_00->fields).textMesh;
        uVar11 = *(undefined4 *)(lVar10 + 4);
        if (pTVar8 != (TextMeshProUGUI *)0x0) {
          lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
          uStack_15 = *(undefined4 *)(lVar10 + 8);
          fStack_13 = 1.0;
          uStack_7 = uVar9;
          uStack_14 = uVar11;
          (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&uStack_7,(pTVar5->klass->vtable).set_color.method);
          return 0;
        }
      }
    }
  }
  else {
    fVar3 = (this->fields)._fadeTime_5__2;
    pcVar30 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar30 = (code *)FUN_?(&UNK_?), pcVar30 == (code *)0x0)) {
      uVar31 = func_?(&UNK_?);
      FUN_?(uVar31,0);
      pcVar30 = (code *)swi(3);
      bVar32 = (*pcVar30)();
      return bVar32;
    }
    pcRam_? = pcVar30;
    fVar4 = (float)(*pcRam_?)();
    fVar4 = fVar4 + fVar3;
    (this->fields)._fadeTime_5__2 = fVar4;
    if ((this_00 != (MVTextMsgObject *)0x0) && (pTVar5 = (this_00->fields).textMesh, pTVar5 != (TextMeshProUGUI *)0x0)) {
      puVar6 = (undefined4 *)(*(pTVar5->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar5,(pTVar5->klass->vtable).get_color.method);
      pTVar8 = (this_00->fields).textMesh;
      uVar9 = *puVar6;
      if (pTVar8 != (TextMeshProUGUI *)0x0) {
        lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
        pTVar8 = (this_00->fields).textMesh;
        uVar11 = *(undefined4 *)(lVar10 + 4);
        if (pTVar8 != (TextMeshProUGUI *)0x0) {
          lVar10 = (*(pTVar8->klass->vtable).get_color.methodPtr)(&uStack_7,pTVar8,(pTVar8->klass->vtable).get_color.method);
          uVar12 = *(undefined4 *)(lVar10 + 8);
          fStack_13 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,0.15,fVar4,(MethodInfo *)0x0);
          uStack_7 = uVar9;
          uStack_14 = uVar11;
          uStack_15 = uVar12;
          (*(pTVar5->klass->vtable).set_color.methodPtr)(pTVar5,&uStack_7,(pTVar5->klass->vtable).set_color.method);
          bVar16 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar16) {
            uVar17 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar18 = (ulonglong)((uVar17 & 0x1fffff) >> 6);
            do {
              uVar19 = *(ulonglong *)(uVar18 * 8 + 0xADDR);
              puVar20 = (ulonglong *)(uVar18 * 8 + 0xADDR);
              LOCK();
              bVar16 = uVar19 == *puVar20;
              if (bVar16) {
                *puVar20 = uVar19 | 1L << (uVar17 & 0x3f);
              }
              UNLOCK();
            } while (!bVar16);
          }
          (this->fields).__1__state = 3;
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar30 = (code *)swi(3);
  bVar32 = (*pcVar30)();
  return bVar32;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVTextMsgObject+<SwitchFadeAnimation>d__36::MVTextMsgObject_SwitchFadeAnimation_d_36_System_Collections_IEnumerator_Reset(MVTextMsgObject_SwitchFadeAnimation_d_36 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__MVTextMsgObject___SwitchFadeAnimation_d__36__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

