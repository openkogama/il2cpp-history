
/* Void Awake() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Awake(GUICellCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral__Color);
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                                 ((Vector4 *)&stack0xffffffdc,this_01,StringLiteral__Color,
                                  (MethodInfo *)0x0);
              fVar3 = pVVar2->w;
              (this->fields).baseAlpha = fVar3;
              (this->fields).currentAlpha = fVar3;
              if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                 ((MethodInfo *)0x0);
              if (pVVar4 != (Vector3__Array *)0x0) {
                pVVar4 = (Vector3__Array *)func_?();
                uVar5 = 0;
                iVar6 = 0;
                while( true ) {
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  if ((int)pVVar7->max_length <= (int)uVar5) {
                    if ((this->fields).lineMesh != 0) {
                      pMVar8 = (this->fields).meshFilter;
                      if (pMVar8 == (MeshFilter *)0x0) goto code_?;
                      pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                               MeshFilter_get_mesh(pMVar8,(MethodInfo *)0x0);
                      fVar3 = (this->fields).lineWidth;
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeMeshCubeLines
                                (pMVar9,pVVar4,fVar3,(MethodInfo *)0x0);
                    }
                    if ((this->fields).cubeMesh != 0) {
                      pMVar8 = (this->fields).meshFilter;
                      if (pMVar8 == (MeshFilter *)0x0) goto code_?;
                      pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                               MeshFilter_get_mesh(pMVar8,(MethodInfo *)0x0);
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                                (pMVar9,pVVar4,0,(MethodInfo *)0x0);
                    }
                    if ((this->fields).invertedCubeMesh != 0) {
                      pMVar8 = (this->fields).meshFilter;
                      if (pMVar8 == (MeshFilter *)0x0) goto code_?;
                      pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                               MeshFilter_get_mesh(pMVar8,(MethodInfo *)0x0);
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      SharedCubeFunctions::SharedCubeFunctions_AddCubeMesh
                                (pMVar9,pVVar4,1,(MethodInfo *)0x0);
                    }
                    return;
                  }
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                           CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
                  if (pVVar7->max_length <= uVar5) break;
                  fVar3 = (this->fields).scale;
                  uVar10 = *(undefined8 *)((int)&pVVar7->vector[0].x + iVar6);
                  fVar11 = *(float *)((int)&pVVar7->vector[0].z + iVar6);
                  if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
                  if (pVVar4->max_length <= uVar5) break;
                  uVar5 = uVar5 + 1;
                  *(ulonglong *)((int)&pVVar4->vector[0].x + iVar6) =
                       CONCAT44((float)((ulonglong)uVar10 >> 0x20) * fVar3,(float)uVar10 * fVar3);
                  *(float *)((int)&pVVar4->vector[0].z + iVar6) = fVar11 * fVar3;
                  iVar6 = iVar6 + 0xc;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Destroy
               (GUICellCursor *this,MethodInfo *method)

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


/* Void SetCursorCube(IntVector, GameObject) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_SetCursorCube
               (GUICellCursor *this,IntVector position,GameObject *cubeGameObject,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  (this->fields).pos.x = position.x;
  (this->fields).pos.y = position.y;
  (this->fields).pos.z = position.z;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).prevCursorSetTime = fVar1;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar2,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      position.z = (int16_t)pTVar4;
      in_stack_5 = (undefined2)((uint)pTVar4 >> 0x10);
      iVector = (this->fields).pos;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar6 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         ((Vector3 *)&stack0xffffffe8,cubeGameObject,iVector,(MethodInfo *)0x0);
      pTVar4 = (Transform *)CONCAT22(in_stack_5,position.z);
      uVar7 = pVVar6->x;
      uVar8 = pVVar6->y;
      uVar9 = (undefined2)uVar7;
      uStack_10 = (undefined2)((uint)uVar7 >> 0x10);
      if (pTVar4 != (Transform *)0x0) {
        in_stack_5 = 0;
        puVar11 = &UNK_?;
        value.z = pVVar6->z;
        value.x = (float)uVar7;
        value.y = (float)uVar8;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar4,value,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          value_00.x._2_2_ = uStack_10;
          value_00.x._0_2_ = uVar9;
          in_stack_5 = 0x1034;
          value_00.y = (float)puVar11;
          value_00.z = (float)uVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar3,value_00,(MethodInfo *)0x0);
          pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if (pGVar2 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar2,(MethodInfo *)0x0);
            if (cubeGameObject != (GameObject *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (cubeGameObject,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale
                                   ((Vector3 *)&stack0xffffffe8,pTVar4,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar3,*pVVar6,(MethodInfo *)0x0);
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  if (pGVar2 != (GameObject *)0x0) {
                    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(cubeGameObject,(MethodInfo *)0x0);
                    if (pTVar4 != (Transform *)0x0) {
                      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_rotation
                                         ((Quaternion *)&puStack_13,pTVar4,(MethodInfo *)0x0);
                      if (pTVar3 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (pTVar3,*pQVar12,(MethodInfo *)0x0);
                        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetMaterialOpacity(Single) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_SetMaterialOpacity
               (GUICellCursor *this,float alphaValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__Color);
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
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                           ((Vector4 *)&stack0xffffffd8,this_01,StringLiteral__Color,
                            (MethodInfo *)0x0);
        uVar5 = pVVar4->x;
        uVar6 = pVVar4->y;
        uVar7 = pVVar4->z;
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
      func_?();
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_Update
               (GUICellCursor *this,MethodInfo *method)

{
  pGVar1 = (this->fields).fader;
  ppGVar2 = &(this->fields).fader;
  if (pGVar1 != (GUICellCursor_Fader *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    alphaValue = (pGVar1->fields).endValue;
    if (fVar3 < (pGVar1->fields).end) {
      fVar4 = (pGVar1->fields).startValue;
      fVar3 = (pGVar1->fields).durationInv * fVar3 - (pGVar1->fields).startMulDurationInv;
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      else if (_UNK_? < fVar3) {
        fVar3 = _UNK_?;
      }
      alphaValue = (alphaValue - fVar4) * fVar3 + fVar4;
    }
    else {
      *ppGVar2 = (GUICellCursor_Fader *)0x0;
      func_?(ppGVar2,0);
    }
    GUICellCursor_SetMaterialOpacity(this,alphaValue,(MethodInfo *)0x0);
  }
  return;
}


/* GUICellCursor() */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor__ctor(GUICellCursor *this,MethodInfo *method)

