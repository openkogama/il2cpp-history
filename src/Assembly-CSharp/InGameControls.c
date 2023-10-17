
/* Void Awake() */

void Assembly-CSharp.dll::InGameControls::InGameControls_Awake
               (InGameControls *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
                   );
    func_?(&
                    TouchButtonsBase_MethodInfo__UnityEngine__Object__Instantiate<TouchButtonsBase>_TouchButtonsBase__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).inGameButtonsPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (TouchButtonsBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pTVar1,pTVar2,0,
                      TouchButtonsBase_MethodInfo__UnityEngine__Object__Instantiate<TouchButtonsBase>_TouchButtonsBase__UnityEngine__Transform__bool_
                     );
  (this->fields).InGameButtons = pTVar1;
  func_?(&(this->fields).InGameButtons,pTVar1);
  original = (this->fields).avatarJoystickPrefab;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
            ((Object *)original,pTVar2,0,
             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform__bool_
            );
  return;
}

