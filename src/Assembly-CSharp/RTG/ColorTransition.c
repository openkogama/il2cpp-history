
/* Void BeginFadeIn(Boolean) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_BeginFadeIn
               (ColorTransition *this,bool startFromCurrentColor,MethodInfo *method)

{
  if (startFromCurrentColor != 0) {
    pCVar1 = (this->fields)._colorRef;
    if (pCVar1 == (ColorRef *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (pCVar1->fields)._value.g;
    fVar4 = (pCVar1->fields)._value.b;
    fVar5 = (pCVar1->fields)._value.a;
    (this->fields)._fadeOutColor.r = (pCVar1->fields)._value.r;
    (this->fields)._fadeOutColor.g = fVar3;
    (this->fields)._fadeOutColor.b = fVar4;
    (this->fields)._fadeOutColor.a = fVar5;
  }
  (this->fields)._state = 2;
  (this->fields)._isActive = 1;
  (this->fields)._elapsedTimeInSeconds = 0.0;
  if ((this->fields).TransitionBegin != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
    pCVar6 = (this->fields).TransitionBegin;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar6->fields)._._.invoke_impl)
              ((pCVar6->fields)._._.method_code,this,(pCVar6->fields)._._.method);
    return;
  }
  return;
}


/* Void BeginFadeOut(Boolean) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_BeginFadeOut
               (ColorTransition *this,bool startFromCurrentColor,MethodInfo *method)

{
  if (startFromCurrentColor != 0) {
    pCVar1 = (this->fields)._colorRef;
    if (pCVar1 == (ColorRef *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (pCVar1->fields)._value.g;
    fVar4 = (pCVar1->fields)._value.b;
    fVar5 = (pCVar1->fields)._value.a;
    (this->fields)._fadeInColor.r = (pCVar1->fields)._value.r;
    (this->fields)._fadeInColor.g = fVar3;
    (this->fields)._fadeInColor.b = fVar4;
    (this->fields)._fadeInColor.a = fVar5;
  }
  (this->fields)._state = 3;
  (this->fields)._isActive = 1;
  (this->fields)._elapsedTimeInSeconds = 0.0;
  if ((this->fields).TransitionBegin != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
    pCVar6 = (this->fields).TransitionBegin;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pCVar6->fields)._._.invoke_impl)
              ((pCVar6->fields)._._.method_code,this,(pCVar6->fields)._._.method);
    return;
  }
  return;
}


/* Void End() */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_End
               (ColorTransition *this,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    (this->fields)._isActive = 0;
    if ((this->fields)._state == 3) {
      (this->fields)._state = 1;
    }
    else if ((this->fields)._state == 2) {
      (this->fields)._state = 0;
    }
    if ((this->fields).TransitionEnd != (ColorTransition_ColorTransitionEndHandler *)0x0) {
      pCVar1 = (this->fields).TransitionEnd;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pCVar1->fields)._._.invoke_impl)
                ((pCVar1->fields)._._.method_code,this,(pCVar1->fields)._._.method);
      return;
    }
  }
  return;
}


