
/* Single GetCurrentAlpha() */

float Assembly-CSharp.dll::ImageAnimator::ImageAnimator_GetCurrentAlpha
                (ImageAnimator *this,MethodInfo *method)

{
  obj = (this->fields).curve;
  if (obj == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pvVar3 = (obj->fields).m_Ptr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  fVar2 = (this->fields).time;
  fVar4 = (this->fields).speed;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*pcRam_?)(pvVar3,fVar2 * fVar4);
  return fVar2;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_OnDisable
               (ImageAnimator *this,MethodInfo *method)

{
  (this->fields).time = 0.0;
  return;
}


/* Void SetColor(Color, Color) */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_SetColor
               (ImageAnimator *this,Color *start,Color *end,MethodInfo *method)

{
  fVar1 = start->g;
  fVar2 = start->b;
  fVar3 = start->a;
  (this->fields).startColor.r = start->r;
  (this->fields).startColor.g = fVar1;
  (this->fields).startColor.b = fVar2;
  (this->fields).startColor.a = fVar3;
  fVar1 = end->g;
  fVar2 = end->b;
  fVar3 = end->a;
  (this->fields).endColor.r = end->r;
  (this->fields).endColor.g = fVar1;
  (this->fields).endColor.b = fVar2;
  (this->fields).endColor.a = fVar3;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ImageAnimator::ImageAnimator_Update
               (ImageAnimator *this,MethodInfo *method)

{
  fVar1 = (this->fields).time;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  obj = (this->fields).curve;
  pIVar5 = (this->fields).image;
  fVar4 = fVar4 + fVar1;
  fVar1 = (this->fields).startColor.r;
  fVar6 = (this->fields).startColor.g;
  fVar7 = (this->fields).startColor.b;
  fVar8 = (this->fields).startColor.a;
  fVar9 = (this->fields).endColor.r;
  fVar10 = (this->fields).endColor.g;
  fVar11 = (this->fields).endColor.b;
  fVar12 = (this->fields).endColor.a;
  (this->fields).time = fVar4;
  if (obj != (AnimationCurve *)0x0) {
    pvVar13 = (obj->fields).m_Ptr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar14 = (this->fields).speed;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)(pvVar13,fVar4 * fVar14);
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fStack_15 = (fVar9 - fVar1) * fVar4 + fVar1;
    fStack_16 = (fVar10 - fVar6) * fVar4 + fVar6;
    fStack_17 = (fVar11 - fVar7) * fVar4 + fVar7;
    fStack_18 = (fVar12 - fVar8) * fVar4 + fVar8;
    if (pIVar5 != (Image *)0x0) {
      (*(pIVar5->klass->vtable).set_color.methodPtr)
                (pIVar5,&fStack_15,(pIVar5->klass->vtable).set_color.method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

