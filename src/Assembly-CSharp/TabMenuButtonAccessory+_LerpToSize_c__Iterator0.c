
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>c__Iterator0::
     TabMenuButtonAccessory_LerpToSize_c_Iterator0_MoveNext
               (TabMenuButtonAccessory_LerpToSize_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pTVar2 = (this->fields)._this;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pTVar2 == (TabMenuButtonAccessory *)0x0) goto code_?;
    (pTVar2->fields).startTime = fVar3;
    pTVar2 = (this->fields)._this;
    if ((pTVar2 == (TabMenuButtonAccessory *)0x0) ||
       (pLVar4 = (pTVar2->fields).layoutElement, pLVar4 == (LayoutElement *)0x0))
    goto code_?;
    fVar5 = (float10)(*(code *)(pLVar4->klass->vtable).get_minHeight_1.method)
                               (pLVar4,(pLVar4->klass->vtable).set_minHeight.methodPtr);
    (this->fields)._height___0 = (float)fVar5;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields)._this;
  if (pTVar2 != (TabMenuButtonAccessory *)0x0) {
    if ((pTVar2->fields).lerpTime < fVar3 - (pTVar2->fields).startTime) {
      if (pTVar2 != (TabMenuButtonAccessory *)0x0) {
        pLVar4 = (pTVar2->fields).layoutElement;
        fVar3 = (this->fields)._height___0;
        fStack_6 = (this->fields).size;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (fVar3,fStack_6,1.0,(MethodInfo *)0x0);
        if (pLVar4 != (LayoutElement *)0x0) {
          (*(code *)(pLVar4->klass->vtable).set_minHeight.method)
                    (pLVar4,fVar3,(pLVar4->klass->vtable).get_preferredWidth_1.methodPtr);
          (this->fields)._PC = -1;
          return 0;
        }
      }
    }
    else if (pTVar2 != (TabMenuButtonAccessory *)0x0) {
      fStack_7 = (this->fields)._height___0;
      pLVar4 = (pTVar2->fields).layoutElement;
      fStack_8 = (this->fields).size;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pTVar2 = (this->fields)._this;
      if (pTVar2 != (TabMenuButtonAccessory *)0x0) {
        fStack_9 = (pTVar2->fields).startTime;
        fStack_10 = (pTVar2->fields).lerpTime;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (fStack_7,fStack_8,(fVar3 - fStack_9) / fStack_10,(MethodInfo *)0x0);
        if (pLVar4 != (LayoutElement *)0x0) {
          func_?(0x22,pLVar4,fVar3);
          fStack_6 = 0.0;
          pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&fStack_6);
          (this->fields)._current = pOVar11;
          if ((this->fields)._disposing == 0) {
            (this->fields)._PC = 1;
          }
          return 1;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void Reset() */

void Assembly-CSharp.dll::TabMenuButtonAccessory+<LerpToSize>c__Iterator0::
     TabMenuButtonAccessory_LerpToSize_c_Iterator0_Reset
               (TabMenuButtonAccessory_LerpToSize_c_Iterator0 *this,MethodInfo *method)

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

