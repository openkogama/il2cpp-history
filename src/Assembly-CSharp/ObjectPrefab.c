
/* Void OnValidate() */

void Assembly-CSharp.dll::ObjectPrefab::ObjectPrefab_OnValidate
               (ObjectPrefab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                     );
  (this->fields).meshRenderers = (Renderer__Array *)pUVar1;
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                     );
  (this->fields).mainCollider = (Collider *)pMVar2;
  return;
}

