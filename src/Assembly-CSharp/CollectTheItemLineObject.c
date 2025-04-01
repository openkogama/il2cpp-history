
/* Void OnValidate() */

void Assembly-CSharp.dll::CollectTheItemLineObject::CollectTheItemLineObject_OnValidate
               (CollectTheItemLineObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__LineRenderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::LineRenderer>__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (LineRenderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                     ((Component *)this,
                      UnityEngine__LineRenderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::LineRenderer>__
                     );
  (this->fields).lineRenderer = pLVar1;
  func_?(&(this->fields).lineRenderer,pLVar1);
  return;
}

