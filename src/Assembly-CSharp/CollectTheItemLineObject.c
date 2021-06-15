
/* Void OnValidate() */

void Assembly-CSharp.dll::CollectTheItemLineObject::CollectTheItemLineObject_OnValidate
               (CollectTheItemLineObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponentInChildren_12
                     ((Component_1 *)this,
                      UnityEngine__LineRenderer_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::LineRenderer>__
                     );
  (this->fields).lineRenderer = (LineRenderer *)pTVar1;
  return;
}

