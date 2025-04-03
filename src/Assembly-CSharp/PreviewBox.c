
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
  ppMVar1 = &(this->fields).meshRenderer;
  pMVar2 = *ppMVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pMVar2 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar4,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                       );
    *ppMVar1 = pMVar2;
    func_?(ppMVar1);
  }
  if (*ppMVar1 != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)*ppMVar1,material,(MethodInfo *)0x0);
    pMVar5 = (this->fields).meshFilter;
    ppMVar6 = &(this->fields).meshFilter;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      pMVar5 = (MeshFilter *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar4,
                          UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                         );
      *ppMVar6 = pMVar5;
      func_?();
    }
    if (*ppMVar1 != (MeshRenderer *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)*ppMVar1,(MethodInfo *)0x0);
      if (this_00 != (Material *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)this_00,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        if (*ppMVar6 != (MeshFilter *)0x0) {
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                             (*ppMVar6,(MethodInfo *)0x0);
          if (pMVar7 != (Mesh *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar7,(MethodInfo *)0x0);
            if (*ppMVar6 != (MeshFilter *)0x0) {
              pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                 (*ppMVar6,(MethodInfo *)0x0);
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                        (pMVar7,(Vector3__Array *)&UNK_?,0.2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

