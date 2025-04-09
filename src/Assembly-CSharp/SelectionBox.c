
/* Void FadeIn(Single, Material, Vector3[]) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeIn
               (SelectionBox *this,float fadeInTime,Material *material,Vector3__Array *corners,
               MethodInfo *method)

{
  this_00 = this;
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
  ppMVar3 = &(this->fields).meshRenderer;
  (this->fields).fadeInBeginTime = fVar1;
  this = (SelectionBox *)0x0;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    this = (SelectionBox *)(this_00->fields).currentAlpha;
  }
  else {
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    pMVar2 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar5,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                       );
    *ppMVar3 = pMVar2;
    func_?();
  }
  if (*ppMVar3 != (MeshRenderer *)0x0) {
    pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)*ppMVar3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pMVar6,(MethodInfo *)0x0);
    if (*ppMVar3 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)*ppMVar3,material,(MethodInfo *)0x0);
      ppMVar7 = &(this_00->fields).meshFilter;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)*ppMVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pGVar5 == (GameObject *)0x0) goto code_?;
        pMVar8 = (MeshFilter *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                           (pGVar5,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                           );
        *ppMVar7 = pMVar8;
        func_?();
      }
      if (*ppMVar3 != (MeshRenderer *)0x0) {
        pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)*ppMVar3,(MethodInfo *)0x0);
        if (pMVar6 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)pMVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          if (*ppMVar3 != (MeshRenderer *)0x0) {
            pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               ((Renderer *)*ppMVar3,(MethodInfo *)0x0);
            if (pMVar6 != (Material *)0x0) {
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                                 ((Vector4 *)&stack0xffffffdc,pMVar6,StringLiteral__Color,
                                  (MethodInfo *)0x0);
              fVar1 = pVVar9->x;
              fVar10 = pVVar9->y;
              corners_00 = (Vector3__Array *)pVVar9->z;
              pMVar2 = *ppMVar3;
              (this_00->fields).baseAlpha = pVVar9->w;
              if (pMVar2 != (MeshRenderer *)0x0) {
                pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                   ((Renderer *)pMVar2,(MethodInfo *)0x0);
                if (pMVar6 != (Material *)0x0) {
                  value.y = fVar10;
                  value.x = fVar1;
                  value.z = (float)corners_00;
                  value.w = (float)this;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                            (pMVar6,StringLiteral__Color,value,(MethodInfo *)0x0);
                  if (*ppMVar7 != (MeshFilter *)0x0) {
                    pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                              MeshFilter_get_mesh(*ppMVar7,(MethodInfo *)0x0);
                    if (pMVar11 != (Mesh *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                (pMVar11,(MethodInfo *)0x0);
                      if (*ppMVar7 != (MeshFilter *)0x0) {
                        pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                  MeshFilter_get_mesh(*ppMVar7,(MethodInfo *)0x0);
                        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                                  (pMVar11,corners_00,0,(MethodInfo *)0x0);
                        if (*ppMVar7 != (MeshFilter *)0x0) {
                          pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                    MeshFilter_get_mesh(*ppMVar7,(MethodInfo *)0x0);
                          SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                                    (pMVar11,corners_00,0.01,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
      ppMVar3 = &(this->fields).meshRenderer;
      *ppMVar3 = pMVar2;
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        pMVar4 = (MeshFilter *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                           );
        (this->fields).meshFilter = pMVar4;
        func_?();
        if (*ppMVar3 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)*ppMVar3,0,(MethodInfo *)0x0);
          if (*ppMVar3 != (MeshRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                      ((Renderer *)*ppMVar3,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).fadeOutTime;
    if (fVar1 < fVar6 - (this->fields).fadeOutBeginTime) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      return;
    }
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar6 = (this->fields).currentAlpha;
    this = (SelectionBox *)
           (((fVar1 - (fVar7 - (this->fields).fadeOutBeginTime)) / (this->fields).fadeOutTime) *
           (this->fields).baseAlpha);
    bVar4 = fVar6 == (float)this;
    bVar5 = fVar6 < (float)this;
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
                       ((Vector4 *)&stack0xffffffd8,pMVar9,StringLiteral__Color,(MethodInfo *)0x0);
    fVar1 = pVVar10->x;
    fVar6 = pVVar10->y;
    (this_00->fields).currentAlpha = (float)this;
    puVar11 = &UNK_?;
    pRVar8 = (Renderer *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                       );
    if ((pRVar8 != (Renderer *)0x0) &&
       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           (pRVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
      fVar12 = fVar6;
      fVar13 = fVar1;
      uVar14 = CONCAT44(fVar12,fVar13);
      fVar15 = (float)puVar11;
      value = (Vector4)CONCAT88(uVar16,uVar14);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (pMVar9,StringLiteral__Color,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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

