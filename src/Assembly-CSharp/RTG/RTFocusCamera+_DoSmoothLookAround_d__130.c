
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothLookAround>d__130::
     RTFocusCamera_DoSmoothLookAround_d_130_MoveNext
               (RTFocusCamera_DoSmoothLookAround_d_130 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto DAT_?;
    VVar2 = RTFocusCamera::RTFocusCamera_CalculateLookAroundRotation
                       (this_00,(this->fields).deviceAxisX,(this->fields).deviceAxisY,
                        (MethodInfo *)0x0);
    fStackX_8 = VVar2.x;
    fStackX_c = VVar2.y;
    (this->fields)._rotationAmount_5__2.x = fStackX_8;
    (this->fields)._rotationAmount_5__2.y = fStackX_c;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto DAT_?;
  }
  RTFocusCamera::RTFocusCamera_LookAround
            (this_00,(this->fields)._rotationAmount_5__2.x,(this->fields)._rotationAmount_5__2.y,
             (MethodInfo *)0x0);
  fVar3 = (this->fields)._rotationAmount_5__2.x;
  fVar4 = (this->fields)._rotationAmount_5__2.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  pCVar7 = (this_00->fields)._lookAroundSettings;
  if (pCVar7 != (CameraLookAroundSettings *)0x0) {
    fVar8 = (pCVar7->fields).smoothValue;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    fVar12 = (float)(*pcRam_?)();
    fVar12 = fVar12 * fVar8;
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    else if (_UNK_? < fVar12) {
      fVar12 = _UNK_?;
    }
    fVar3 = (fVar5 - fVar3) * fVar12 + fVar3;
    fVar4 = (fVar6 - fVar4) * fVar12 + fVar4;
    (this->fields)._rotationAmount_5__2.y = fVar4;
    (this->fields)._rotationAmount_5__2.x = fVar3;
    cVar13 = FUN_?(fVar4 * fVar4 + fVar3 * fVar3,0);
    if (cVar13 == '\0') {
      bVar14 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar14) {
        uVar15 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
        do {
          uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
          puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar17 == *puVar18;
          if (bVar14) {
            *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      (this->fields).__1__state = 1;
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    return bVar11;
  }
DAT_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar11 = (*pcVar9)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothLookAround>d__130::
     RTFocusCamera_DoSmoothLookAround_d_130_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothLookAround_d_130 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

