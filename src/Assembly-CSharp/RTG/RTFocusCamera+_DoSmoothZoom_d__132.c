
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothZoom>d__132::
     RTFocusCamera_DoSmoothZoom_d_132_MoveNext
               (RTFocusCamera_DoSmoothZoom_d_132 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto DAT_?;
    fVar2 = RTFocusCamera::RTFocusCamera_CalculateScrollZoomAmount
                       (this_00,(this->fields).deviceScroll,(MethodInfo *)0x0);
    (this->fields)._zoomAmount_5__2 = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto DAT_?;
  }
  RTFocusCamera::RTFocusCamera_Zoom(this_00,(this->fields)._zoomAmount_5__2,(MethodInfo *)0x0);
  pCVar3 = (this_00->fields)._zoomSettings;
  fVar2 = (this->fields)._zoomAmount_5__2;
  if ((pCVar3 != (CameraZoomSettings *)0x0) &&
     (obj = (this_00->fields)._targetCamera, obj != (Camera *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar4 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    cVar8 = (*pcRam_?)(pvVar4);
    lVar9 = 0x3c;
    if (cVar8 == '\0') {
      lVar9 = 0x40;
    }
    fVar10 = *(float *)((longlong)&pCVar3->klass + lVar9);
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    pcRam_? = pcVar5;
    fVar11 = (float)(*pcRam_?)();
    fVar11 = fVar11 * fVar10;
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    else if (_UNK_? < fVar11) {
      fVar11 = _UNK_?;
    }
    fVar2 = (0.0 - fVar2) * fVar11 + fVar2;
    (this->fields)._zoomAmount_5__2 = fVar2;
    cVar8 = FUN_?(fVar2,0);
    if (cVar8 == '\0') {
      bVar12 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar15 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      (this->fields).__1__state = 1;
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    return bVar6;
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothZoom>d__132::
     RTFocusCamera_DoSmoothZoom_d_132_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothZoom_d_132 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

