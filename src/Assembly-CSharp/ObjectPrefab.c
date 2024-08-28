
/* Void OnValidate() */

void Assembly-CSharp.dll::ObjectPrefab::ObjectPrefab_OnValidate
               (ObjectPrefab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  pRVar1 = (Renderer__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                     ((Component *)this,
                      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
  ppRVar2 = &(this->fields).meshRenderers;
  *ppRVar2 = pRVar1;
  func_?(ppRVar2,&stack0xfffffffc,&UNK_?,ppRVar2,pRVar1);
  return;
}

