
/* WorldObjectEnableController() */

void Assembly-CSharp.dll::WorldObjectEnableController::WorldObjectEnableController__ctor
               (WorldObjectEnableController *this,MethodInfo *method)

{
  (this->fields).enableState = 2;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_EnableState(EnableState) */

void Assembly-CSharp.dll::WorldObjectEnableController::WorldObjectEnableController_set_EnableState
               (WorldObjectEnableController *this,EnableState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).enableState != value) {
    pGVar1 = (this->fields).greyOutObjectScript;
    (this->fields).enableState = value;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (value == EnableState__Enum_DisableAndHide) {
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          GreyOutObjectScript::GreyOutObjectScript_Hide(pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
      else if (value == EnableState__Enum_DisableAndGreyOut) {
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (value != EnableState__Enum_Enable) {
          return;
        }
        pGVar1 = (this->fields).greyOutObjectScript;
        if (pGVar1 != (GreyOutObjectScript *)0x0) {
          GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar1,(MethodInfo *)0x0);
          return;
        }
      }
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