{
  (this->fields).fadeInTime = 0.5;
  (this->fields).fadeOutTime = 0.5;
  (this->fields).scale = 1.0;
  (this->fields).lineWidth = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  this->klass = (GUICellCursor__Class *)method->klass;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method->return_type;
  return IVar1;
}


/* Void set_FadeOverride(FadeOverride) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_set_FadeOverride
               (GUICellCursor *this,FadeOverride__Enum value,MethodInfo *method)

{
  if (value == FadeOverride__Enum_FadeAllOut) {
    ppGVar1 = &(this->fields).fader;
    *ppGVar1 = (GUICellCursor_Fader *)0x0;
    func_?(ppGVar1,0);
    GUICellCursor_SetMaterialOpacity(this,0.0,(MethodInfo *)0x0);
    (this->fields).fadeState = 0;
    return;
  }
  if (value == FadeOverride__Enum_FadeAllIn) {
    ppGVar1 = &(this->fields).fader;
    *ppGVar1 = (GUICellCursor_Fader *)0x0;
    func_?(ppGVar1,0);
    GUICellCursor_SetMaterialOpacity(this,(this->fields).baseAlpha,(MethodInfo *)0x0);
    (this->fields).fadeState = 0;
    return;
  }
  (this->fields).fadeState = 0;
  return;
}


/* Void set_FadeState(FadeState) */

void Assembly-CSharp.dll::GUICellCursor::GUICellCursor_set_FadeState
               (GUICellCursor *this,FadeState__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GUICellCursor__Fader);
    cRam_? = '\x01';
  }
  if ((this->fields).fadeState != value) {
    if (value == FadeState__Enum_Done) {
      ppGVar1 = &(this->fields).fader;
      *ppGVar1 = (GUICellCursor_Fader *)0x0;
      func_?(ppGVar1,0);
    }
    else {
      if (value == FadeState__Enum_FadeIn) {
        fVar2 = (this->fields).fadeInTime;
        fVar3 = (this->fields).baseAlpha;
        fVar4 = (this->fields).currentAlpha;
        pGVar5 = TypeInfo__GUICellCursor__Fader;
        pGVar6 = (GUICellCursor_Fader *)func_?();
        fVar2 = ((fVar3 - fVar4) / fVar3) * fVar2;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pGVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar5);
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        ppGVar1 = &(this->fields).fader;
        (pGVar6->fields).start = fVar7;
        (pGVar6->fields).end = fVar7 + fVar2;
        fVar8 = _UNK_? / fVar2;
        (pGVar6->fields).startMulDurationInv = fVar7 / fVar2;
        (pGVar6->fields).durationInv = fVar8;
        (pGVar6->fields).startValue = fVar4;
        (pGVar6->fields).endValue = fVar3;
        *ppGVar1 = pGVar6;
        func_?(ppGVar1,pGVar6);
        (this->fields).fadeState = 1;
        return;
      }
      if (value == FadeState__Enum_FadeOut) {
        fVar2 = (this->fields).fadeOutTime;
        fVar3 = (this->fields).currentAlpha;
        fVar4 = (this->fields).baseAlpha;
        pGVar5 = TypeInfo__GUICellCursor__Fader;
        pGVar6 = (GUICellCursor_Fader *)func_?();
        fVar2 = (fVar3 / fVar4) * fVar2;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)pGVar6,ExceptionArgument__Enum_obj,(MethodInfo *)pGVar5);
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        ppGVar1 = &(this->fields).fader;
        (pGVar6->fields).start = fVar8;
        (pGVar6->fields).endValue = 0.0;
        (pGVar6->fields).end = fVar8 + fVar2;
        fVar4 = _UNK_? / fVar2;
        (pGVar6->fields).startMulDurationInv = fVar8 / fVar2;
        (pGVar6->fields).durationInv = fVar4;
        (pGVar6->fields).startValue = fVar3;
        *ppGVar1 = pGVar6;
        func_?(ppGVar1,pGVar6);
        (this->fields).fadeState = 2;
        return;
      }
    }
    (this->fields).fadeState = value;
  }
  return;
}

