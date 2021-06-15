
/* Void Awake() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Awake(GUICellCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_UIItems,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
              (this_00,value,(MethodInfo *)0x0);
    pMVar1 = (this->fields).meshRenderer;
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_shadowCastingMode
                ((Renderer *)pMVar1,ShadowCastingMode__Enum_Off,(MethodInfo *)0x0);
      pMVar1 = (this->fields).meshRenderer;
      if (pMVar1 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_receiveShadows
                  ((Renderer *)pMVar1,0,(MethodInfo *)0x0);
        pMVar1 = (this->fields).meshRenderer;
        if (pMVar1 != (MeshRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                    ((Renderer *)pMVar1,(this->fields).material,(MethodInfo *)0x0);
          pMVar1 = (this->fields).meshRenderer;
          if (pMVar1 != (MeshRenderer *)0x0) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)pMVar1,(MethodInfo *)0x0);
            if (this_01 != (Material *)0x0) {
              pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                 ((Color *)&stack0xffffffdc,this_01,StringLiteral__Color,
                                  (MethodInfo *)0x0);
              fVar3 = pCVar2->a;
              (this->fields).baseAlpha = fVar3;
              (this->fields).currentAlpha = fVar3;
              if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000
                   ) != 0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                 ((MethodInfo *)0x0);
              if (pVVar4 != (Vector3__Array *)0x0) {
                pVVar4 = (Vector3__Array *)func_?();
                iVar5 = 0;
                while( true ) {
                  pVVar6 = pVVar4;
                  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                    func_?();
                  }
                  pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  if ((int)pVVar7->max_length <= iVar5) break;
                  if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                  pVVar4 = pVVar6;
                  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
                    func_?();
                    pVVar4 = pVVar6;
                  }
                  pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if (pVVar6 == (Vector3__Array *)0x0) goto code_?;
                  puVar8 = (undefined8 *)func_?();
                  fVar3 = (this->fields).scale;
                  uVar9 = *puVar8;
                  fVar10 = *(float *)(puVar8 + 1);
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?();
                  }
                  a.z = fVar10;
                  a.x = (float)(int)uVar9;
                  a.y = (float)(int)((ulonglong)uVar9 >> 0x20);
                  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                      ((Vector3 *)&stack0xffffffe0,a,fVar3,(MethodInfo *)0x0);
                  uVar9._0_4_ = pVVar11->x;
                  uVar9._4_4_ = pVVar11->y;
                  fVar3 = pVVar11->z;
                  puVar8 = (undefined8 *)func_?();
                  iVar5 = iVar5 + 1;
                  *puVar8 = uVar9;
                  *(float *)(puVar8 + 1) = fVar3;
                }
                if ((this->fields).lineMesh != 0) {
                  pMVar12 = (this->fields).meshFilter;
                  if (pMVar12 == (MeshFilter *)0x0) goto code_?;
                  pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                      (pMVar12,(MethodInfo *)0x0);
                  fVar3 = (this->fields).lineWidth;
                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                    func_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                            (pMVar13,pVVar4,fVar3,(MethodInfo *)0x0);
                }
                if ((this->fields).cubeMesh != 0) {
                  pMVar12 = (this->fields).meshFilter;
                  if (pMVar12 == (MeshFilter *)0x0) goto code_?;
                  pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                      (pMVar12,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                    func_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                            (pMVar13,pVVar4,0,(MethodInfo *)0x0);
                }
                if ((this->fields).invertedCubeMesh != 0) {
                  pMVar12 = (this->fields).meshFilter;
                  if (pMVar12 == (MeshFilter *)0x0) goto code_?;
                  pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_mesh
                                      (pMVar12,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
                    func_?();
                  }
                  SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                            (pMVar13,pVVar4,1,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Destroy
               (GUICellCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void SetCursorCube(IntVector, GameObject) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_SetCursorCube
               (GUICellCursor *this,IntVector position,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).pos.x = position.x;
  (this->fields).pos.y = position.y;
  (this->fields).pos.z = position.z;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevCursorSetTime = fVar1;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar2,(MethodInfo *)0x0);
    iVector = (this->fields).pos;
    if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                       ((Vector3 *)&stack0xfffffff0,cubeGameObject,iVector,(MethodInfo *)0x0);
    uVar5 = pVVar4->y;
    in_stack_6 = (undefined2)((uint)uVar5 >> 0x10);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      in_stack_6 = 0;
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        value.y._2_2_ = in_stack_6;
        value._0_6_ = CONCAT24(0,pGVar2);
        value.z = (float)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar7,value,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value_00.y = (float)(int)(CONCAT26(in_stack_6,CONCAT24(0,pGVar2)) >> 0x20);
          value_00.x = (float)pGVar2;
          value_00.z = (float)pTVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar3,value_00,(MethodInfo *)0x0);
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            if (cubeGameObject != (GameObject *)0x0) {
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (cubeGameObject,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale
                                   ((Vector3 *)&stack0xfffffff0,pTVar7,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar3,*pVVar4,(MethodInfo *)0x0);
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(cubeGameObject,(MethodInfo *)0x0);
                    if (pTVar7 != (Transform *)0x0) {
                      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation
                                         ((Quaternion *)&stack0xffffffec,pTVar7,(MethodInfo *)0x0);
                      if (pTVar3 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar3,*pQVar8,(MethodInfo *)0x0);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject((Component_1 *)this,(MethodInfo *)0x0);
                        if (pGVar2 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar2,1,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetMaterialOpacity(Single) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_SetMaterialOpacity
               (GUICellCursor *this,float alphaValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshRenderer;
  if (this_00 != (MeshRenderer *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pMVar1 != (Material__Array *)0x0) {
      ppMVar3 = pMVar1->vector;
      while( true ) {
        if ((int)pMVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pMVar1->max_length <= uVar2) break;
        this_01 = *ppMVar3;
        if (this_01 == (Material *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                  ((Object_1 *)this_01,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
        pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                           ((Color *)&stack0xffffffd8,this_01,StringLiteral__Color,(MethodInfo *)0x0
                           );
        uVar5 = pCVar4->r;
        uVar6 = pCVar4->g;
        uVar7 = pCVar4->b;
        value.z = (float)uVar7;
        value.y = (float)uVar6;
        value.x = (float)uVar5;
        (this->fields).currentAlpha = alphaValue;
        value.w = alphaValue;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                  (this_01,StringLiteral__Color,value,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppMVar3 = ppMVar3 + 1;
      }
      uVar8 = func_?(0,0);
      func_?(uVar8);
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Update
               (GUICellCursor *this,MethodInfo *method)

{
  pGVar1 = (this->fields).fader;
  if (pGVar1 != (GUICellCursor_Fader *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fVar2 < (pGVar1->fields).end) {
      a = (pGVar1->fields).startValue;
      fVar3 = (pGVar1->fields).startMulDurationInv;
      b = (pGVar1->fields).endValue;
      fVar4 = (pGVar1->fields).durationInv;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (a,b,fVar4 * fVar2 - fVar3,(MethodInfo *)0x0);
    }
    else {
      fVar2 = (pGVar1->fields).endValue;
      (this->fields).fader = (GUICellCursor_Fader *)0x0;
    }
    GUICellCursor_SetMaterialOpacity(this,fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* GUICellCursor() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor__ctor(GUICellCursor *this,MethodInfo *method)

{
  (this->fields).pos.x = 0;
  (this->fields).pos.y = 0;
  (this->fields).pos.z = 0;
  (this->fields).fadeInTime = 0.5;
  (this->fields).fadeOutTime = 0.5;
  (this->fields).scale = 1.0;
  (this->fields).lineWidth = 1.0;
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


/* IntVector get_LocalPos() */

