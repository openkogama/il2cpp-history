
/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostObject::AdvancedGhostObject_Reset
               (AdvancedGhostObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      AdvancedGhostTintObject_MethodInfo__UnityEngine__Component__GetComponent<AdvancedGhostTintObject>__
                     );
  (this->fields).tintObject = (AdvancedGhostTintObject *)pMVar1;
  return;
}

