
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVTextMsgObject+<SwitchFadeAnimation>d__36::
     MVTextMsgObject_SwitchFadeAnimation_d_36_MoveNext
               (MVTextMsgObject_SwitchFadeAnimation_d_36 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields)._fadeTime_5__2 = 0.0;
code_?:
    pfVar3 = &(this->fields)._fadeTime_5__2;
    (this->fields).__1__state = -1;
    if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
      fVar4 = (this->fields)._fadeTime_5__2;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 + fVar4;
      (this->fields)._fadeTime_5__2 = fVar5;
      if ((this_00 != (MVTextMsgObject *)0x0) &&
         (pTVar6 = (this_00->fields).textMesh, pTVar6 != (TextMeshProUGUI *)0x0)) {
        puVar7 = (undefined4 *)
                  (*(pTVar6->klass->vtable).get_color.methodPtr)
                            (&uStack_8,pTVar6,(pTVar6->klass->vtable).get_color.method);
        pTVar9 = (this_00->fields).textMesh;
        uVar10 = *puVar7;
        if (pTVar9 != (TextMeshProUGUI *)0x0) {
          lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                             (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
          pTVar9 = (this_00->fields).textMesh;
          uVar12 = *(undefined4 *)(lVar11 + 4);
          if (pTVar9 != (TextMeshProUGUI *)0x0) {
            lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                               (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
            uVar13 = *(undefined4 *)(lVar11 + 8);
            fStack_14 = MathFunctions::MathFunctions_SmoothInverseLerp
                                  (0.0,fVar1,fVar5,(MethodInfo *)0x0);
            fStack_14 = _UNK_? - fStack_14;
            uStack_8 = uVar10;
            uStack_15 = uVar12;
            uStack_16 = uVar13;
            (*(pTVar6->klass->vtable).set_color.methodPtr)
                      (pTVar6,&uStack_8,(pTVar6->klass->vtable).set_color.method);
            bVar17 = iRam_? != 0;
            (this->fields).__2__current = (Object *)0x0;
            if (bVar17) {
              uVar18 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
              do {
                uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                LOCK();
                bVar17 = uVar20 == *puVar21;
                if (bVar17) {
                  *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                }
                UNLOCK();
              } while (!bVar17);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
      goto code_?;
    }
    if ((this_00 == (MVTextMsgObject *)0x0) ||
       (pTVar6 = (this_00->fields).textMesh, pTVar6 == (TextMeshProUGUI *)0x0))
    goto code_?;
    puVar7 = (undefined4 *)
              (*(pTVar6->klass->vtable).get_color.methodPtr)
                        (&uStack_8,pTVar6,(pTVar6->klass->vtable).get_color.method);
    pTVar9 = (this_00->fields).textMesh;
    uVar10 = *puVar7;
    if (pTVar9 == (TextMeshProUGUI *)0x0) goto code_?;
    lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                       (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
    pTVar9 = (this_00->fields).textMesh;
    uVar12 = *(undefined4 *)(lVar11 + 4);
    if (pTVar9 == (TextMeshProUGUI *)0x0) goto code_?;
    lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                       (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
    uStack_16 = *(undefined4 *)(lVar11 + 8);
    fStack_14 = 0.0;
    uStack_8 = uVar10;
    uStack_15 = uVar12;
    (*(pTVar6->klass->vtable).set_color.methodPtr)(pTVar6,&uStack_8);
    MVTextMsgObject::MVTextMsgObject_SetFont(this_00,(this->fields).fontAsset,(MethodInfo *)0x0);
    this_01 = (this_00->fields).canvas;
    if (this_01 == (Canvas *)0x0) goto code_?;
    pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_01,(MethodInfo *)0x0);
    pTVar23 = (Transform *)0x0;
    if ((pTVar22 != (Transform *)0x0) &&
       (pTVar22->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
      pTVar23 = pTVar22;
    }
    bVar17 = iRam_? != 0;
    (this->fields)._canvasTransform_5__3 = (RectTransform *)pTVar23;
    if (bVar17) {
      uVar18 = (uint)((ulonglong)&(this->fields)._canvasTransform_5__3 >> 0xc);
      uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
      do {
        uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
        puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
        LOCK();
        bVar17 = uVar20 == *puVar21;
        if (bVar17) {
          *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
        }
        UNLOCK();
      } while (!bVar17);
    }
    VVar24 = MVTextMsgObject::MVTextMsgObject_CalculateSizeDeltas(this_00,(MethodInfo *)0x0);
    fStackX_8 = VVar24.x;
    fStackX_c = VVar24.y;
    (this->fields)._targetCanvasSize_5__4.x = fStackX_8;
    (this->fields)._targetCanvasSize_5__4.y = fStackX_c;
    pRVar25 = (this_00->fields).background;
    if (pRVar25 == (RoundedRectangle *)0x0) goto code_?;
    cVar26 = (*(pRVar25->klass->vtable).IsActive.methodPtr)();
    if (cVar26 != '\0') {
      pRVar27 = (this->fields)._canvasTransform_5__3;
      (this->fields)._fadeTime_5__2 = 0.0;
      if (pRVar27 == (RectTransform *)0x0) goto code_?;
      VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                         (pRVar27,(MethodInfo *)0x0);
      fStackX_8 = VVar24.x;
      fStackX_c = VVar24.y;
      (this->fields)._oldCanvasSize_5__5.x = fStackX_8;
      (this->fields)._oldCanvasSize_5__5.y = fStackX_c;
      goto code_?;
    }
code_?:
    pRVar27 = (this->fields)._canvasTransform_5__3;
    if (pRVar27 == (RectTransform *)0x0) goto code_?;
    value.y = (this->fields)._targetCanvasSize_5__4.y;
    value.x = (this->fields)._targetCanvasSize_5__4.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar27,value,(MethodInfo *)0x0);
    (this->fields)._fadeTime_5__2 = 0.0;
  }
  else {
    if (iVar2 == 1) goto code_?;
    if (iVar2 == 2) {
      (this->fields).__1__state = -1;
code_?:
      fVar4 = _UNK_?;
      pfVar3 = &(this->fields)._fadeTime_5__2;
      if (*pfVar3 <= _UNK_? && _UNK_? != *pfVar3) {
        fVar1 = (this->fields)._fadeTime_5__2;
        fVar28 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        pRVar27 = (this->fields)._canvasTransform_5__3;
        fVar28 = fVar28 + fVar1;
        fVar1 = (this->fields)._oldCanvasSize_5__5.x;
        fVar5 = (this->fields)._oldCanvasSize_5__5.y;
        fVar29 = (this->fields)._targetCanvasSize_5__4.x;
        fVar30 = (this->fields)._targetCanvasSize_5__4.y;
        (this->fields)._fadeTime_5__2 = fVar28;
        fVar4 = MathFunctions::MathFunctions_SmoothInverseLerp(0.0,fVar4,fVar28,(MethodInfo *)0x0)
        ;
        if (fVar4 < 0.0) {
          fVar4 = 0.0;
        }
        else if (_UNK_? < fVar4) {
          fVar4 = _UNK_?;
        }
        if (pRVar27 != (RectTransform *)0x0) {
          VVar24.y = (fVar30 - fVar5) * fVar4 + fVar5;
          VVar24.x = (fVar29 - fVar1) * fVar4 + fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar27,VVar24,(MethodInfo *)0x0);
          bVar17 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar17) {
            uVar18 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
            do {
              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
              LOCK();
              bVar17 = uVar20 == *puVar21;
              if (bVar17) {
                *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
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
    if (iVar2 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pfVar3 = &(this->fields)._fadeTime_5__2;
  if (fVar1 < *pfVar3 || fVar1 == *pfVar3) {
    if ((this_00 != (MVTextMsgObject *)0x0) &&
       (pTVar6 = (this_00->fields).textMesh, pTVar6 != (TextMeshProUGUI *)0x0)) {
      puVar7 = (undefined4 *)
                (*(pTVar6->klass->vtable).get_color.methodPtr)
                          (&uStack_8,pTVar6,(pTVar6->klass->vtable).get_color.method);
      pTVar9 = (this_00->fields).textMesh;
      uVar10 = *puVar7;
      if (pTVar9 != (TextMeshProUGUI *)0x0) {
        lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                           (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
        pTVar9 = (this_00->fields).textMesh;
        uVar12 = *(undefined4 *)(lVar11 + 4);
        if (pTVar9 != (TextMeshProUGUI *)0x0) {
          lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                             (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
          uStack_16 = *(undefined4 *)(lVar11 + 8);
          fStack_14 = 1.0;
          uStack_8 = uVar10;
          uStack_15 = uVar12;
          (*(pTVar6->klass->vtable).set_color.methodPtr)
                    (pTVar6,&uStack_8,(pTVar6->klass->vtable).set_color.method);
          return 0;
        }
      }
    }
  }
  else {
    fVar4 = (this->fields)._fadeTime_5__2;
    pcVar31 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar31 = (code *)FUN_?(&UNK_?), pcVar31 == (code *)0x0)) {
      uVar32 = func_?(&UNK_?);
      FUN_?(uVar32,0);
      pcVar31 = (code *)swi(3);
      bVar33 = (*pcVar31)();
      return bVar33;
    }
    pcRam_? = pcVar31;
    fVar5 = (float)(*pcRam_?)();
    fVar5 = fVar5 + fVar4;
    (this->fields)._fadeTime_5__2 = fVar5;
    if ((this_00 != (MVTextMsgObject *)0x0) &&
       (pTVar6 = (this_00->fields).textMesh, pTVar6 != (TextMeshProUGUI *)0x0)) {
      puVar7 = (undefined4 *)
                (*(pTVar6->klass->vtable).get_color.methodPtr)
                          (&uStack_8,pTVar6,(pTVar6->klass->vtable).get_color.method);
      pTVar9 = (this_00->fields).textMesh;
      uVar10 = *puVar7;
      if (pTVar9 != (TextMeshProUGUI *)0x0) {
        lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                           (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
        pTVar9 = (this_00->fields).textMesh;
        uVar12 = *(undefined4 *)(lVar11 + 4);
        if (pTVar9 != (TextMeshProUGUI *)0x0) {
          lVar11 = (*(pTVar9->klass->vtable).get_color.methodPtr)
                             (&uStack_8,pTVar9,(pTVar9->klass->vtable).get_color.method);
          uVar13 = *(undefined4 *)(lVar11 + 8);
          fStack_14 = MathFunctions::MathFunctions_SmoothInverseLerp
                                (0.0,fVar1,fVar5,(MethodInfo *)0x0);
          uStack_8 = uVar10;
          uStack_15 = uVar12;
          uStack_16 = uVar13;
          (*(pTVar6->klass->vtable).set_color.methodPtr)
                    (pTVar6,&uStack_8,(pTVar6->klass->vtable).set_color.method);
          bVar17 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar17) {
            uVar18 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
            do {
              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
              LOCK();
              bVar17 = uVar20 == *puVar21;
              if (bVar17) {
                *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
              }
              UNLOCK();
            } while (!bVar17);
          }
          (this->fields).__1__state = 3;
          return 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar31 = (code *)swi(3);
  bVar33 = (*pcVar31)();
  return bVar33;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVTextMsgObject+<SwitchFadeAnimation>d__36::
     MVTextMsgObject_SwitchFadeAnimation_d_36_System_Collections_IEnumerator_Reset
               (MVTextMsgObject_SwitchFadeAnimation_d_36 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MVTextMsgObject___SwitchFadeAnimation_d__36__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

