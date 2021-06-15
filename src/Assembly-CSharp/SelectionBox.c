
/* Void FadeIn(Single, Material, Vector3[]) */

void Assembly-CSharp.dll::SelectionBox::SelectionBox_FadeIn
               (SelectionBox *this,float fadeInTime,Material *material,Vector3__Array *corners,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isFadingOut = 0;
  (this->fields).isFadingIn = 1;
  (this->fields).fadeInTime = fadeInTime;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pMVar2 = (this->fields).meshRenderer;
  (this->fields).fadeInBeginTime = fVar1;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar4 == (GameObject *)0x0) goto code_?;
    pWVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar4,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshRenderer>__
                       );
    (this->fields).meshRenderer = (MeshRenderer *)pWVar5;
  }
  pMVar2 = (this->fields).meshRenderer;
  if (pMVar2 != (MeshRenderer *)0x0) {
    pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                       ((Renderer *)pMVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pMVar6,(MethodInfo *)0x0);
    pMVar2 = (this->fields).meshRenderer;
    if (pMVar2 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pMVar2,material,(MethodInfo *)0x0);
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)(this->fields).meshFilter,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pWVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                           (pGVar4,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__AddComponent<UnityEngine::MeshFilter>__
                           );
        (this->fields).meshFilter = (MeshFilter *)pWVar5;
      }
      pMVar2 = (this->fields).meshRenderer;
      if ((pMVar2 != (MeshRenderer *)0x0) &&
         (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                             ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar6 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)pMVar6,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        pMVar2 = (this->fields).meshRenderer;
        if ((pMVar2 != (MeshRenderer *)0x0) &&
           (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                               ((Renderer *)pMVar2,(MethodInfo *)0x0), pSVar7 = StringLiteral__Color
           , pMVar6 != (Material *)0x0)) {
          pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             ((Color *)&stack0xffffffdc,pMVar6,StringLiteral__Color,
                              (MethodInfo *)0x0);
          corners_00 = (Vector3__Array *)pCVar8->r;
          fVar1 = pCVar8->g;
          fVar9 = pCVar8->b;
          pMVar2 = (this->fields).meshRenderer;
          (this->fields).baseAlpha = pCVar8->a;
          if ((pMVar2 != (MeshRenderer *)0x0) &&
             (pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 ((Renderer *)pMVar2,(MethodInfo *)0x0), pMVar6 != (Material *)0x0))
          {
            value.y = fVar1;
            value.x = (float)corners_00;
            value.z = fVar9;
            value.w = (float)pSVar7;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                      (pMVar6,StringLiteral__Color,value,(MethodInfo *)0x0);
            pMVar10 = (this->fields).meshFilter;
            if ((pMVar10 != (MeshFilter *)0x0) &&
               (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                    (pMVar10,(MethodInfo *)0x0), pMVar11 != (Mesh *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear(pMVar11,(MethodInfo *)0x0);
              pMVar10 = (this->fields).meshFilter;
              if (pMVar10 != (MeshFilter *)0x0) {
                pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                    (pMVar10,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                  func_?();
                }
                SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                          (pMVar11,corners_00,0,(MethodInfo *)0x0);
                pMVar10 = (this->fields).meshFilter;
                if (pMVar10 != (MeshFilter *)0x0) {
                  pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                      (pMVar10,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRenderer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (pGVar1,value,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         (pGVar1,
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                         );
      (this->fields).meshRenderer = (MeshRenderer *)pUVar2;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           (pGVar1,
                            UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                           );
        (this->fields).meshFilter = (MeshFilter *)pUVar2;
        pMVar3 = (this->fields).meshRenderer;
        if (pMVar3 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                    ((Renderer *)pMVar3,0,(MethodInfo *)0x0);
          pMVar3 = (this->fields).meshRenderer;
          if (pMVar3 != (MeshRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                      ((Renderer *)pMVar3,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
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
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this_00,
                      UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                     );
  if ((pMVar8 != (MVInteractableBase *)0x0) &&
     (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                         ((Renderer *)pMVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
    pCVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                       ((Color *)&stack0xffffffd8,pMVar9,StringLiteral__Color,(MethodInfo *)0x0);
    fVar1 = pCVar10->r;
    fVar6 = pCVar10->g;
    (this_00->fields).currentAlpha = (float)this;
    puVar11 = &UNK_?;
    pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this_00,
                        UnityEngine__Renderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Renderer>__
                       );
    if ((pMVar8 != (MVInteractableBase *)0x0) &&
       (pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                           ((Renderer *)pMVar8,(MethodInfo *)0x0), pMVar9 != (Material *)0x0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

