
/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostObject::AdvancedGhostObject_Reset
               (AdvancedGhostObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AdvancedGhostTintObject_MethodInfo__UnityEngine__Component__GetComponent<AdvancedGhostTintObject>__
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (AdvancedGhostTintObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      AdvancedGhostTintObject_MethodInfo__UnityEngine__Component__GetComponent<AdvancedGhostTintObject>__
                     );
  (this->fields).tintObject = pAVar1;
  func_?();
  return;
}