IntVector Assembly-CSharp.dll::GUICellCursor::GUICellCursor_get_LocalPos
                    (GUICellCursor *this,MethodInfo *method)

{
  IVar1.z = (int16_t)method;
  IVar1._0_4_ = this;
  this->klass = (GUICellCursor__Class *)method->name;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method->klass;
  return IVar1;
}


/* Single get_PrevCursorSetTime() */

float Assembly-CSharp.dll::GUICellCursor::GUICellCursor_get_PrevCursorSetTime
                (GUICellCursor *this,MethodInfo *method)

{
  return (this->fields).prevCursorSetTime;
}


/* Void set_FadeOverride(FadeOverride) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_set_FadeOverride
               (GUICellCursor *this,FadeOverride__Enum value,MethodInfo *method)

{
  if (value == FadeOverride__Enum_FadeAllIn) {
    alphaValue = (this->fields).baseAlpha;
  }
  else {
    if (value != FadeOverride__Enum_FadeAllOut) {
      (this->fields).fadeState = 0;
      return;
    }
    alphaValue = 0.0;
  }
  (this->fields).fader = (GUICellCursor_Fader *)0x0;
  GUICellCursor_SetMaterialOpacity(this,alphaValue,(MethodInfo *)0x0);
  (this->fields).fadeState = 0;
  return;
}


/* Void set_FadeState(FadeState) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_set_FadeState
               (GUICellCursor *this,FadeState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).fadeState != value) {
    if (value == FadeState__Enum_Done) {
      (this->fields).fader = (GUICellCursor_Fader *)0x0;
      (this->fields).fadeState = 0;
      return;
    }
    if (value == FadeState__Enum_FadeIn) {
      fVar1 = (this->fields).fadeInTime;
      pTVar2 = (Transform *)(this->fields).baseAlpha;
      fVar3 = (this->fields).currentAlpha;
      method_00 = TypeInfo__GUICellCursor__Fader;
      this_00 = (ScaleAnimationBase *)func_?();
      fVar1 = (((float)pTVar2 - fVar3) / (float)pTVar2) * fVar1;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
      pvVar4 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                 ((MethodInfo *)0x0);
      (this_00->fields)._._._._.m_CachedPtr = pvVar4;
      (this_00->fields).state = (int32_t)((float)pvVar4 + fVar1);
      fVar5 = _UNK_? / fVar1;
      (this_00->fields).originalScale.y = (float)pvVar4 / fVar1;
      (this_00->fields).originalScale.x = fVar5;
      (this_00->fields).originalScale.z = fVar3;
      (this_00->fields).target = pTVar2;
      (this->fields).fader = (GUICellCursor_Fader *)this_00;
      (this->fields).fadeState = 1;
      return;
    }
    if (value == FadeState__Enum_FadeOut) {
      fVar1 = (this->fields).fadeOutTime;
      fVar3 = (this->fields).currentAlpha;
      fVar5 = (this->fields).baseAlpha;
      this_01 = (GUICellCursor_Fader *)func_?(TypeInfo__GUICellCursor__Fader);
      GUICellCursor+Fader::GUICellCursor_Fader__ctor
                (this_01,(fVar3 / fVar5) * fVar1,fVar3,0.0,(MethodInfo *)0x0);
      (this->fields).fader = this_01;
    }
    (this->fields).fadeState = value;
  }
  return;
}

