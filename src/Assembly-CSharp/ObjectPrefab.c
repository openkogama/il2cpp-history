
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
  (this->fields).meshRenderers = pRVar1;
  func_?(&(this->fields).meshRenderers,pRVar1);
  pCVar2 = (Collider *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                     );
  (this->fields).mainCollider = pCVar2;
  func_?(&(this->fields).mainCollider,pCVar2);
  return;
}