/* Void Update(Single) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_Update
               (ColorTransition *this,float elapsedTime,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  if ((this->fields)._isActive != 0) {
    fVar3 = (this->fields)._fadeInColor.r;
    fVar4 = (this->fields)._fadeInColor.g;
    fVar5 = (this->fields)._fadeInColor.b;
    fVar6 = (this->fields)._fadeInColor.a;
    fVar7 = fVar3;
    fVar8 = fVar4;
    fVar9 = fVar5;
    fVar10 = fVar6;
    fVar11 = (this->fields)._fadeOutColor.r;
    fVar12 = (this->fields)._fadeOutColor.g;
    fVar13 = (this->fields)._fadeOutColor.b;
    fVar14 = (this->fields)._fadeOutColor.a;
    if ((this->fields)._state == 3) {
      fVar7 = (this->fields)._fadeOutColor.r;
      fVar8 = (this->fields)._fadeOutColor.g;
      fVar9 = (this->fields)._fadeOutColor.b;
      fVar10 = (this->fields)._fadeOutColor.a;
      fVar11 = fVar3;
      fVar12 = fVar4;
      fVar13 = fVar5;
      fVar14 = fVar6;
    }
    fVar3 = elapsedTime + (this->fields)._elapsedTimeInSeconds;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else {
      fVar4 = (this->fields)._durationInSeconds;
      if (fVar4 < fVar3) {
        fVar3 = fVar4;
      }
    }
    pCVar15 = (this->fields)._colorRef;
    (this->fields)._elapsedTimeInSeconds = fVar3;
    fVar3 = fVar3 / (this->fields)._durationInSeconds;
    if ((float)((uint)(fVar3 - fVar1) & _UNK_?) < fVar2) {
      if (pCVar15 == (ColorRef *)0x0) goto DAT_?;
      (pCVar15->fields)._value.r = fVar7;
      (pCVar15->fields)._value.g = fVar8;
      (pCVar15->fields)._value.b = fVar9;
      (pCVar15->fields)._value.a = fVar10;
      if ((this->fields)._isActive != 0) {
        (this->fields)._isActive = 0;
        if ((this->fields)._state == 3) {
          (this->fields)._state = 1;
        }
        else if ((this->fields)._state == 2) {
          (this->fields)._state = 0;
        }
        if ((this->fields).TransitionEnd != (ColorTransition_ColorTransitionEndHandler *)0x0) {
          pCVar16 = (this->fields).TransitionEnd;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pCVar16->fields)._._.invoke_impl)
                    ((pCVar16->fields)._._.method_code,this,(pCVar16->fields)._._.method);
          return;
        }
      }
    }
    else {
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (fVar1 < fVar3) {
        fVar3 = fVar1;
      }
      if (pCVar15 == (ColorRef *)0x0) {
DAT_?:
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      (pCVar15->fields)._value.r = (fVar7 - fVar11) * fVar3 + fVar11;
      (pCVar15->fields)._value.g = (fVar8 - fVar12) * fVar3 + fVar12;
      (pCVar15->fields)._value.b = (fVar9 - fVar13) * fVar3 + fVar13;
      (pCVar15->fields)._value.a = (fVar10 - fVar14) * fVar3 + fVar14;
    }
  }
  return;
}


/* ColorTransition(ColorRef) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition__ctor
               (ColorTransition *this,ColorRef *colorRef,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._state = 4;
  (this->fields)._colorRef = colorRef;
  pCVar2 = (ColorRef__Class *)this;
  pCVar3 = colorRef;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields)._colorRef >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    pCVar3 = (ColorRef *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      pCVar5 = pCVar3->klass;
      pCVar2 = (ColorRef__Class *)((ulonglong)pCVar5 | 1L << (longlong)method);
      LOCK();
      bVar1 = pCVar5 == pCVar3->klass;
      if (bVar1) {
        pCVar3->klass = pCVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (colorRef == (ColorRef *)0x0) {
    FUN_?(pCVar2,pCVar3,method);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar7 = (colorRef->fields)._value.g;
  fVar8 = (colorRef->fields)._value.b;
  fVar9 = (colorRef->fields)._value.a;
  (this->fields)._fadeInColor.r = (colorRef->fields)._value.r;
  (this->fields)._fadeInColor.g = fVar7;
  (this->fields)._fadeInColor.b = fVar8;
  (this->fields)._fadeInColor.a = fVar9;
  fVar7 = (colorRef->fields)._value.g;
  fVar8 = (colorRef->fields)._value.b;
  fVar9 = (colorRef->fields)._value.a;
  (this->fields)._fadeOutColor.r = (colorRef->fields)._value.r;
  (this->fields)._fadeOutColor.g = fVar7;
  (this->fields)._fadeOutColor.b = fVar8;
  (this->fields)._fadeOutColor.a = fVar9;
  return;
}


/* Void add_TransitionBegin(ColorTransition+ColorTransitionBeginHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_add_TransitionBegin
               (ColorTransition *this,ColorTransition_ColorTransitionBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = &this->fields;
  a = (this->fields).TransitionBegin;
  do {
    pCVar2 = (ColorTransition_ColorTransitionBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (ColorTransition_ColorTransitionBeginHandler *)0x0;
    if (pCVar2 != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (ColorTransition_ColorTransitionBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = pCVar1->TransitionBegin;
    bVar5 = a == pCVar2;
    if (bVar5) {
      pCVar1->TransitionBegin = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Void add_TransitionEnd(ColorTransition+ColorTransitionEndHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_add_TransitionEnd
               (ColorTransition *this,ColorTransition_ColorTransitionEndHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionEnd;
  a = (this->fields).TransitionEnd;
  do {
    pCVar2 = (ColorTransition_ColorTransitionEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (ColorTransition_ColorTransitionEndHandler *)0x0;
    if (pCVar2 != (ColorTransition_ColorTransitionEndHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (ColorTransition_ColorTransitionEndHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = a == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = a;
    }
    UNLOCK();
    pCVar3 = a;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != a;
    a = pCVar3;
  } while (bVar5);
  return;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_get_IsActive
               (ColorTransition *this,MethodInfo *method)

{
  return (this->fields)._isActive;
}


/* Void remove_TransitionBegin(ColorTransition+ColorTransitionBeginHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_remove_TransitionBegin
               (ColorTransition *this,ColorTransition_ColorTransitionBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = &this->fields;
  source = (this->fields).TransitionBegin;
  do {
    pCVar2 = (ColorTransition_ColorTransitionBeginHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (ColorTransition_ColorTransitionBeginHandler *)0x0;
    if (pCVar2 != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (ColorTransition_ColorTransitionBeginHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = pCVar1->TransitionBegin;
    bVar5 = source == pCVar2;
    if (bVar5) {
      pCVar1->TransitionBegin = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)pCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void remove_TransitionEnd(ColorTransition+ColorTransitionEndHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_remove_TransitionEnd
               (ColorTransition *this,ColorTransition_ColorTransitionEndHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppCVar1 = &(this->fields).TransitionEnd;
  source = (this->fields).TransitionEnd;
  do {
    pCVar2 = (ColorTransition_ColorTransitionEndHandler *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pCVar3 = (ColorTransition_ColorTransitionEndHandler *)0x0;
    if (pCVar2 != (ColorTransition_ColorTransitionEndHandler *)0x0) {
      if (pCVar2->klass == TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler) {
        pCVar3 = pCVar2;
      }
      if (pCVar3 == (ColorTransition_ColorTransitionEndHandler *)0x0) {
        FUN_?(pCVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pCVar2 = *ppCVar1;
    bVar5 = source == pCVar2;
    if (bVar5) {
      *ppCVar1 = pCVar3;
      pCVar2 = source;
    }
    UNLOCK();
    pCVar3 = source;
    if (!bVar5) {
      pCVar3 = pCVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppCVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pCVar3 != source;
    source = pCVar3;
  } while (bVar5);
  return;
}


/* Void set_DurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_set_DurationInSeconds
               (ColorTransition *this,float value,MethodInfo *method)

{
  if (value <= 0.0) {
    value = 0.0;
  }
  (this->fields)._durationInSeconds = value;
  return;
}

