
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>c__Iterator1::
     AccessoryAnimationHandler_StopAnimationNextFrame_c_Iterator1_MoveNext
               (AccessoryAnimationHandler_StopAnimationNextFrame_c_Iterator1 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    (this->fields)._hasFramePassed___0 = 0;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    if ((this->fields)._hasFramePassed___0 != 0) {
      pAVar2 = (this->fields)._this;
      if ((pAVar2 != (AccessoryAnimationHandler *)0x0) &&
         (self = (pAVar2->fields).animations, self != (Animation *)0x0)) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_INTERNAL_CALL_Stop
                  (self,(MethodInfo *)0x0);
        pAVar2 = (this->fields)._this;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        if (pAVar2 != (AccessoryAnimationHandler *)0x0) {
          (pAVar2->fields).currentCrossFadedAnimation =
               TypeInfo__System__String->static_fields->Empty;
          (this->fields)._PC = -1;
          return 0;
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  (this->fields)._hasFramePassed___0 = 1;
  (this->fields)._current = (Object *)0x0;
  if ((this->fields)._disposing == 0) {
    (this->fields)._PC = 1;
  }
  return 1;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryAnimationHandler+<StopAnimationNextFrame>c__Iterator1::
     AccessoryAnimationHandler_StopAnimationNextFrame_c_Iterator1_Reset
               (AccessoryAnimationHandler_StopAnimationNextFrame_c_Iterator1 *this,
               MethodInfo *method)

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

