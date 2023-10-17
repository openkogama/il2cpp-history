
/* Void Reset() */

void Assembly-CSharp.dll::TextButton::TextButton_Reset(TextButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Button>__
                   );
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Text>__
                   );
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pBVar1 = (Button *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                       );
    (this->fields).button = pBVar1;
    func_?(&(this->fields).button,pBVar1);
    pBVar1 = (this->fields).button;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pBVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pBVar1 = (Button *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::
               Component_GetComponentInChildren_1
                         ((Component *)this,
                          UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Button>__
                         );
      (this->fields).button = pBVar1;
      func_?(&(this->fields).button,pBVar1);
    }
  }
  pTVar3 = (this->fields).text;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar3 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this,
                                UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Text>__
                               );
    (this->fields).text = pTVar3;
    func_?();
    pTVar3 = (this->fields).text;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar3 = (Text *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_GetComponentInChildren_1
                                 ((Component *)this,
                                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::UI::Text>__
                                 );
      (this->fields).text = pTVar3;
      func_?();
    }
  }
  return;
}

