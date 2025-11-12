
/* Boolean IsLeftMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsLeftMouseButtonPressed(MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(0);
  return bVar3;
}


/* Boolean IsMiddleMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsMiddleMouseButtonPressed(MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(2);
  return bVar3;
}


/* Boolean IsRightMouseButtonPressed() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_IsRightMouseButtonPressed(MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(1);
  return bVar3;
}


/* Single MouseAxisX() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseAxisX(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Mouse_X;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = apuStackX_18;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      apuStackX_18[0] = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = apuStackX_18[0];
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    fVar9 = (float)(*pcVar7)();
    return fVar9;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)(&puStack_2);
  return fVar9;
}


/* Single MouseAxisY() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseAxisY(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Mouse_Y;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = apuStackX_18;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      apuStackX_18[0] = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = apuStackX_18[0];
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    fVar9 = (float)(*pcVar7)();
    return fVar9;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)(&puStack_2);
  return fVar9;
}


/* Single MouseScroll() */

float Assembly-CSharp.dll::RTG::RTInput::RTInput_MouseScroll(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_ScrollWheel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Mouse_ScrollWheel;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_18[0] = (uint16_t *)0x0;
  puStack_2 = (uint16_t *)0x0;
  uStack_3 = 0;
  uStack_4 = 0;
  ppuStack_5 = apuStackX_18;
  if (pSVar1 != (String *)0x0) {
    if ((pSVar1->fields)._stringLength == 0) {
      puStack_2 = (uint16_t *)0x1;
      uStack_3 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar6 = (pSVar1->fields)._stringLength;
      apuStackX_18[0] = &(pSVar1->fields)._firstChar;
      if (iVar6 == 0) {
        apuStackX_18[0] = (uint16_t *)0x0;
      }
      uStack_3 = CONCAT44(uStack_3._4_4_,iVar6);
      puStack_2 = apuStackX_18[0];
    }
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    FUN_?();
    pcVar7 = (code *)swi(3);
    fVar9 = (float)(*pcVar7)();
    return fVar9;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcRam_?)(&puStack_2);
  return fVar9;
}


/* Boolean TouchBegan(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchBegan(int32_t touchIndex,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    bVar12 = (*pcVar10)();
    return bVar12;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(touchIndex,&uStack_2);
  return uStack_6._4_4_ == 0;
}


/* Vector2 TouchDelta(Int32) */

Vector2 Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchDelta(int32_t touchIndex,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar12 = (code *)swi(3);
    VVar14 = (Vector2)(*pcVar12)();
    return VVar14;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(touchIndex,&uStack_2);
  VVar14.y = fStack_6;
  VVar14.x = fStack_5;
  return VVar14;
}


/* Boolean TouchEndedOrCanceled(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchEndedOrCanceled
               (int32_t touchIndex,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    bVar12 = (*pcVar10)();
    return bVar12;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(touchIndex,&uStack_2);
  if (uStack_6._4_4_ != 3) {
    return uStack_6._4_4_ == 4;
  }
  return 1;
}


/* Boolean TouchMoved(Int32) */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchMoved(int32_t touchIndex,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar10 = (code *)swi(3);
    bVar12 = (*pcVar10)();
    return bVar12;
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(touchIndex,&uStack_2);
  return uStack_6._4_4_ == 1;
}


/* Vector2 TouchPosition(Int32) */

Vector2 Assembly-CSharp.dll::RTG::RTInput::RTInput_TouchPosition
                  (int32_t touchIndex,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar12 = (code *)swi(3);
    VVar14 = (Vector2)(*pcVar12)();
    return VVar14;
  }
  pcRam_? = pcVar12;
  (*pcRam_?)(touchIndex,&uStack_2);
  VVar14.y = fStack_4;
  VVar14.x = fStack_3;
  return VVar14;
}


/* Boolean WasLeftMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasLeftMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(0);
  return bVar3;
}


/* Boolean WasMiddleMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMiddleMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(2);
  return bVar3;
}


/* Boolean WasMouseMoved() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasMouseMoved(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Mouse_Y);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mouse_X);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
          InputUnsafeUtility_GetAxis(StringLiteral_Mouse_X,(MethodInfo *)0x0);
  if ((fVar1 == 0.0) &&
     (fVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
              InputUnsafeUtility_GetAxis(StringLiteral_Mouse_Y,(MethodInfo *)0x0), fVar1 == 0.0)) {
    return 0;
  }
  return 1;
}


/* Boolean WasRightMouseButtonPressedThisFrame() */

bool Assembly-CSharp.dll::RTG::RTInput::RTInput_WasRightMouseButtonPressedThisFrame
               (MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar3 = (*pcRam_?)(1);
  return bVar3;
}

