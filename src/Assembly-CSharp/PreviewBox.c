
/* Void DestroyBox() */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_DestroyBox(PreviewBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void Show(Material, Vector3[]) */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_Show
               (PreviewBox *this,Material *material,Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pMVar1 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                       );
    (this->fields).meshRenderer = pMVar1;
    func_?();
  }
  pMVar1 = (this->fields).meshRenderer;
  if (pMVar1 != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pMVar1,material,(MethodInfo *)0x0);
    pMVar4 = (this->fields).meshFilter;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      pMVar4 = (MeshFilter *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar3,
                          UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                         );
      (this->fields).meshFilter = pMVar4;
      func_?();
    }
    pMVar1 = (this->fields).meshRenderer;
    if (pMVar1 != (MeshRenderer *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)pMVar1,(MethodInfo *)0x0);
      if (this_00 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)this_00,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        pMVar4 = (this->fields).meshFilter;
        if (pMVar4 != (MeshFilter *)0x0) {
          pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (pMVar4,(MethodInfo *)0x0);
          if (pMVar5 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar5,(MethodInfo *)0x0);
            pMVar4 = (this->fields).meshFilter;
            if (pMVar4 != (MeshFilter *)0x0) {
              pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                 (pMVar4,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                        (pMVar5,(Vector3__Array *)0x0,0.2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PreviewBox::PreviewBox_Start(PreviewBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                   );
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pMVar2 = (MeshRenderer *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar1,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                         );
      (this->fields).meshRenderer = pMVar2;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        pMVar3 = (MeshFilter *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                           );
        (this->fields).meshFilter = pMVar3;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

