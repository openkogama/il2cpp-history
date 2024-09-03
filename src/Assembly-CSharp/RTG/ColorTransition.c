
/* Void BeginFadeIn(Boolean) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_BeginFadeIn
               (ColorTransition *this,bool startFromCurrentColor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (startFromCurrentColor != 0) {
    pCVar2 = (this->fields)._colorRef;
    if (pCVar2 == (ColorRef *)0x0) {
      uVar3 = func_?(&pvStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = (pCVar2->fields)._value.g;
    fVar7 = (pCVar2->fields)._value.b;
    fVar8 = (pCVar2->fields)._value.a;
    (this->fields)._fadeOutColor.r = (pCVar2->fields)._value.r;
    (this->fields)._fadeOutColor.g = fVar6;
    (this->fields)._fadeOutColor.b = fVar7;
    (this->fields)._fadeOutColor.a = fVar8;
  }
  (this->fields)._state = 2;
  (this->fields)._isActive = 1;
  (this->fields)._elapsedTimeInSeconds = 0.0;
  if ((this->fields).TransitionBegin != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
    pCVar9 = (this->fields).TransitionBegin;
    puStack_1 = (pCVar9->fields)._._.method;
    pCStack_10 = this;
    pvStack_4 = (pCVar9->fields)._._.method_code;
    (*(pCVar9->fields)._._.invoke_impl)();
  }
  return;
}


/* Void BeginFadeOut(Boolean) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_BeginFadeOut
               (ColorTransition *this,bool startFromCurrentColor,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (startFromCurrentColor != 0) {
    pCVar2 = (this->fields)._colorRef;
    if (pCVar2 == (ColorRef *)0x0) {
      uVar3 = func_?(&pvStack_4);
      func_?(uVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar6 = (pCVar2->fields)._value.g;
    fVar7 = (pCVar2->fields)._value.b;
    fVar8 = (pCVar2->fields)._value.a;
    (this->fields)._fadeInColor.r = (pCVar2->fields)._value.r;
    (this->fields)._fadeInColor.g = fVar6;
    (this->fields)._fadeInColor.b = fVar7;
    (this->fields)._fadeInColor.a = fVar8;
  }
  (this->fields)._state = 3;
  (this->fields)._isActive = 1;
  (this->fields)._elapsedTimeInSeconds = 0.0;
  if ((this->fields).TransitionBegin != (ColorTransition_ColorTransitionBeginHandler *)0x0) {
    pCVar9 = (this->fields).TransitionBegin;
    puStack_1 = (pCVar9->fields)._._.method;
    pCStack_10 = this;
    pvStack_4 = (pCVar9->fields)._._.method_code;
    (*(pCVar9->fields)._._.invoke_impl)();
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
      (*(pCVar1->fields)._._.invoke_impl)
                ((pCVar1->fields)._._.method_code,this,(pCVar1->fields)._._.method);
    }
  }
  return;
}


/* Void Update(Single) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_Update
               (ColorTransition *this,float elapsedTime,MethodInfo *method)

{
  if ((this->fields)._isActive != 0) {
    fStack_1 = (this->fields)._fadeOutColor.r;
    fStack_2 = (this->fields)._fadeOutColor.g;
    fStack_3 = (this->fields)._fadeOutColor.b;
    fStack_4 = (this->fields)._fadeOutColor.a;
    fVar5 = (this->fields)._fadeInColor.r;
    fVar6 = (this->fields)._fadeInColor.g;
    fVar7 = (this->fields)._fadeInColor.b;
    fVar8 = (this->fields)._fadeInColor.a;
    if ((this->fields)._state == 3) {
      fStack_1 = (this->fields)._fadeInColor.r;
      fStack_2 = (this->fields)._fadeInColor.g;
      fStack_3 = (this->fields)._fadeInColor.b;
      fStack_4 = (this->fields)._fadeInColor.a;
      fVar5 = (this->fields)._fadeOutColor.r;
      fVar6 = (this->fields)._fadeOutColor.g;
      fVar7 = (this->fields)._fadeOutColor.b;
      fVar8 = (this->fields)._fadeOutColor.a;
    }
    fVar9 = elapsedTime + (this->fields)._elapsedTimeInSeconds;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar10 = (this->fields)._durationInSeconds;
      if (fVar10 < fVar9) {
        fVar9 = fVar10;
      }
    }
    (this->fields)._elapsedTimeInSeconds = fVar9;
    fVar9 = fVar9 / (this->fields)._durationInSeconds;
    pCVar11 = (this->fields)._colorRef;
    if ((float)((uint)(fVar9 - _UNK_?) & _UNK_?) < _UNK_?) {
      if (pCVar11 == (ColorRef *)0x0) goto code_?;
      (pCVar11->fields)._value.r = fVar5;
      (pCVar11->fields)._value.g = fVar6;
      (pCVar11->fields)._value.b = fVar7;
      (pCVar11->fields)._value.a = fVar8;
      if ((this->fields)._isActive != 0) {
        (this->fields)._isActive = 0;
        if ((this->fields)._state == 3) {
          (this->fields)._state = 1;
        }
        else if ((this->fields)._state == 2) {
          (this->fields)._state = 0;
        }
        if ((this->fields).TransitionEnd != (ColorTransition_ColorTransitionEndHandler *)0x0) {
          pCVar12 = (this->fields).TransitionEnd;
          (*(pCVar12->fields)._._.invoke_impl)
                    ((pCVar12->fields)._._.method_code,this,(pCVar12->fields)._._.method);
          return;
        }
      }
    }
    else {
      if (fVar9 < 0.0) {
        fVar9 = 0.0;
      }
      else if (_UNK_? < fVar9) {
        fVar9 = _UNK_?;
      }
      if (pCVar11 == (ColorRef *)0x0) {
code_?:
        func_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      (pCVar11->fields)._value.r = (fVar5 - fStack_1) * fVar9 + fStack_1;
      (pCVar11->fields)._value.g = (fVar6 - fStack_2) * fVar9 + fStack_2;
      (pCVar11->fields)._value.b = (fVar7 - fStack_3) * fVar9 + fStack_3;
      (pCVar11->fields)._value.a = (fVar8 - fStack_4) * fVar9 + fStack_4;
    }
  }
  return;
}


/* ColorTransition(ColorRef) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition__ctor
               (ColorTransition *this,ColorRef *colorRef,MethodInfo *method)

{
  (this->fields)._state = 4;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._colorRef = colorRef;
  func_?(&(this->fields)._colorRef,colorRef);
  if (colorRef != (ColorRef *)0x0) {
    fVar1 = (colorRef->fields)._value.g;
    fVar2 = (colorRef->fields)._value.b;
    fVar3 = (colorRef->fields)._value.a;
    (this->fields)._fadeInColor.r = (colorRef->fields)._value.r;
    (this->fields)._fadeInColor.g = fVar1;
    (this->fields)._fadeInColor.b = fVar2;
    (this->fields)._fadeInColor.a = fVar3;
    fVar1 = (colorRef->fields)._value.g;
    fVar2 = (colorRef->fields)._value.b;
    fVar3 = (colorRef->fields)._value.a;
    (this->fields)._fadeOutColor.r = (colorRef->fields)._value.r;
    (this->fields)._fadeOutColor.g = fVar1;
    (this->fields)._fadeOutColor.b = fVar2;
    (this->fields)._fadeOutColor.a = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void add_TransitionBegin(ColorTransition+ColorTransitionBeginHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_add_TransitionBegin
               (ColorTransition *this,ColorTransition_ColorTransitionBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).TransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ColorTransition_ColorTransitionBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (ColorTransition_ColorTransitionBeginHandler *)func_?(&this->fields,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_TransitionEnd(ColorTransition+ColorTransitionEndHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_add_TransitionEnd
               (ColorTransition *this,ColorTransition_ColorTransitionEndHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).TransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ColorTransition_ColorTransitionEndHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (ColorTransition_ColorTransitionEndHandler *)
             func_?(&(this->fields).TransitionEnd,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_TransitionBegin(ColorTransition+ColorTransitionBeginHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_remove_TransitionBegin
               (ColorTransition *this,ColorTransition_ColorTransitionBeginHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).TransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ColorTransition_ColorTransitionBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__ColorTransition__ColorTransitionBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (ColorTransition_ColorTransitionBeginHandler *)
             func_?(&this->fields,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_TransitionEnd(ColorTransition+ColorTransitionEndHandler) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_remove_TransitionEnd
               (ColorTransition *this,ColorTransition_ColorTransitionEndHandler *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).TransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((ColorTransition_ColorTransitionEndHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__ColorTransition__ColorTransitionEndHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (ColorTransition_ColorTransitionEndHandler *)
             func_?(&(this->fields).TransitionEnd,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_DurationInSeconds(Single) */

void Assembly-CSharp.dll::RTG::ColorTransition::ColorTransition_set_DurationInSeconds
               (ColorTransition *this,float value,MethodInfo *method)

{
  if (value <= _UNK_?) {
    value = _UNK_?;
  }
  (this->fields)._durationInSeconds = value;
  return;
}

