
/* Void FadeIn(Single, Material, Vector3[]) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeIn
               (SelectionBox *this,float fadeInTime,Material *material,Vector3__Array *corners,
               MethodInfo *method)

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
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  (this->fields).isFadingOut = 0;
  (this->fields).isFadingIn = 1;
  (this->fields).fadeInTime = fadeInTime;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pMVar2 = (this->fields).meshRenderer;
  (this->fields).fadeInBeginTime = fVar1;
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
    (this->fields).meshRenderer = pMVar2;
    func_?();
  }
  pMVar2 = (this->fields).meshRenderer;
  if (pMVar2 != (MeshRenderer *)0x0) {
    pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)pMVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pMVar5,(MethodInfo *)0x0);
    pMVar2 = (this->fields).meshRenderer;
    if (pMVar2 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pMVar2,material,(MethodInfo *)0x0);
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)(this->fields).meshFilter,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pMVar6 = (MeshFilter *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (pGVar4,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                           );
        (this->fields).meshFilter = pMVar6;
        func_?();
      }
      pMVar2 = (this->fields).meshRenderer;
      if ((pMVar2 != (MeshRenderer *)0x0) &&
         (pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pMVar5,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        pMVar2 = (this->fields).meshRenderer;
        if ((pMVar2 != (MeshRenderer *)0x0) &&
           (pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar5 != (Material *)0x0)) {
          __return_storage_ptr__ = (Vector4 *)&stack0xffffffec;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                             (__return_storage_ptr__,pMVar5,StringLiteral__Color,(MethodInfo *)0x0);
          fVar1 = pVVar7->x;
          fVar8 = pVVar7->y;
          fVar9 = pVVar7->z;
          pMVar2 = (this->fields).meshRenderer;
          (this->fields).baseAlpha = pVVar7->w;
          if ((pMVar2 != (MeshRenderer *)0x0) &&
             (corners_00 = (Vector3__Array *)
                           UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                     ((Renderer *)pMVar2,(MethodInfo *)0x0),
             corners_00 != (Vector3__Array *)0x0)) {
            value.y = fVar8;
            value.x = fVar1;
            value.z = fVar9;
            value.w = (float)__return_storage_ptr__;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      ((Material *)corners_00,StringLiteral__Color,value,(MethodInfo *)0x0);
            pMVar6 = (this->fields).meshFilter;
            if ((pMVar6 != (MeshFilter *)0x0) &&
               (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                   (pMVar6,(MethodInfo *)0x0), pMVar10 != (Mesh *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar10,(MethodInfo *)0x0);
              pMVar6 = (this->fields).meshFilter;
              if (pMVar6 != (MeshFilter *)0x0) {
                pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                   (pMVar6,(MethodInfo *)0x0);
                if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                          (pMVar10,corners_00,0,(MethodInfo *)0x0);
                pMVar6 = (this->fields).meshFilter;
                if (pMVar6 != (MeshFilter *)0x0) {
                  pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                     (pMVar6,(MethodInfo *)0x0);
                  SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                            (pMVar10,corners_00,0.01,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void FadeOutDestroy(Single) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeOutDestroy
               (SelectionBox *this,float fadeOutTime,MethodInfo *method)

{
  (this->fields).fadeOutTime = fadeOutTime;
  (this->fields).isFadingOut = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).fadeOutBeginTime = fVar1;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_OnDestroy
               (SelectionBox *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).meshRenderer;
    if (pMVar1 == (MeshRenderer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                    ((Renderer *)pMVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_Start(SelectionBox *this,MethodInfo *method)

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
        pMVar2 = (this->fields).meshRenderer;
        if (pMVar2 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)pMVar2,0,(MethodInfo *)0x0);
          pMVar2 = (this->fields).meshRenderer;
          if (pMVar2 != (MeshRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                      ((Renderer *)pMVar2,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_Update(SelectionBox *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  if ((this->fields).isFadingOut == 0) {
    if ((this->fields).isFadingIn == 0) {
      return;
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar1 - (this->fields).fadeInBeginTime <= (this->fields).fadeInTime) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pSVar2 = (SelectionBox *)
               (((fVar1 - (this->fields).fadeInBeginTime) / (this->fields).fadeInTime) *
               (this->fields).baseAlpha);
    }
    else {
      pSVar2 = (SelectionBox *)(this->fields).baseAlpha;
      (this->fields).isFadingIn = 0;
    }
    pfVar3 = &(this->fields).currentAlpha;
    bVar4 = (float)pSVar2 == *pfVar3;
    bVar5 = (float)pSVar2 < *pfVar3;
    this = pSVar2;
  }
  else {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = fVar1 - (this->fields).fadeOutBeginTime;
    pfVar3 = &(this->fields).fadeOutTime;
    if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
    fVar1 = (this->fields).fadeOutTime;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar7 = (this->fields).currentAlpha;
    this = (SelectionBox *)
           (((fVar1 - (fVar6 - (this->fields).fadeOutBeginTime)) / (this->fields).fadeOutTime) *
           (this->fields).baseAlpha);
    bVar4 = fVar7 == (float)this;
    bVar5 = fVar7 < (float)this;
  }
  if (bVar5 || bVar4) {
    return;
  }
  pRVar8 = (Renderer *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this_00,
                      UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                     );
  if ((pRVar8 != (Renderer *)0x0) &&
     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         (pRVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                       ((Vector4 *)&stack0xffffffe8,pMVar9,StringLiteral__Color,(MethodInfo *)0x0);
    fVar1 = pVVar10->x;
    fVar7 = pVVar10->y;
    (this_00->fields).currentAlpha = (float)this;
    puVar11 = &UNK_?;
    pRVar8 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                       );
    if ((pRVar8 != (Renderer *)0x0) &&
       (pSStack12 = this_00,
       pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          (pRVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
      value.y = fVar7;
      value.x = fVar1;
      value.z = (float)puVar11;
      value.w = (float)pSStack12;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar9,StringLiteral__Color,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* SelectionBox() */

void Assembly-CSharp.dll::SelectionBox::SelectionBox__ctor(SelectionBox *this,MethodInfo *method)

{
  (this->fields).fadeOutTime = 10.0;
  (this->fields).fadeInTime = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

