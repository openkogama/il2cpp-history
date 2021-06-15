
/* Void Dispose() */

void Assembly-CSharp.dll::BundleTab+<LerpToSize>c__Iterator0::
     BundleTab_LerpToSize_c_Iterator0_Dispose
               (BundleTab_LerpToSize_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BundleTab+<LerpToSize>c__Iterator0::
     BundleTab_LerpToSize_c_Iterator0_MoveNext
               (BundleTab_LerpToSize_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pBVar2 = (this->fields)._this;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pBVar2 == (BundleTab *)0x0) goto code_?;
    (pBVar2->fields).startTime = fVar3;
    pBVar2 = (this->fields)._this;
    if ((pBVar2 == (BundleTab *)0x0) ||
       (pRVar4 = (pBVar2->fields).rectTransform, pRVar4 == (RectTransform *)0x0))
    goto code_?;
    VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar4,(MethodInfo *)0x0);
    VStack_6.y = VVar5.y;
    (this->fields)._pos___0.x = VStack_6.x;
    (this->fields)._pos___0.y = VStack_6.y;
    (this->fields)._xPos___0 = VStack_6.x;
    VStack_6 = VVar5;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pBVar2 = (this->fields)._this;
  if (pBVar2 != (BundleTab *)0x0) {
    fStack_8 = (this->fields)._xPos___0;
    fVar3 = (this->fields).size;
    if ((pBVar2->fields).lerpTime <= fStack_7 - (pBVar2->fields).startTime) {
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (fStack_8,fVar3,1.0,(MethodInfo *)0x0);
      (this->fields)._pos___0.x = fVar3;
      pBVar2 = (this->fields)._this;
      if (pBVar2 != (BundleTab *)0x0) {
        pRVar4 = (pBVar2->fields).rectTransform;
        VStack_6 = (this->fields)._pos___0;
        if (pRVar4 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                    (pRVar4,(this->fields)._pos___0,(MethodInfo *)0x0);
          (this->fields)._PC = -1;
          return 0;
        }
      }
    }
    else {
      fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pBVar2 = (this->fields)._this;
      if (pBVar2 != (BundleTab *)0x0) {
        fStack_9 = (pBVar2->fields).startTime;
        fStack_10 = (pBVar2->fields).lerpTime;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (fStack_8,fVar3,(fStack_7 - fStack_9) / fStack_10,(MethodInfo *)0x0);
        (this->fields)._pos___0.x = fVar3;
        pBVar2 = (this->fields)._this;
        if (pBVar2 != (BundleTab *)0x0) {
          fStack_11 = (this->fields)._pos___0.x;
          pRVar4 = (pBVar2->fields).rectTransform;
          fStack_10 = (this->fields)._pos___0.y;
          if (pRVar4 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_set_anchoredPosition(pRVar4,(this->fields)._pos___0,(MethodInfo *)0x0);
            VStack_6 = (Vector2)((ulonglong)VStack_6 & 0xffffffff);
            pOVar12 = (Object *)func_?(TypeInfo__System__Int32,&VStack_6.y);
            (this->fields)._current = pOVar12;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void Reset() */

void Assembly-CSharp.dll::BundleTab+<LerpToSize>c__Iterator0::BundleTab_LerpToSize_c_Iterator0_Reset
               (BundleTab_LerpToSize_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

