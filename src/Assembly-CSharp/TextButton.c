
/* Void Reset() */

void Assembly-CSharp.dll::TextButton::TextButton_Reset(TextButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pBVar1 = (Button *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                       );
    (this->fields).button = pBVar1;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pBVar1 = (Button *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_1_GetComponentInChildren_12
                         ((Component_1 *)this,
                          UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Button>__
                         );
      (this->fields).button = pBVar1;
    }
  }
  pTVar3 = (this->fields).text;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar3 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                               ((Component_1 *)this,
                                UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                               );
    (this->fields).text = pTVar3;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_1_GetComponentInChildren_12
                         ((Component_1 *)this,
                          UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Text>__
                         );
      (this->fields).text = pTVar3;
    }
  }
  return;
}

